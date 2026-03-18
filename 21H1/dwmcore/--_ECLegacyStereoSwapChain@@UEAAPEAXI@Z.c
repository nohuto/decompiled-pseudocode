/*
 * XREFs of ??_ECLegacyStereoSwapChain@@UEAAPEAXI@Z @ 0x18024E6F0
 * Callers:
 *     ??_ECLegacyStereoSwapChain@@WBA@EAAPEAXI@Z @ 0x1800EEEE0 (--_ECLegacyStereoSwapChain@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1800D49FC (--1CLegacySwapChain@@MEAA@XZ.c)
 */

CLegacyStereoSwapChain *__fastcall CLegacyStereoSwapChain::`vector deleting destructor'(
        CLegacyStereoSwapChain *this,
        char a2)
{
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 296);
  CLegacySwapChain::~CLegacySwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
