/*
 * XREFs of ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C2324
 * Callers:
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18003DBF0 (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18007B6A8 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18007CDF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18018740C (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180187C6C (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x180187F50 (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 *     ?EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ @ 0x18018BBAC (-EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ.c)
 *     ?ReleaseSwapChain@CLocalAppRenderTarget@@IEAAXXZ @ 0x18018C01C (-ReleaseSwapChain@CLocalAppRenderTarget@@IEAAXXZ.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018E05C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 *     ?EnsureSwapChain@CDDARenderTarget@@IEAAJXZ @ 0x18019A350 (-EnsureSwapChain@CDDARenderTarget@@IEAAJXZ.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x18019A6E4 (-UpdateTransform@CDDARenderTarget@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    v2 = v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 4LL);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
