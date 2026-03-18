/*
 * XREFs of ??_ECCompSwapChain@@MEAAPEAXI@Z @ 0x18028EA60
 * Callers:
 *     ??_ECCompSwapChain@@OBI@EAAPEAXI@Z @ 0x180109530 (--_ECCompSwapChain@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CCompSwapChain@@MEAA@XZ @ 0x18028E85C (--1CCompSwapChain@@MEAA@XZ.c)
 */

CCompSwapChain *__fastcall CCompSwapChain::`vector deleting destructor'(CCompSwapChain *this, char a2)
{
  CCompSwapChain::~CCompSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
