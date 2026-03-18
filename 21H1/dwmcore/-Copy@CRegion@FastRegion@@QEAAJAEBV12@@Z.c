/*
 * XREFs of ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007802C
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180053160 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180055150 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180076940 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180077A6C (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180077E4C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x180078100 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x1800D02B0 (-GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18017E6C0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x18018852C (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ?GetAndClearDirtyRegion@CComputeScribbleFramebuffer@@QEAAXPEAVCRegion@@@Z @ 0x1801AA2D0 (-GetAndClearDirtyRegion@CComputeScribbleFramebuffer@@QEAAXPEAVCRegion@@@Z.c)
 *     ?HasScribbleStarted@CComputeScribbleFramebuffer@@QEAAXPEA_NPEAVCRegion@@@Z @ 0x1801AA350 (-HasScribbleStarted@CComputeScribbleFramebuffer@@QEAAXPEA_NPEAVCRegion@@@Z.c)
 *     ?CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ @ 0x18023A4A0 (-CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ.c)
 *     ?PostPresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x18023B4EC (-PostPresent@CDDisplaySwapChain@@IEAAJ_N@Z.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18024F3AC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x180251C90 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 *     ?Present@CCompSwapChain@@UEAAJII@Z @ 0x1802524C0 (-Present@CCompSwapChain@@UEAAJII@Z.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802639CC (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x180079394 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::Copy(
        FastRegion::Internal::CRgnData **this,
        FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v3; // rdi
  int v4; // r8d
  int *v5; // r14
  int v6; // eax
  int v7; // esi
  FastRegion::Internal::CRgnData *v8; // rcx
  FastRegion::Internal::CRgnData *v10; // rbp

  if ( this == a2 )
    return 0LL;
  v3 = *a2;
  v4 = *(_DWORD *)*a2;
  if ( !v4 )
  {
    *(_DWORD *)*this = 0;
    return 0LL;
  }
  v5 = (int *)(this + 1);
  v6 = 60;
  v7 = *((_DWORD *)v3 + 2 * v4 + 2) + 8 * v4 - *((_DWORD *)v3 + 4) - 12 + 8 * (v4 - 1) + 24;
  v8 = *this;
  if ( this + 1 != (FastRegion::Internal::CRgnData **)*this )
    v6 = *v5;
  if ( v6 >= v7 )
  {
LABEL_6:
    FastRegion::Internal::CRgnData::Copy(v8, v3);
    return 0LL;
  }
  v10 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v7);
  if ( v10 )
  {
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
    *this = v10;
    *v5 = v7;
    v8 = *this;
    goto LABEL_6;
  }
  return 2147942414LL;
}
