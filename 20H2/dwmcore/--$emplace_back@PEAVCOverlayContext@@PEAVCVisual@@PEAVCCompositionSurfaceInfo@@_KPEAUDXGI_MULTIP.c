/*
 * XREFs of ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N77777$$T@Z @ 0x180179478
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x180179E70 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180173814 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N88888$$T@Z @ 0x1801792E8 (--$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_.c)
 */

void __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool,bool,bool,std::nullptr_t>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  _QWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  std::_Ref_count_base *v16; // rcx
  char v17; // [rsp+50h] [rbp-58h]
  char v18; // [rsp+58h] [rbp-50h]
  char v19; // [rsp+60h] [rbp-48h]
  char v20; // [rsp+68h] [rbp-40h]
  char v21; // [rsp+70h] [rbp-38h]
  char v22; // [rsp+78h] [rbp-30h]
  _QWORD v23[3]; // [rsp+90h] [rbp-18h] BYREF

  v13 = a8;
  v22 = 0;
  v14 = *a8;
  *a8 = 0LL;
  v23[0] = v14;
  v15 = v13[1];
  v13[1] = 0LL;
  v23[1] = v15;
  a8 = (_QWORD *)a1[1];
  v21 = a13;
  v20 = a12;
  v19 = a11;
  v18 = a10;
  v17 = a9;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool,bool,bool,std::nullptr_t>(
    a1,
    &a7,
    &a8,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    v23,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    0LL);
  v16 = (std::_Ref_count_base *)v13[1];
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
}
