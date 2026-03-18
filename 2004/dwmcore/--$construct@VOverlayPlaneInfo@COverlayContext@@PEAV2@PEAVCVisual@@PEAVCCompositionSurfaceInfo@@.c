/*
 * XREFs of ??$construct@VOverlayPlaneInfo@COverlayContext@@PEAV2@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@detail@@YAPEAVOverlayPlaneInfo@COverlayContext@@PEAV12@$$QEAPEAV2@$$QEAPEAVCVisual@@$$QEAPEAVCCompositionSurfaceInfo@@$$QEA_K$$QEAPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@$$QEAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$shared_ptr@VCRegion@@@std@@$$QEA_N88888$$QEA$$T@Z @ 0x18017AE18
 * Callers:
 *     ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N88888$$T@Z @ 0x18017AF38 (--$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::construct<COverlayContext::OverlayPlaneInfo,COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool,bool,bool,std::nullptr_t>(
        int a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 a8,
        char *a9,
        char *a10,
        char *a11,
        char *a12,
        char *a13,
        char *a14,
        __int64 *a15)
{
  return COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
           a1,
           *a2,
           *a3,
           *a4,
           *a5,
           *a6,
           *a7,
           a8,
           *a9,
           *a10,
           *a11,
           *a12,
           *a13,
           *a14,
           *a15);
}
