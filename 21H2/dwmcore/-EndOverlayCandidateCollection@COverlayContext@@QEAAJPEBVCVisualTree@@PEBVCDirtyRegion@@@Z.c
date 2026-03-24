/*
 * XREFs of ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180091230
 * Callers:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180091988 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002FC44 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18006B21C (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800869D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetDirtyRects@COverlayContext@@AEAAXPEBVCDirtyRegion@@@Z @ 0x1800917A0 (-SetDirtyRects@COverlayContext@@AEAAXPEBVCDirtyRegion@@@Z.c)
 *     ?IsCompatibleOutputScaling@COverlayContext@@AEAA_NAEBVCMILMatrix@@@Z @ 0x1800934F4 (-IsCompatibleOutputScaling@COverlayContext@@AEAA_NAEBVCMILMatrix@@@Z.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800B943C (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800C0048 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1800EC0DC (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152A24 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180152CC4 (McTemplateU0xq_EventWriteTransfer.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x1801798D0 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x180179EB0 (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x18017B724 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z @ 0x18017B808 (-CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x18017C1CC (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z.c)
 *     ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017CD98 (-RectContainedInDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?RectIntersectsDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017CDE8 (-RectIntersectsDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x18017D480 (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     McTemplateU0xd_EventWriteTransfer @ 0x18017D698 (McTemplateU0xd_EventWriteTransfer.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x180188DA8 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 */

__int64 __fastcall COverlayContext::EndOverlayCandidateCollection(
        COverlayContext *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  CDirtyRegion *v4; // r13
  __int64 v5; // rcx
  char *v6; // r12
  __int64 v7; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // r8
  unsigned int v11; // r14d
  struct CVisualTree *v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rdx
  CMILMatrix *v15; // rax
  unsigned int v16; // eax
  unsigned __int8 IsOccluded; // al
  __int64 v18; // rdx
  __int64 i; // rax
  __int64 v20; // rbx
  __int64 v21; // r12
  int OverlayCandidateIndex; // eax
  __int64 v23; // r10
  int v24; // r14d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned int v29; // r14d
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // r12
  const struct CMILMatrix *v35; // rax
  __int64 v36; // rcx
  __int64 v38; // [rsp+20h] [rbp-E0h]
  struct CVisualTree *OcclusionInfo; // [rsp+28h] [rbp-D8h] BYREF
  const struct CDirtyRegion *v40; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v41[8]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v42[224]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v43; // [rsp+120h] [rbp+20h] BYREF

  v40 = a3;
  OcclusionInfo = a2;
  v4 = a3;
  v5 = 0LL;
  if ( g_pComposition )
    v5 = *((_QWORD *)g_pComposition + 44);
  v6 = (char *)a3 + 16;
  if ( *((_QWORD *)a3 + 4) != v5 )
    v6 = 0LL;
  COverlayContext::SetDirtyRects(this, a3);
  if ( *((_BYTE *)this + 11422) && v6 )
  {
    if ( *((int *)this + 2806) > 0 )
    {
      v7 = *((_QWORD *)this + 1399);
      if ( v7 ? (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 104LL))(v7) : 0 )
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 12);
    }
    v9 = (_QWORD *)((char *)this + 96);
    v10 = *((_QWORD *)this + 12);
    v11 = 0;
    if ( (unsigned int)((*((_QWORD *)this + 13) - v10) / 224) )
    {
      v12 = OcclusionInfo;
      do
      {
        v13 = 224LL * v11;
        OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(v10 + v13 + 8), v12);
        if ( !OcclusionInfo )
          goto LABEL_19;
        v14 = *(_QWORD *)this;
        v43 = 0LL;
        v15 = (CMILMatrix *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 136LL))(v14);
        CMILMatrix::Transform2DBoundsHelper<0>(v15, v13 + *v9 + 144LL, (float *)&v43);
        v16 = (*(__int64 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
        IsOccluded = COcclusionContext::IsOccluded((__int64)v6, (float *)&v43, 0LL, v16);
        LOBYTE(v38) = IsOccluded;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          McTemplateU0xd_EventWriteTransfer(*v9, v18, *(_QWORD *)(*(_QWORD *)(*v9 + v13 + 16) + 32LL), IsOccluded);
          IsOccluded = v38;
        }
        if ( IsOccluded )
        {
LABEL_24:
          OcclusionInfo = (struct CVisualTree *)(v13 + *v9);
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
            (char *)this + 96,
            v41,
            &OcclusionInfo);
        }
        else
        {
LABEL_19:
          for ( i = *((_QWORD *)this + 914); i != *((_QWORD *)this + 915); i += 224LL )
          {
            if ( *(_QWORD *)(v13 + *v9 + 16) == *(_QWORD *)(i + 16) && *(_QWORD *)(v13 + *v9 + 8) != *(_QWORD *)(i + 8) )
              goto LABEL_24;
          }
          ++v11;
        }
        v10 = *v9;
      }
      while ( v11 < (unsigned int)((*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) / 224LL) );
      v4 = v40;
    }
    v20 = *((_QWORD *)this + 914);
    v21 = *((_QWORD *)this + 915);
    while ( v20 != v21 )
    {
      OverlayCandidateIndex = COverlayContext::FindOverlayCandidateIndex(
                                this,
                                *(const struct CVisual **)(v20 + 8),
                                *(const struct CCompositionSurfaceInfo **)(v20 + 16),
                                *(_QWORD *)(v20 + 24));
      if ( OverlayCandidateIndex == -1 )
      {
        if ( !(unsigned __int8)COverlayContext::RectIntersectsDirty(this, v20 + 144) )
        {
          v24 = (*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) / 224 - 1;
          if ( (*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) / 224 )
          {
            v25 = v24;
            v26 = 224LL * v24 + *v9 + 204LL;
            do
            {
              if ( *(_BYTE *)(v26 + 12) && *(_DWORD *)v26 < *(_DWORD *)(v20 + 204) )
                break;
              --v24;
              --v25;
              v26 -= 224LL;
            }
            while ( v25 != -1 );
          }
          v27 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
                  (COverlayContext::OverlayPlaneInfo *)v42,
                  (const struct COverlayContext::OverlayPlaneInfo *)v20);
          v40 = (const struct CDirtyRegion *)(*v9 + 224 * (v24 + 1LL));
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext::OverlayPlaneInfo>(
            (char *)this + 96,
            v41,
            &v40,
            v27,
            v38);
        }
      }
      else
      {
        COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
          (COverlayContext::OverlayPlaneInfo *)(224LL * OverlayCandidateIndex + *v9),
          (const struct COverlayContext::OverlayPlaneInfo *)v20);
        COverlayContext::ComparePlaneAttributes(
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v23 + *v9 + 32LL),
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v20 + 32),
          (bool *)(v23 + *v9 + 217LL),
          (bool *)(v23 + *v9 + 218LL));
      }
      v20 += 224LL;
    }
    v28 = *v9;
    v29 = 0;
    if ( (unsigned int)((*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) / 224LL) )
    {
      while ( 1 )
      {
        v30 = 224LL * v29;
        if ( COverlayContext::IsRevokable(this, (const struct COverlayContext::OverlayPlaneInfo *)(v28 + v30))
          && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*v9 + v30 + 16) + 152LL))(*(_QWORD *)(*v9 + v30 + 16)) )
        {
          break;
        }
        v34 = *v9;
        if ( *(_BYTE *)(*v9 + v30 + 216)
          || (unsigned __int8)COverlayContext::RectContainedInDirty(this, v30 + v34 + 144) )
        {
          ++v29;
          goto LABEL_54;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v32 = *(_QWORD *)(v34 + v30 + 16);
          v33 = 6LL;
LABEL_51:
          McTemplateU0xq_EventWriteTransfer(
            *(unsigned int *)(v32 + 40),
            &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
            *(unsigned int *)(v32 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v32 + 40)) << 32),
            v33);
        }
LABEL_52:
        v40 = (const struct CDirtyRegion *)(v30 + *v9);
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
          (char *)this + 96,
          v41,
          &v40);
LABEL_54:
        v28 = *v9;
        if ( v29 >= (unsigned int)((*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) / 224LL) )
          goto LABEL_55;
      }
      v31 = *v9;
      if ( *(_BYTE *)(*v9 + v30 + 216) )
      {
        *((_BYTE *)this + 11432) = 1;
        v31 = *((_QWORD *)this + 12);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_52;
      v32 = *(_QWORD *)(v31 + v30 + 16);
      v33 = 5LL;
      goto LABEL_51;
    }
LABEL_55:
    v35 = (const struct CMILMatrix *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    *((_BYTE *)this + 11426) = COverlayContext::IsCompatibleOutputScaling(this, v35);
  }
  else if ( (*((_QWORD *)this + 915) - *((_QWORD *)this + 914)) / 224LL
         || *((_BYTE *)this + 11033)
         || *((_QWORD *)this + 1412) )
  {
    *((_BYTE *)this + 11426) = 0;
    *((_BYTE *)this + 11432) = 1;
  }
  *((_BYTE *)this + 11422) = 0;
  **((_DWORD **)this + 1413) = 0;
  *((_BYTE *)this + 11433) = 0;
  *((_DWORD *)this + 2850) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 11376, 16LL);
  if ( *((_BYTE *)this + 11432) )
  {
    CDirtyRegion::ForceFullDirty(v4);
    COverlayContext::SetDirtyRects(this, v4);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0q_EventWriteTransfer(v36, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Stop, 0LL);
  return 0LL;
}
