/*
 * XREFs of ??_ECConversionSwapChain@@UEAAPEAXI@Z @ 0x180291370
 * Callers:
 *     ??_ECConversionSwapChain@@WBA@EAAPEAXI@Z @ 0x18010A2B0 (--_ECConversionSwapChain@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CConversionSwapChain@@UEAA@XZ @ 0x180291338 (--1CConversionSwapChain@@UEAA@XZ.c)
 */

void **__fastcall CConversionSwapChain::`vector deleting destructor'(void **this, char a2)
{
  CConversionSwapChain::~CConversionSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
