#pragma once

class Product
{
public:
	virtual ~Product() = 0;

protected:
	Product();
};

class ConcreteProduct :public Product
{
public:
	~ConcreteProduct();
	ConcreteProduct();
};