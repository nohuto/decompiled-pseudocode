/*
 * XREFs of ??1CConversionSwapChain@@UEAA@XZ @ 0x180291338
 * Callers:
 *     ??_ECConversionSwapChain@@UEAAPEAXI@Z @ 0x180291370 (--_ECConversionSwapChain@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CConversionSwapChain::~CConversionSwapChain(void **this)
{
  FastRegion::CRegion::FreeMemory(this + 80);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)(this + 43));
  CLegacySwapChain::~CLegacySwapChain((CLegacySwapChain *)this);
}
