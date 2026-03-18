/*
 * XREFs of ?GetCurrentFrameId@@YA_KXZ @ 0x180099EC4
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180009F64 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x180011D4C (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x180012D10 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z @ 0x180020E0C (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z.c)
 *     ?ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z @ 0x180037004 (-ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x18003BA60 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18006AF20 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18006BB94 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ @ 0x180099D20 (-GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ.c)
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NU_LUID@@W4BufferCompositionMode@@@Z @ 0x180099DC0 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NU_LUID@@W4BufferCompositionMode@@@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x18009D05C (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?IsEmpty@CMergedDirtyRect@@UEBA_NXZ @ 0x1800C5C20 (-IsEmpty@CMergedDirtyRect@@UEBA_NXZ.c)
 *     ?CalcOcclusion@CVisualTree@@UEAAJAEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800C98C0 (-CalcOcclusion@CVisualTree@@UEAAJAEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800D2DF8 (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?CalcOcclusion@CCachedVisualImage@@IEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800D2EF4 (-CalcOcclusion@CCachedVisualImage@@IEAAPEAVCOcclusionContext@@AEBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800DB17C (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?SkipUnpin@CD3DDevice@@QEAAXXZ @ 0x1800E7D04 (-SkipUnpin@CD3DDevice@@QEAAXXZ.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E939C (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ??0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x1800EC010 (--0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1800EC1D0 (-CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     ?RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ @ 0x1800EC28C (-RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ.c)
 *     ?GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJPEAIPEAH@Z @ 0x180164128 (-GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJPEAIPEAH@Z.c)
 *     ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x18017B520 (-DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180183B70 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ @ 0x180183E24 (-FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x180184090 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x180186334 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x180188378 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801883EC (-GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV-$DynArray@UMilRectF@@$0A@@@@.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z @ 0x18018A400 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z.c)
 *     ?FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ @ 0x18018BAB4 (-FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018C3DC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 *     ?IsWorldTransformNewForCurrentFrame@CVisual@@QEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1801AD838 (-IsWorldTransformNewForCurrentFrame@CVisual@@QEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801F89D8 (-AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x18023D6B8 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18023D770 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 *     ?UnpinResources@CD3DDevice@@QEAAXV?$span@PEAUIDXGIResource@@$0?0@gsl@@_N@Z @ 0x18023DB68 (-UnpinResources@CD3DDevice@@QEAAXV-$span@PEAUIDXGIResource@@$0-0@gsl@@_N@Z.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802551F4 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     <none>
 */

unsigned __int64 GetCurrentFrameId(void)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( g_pComposition )
    return *((_QWORD *)g_pComposition + 44);
  return result;
}
