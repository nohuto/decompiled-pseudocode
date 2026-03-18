/*
 * XREFs of ??_ECLegacyStereoSwapChain@@UEAAPEAXI@Z @ 0x18024ACD0
 * Callers:
 *     ??_ECLegacyStereoSwapChain@@WBA@EAAPEAXI@Z @ 0x1800F1AC0 (--_ECLegacyStereoSwapChain@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x180031A5C (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
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
