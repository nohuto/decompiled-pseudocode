/*
 * XREFs of ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x1800B93B4
 * Callers:
 *     ?CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x1800B9380 (-CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 *     ?CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x18019FDC0 (-CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x18007A7D0 (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x18008BD78 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x1800B9510 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 *     ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800B99FC (-GetDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?GetInflation@CDirtyRegion@@QEBAMXZ @ 0x1800B9A54 (-GetInflation@CDirtyRegion@@QEBAMXZ.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x1800B9AA0 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 *     ?clear@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800B9C18 (-clear@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CDesktopTree::CalcOcclusionAndCollectOverlayCandidates(CDesktopTree *this)
{
  unsigned int v2; // esi
  struct CComposition *CurrentFrameId; // rax
  __int64 v4; // rcx
  COverlayContext **v5; // rbx
  COverlayContext **v6; // rsi
  gsl::details *v7; // rcx
  __int64 v8; // rax
  float Inflation; // xmm6_4
  __int64 v10; // rcx
  _QWORD *DirtyRects; // rax
  int v12; // eax
  __int64 v13; // rcx
  COverlayContext **v14; // rbx
  COverlayContext **v15; // rbp
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 4816);
  CurrentFrameId = GetCurrentFrameId();
  if ( *((struct CComposition **)this + 14) == CurrentFrameId )
  {
    if ( *((struct CComposition **)this + 592) != CurrentFrameId )
    {
      *((_QWORD *)this + 592) = CurrentFrameId;
      v5 = (COverlayContext **)*((_QWORD *)this + 594);
      v6 = (COverlayContext **)*((_QWORD *)this + 595);
      while ( v5 != v6 )
        COverlayContext::BeginOverlayCandidateCollection(*v5++);
      v7 = (gsl::details *)*((_QWORD *)this + 594);
      v8 = (__int64)(*((_QWORD *)this + 595) - (_QWORD)v7) >> 3;
      *(_QWORD *)&v17 = v8;
      if ( v8 == -1 || (*((_QWORD *)&v17 + 1) = v7) == 0LL && v8 )
      {
        gsl::details::terminate(v7);
        JUMPOUT(0x1800B9507LL);
      }
      Inflation = CDirtyRegion::GetInflation((CDesktopTree *)((char *)this + 104));
      DirtyRects = (_QWORD *)CDirtyRegion::GetDirtyRects(v10, v18);
      v12 = COcclusionContext::Compute((CDesktopTree *)((char *)this + 120), (__int64)this, DirtyRects, Inflation, &v17);
      v2 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xDBu);
      v14 = (COverlayContext **)*((_QWORD *)this + 594);
      v15 = (COverlayContext **)*((_QWORD *)this + 595);
      while ( v14 != v15 )
        COverlayContext::EndOverlayCandidateCollection(*v14++, this, (CDesktopTree *)((char *)this + 104));
    }
    CycleTime = anonymous_namespace_::MeasureCyclesDelta(&CycleTime, qword_1803D31C8);
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, -2003292412, 0xE8u);
  }
  return v2;
}
