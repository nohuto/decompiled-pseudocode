/*
 * XREFs of ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x18009B608
 * Callers:
 *     ?CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x18009B5D0 (-CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 *     ?CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x18016DEE0 (-CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180065090 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800818A4 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18009AEB0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ??9?$basic_iterator@PEAVCOverlayContext@@@detail@@QEBA_NAEBV01@@Z @ 0x18009B98C (--9-$basic_iterator@PEAVCOverlayContext@@@detail@@QEBA_NAEBV01@@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x18009B9A0 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 *     ?clear_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C9948 (-clear_region@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_ex.c)
 *     ?HasRevokablePlanes@COverlayContext@@QEBA_NPEAK@Z @ 0x1800E6858 (-HasRevokablePlanes@COverlayContext@@QEBA_NPEAK@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18016212C (-terminate@details@gsl@@YAXXZ.c)
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x180163648 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 *     ??0narrowing_error@gsl@@QEAA@XZ @ 0x180163660 (--0narrowing_error@gsl@@QEAA@XZ.c)
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
  bool v9; // al
  unsigned int v10; // edx
  int v11; // edx
  __int64 v12; // rax
  COverlayContext **v13; // r8
  COverlayContext **v14; // rbx
  COverlayContext **v15; // rbx
  COverlayContext **v16; // r8
  __int64 v17; // r8
  gsl::details *v18; // rcx
  __int64 v19; // r8
  float v20; // xmm3_4
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  COverlayContext **v24; // rbx
  HANDLE CurrentThread; // rax
  BOOL v26; // eax
  __int64 v28; // [rsp+30h] [rbp-20h] BYREF
  char *v29; // [rsp+38h] [rbp-18h]
  __int128 v30; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 CycleTime; // [rsp+80h] [rbp+30h] BYREF
  COverlayContext **v32; // [rsp+88h] [rbp+38h] BYREF
  __int64 v33; // [rsp+90h] [rbp+40h] BYREF

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
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003292412, 0xF6u, 0LL);
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
    if ( !*((_BYTE *)this + 5720) )
    {
      if ( *((_BYTE *)this + 5722) )
      {
        v9 = *((_DWORD *)this + 1029) == 0;
      }
      else
      {
        v10 = 0;
        while ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)this + 4 * v10 + 716) )
        {
          v10 = v11 + 1;
          if ( v10 >= 8 )
            goto LABEL_20;
        }
        v9 = 0;
      }
      if ( v9 )
      {
LABEL_20:
        v12 = *((_QWORD *)this + 741);
        v32 = (COverlayContext **)*((_QWORD *)this + 740);
        v33 = v12;
        if ( !(unsigned __int8)detail::basic_iterator<COverlayContext *>::operator!=(&v32, &v33) )
        {
LABEL_45:
          CycleTime = 0LL;
          if ( ::CycleTime )
          {
            CurrentThread = GetCurrentThread();
            v26 = QueryThreadCycleTime(CurrentThread, &CycleTime);
            v1 = CycleTime;
            if ( v26 )
              qword_1803442E8 += CycleTime - ::CycleTime;
          }
          ::CycleTime = v1;
          return v4;
        }
        v14 = v13;
        while ( !COverlayContext::HasRevokablePlanes(*v13, (unsigned int *)&CycleTime) )
        {
          v32 = ++v14;
          if ( !(unsigned __int8)detail::basic_iterator<COverlayContext *>::operator!=(&v32, &v33) )
            goto LABEL_45;
        }
      }
    }
    v15 = (COverlayContext **)*((_QWORD *)this + 740);
    v16 = (COverlayContext **)*((_QWORD *)this + 741);
    CycleTime = (unsigned __int64)v15;
    v32 = v16;
    if ( (unsigned __int8)detail::basic_iterator<COverlayContext *>::operator!=(&CycleTime, &v32) )
    {
      do
      {
        COverlayContext::BeginOverlayCandidateCollection(*v15++);
        CycleTime = (unsigned __int64)v15;
      }
      while ( (unsigned __int8)detail::basic_iterator<COverlayContext *>::operator!=(&CycleTime, &v32) );
      v17 = *((_QWORD *)this + 741);
    }
    v18 = (gsl::details *)*((_QWORD *)this + 740);
    v19 = (v17 - (__int64)v18) >> 3;
    if ( v19 < 0 )
    {
      v30 = 0LL;
      gsl::narrowing_error::narrowing_error((gsl::narrowing_error *)&v30);
      gsl::details::throw_exception<gsl::narrowing_error>();
      __debugbreak();
    }
    *(_QWORD *)&v30 = v19;
    *((_QWORD *)&v30 + 1) = v18;
    if ( v18 || !v19 )
    {
      v20 = 0.0;
      if ( *((_BYTE *)this + 5720) )
      {
        v28 = 1LL;
        v29 = (char *)this + 5700;
        if ( this != (CDesktopTree *)-5700LL )
        {
LABEL_40:
          v22 = COcclusionContext::Compute((__int64)this + 1280, (__int64)this, &v28, v20, &v30);
          v4 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xE8u, 0LL);
          v24 = (COverlayContext **)*((_QWORD *)this + 740);
          v32 = (COverlayContext **)*((_QWORD *)this + 741);
          while ( 1 )
          {
            CycleTime = (unsigned __int64)v24;
            if ( !(unsigned __int8)detail::basic_iterator<COverlayContext *>::operator!=(&CycleTime, &v32) )
              break;
            COverlayContext::EndOverlayCandidateCollection(*v24++, this, (CDesktopTree *)((char *)this + 1264));
          }
          goto LABEL_45;
        }
      }
      else
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 1429) - 1.0) & _xmm) >= 0.0000011920929
          || *((_BYTE *)this + 5721) )
        {
          v20 = *((float *)this + 1429);
        }
        v21 = *((unsigned int *)this + 1029);
        v28 = v21;
        v29 = (char *)this + 3956;
        if ( this != (CDesktopTree *)-3956LL || !v21 )
          goto LABEL_40;
      }
    }
    gsl::details::terminate(v18);
    JUMPOUT(0x18009B983LL);
  }
  return v4;
}
