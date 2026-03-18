/*
 * XREFs of ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N88888$$T@Z @ 0x18017AF38
 * Callers:
 *     ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N77777$$T@Z @ 0x18017B0C8 (--$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIP.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180175554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$construct@VOverlayPlaneInfo@COverlayContext@@PEAV2@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@detail@@YAPEAVOverlayPlaneInfo@COverlayContext@@PEAV12@$$QEAPEAV2@$$QEAPEAVCVisual@@$$QEAPEAVCCompositionSurfaceInfo@@$$QEA_K$$QEAPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@$$QEAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$shared_ptr@VCRegion@@@std@@$$QEA_N88888$$QEA$$T@Z @ 0x18017AE18 (--$construct@VOverlayPlaneInfo@COverlayContext@@PEAV2@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x18017EC3C (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 */

_QWORD *detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool,bool,bool,std::nullptr_t>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        ...)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rbx
  std::_Ref_count_base *v8; // rcx
  __int64 v10; // [rsp+B8h] [rbp+38h] BYREF
  va_list va; // [rsp+B8h] [rbp+38h]
  __int64 v12; // [rsp+C0h] [rbp+40h] BYREF
  va_list va1; // [rsp+C0h] [rbp+40h]
  __int64 v14; // [rsp+C8h] [rbp+48h] BYREF
  va_list va2; // [rsp+C8h] [rbp+48h]
  __int64 v16; // [rsp+D0h] [rbp+50h] BYREF
  va_list va3; // [rsp+D0h] [rbp+50h]
  __int64 v18; // [rsp+D8h] [rbp+58h] BYREF
  va_list va4; // [rsp+D8h] [rbp+58h]
  __int64 v20; // [rsp+E0h] [rbp+60h] BYREF
  va_list va5; // [rsp+E0h] [rbp+60h]
  __int64 v22; // [rsp+E8h] [rbp+68h]
  __int64 v23; // [rsp+F0h] [rbp+70h] BYREF
  va_list va6; // [rsp+F0h] [rbp+70h]
  __int64 v25; // [rsp+F8h] [rbp+78h] BYREF
  va_list va7; // [rsp+F8h] [rbp+78h]
  __int64 v27; // [rsp+100h] [rbp+80h] BYREF
  va_list va8; // [rsp+100h] [rbp+80h]
  __int64 v29; // [rsp+108h] [rbp+88h] BYREF
  va_list va9; // [rsp+108h] [rbp+88h]
  __int64 v31; // [rsp+110h] [rbp+90h] BYREF
  va_list va10; // [rsp+110h] [rbp+90h]
  __int64 v33; // [rsp+118h] [rbp+98h] BYREF
  va_list va11; // [rsp+118h] [rbp+98h]
  va_list va12; // [rsp+120h] [rbp+A0h] BYREF

  va_start(va12, a3);
  va_start(va11, a3);
  va_start(va10, a3);
  va_start(va9, a3);
  va_start(va8, a3);
  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v16 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v18 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v20 = va_arg(va6, _QWORD);
  v22 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v23 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v25 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v27 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v29 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v31 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v33 = va_arg(va12, _QWORD);
  v5 = (*a3 - *a1) / 224LL;
  v6 = detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::reserve_region(
         a1,
         v5,
         1LL);
  v7 = v22;
  detail::construct<COverlayContext::OverlayPlaneInfo,COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool,bool,bool,std::nullptr_t>(
    v6,
    (__int64 *)va,
    (__int64 *)va1,
    (__int64 *)va2,
    (__int64 *)va3,
    (__int64 *)va4,
    (__int64 *)va5,
    v22,
    va6,
    va7,
    va8,
    va9,
    va10,
    va11,
    (__int64 *)va12);
  v8 = *(std::_Ref_count_base **)(v7 + 8);
  *a2 = *a1 + 224 * v5;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
