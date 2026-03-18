/*
 * XREFs of ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x1800869C0
 * Callers:
 *     ??$?0V?$vector_facade@UTextureStageInfo@@V?$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@X@?$span@UTextureStageInfo@@$0?0@gsl@@QEAA@AEAV?$vector_facade@UTextureStageInfo@@V?$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18001801C (--$-0V-$vector_facade@UTextureStageInfo@@V-$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expans.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x18005B130 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800807F4 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x1800869E4 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ??$?0V?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@X@?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800D9D04 (--$-0V-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneInfo@.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EC7F0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180176AFC (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018E05C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 *     ??$?0V?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@X@?$span@$$CBUParticleBindingData@@$0?0@gsl@@QEAA@AEBV?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@@Z @ 0x1801DD8C8 (--$-0V-$vector@UParticleBindingData@@V-$allocator@UParticleBindingData@@@std@@@std@@X@-$span@$$C.c)
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801EE718 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 * Callees:
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x180165448 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 */

__int64 __fastcall gsl::narrow<__int64,unsigned __int64>(__int64 a1)
{
  if ( a1 < 0 )
  {
    gsl::details::throw_exception<gsl::narrowing_error>();
    JUMPOUT(0x1800869DDLL);
  }
  return a1;
}
