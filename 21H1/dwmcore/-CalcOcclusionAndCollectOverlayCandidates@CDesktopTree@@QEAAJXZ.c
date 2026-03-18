/*
 * XREFs of ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180069B08
 * Callers:
 *     ?CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x180069AD0 (-CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 *     ?CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x180172850 (-CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x18004FAB0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ??9?$basic_iterator@PEAVCOverlayContext@@@detail@@QEBA_NAEBV01@@Z @ 0x180069E6C (--9-$basic_iterator@PEAVCOverlayContext@@@detail@@QEBA_NAEBV01@@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180069EBC (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18006B030 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x18006B7C4 (-GetOptimizedDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?GetInflation@CDirtyRegion@@QEBAMXZ @ 0x18006B81C (-GetInflation@CDirtyRegion@@QEBAMXZ.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x18006B868 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 *     ?clear_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C3748 (-clear_region@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_ex.c)
 *     ?HasRevokablePlanes@COverlayContext@@QEBA_NPEAK@Z @ 0x1800E4FA0 (-HasRevokablePlanes@COverlayContext@@QEBA_NPEAK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_29643259@@@details@wil@@QEAA_NXZ @ 0x1800E75F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_29643259@@@detail.c)
 *     ??$make_span@V?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@gsl@@YA?AV?$span@PEAVCOverlayContext@@$0?0@0@AEAV?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801B5EA4 (--$make_span@V-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00Vli.c)
 */

__int64 __fastcall CDesktopTree::CalcOcclusionAndCollectOverlayCandidates(CDesktopTree *this)
{
  unsigned __int64 v1; // rdi
  _QWORD *v3; // rcx
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  char IsEnabled; // al
  CDirtyRegion *v10; // rcx
  __int64 v11; // rax
  COverlayContext **v12; // r8
  COverlayContext **v13; // rbx
  COverlayContext **v14; // rbx
  _OWORD *v15; // rbx
  float v16; // xmm0_4
  __int64 v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  COverlayContext **v21; // rbx
  COverlayContext **v22; // rbx
  _OWORD *v23; // rbx
  float Inflation; // xmm0_4
  __int64 v25; // rcx
  _QWORD *OptimizedDirtyRects; // rax
  int v27; // eax
  __int64 v28; // rcx
  COverlayContext **v29; // rbx
  HANDLE CurrentThread; // rax
  BOOL v31; // eax
  _BYTE v33[16]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v34[16]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 CycleTime; // [rsp+A0h] [rbp+40h] BYREF
  COverlayContext **v36; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+50h] BYREF

  v1 = 0LL;
  v3 = (_QWORD *)((char *)this + 5976);
  v4 = 0;
  v5 = (v3[1] - *v3) / 40LL;
  if ( v5 )
    detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear_region(
      v3,
      v5,
      (v3[1] - *v3) / 40LL);
  v6 = 0LL;
  if ( g_pComposition )
    v6 = *((_QWORD *)g_pComposition + 44);
  if ( *((_QWORD *)this + 159) != v6 )
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003292412, 0x10Eu, 0LL);
    return v4;
  }
  v7 = 0LL;
  if ( g_pComposition )
    v7 = *((_QWORD *)g_pComposition + 44);
  if ( *((_QWORD *)this + 738) != v7 )
  {
    v8 = 0LL;
    if ( g_pComposition )
      v8 = *((_QWORD *)g_pComposition + 44);
    *((_QWORD *)this + 738) = v8;
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2103c_29643259>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2103c_29643259>::GetImpl'::`2'::impl);
    v10 = (CDesktopTree *)((char *)this + 1264);
    if ( !IsEnabled )
    {
      if ( !CDirtyRegion::IsEmpty(v10) )
      {
        v22 = (COverlayContext **)*((_QWORD *)this + 740);
        v36 = (COverlayContext **)*((_QWORD *)this + 741);
        while ( 1 )
        {
          CycleTime = (unsigned __int64)v22;
          if ( !(unsigned __int8)detail::basic_iterator<COverlayContext *>::operator!=(&CycleTime, &v36) )
            break;
          COverlayContext::BeginOverlayCandidateCollection(*v22++);
        }
        v23 = (_OWORD *)gsl::make_span<detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>>(
                          v34,
                          (char *)this + 5920);
        Inflation = CDirtyRegion::GetInflation((CDesktopTree *)((char *)this + 1264));
        OptimizedDirtyRects = (_QWORD *)CDirtyRegion::GetOptimizedDirtyRects(v25, v33);
        v27 = COcclusionContext::Compute((__int64)this + 1280, (__int64)this, OptimizedDirtyRects, Inflation, v23);
        v4 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x100u, 0LL);
        v29 = (COverlayContext **)*((_QWORD *)this + 740);
        v36 = (COverlayContext **)*((_QWORD *)this + 741);
        while ( 1 )
        {
          CycleTime = (unsigned __int64)v29;
          if ( !(unsigned __int8)detail::basic_iterator<COverlayContext *>::operator!=(&CycleTime, &v36) )
            break;
          COverlayContext::EndOverlayCandidateCollection(*v29++, this, (CDesktopTree *)((char *)this + 1264));
        }
      }
      goto LABEL_36;
    }
    if ( CDirtyRegion::IsEmpty(v10) )
    {
      v11 = *((_QWORD *)this + 741);
      v36 = (COverlayContext **)*((_QWORD *)this + 740);
      v37 = v11;
      if ( !(unsigned __int8)detail::basic_iterator<COverlayContext *>::operator!=(&v36, &v37) )
      {
LABEL_36:
        CycleTime = 0LL;
        if ( ::CycleTime )
        {
          CurrentThread = GetCurrentThread();
          v31 = QueryThreadCycleTime(CurrentThread, &CycleTime);
          v1 = CycleTime;
          if ( v31 )
            qword_1803492F8 += CycleTime - ::CycleTime;
        }
        ::CycleTime = v1;
        return v4;
      }
      v13 = v12;
      while ( !COverlayContext::HasRevokablePlanes(*v12, (unsigned int *)&CycleTime) )
      {
        v36 = ++v13;
        if ( !(unsigned __int8)detail::basic_iterator<COverlayContext *>::operator!=(&v36, &v37) )
          goto LABEL_36;
      }
    }
    v14 = (COverlayContext **)*((_QWORD *)this + 740);
    v36 = (COverlayContext **)*((_QWORD *)this + 741);
    while ( 1 )
    {
      CycleTime = (unsigned __int64)v14;
      if ( !(unsigned __int8)detail::basic_iterator<COverlayContext *>::operator!=(&CycleTime, &v36) )
        break;
      COverlayContext::BeginOverlayCandidateCollection(*v14++);
    }
    v15 = (_OWORD *)gsl::make_span<detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>>(
                      v33,
                      (char *)this + 5920);
    v16 = CDirtyRegion::GetInflation((CDesktopTree *)((char *)this + 1264));
    v18 = (_QWORD *)CDirtyRegion::GetOptimizedDirtyRects(v17, v34);
    v19 = COcclusionContext::Compute((__int64)this + 1280, (__int64)this, v18, v16, v15);
    v4 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xEBu, 0LL);
    v21 = (COverlayContext **)*((_QWORD *)this + 740);
    v36 = (COverlayContext **)*((_QWORD *)this + 741);
    while ( 1 )
    {
      CycleTime = (unsigned __int64)v21;
      if ( !(unsigned __int8)detail::basic_iterator<COverlayContext *>::operator!=(&CycleTime, &v36) )
        break;
      COverlayContext::EndOverlayCandidateCollection(*v21++, this, (CDesktopTree *)((char *)this + 1264));
    }
    goto LABEL_36;
  }
  return v4;
}
