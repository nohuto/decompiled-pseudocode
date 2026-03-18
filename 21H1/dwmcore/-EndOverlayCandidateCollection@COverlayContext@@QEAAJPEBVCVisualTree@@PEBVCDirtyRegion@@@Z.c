/*
 * XREFs of ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18006B030
 * Callers:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180069B08 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800173C4 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180069EBC (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x180069F1C (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?SetDirtyRects@COverlayContext@@AEAAXPEBVCDirtyRegion@@@Z @ 0x18006B61C (-SetDirtyRects@COverlayContext@@AEAAXPEBVCDirtyRegion@@@Z.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006B98C (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?IsCompatibleOutputScaling@COverlayContext@@AEAA_NAEBVCMILMatrix@@@Z @ 0x18006D18C (-IsCompatibleOutputScaling@COverlayContext@@AEAA_NAEBVCMILMatrix@@@Z.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800A66D8 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B5618 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1800E52E8 (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196@@@details@wil@@QEAA_NXZ @ 0x1800E5E44 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196@@@detail.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_29643259@@@details@wil@@QEAA_NXZ @ 0x1800E75F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_29643259@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180155DC4 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180156064 (McTemplateU0xq_EventWriteTransfer.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x18017DC50 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x18017E230 (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x18017FAA4 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z @ 0x18017FB88 (-CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x18018054C (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z.c)
 *     ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180181118 (-RectContainedInDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?RectIntersectsDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180181168 (-RectIntersectsDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x180181800 (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     McTemplateU0xd_EventWriteTransfer @ 0x180181A18 (McTemplateU0xd_EventWriteTransfer.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x18018CD68 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 */

__int64 __fastcall COverlayContext::EndOverlayCandidateCollection(
        COverlayContext *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  unsigned int v4; // r12d
  __int64 v5; // rbx
  const struct CDirtyRegion *v6; // r15
  bool IsCurrent; // al
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // r8
  struct CVisualTree *v14; // r15
  __int64 v15; // r14
  __int64 v16; // rdx
  CMILMatrix *v17; // rax
  unsigned int v18; // eax
  unsigned __int8 IsOccluded; // al
  __int64 v20; // rdx
  __int64 i; // rax
  __int64 v22; // rbx
  __int64 v23; // r12
  int OverlayCandidateIndex; // eax
  __int64 v25; // r10
  int v26; // r14d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  unsigned int v31; // r14d
  __int64 v32; // rbx
  char IsEnabled; // al
  __int64 v34; // rdx
  char v35; // cl
  __int64 v36; // r9
  __int64 v37; // rcx
  unsigned __int64 v38; // r8
  __int64 v39; // r12
  __int64 v40; // rax
  const struct CMILMatrix *v41; // rax
  __int64 v42; // rcx
  unsigned __int8 v44; // [rsp+20h] [rbp-E0h]
  struct CVisualTree *OcclusionInfo; // [rsp+28h] [rbp-D8h] BYREF
  const struct CDirtyRegion *v46; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v47[8]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v48[224]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v49; // [rsp+120h] [rbp+20h] BYREF

  v46 = a3;
  v4 = 0;
  OcclusionInfo = a2;
  v5 = 0LL;
  v6 = a3;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2103c_29643259>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2103c_29643259>::GetImpl'::`2'::impl) )
  {
    IsCurrent = COcclusionContext::IsCurrent((const struct CDirtyRegion *)((char *)v6 + 16));
    v5 = v8 & -(__int64)IsCurrent;
  }
  else if ( !CDirtyRegion::IsEmpty(v6) && COcclusionContext::IsCurrent((const struct CDirtyRegion *)((char *)v6 + 16)) )
  {
    v5 = v9;
  }
  COverlayContext::SetDirtyRects(this, v6);
  if ( *((_BYTE *)this + 11421) && v5 )
  {
    if ( *((int *)this + 2806) > 0 )
    {
      v10 = *((_QWORD *)this + 1399);
      if ( v10 ? (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 104LL))(v10) : 0 )
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 96);
    }
    v12 = (_QWORD *)((char *)this + 96);
    v13 = *((_QWORD *)this + 12);
    if ( (unsigned int)((*((_QWORD *)this + 13) - v13) / 224) )
    {
      v14 = OcclusionInfo;
      do
      {
        v15 = 224LL * v4;
        OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(v15 + v13 + 8), v14);
        if ( !OcclusionInfo )
          goto LABEL_20;
        v16 = *(_QWORD *)this;
        v49 = 0LL;
        v17 = (CMILMatrix *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 136LL))(v16);
        CMILMatrix::Transform2DBoundsHelper<0>(v17, v15 + *v12 + 144LL, (float *)&v49);
        v18 = (*(__int64 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
        IsOccluded = COcclusionContext::IsOccluded(v5, (__int64)&v49, 0LL, v18);
        v44 = IsOccluded;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          McTemplateU0xd_EventWriteTransfer(*v12, v20, *(_QWORD *)(*(_QWORD *)(*v12 + v15 + 16) + 32LL), IsOccluded);
          IsOccluded = v44;
        }
        if ( IsOccluded )
        {
LABEL_25:
          OcclusionInfo = (struct CVisualTree *)(v15 + *v12);
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
            (char *)this + 96,
            v47,
            &OcclusionInfo);
        }
        else
        {
LABEL_20:
          for ( i = *((_QWORD *)this + 914); i != *((_QWORD *)this + 915); i += 224LL )
          {
            if ( *(_QWORD *)(v15 + *v12 + 16) == *(_QWORD *)(i + 16)
              && *(_QWORD *)(v15 + *v12 + 8) != *(_QWORD *)(i + 8) )
            {
              goto LABEL_25;
            }
          }
          ++v4;
        }
        v13 = *v12;
      }
      while ( v4 < (unsigned int)((*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) / 224LL) );
      v6 = v46;
    }
    v22 = *((_QWORD *)this + 914);
    v23 = *((_QWORD *)this + 915);
    while ( v22 != v23 )
    {
      OverlayCandidateIndex = COverlayContext::FindOverlayCandidateIndex(
                                this,
                                *(const struct CVisual **)(v22 + 8),
                                *(const struct CCompositionSurfaceInfo **)(v22 + 16),
                                *(_QWORD *)(v22 + 24));
      if ( OverlayCandidateIndex == -1 )
      {
        if ( !(unsigned __int8)COverlayContext::RectIntersectsDirty(this, v22 + 144) )
        {
          v26 = (*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) / 224 - 1;
          if ( (*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) / 224 )
          {
            v27 = v26;
            v28 = 224LL * v26 + *v12 + 204LL;
            do
            {
              if ( *(_BYTE *)(v28 + 12) && *(_DWORD *)v28 < *(_DWORD *)(v22 + 204) )
                break;
              --v26;
              --v27;
              v28 -= 224LL;
            }
            while ( v27 != -1 );
          }
          v29 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
                  (COverlayContext::OverlayPlaneInfo *)v48,
                  (const struct COverlayContext::OverlayPlaneInfo *)v22);
          v46 = (const struct CDirtyRegion *)(*v12 + 224 * (v26 + 1LL));
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext::OverlayPlaneInfo>(
            (char *)this + 96,
            v47,
            &v46,
            v29);
        }
      }
      else
      {
        COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
          (COverlayContext::OverlayPlaneInfo *)(224LL * OverlayCandidateIndex + *v12),
          (const struct COverlayContext::OverlayPlaneInfo *)v22);
        COverlayContext::ComparePlaneAttributes(
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v25 + *v12 + 32LL),
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v22 + 32),
          (bool *)(v25 + *v12 + 217LL),
          (bool *)(v25 + *v12 + 218LL));
      }
      v22 += 224LL;
    }
    v30 = *v12;
    v31 = 0;
    if ( (unsigned int)((*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) / 224LL) )
    {
      while ( 1 )
      {
        v32 = 224LL * v31;
        if ( COverlayContext::IsRevokable(this, (const struct COverlayContext::OverlayPlaneInfo *)(v30 + v32))
          && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*v12 + v32 + 16) + 152LL))(*(_QWORD *)(*v12 + v32 + 16)) )
        {
          break;
        }
        v39 = *v12;
        if ( *(_BYTE *)(*v12 + v32 + 216)
          || (unsigned __int8)COverlayContext::RectContainedInDirty(this, v32 + v39 + 144) )
        {
          ++v31;
          goto LABEL_59;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v40 = *(_QWORD *)(v39 + v32 + 16);
          v36 = 6LL;
          v37 = *(unsigned int *)(v40 + 40);
          v38 = v37 | ((__int64)(int)HIDWORD(*(_QWORD *)(v40 + 40)) << 32);
          goto LABEL_56;
        }
LABEL_57:
        v46 = (const struct CDirtyRegion *)(v32 + *v12);
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
          (char *)this + 96,
          v47,
          &v46);
LABEL_59:
        v30 = *v12;
        if ( v31 >= (unsigned int)((*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) / 224LL) )
          goto LABEL_60;
      }
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2103c_31359196>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2103c_31359196>::GetImpl'::`2'::impl);
      v34 = *((_QWORD *)this + 12);
      v35 = *(_BYTE *)(v32 + v34 + 216);
      if ( IsEnabled )
      {
        if ( !v35 )
          goto LABEL_50;
      }
      else if ( !v35 || (unsigned __int8)COverlayContext::RectContainedInDirty(this, v32 + v34 + 144) )
      {
LABEL_50:
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v36 = 5LL;
          v37 = *(_QWORD *)(*v12 + v32 + 16);
          v38 = *(unsigned int *)(v37 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v37 + 40)) << 32);
LABEL_56:
          McTemplateU0xq_EventWriteTransfer(v37, &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE, v38, v36);
          goto LABEL_57;
        }
        goto LABEL_57;
      }
      *((_BYTE *)this + 11431) = 1;
      goto LABEL_50;
    }
LABEL_60:
    v41 = (const struct CMILMatrix *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    *((_BYTE *)this + 11425) = COverlayContext::IsCompatibleOutputScaling(this, v41);
  }
  else if ( (*((_QWORD *)this + 915) - *((_QWORD *)this + 914)) / 224LL
         || *((_BYTE *)this + 11033)
         || *((_QWORD *)this + 1412) )
  {
    *((_BYTE *)this + 11425) = 0;
    *((_BYTE *)this + 11431) = 1;
  }
  *((_BYTE *)this + 11421) = 0;
  **((_DWORD **)this + 1413) = 0;
  *((_BYTE *)this + 11432) = 0;
  *((_DWORD *)this + 2850) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 11376, 16LL);
  if ( *((_BYTE *)this + 11431) )
  {
    CDirtyRegion::ForceFullDirty(v6);
    COverlayContext::SetDirtyRects(this, v6);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0q_EventWriteTransfer(v42, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Stop, 0LL);
  return 0LL;
}
