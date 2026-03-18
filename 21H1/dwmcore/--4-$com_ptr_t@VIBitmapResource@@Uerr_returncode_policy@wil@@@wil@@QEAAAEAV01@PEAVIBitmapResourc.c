/*
 * XREFs of ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x180032574
 * Callers:
 *     ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x180027438 (-ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z @ 0x1800325C8 (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z @ 0x180035800 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18004F430 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x1800717E0 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ?EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVISwapChainRealization@@@Z @ 0x1800772D4 (-EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVISwapChain.c)
 *     ??$?4VCCachedVisualImage@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801F1CD8 (--$-4VCCachedVisualImage@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapResource@@Uerr_retur.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801FD1D8 (-AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z @ 0x180269130 (-Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v6; // rcx

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
  {
    v4 = *(int *)(*(_QWORD *)(a2 + 8) + 4LL) + a2 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  if ( v2 )
  {
    v6 = v2 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a1;
}
