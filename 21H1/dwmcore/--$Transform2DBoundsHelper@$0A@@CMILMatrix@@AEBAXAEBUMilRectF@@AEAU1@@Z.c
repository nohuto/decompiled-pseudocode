/*
 * XREFs of ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0
 * Callers:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x180004CF4 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180004FF0 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x18000783C (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180015D14 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z @ 0x1800160A0 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001617C (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016238 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x18002F62C (-GetDestinationRect@COcclusionContext@@AEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x180033C94 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180035B50 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048958 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180048ABC (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?TurnOffInvalidWarpFastPath@CBrushDrawListGenerator@@AEAAXPEAUGenerateDrawListParameters@1@@Z @ 0x18004C5D8 (-TurnOffInvalidWarpFastPath@CBrushDrawListGenerator@@AEAAXPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18004E030 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18004EAE0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180050610 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180055150 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x1800563F0 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005CE00 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180060B20 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180065300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18006B030 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?SetDirtyRects@COverlayContext@@AEAAXPEBVCDirtyRegion@@@Z @ 0x18006B61C (-SetDirtyRects@COverlayContext@@AEAAXPEBVCDirtyRegion@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18006BCD8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006EEB4 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M@Z @ 0x1800700DC (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800753F8 (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18008B8F4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A8A70 (-DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AB460 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AB890 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?RectangleShapeFullyContains@CCpuClip@@SA_NPEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800B8B94 (-RectangleShapeFullyContains@CCpuClip@@SA_NPEBVCShape@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D3CA8 (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E6584 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800E9624 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVI_ea_1800E9624.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18016645C (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180178FD0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18017970C (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801872B4 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180187B34 (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180187C44 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x1801880B0 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 *     ?DesktopRectToRenderTargetRect@CLegacyRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180188878 (-DesktopRectToRenderTargetRect@CLegacyRenderTarget@@IEAAX_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?RenderTargetRectToDesktopRect@CLegacyRenderTarget@@IEAAX_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801891AC (-RenderTargetRectToDesktopRect@CLegacyRenderTarget@@IEAAX_NAEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ?GetTreeBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18018A3BC (-GetTreeBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018A514 (-NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18018A94C (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DesktopRectToRenderTargetRect@CDDisplayRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180190374 (-DesktopRectToRenderTargetRect@CDDisplayRenderTarget@@IEAAX_NAEBV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?RenderTargetRectToDesktopRect@CDDisplayRenderTarget@@IEAAX_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180191304 (-RenderTargetRectToDesktopRect@CDDisplayRenderTarget@@IEAAX_NAEBV-$TMilRect_@HUtagRECT@@UMilPoin.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180192030 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019D11C (-NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x18019FFB8 (-GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801B1550 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C65E8 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetSwapChainSize@CSurfaceBrush@@AEBAJPEAVISwapChainRealization@@PEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801F21CC (-GetSwapChainSize@CSurfaceBrush@@AEBAJPEAVISwapChainRealization@@PEAUD2D_SIZE_F@@PEAUD2D_RECT_F@.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020DBA0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18023D0C0 (-FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x18023E70C (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ContributeRegionToDirty @ 0x18024A644 (ContributeRegionToDirty.c)
 *     ?GetUnOccludedWorldShape@CRegionShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1802604E0 (-GetUnOccludedWorldShape@CRegionShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x1802623C8 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x1800A63E0 (--$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@R.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800A6474 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

char __fastcall CMILMatrix::Transform2DBoundsHelper<0>(CMILMatrix *this, __int64 a2, float *a3)
{
  char v3; // r10
  char result; // al
  bool v6; // r8
  char v7; // r10
  bool v8; // r8
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  _QWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[32]; // [rsp+30h] [rbp-38h] BYREF

  v3 = *((_BYTE *)this + 64);
  result = (char)(4 * v3) >> 6;
  if ( result )
  {
    v6 = result == 1;
  }
  else
  {
    v6 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)this - 1.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 1) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 3) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 4) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 5) - 1.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 7) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 15) - 1.0) & _xmm) < 0.000081380211;
    result = 32 * v6;
    *((_BYTE *)this + 64) = v3 ^ (v3 ^ (-16 - 32 * v6)) & 0x30;
    if ( !v6 )
      goto LABEL_16;
    *((_BYTE *)this + 65) &= ~2u;
    *((_BYTE *)this + 65) |= 0x3Du;
  }
  if ( v6 )
  {
    *a3 = *((float *)this + 12) + *(float *)a2;
    a3[1] = *(float *)(a2 + 4) + *((float *)this + 13);
    a3[2] = *(float *)(a2 + 8) + *((float *)this + 12);
    a3[3] = *(float *)(a2 + 12) + *((float *)this + 13);
    return result;
  }
LABEL_16:
  v7 = *((_BYTE *)this + 65);
  result = (char)(v7 << 6) >> 6;
  if ( result )
  {
    v8 = result == 1;
  }
  else
  {
    v8 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 1) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 3) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 4) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 7) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 15) - 1.0) & _xmm) < 0.000081380211;
    result = 2 * v8;
    *((_BYTE *)this + 65) = v7 ^ (v7 ^ (-1 - 2 * v8)) & 3;
  }
  if ( v8 )
  {
    v9 = (float)(*(float *)this * *(float *)a2) + *((float *)this + 12);
    *a3 = v9;
    v10 = (float)(*(float *)(a2 + 4) * *((float *)this + 5)) + *((float *)this + 13);
    a3[1] = v10;
    v11 = (float)(*(float *)(a2 + 8) * *(float *)this) + *((float *)this + 12);
    a3[2] = v11;
    v12 = (float)(*(float *)(a2 + 12) * *((float *)this + 5)) + *((float *)this + 13);
    a3[3] = v12;
    if ( *(float *)this <= 0.0 || *((float *)this + 5) <= 0.0 )
    {
      if ( v9 > v11 )
      {
        *a3 = v11;
        a3[2] = v9;
      }
      if ( v10 > v12 )
      {
        a3[1] = v12;
        a3[3] = v10;
      }
    }
  }
  else
  {
    CMILMatrix::Transform2DRectToPerspective(this, (const struct MilRectF *)a2, (struct MilPoint2F *const)v14);
    v13[0] = 4LL;
    v13[1] = v14;
    return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
             a3,
             v13);
  }
  return result;
}
