/*
 * XREFs of ??_ECConversionSwapChain@@UEAAPEAXI@Z @ 0x18024F040
 * Callers:
 *     ??_ECConversionSwapChain@@WBA@EAAPEAXI@Z @ 0x1800EF1B0 (--_ECConversionSwapChain@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1800D49FC (--1CLegacySwapChain@@MEAA@XZ.c)
 */

void **__fastcall CConversionSwapChain::`vector deleting destructor'(void **this, char a2)
{
  FastRegion::CRegion::FreeMemory(this + 74);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)(this + 37));
  CLegacySwapChain::~CLegacySwapChain((CLegacySwapChain *)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
