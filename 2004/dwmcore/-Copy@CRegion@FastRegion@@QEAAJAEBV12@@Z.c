/*
 * XREFs of ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180041C50
 * Callers:
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x18004096C (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180041614 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x180041D40 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004C820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18006C580 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x1800D8480 (-GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18017BAC0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801856AC (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ?GetAndClearDirtyRegion@CComputeScribbleFramebuffer@@QEAAXPEAVCRegion@@@Z @ 0x1801A7870 (-GetAndClearDirtyRegion@CComputeScribbleFramebuffer@@QEAAXPEAVCRegion@@@Z.c)
 *     ?HasScribbleStarted@CComputeScribbleFramebuffer@@QEAAXPEA_NPEAVCRegion@@@Z @ 0x1801A78F0 (-HasScribbleStarted@CComputeScribbleFramebuffer@@QEAAXPEA_NPEAVCRegion@@@Z.c)
 *     ?CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ @ 0x180237A80 (-CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ.c)
 *     ?PostPresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x180238ABC (-PostPresent@CDDisplaySwapChain@@IEAAJ_N@Z.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18024C91C (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x18024F200 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 *     ?Present@CCompSwapChain@@UEAAJII@Z @ 0x18024FA30 (-Present@CCompSwapChain@@UEAAJII@Z.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x180260F5C (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x180041C80 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 */

__int64 __fastcall FastRegion::CRegion::Copy(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // rdx
  __int64 result; // rax

  if ( this != a2 )
  {
    v2 = *a2;
    if ( *(_DWORD *)v2 )
    {
      result = FastRegion::CRegion::CopyData((FastRegion::CRegion *)this, v2);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      *(_DWORD *)*this = 0;
    }
  }
  return 0LL;
}
