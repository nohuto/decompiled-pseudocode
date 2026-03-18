/*
 * XREFs of ??_ECCompSwapChain@@MEAAPEAXI@Z @ 0x180251C50
 * Callers:
 *     ??_ECCompSwapChain@@OBA@EAAPEAXI@Z @ 0x1800EF6A0 (--_ECCompSwapChain@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CCompSwapChain@@MEAA@XZ @ 0x180251AF4 (--1CCompSwapChain@@MEAA@XZ.c)
 */

CCompSwapChain *__fastcall CCompSwapChain::`vector deleting destructor'(CCompSwapChain *this, char a2)
{
  CCompSwapChain::~CCompSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
