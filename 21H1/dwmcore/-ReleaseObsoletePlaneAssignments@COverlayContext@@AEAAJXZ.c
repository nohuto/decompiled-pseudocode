/*
 * XREFs of ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800D22F4
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18003BAB0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196@@@details@wil@@QEAA_NXZ @ 0x1800E5E44 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x180180180 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x18018054C (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z.c)
 *     ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180181118 (-RectContainedInDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 */

__int64 __fastcall COverlayContext::ReleaseObsoletePlaneAssignments(COverlayContext *this)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // rcx

  v1 = *((_QWORD *)this + 914);
  v3 = *((_QWORD *)this + 915);
  v4 = 0;
  while ( v1 != v3 )
  {
    if ( (unsigned int)COverlayContext::FindOverlayCandidateIndex(
                         this,
                         *(const struct CVisual **)(v1 + 8),
                         *(const struct CCompositionSurfaceInfo **)(v1 + 16),
                         *(_QWORD *)(v1 + 24)) == -1 )
    {
      COverlayContext::EnsureIndependentFlipState(this, (struct COverlayContext::OverlayPlaneInfo *)v1, 0);
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 16) + 168LL))(*(_QWORD *)(v1 + 16), 0LL);
      v4 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xD90u, 0LL);
        return v4;
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v1 + 16) + 304LL))(*(_QWORD *)(v1 + 16), 2LL);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2103c_31359196>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2103c_31359196>::GetImpl'::`2'::impl)
        || !(unsigned __int8)COverlayContext::RectContainedInDirty(this, v1 + 144) )
      {
        *((_BYTE *)this + 11431) = 1;
      }
    }
    v1 += 224LL;
  }
  return v4;
}
