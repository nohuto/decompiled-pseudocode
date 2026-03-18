/*
 * XREFs of ??_GCLegacySwapChain@@MEAAPEAXI@Z @ 0x1800D49C0
 * Callers:
 *     ??_ECLegacySwapChain@@OBA@EAAPEAXI@Z @ 0x1800EEA20 (--_ECLegacySwapChain@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1800D49FC (--1CLegacySwapChain@@MEAA@XZ.c)
 */

CLegacySwapChain *__fastcall CLegacySwapChain::`scalar deleting destructor'(CLegacySwapChain *this, char a2)
{
  CLegacySwapChain::~CLegacySwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
