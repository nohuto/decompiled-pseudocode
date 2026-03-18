/*
 * XREFs of ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z @ 0x180005F50 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180006310 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800066A0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006798 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006CA8 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800099AC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x18000A124 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?GetMPORects@CBitmapRealization@@QEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x18000CFD4 (-GetMPORects@CBitmapRealization@@QEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18000E2B8 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x1800156A8 (-GetDestinationRect@COcclusionContext@@AEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E0D4 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18003CA54 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?AddToTightDirtyRegion@@YAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBVCMILMatrix@@PEAVCRegion@@@Z @ 0x18003F9A8 (-AddToTightDirtyRegion@@YAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?RectangleShapeFullyContains@CCpuClip@@SA_NPEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180057234 (-RectangleShapeFullyContains@CCpuClip@@SA_NPEBVCShape@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x180059634 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PE.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18005C920 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x180086108 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180088E30 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18008AB80 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180096A60 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800978F0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180099A20 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18009A590 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18009B130 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18009BC10 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009CC10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009DEF0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetLayoutParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800AA610 (-GetLayoutParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AAEA4 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x1800B788C (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1800B8DF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x1800B9510 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800D10DC (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2240 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800D49D8 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualT.c)
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800D6998 (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D8DC4 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EB360 (-DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PE.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800FEA3C (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?GetUnOccludedWorldShape@CRegionShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180190BF0 (-GetUnOccludedWorldShape@CRegionShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180194320 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x1801A8E30 (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x1801AFA60 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x1801B0228 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801B2258 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801C0460 (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801C0588 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801C091C (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C1768 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?GetRailWindowDeviceBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1801C276C (-GetRailWindowDeviceBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetTreeBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801C27E8 (-GetTreeBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C2994 (-NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801C8868 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801C90AC (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801D6A58 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x1801DF0D8 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 *     ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E11CC (-NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ?CanUseWarpFastPath@CBrushDrawListGenerator@@AEBA_NAEBUGenerateDrawListParameters@1@@Z @ 0x1801E5238 (-CanUseWarpFastPath@CBrushDrawListGenerator@@AEBA_NAEBUGenerateDrawListParameters@1@@Z.c)
 *     ?GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F145C (-GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x18020142C (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802154FC (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x180232ECC (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18025C060 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Transform2DBounds@CMILMatrix@@QEBAXAEBUtagRECT@@AEAU2@@Z @ 0x180260F8C (-Transform2DBounds@CMILMatrix@@QEBAXAEBUtagRECT@@AEAU2@@Z.c)
 *     ?EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x180269A54 (-EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180278740 (-FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x18027CD28 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ContributeRegionToDirty @ 0x18028B094 (ContributeRegionToDirty.c)
 *     ?GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x1802A5A90 (-GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x1802A71B4 (-GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 * Callees:
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AE6D8 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x1800AE7CC (--$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@R.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800AE858 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

char __fastcall CMILMatrix::Transform2DBoundsHelper<0>(__int64 a1, __int64 a2, float *a3, __int64 a4)
{
  __int64 v5; // rbx
  char result; // al
  __int64 v7; // r11
  float *v8; // r11
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  _QWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[32]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a2;
  result = (char)(4 * *(_BYTE *)(a1 + 64)) >> 6;
  v7 = a1;
  if ( result )
  {
    LOBYTE(a2) = result == 1;
  }
  else
  {
    LOBYTE(a2) = (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a1, a2, a3, a4)
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v7 - 1.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v7 + 20) - 1.0) & _xmm) < 0.000081380211;
    *(_BYTE *)(v7 + 64) &= 0xCFu;
    result = 32 * a2;
    *(_BYTE *)(v7 + 64) |= (-16 - 32 * a2) & 0x30;
  }
  if ( (_BYTE)a2 )
  {
    *a3 = *(float *)(v7 + 48) + *(float *)v5;
    a3[1] = *(float *)(v5 + 4) + *(float *)(v7 + 52);
    a3[2] = *(float *)(v5 + 8) + *(float *)(v7 + 48);
    a3[3] = *(float *)(v5 + 12) + *(float *)(v7 + 52);
  }
  else
  {
    result = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v7, a2, a3, a4);
    if ( result )
    {
      v9 = (float)(*v8 * *(float *)v5) + v8[12];
      *a3 = v9;
      v10 = (float)(*(float *)(v5 + 4) * v8[5]) + v8[13];
      a3[1] = v10;
      v11 = (float)(*(float *)(v5 + 8) * *v8) + v8[12];
      a3[2] = v11;
      v12 = (float)(*(float *)(v5 + 12) * v8[5]) + v8[13];
      a3[3] = v12;
      if ( *v8 <= 0.0 || v8[5] <= 0.0 )
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
      CMILMatrix::Transform2DRectToPerspective(
        (CMILMatrix *)v8,
        (const struct MilRectF *)v5,
        (struct MilPoint2F *const)v14);
      v13[0] = 4LL;
      v13[1] = v14;
      return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
               a3,
               v13);
    }
  }
  return result;
}
