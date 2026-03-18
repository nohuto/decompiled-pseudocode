/*
 * XREFs of ??_GCLegacySwapChain@@MEAAPEAXI@Z @ 0x18001BD80
 * Callers:
 *     ??_ECLegacySwapChain@@OBA@EAAPEAXI@Z @ 0x180108C30 (--_ECLegacySwapChain@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x18001C360 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CLegacySwapChain *__fastcall CLegacySwapChain::`scalar deleting destructor'(CLegacySwapChain *this, char a2)
{
  CLegacySwapChain::~CLegacySwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1A0uLL);
  return this;
}
