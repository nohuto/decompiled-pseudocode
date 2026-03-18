/*
 * XREFs of ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80
 * Callers:
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x18000E37C (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000F744 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18001244C (-CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     ??0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x18001259C (--0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x180016094 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180016F54 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x18001C148 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18001C258 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18001DFD8 (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x18003D168 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 *     ?UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18004C348 (-UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x180050318 (-DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x18005D7D0 (-GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualIm.c)
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18007DBDC (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x18007F3E4 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 *     ?DeleteUnusedDevices@CDeviceManager@@AEAAXXZ @ 0x180080D70 (-DeleteUnusedDevices@CDeviceManager@@AEAAXXZ.c)
 *     ?GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJPEAIPEAH@Z @ 0x180081810 (-GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJPEAIPEAH@Z.c)
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z @ 0x18008198C (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z.c)
 *     ?GetRects@CMergedDirtyRect@@UEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180081C70 (-GetRects@CMergedDirtyRect@@UEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?Add@CMergedDirtyRect@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800852E0 (-Add@CMergedDirtyRect@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18008AF48 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18008E708 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F144 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@@Z @ 0x18008FD20 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@@Z.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x1800B93B4 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x1800B9AA0 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800BA4E4 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?GetStats@CLegacyRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1800BBE9C (-GetStats@CLegacyRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STA.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BCFA4 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ??0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z @ 0x1800D4568 (--0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x1800D4F5C (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 *     ?BeginNewStatsInstance@CGlobalCompositionSurfaceInfo@@UEAAXPEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800D6FC0 (-BeginNewStatsInstance@CGlobalCompositionSurfaceInfo@@UEAAXPEBUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ @ 0x1800D8694 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?CalcOcclusion@CVisualTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800DCA60 (-CalcOcclusion@CVisualTree@@UEBAJAEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?IsEmpty@CMergedDirtyRect@@UEBA_NXZ @ 0x1800DD2A0 (-IsEmpty@CMergedDirtyRect@@UEBA_NXZ.c)
 *     ?CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800DD450 (-CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE@@@Z @ 0x1800F581C (-ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLU.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800F7B94 (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800FE59C (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?RecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBA_NXZ @ 0x180104C10 (-RecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBA_NXZ.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180113274 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801B5FF0 (-GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV-$DynArray@UMilRectF@@$0A@@@@.c)
 *     ?GetPresentTime@CTargetStats@@QEBA_KXZ @ 0x1801C07A4 (-GetPresentTime@CTargetStats@@QEBA_KXZ.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801C890C (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1801FAFC8 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x1802020F4 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x18027EDAC (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
 * Callees:
 *     <none>
 */

struct CComposition *GetCurrentFrameId(void)
{
  struct CComposition *result; // rax

  result = g_pComposition;
  if ( g_pComposition )
    return (struct CComposition *)*((_QWORD *)g_pComposition + 62);
  return result;
}
