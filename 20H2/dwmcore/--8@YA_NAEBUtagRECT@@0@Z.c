/*
 * XREFs of ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800CFBE0
 * Callers:
 *     ?IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x1800CFB40 (-IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800E1794 (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x180198A64 (-UpdateTransform@CDDARenderTarget@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRect.c)
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x18024B678 (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 *     ?CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18024B880 (-CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPO.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180263958 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
