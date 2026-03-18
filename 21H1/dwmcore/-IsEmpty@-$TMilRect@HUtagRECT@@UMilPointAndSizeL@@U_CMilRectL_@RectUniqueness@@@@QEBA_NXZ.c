/*
 * XREFs of ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180048A9C
 * Callers:
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18002996C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180029A6C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAE.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x1800303C0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180048A4C (-DoesContain@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180048ABC (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x1800BC600 (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 *     ?OnRectanglesChanged@CRegionGeometry@@QEAAXXZ @ 0x1800C01E8 (-OnRectanglesChanged@CRegionGeometry@@QEAAXXZ.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800E9624 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVI_ea_1800E9624.c)
 *     ?GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV?$vector@PEAVIMonitorTarget@@V?$allocator@PEAVIMonitorTarget@@@std@@@std@@@Z @ 0x1801B62A4 (-GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(_DWORD *a1)
{
  return a1[2] <= *a1 || a1[3] <= a1[1];
}
