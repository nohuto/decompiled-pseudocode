/*
 * XREFs of ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x1800B9510
 * Callers:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x1800B93B4 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x180005BC8 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x180005DD0 (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18000CE28 (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x18000E5C0 (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x180012D0C (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x180013398 (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?DisableHardwareCursor@COverlayContext@@AEAAXXZ @ 0x1800B998C (-DisableHardwareCursor@COverlayContext@@AEAAXXZ.c)
 *     ?GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800B99D0 (-GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800B9BE8 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?IsCompatibleOutputScaling@COverlayContext@@AEAA_NAEBVCMILMatrix@@@Z @ 0x1800B9C44 (-IsCompatibleOutputScaling@COverlayContext@@AEAA_NAEBVCMILMatrix@@@Z.c)
 *     ?DoesIntersect@CDirtyRegion@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BCAD8 (-DoesIntersect@CDirtyRegion@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@@@Z @ 0x1800D935C (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800DF6AC (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@.c)
 *     ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z @ 0x1800ECD78 (-CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180111E98 (McTemplateU0xq_EventWriteTransfer.c)
 *     McTemplateU0d_EventWriteTransfer @ 0x180112C1E (McTemplateU0d_EventWriteTransfer.c)
 *     McTemplateU0xd_EventWriteTransfer @ 0x1801B8A2C (McTemplateU0xd_EventWriteTransfer.c)
 */

__int64 __fastcall COverlayContext::EndOverlayCandidateCollection(
        COverlayContext *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  const struct CVisualTree *v4; // r15
  const struct COcclusionContext *OcclusionContext; // rax
  const struct COcclusionContext *v6; // r12
  unsigned int v7; // r14d
  _QWORD *v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r12
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r9
  struct COcclusionInfo *OcclusionInfo; // r15
  __int64 v22; // rdx
  unsigned int v23; // eax
  unsigned __int8 IsOccluded; // al
  __int64 v25; // rdx
  unsigned __int8 v26; // r15
  __int64 i; // rax
  int OverlayCandidateIndex; // eax
  __int64 v29; // r9
  int v30; // r14d
  COverlayContext::OverlayPlaneInfo *v31; // rax
  __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rdx
  _DWORD *v35; // rcx
  __int64 v36; // r9
  bool v37; // [rsp+20h] [rbp-E0h] BYREF
  bool v38; // [rsp+21h] [rbp-DFh] BYREF
  const struct CVisualTree *v39; // [rsp+28h] [rbp-D8h]
  __int64 v40; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v41[224]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v42; // [rsp+118h] [rbp+18h] BYREF
  __int128 v43; // [rsp+128h] [rbp+28h] BYREF

  *(_QWORD *)&v42 = a3;
  v39 = a2;
  v4 = a2;
  OcclusionContext = CDirtyRegion::GetOcclusionContext(a3);
  v6 = OcclusionContext;
  if ( *((_BYTE *)this + 11302) && OcclusionContext )
  {
    if ( *((int *)this + 2772) > 0 )
    {
      v33 = *((_QWORD *)this + 1382);
      if ( v33 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v33 + 112LL))(v33) )
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 88);
      }
    }
    v7 = 0;
    v8 = (_QWORD *)((char *)this + 88);
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 168LL))(*(_QWORD *)this);
    while ( v7 < -1227133513 * (unsigned int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 5) )
    {
      v19 = 224LL * v7;
      OcclusionInfo = CVisual::GetOcclusionInfo(
                        *(CVisual **)(v19 + *v8 + 8),
                        v4,
                        (const struct CBackdropVisualImageKey *)&CBackdropVisualImageKey::sc_NoBVIKey);
      if ( !OcclusionInfo )
        goto LABEL_24;
      v22 = v19 + *v8 + 144LL;
      v43 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(v9 + 116, v22, (float *)&v43, v20);
      v23 = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 16LL))(OcclusionInfo);
      IsOccluded = COcclusionContext::IsOccluded(v6, &v43, v23, 0LL);
      v26 = IsOccluded;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
        McTemplateU0xd_EventWriteTransfer(*v8, v25, *(_QWORD *)(*(_QWORD *)(*v8 + v19 + 16) + 32LL), IsOccluded);
      if ( v26 )
      {
LABEL_52:
        *(_QWORD *)&v43 = v19 + *v8;
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
          (__int64)this + 88,
          (__int64)&v40,
          (__int64 *)&v43);
      }
      else
      {
LABEL_24:
        for ( i = *((_QWORD *)this + 913); i != *((_QWORD *)this + 914); i += 224LL )
        {
          if ( *(_QWORD *)(*v8 + v19 + 16) == *(_QWORD *)(i + 16) && *(_QWORD *)(*v8 + v19 + 8) != *(_QWORD *)(i + 8) )
            goto LABEL_52;
        }
        ++v7;
      }
      v4 = v39;
    }
    v10 = *((_QWORD *)this + 913);
    v11 = *((_QWORD *)this + 914);
    v12 = v42;
    while ( v10 != v11 )
    {
      OverlayCandidateIndex = COverlayContext::FindOverlayCandidateIndex(
                                this,
                                *(const struct CVisual **)(v10 + 8),
                                *(const struct CCompositionSurfaceInfo **)(v10 + 16),
                                *(_QWORD *)(v10 + 24));
      if ( OverlayCandidateIndex == -1 )
      {
        v42 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>(v9 + 116, v10 + 144, (float *)&v42, v29);
        if ( !(unsigned __int8)CDirtyRegion::DoesIntersect(v12, &v42) )
        {
          v30 = -1227133513 * ((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 5) - 1;
          if ( -1227133513 * (unsigned int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 5) )
          {
            v34 = v30;
            v35 = (_DWORD *)(224LL * v30 + *v8 + 208LL);
            do
            {
              if ( *((_BYTE *)v35 - 28) && *v35 < *(_DWORD *)(v10 + 208) )
                break;
              --v30;
              --v34;
              v35 -= 56;
            }
            while ( v34 != -1 );
          }
          v31 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
                  (COverlayContext::OverlayPlaneInfo *)v41,
                  (const struct COverlayContext::OverlayPlaneInfo *)v10);
          *(_QWORD *)&v42 = *v8 + 224 * (v30 + 1LL);
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext::OverlayPlaneInfo>(
            (_QWORD *)this + 11,
            &v40,
            &v42,
            (__int64)v31);
        }
      }
      else
      {
        v32 = 224LL * OverlayCandidateIndex;
        COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
          (COverlayContext::OverlayPlaneInfo *)(v32 + *v8),
          (const struct COverlayContext::OverlayPlaneInfo *)v10);
        COverlayContext::ComparePlaneAttributes(
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v32 + *v8 + 32LL),
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v10 + 32),
          &v37,
          &v38);
        *(_BYTE *)(v32 + *v8 + 181) |= v37;
        if ( *(_BYTE *)(v32 + *v8 + 182) && !v38 )
          *(_BYTE *)(v32 + *v8 + 182) = 0;
      }
      v10 += 224LL;
    }
    v13 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v13 >= -1227133513 * (unsigned int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 5) )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 168LL))(*(_QWORD *)this);
          *((_BYTE *)this + 11306) = COverlayContext::IsCompatibleOutputScaling(
                                       this,
                                       (const struct CMILMatrix *)(v14 + 48));
          goto LABEL_11;
        }
        v17 = 224LL * v13;
        if ( COverlayContext::IsRevokable(this, (const struct COverlayContext::OverlayPlaneInfo *)(v17 + *v8))
          && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + *v8 + 16) + 168LL))(*(_QWORD *)(v17 + *v8 + 16)) )
        {
          break;
        }
        v18 = *v8;
        if ( !*(_BYTE *)(v17 + *v8 + 180) && !*(_BYTE *)(v17 + v18 + 178) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) == 0 )
            goto LABEL_36;
          v36 = 6LL;
          goto LABEL_61;
        }
        ++v13;
      }
      v18 = *v8;
      if ( *(_BYTE *)(v17 + *v8 + 180) )
        *((_BYTE *)this + 11310) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
      {
        v36 = 5LL;
LABEL_61:
        McTemplateU0xq_EventWriteTransfer(
          *(unsigned int *)(*(_QWORD *)(v17 + v18 + 16) + 40LL),
          &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
          *(unsigned int *)(*(_QWORD *)(v17 + v18 + 16) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v17 + v18 + 16) + 40LL)) << 32),
          v36);
        v18 = *v8;
      }
LABEL_36:
      *(_QWORD *)&v42 = v17 + v18;
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
        (__int64)this + 88,
        (__int64)&v40,
        (__int64 *)&v42);
    }
  }
  if ( *((_QWORD *)this + 914) != *((_QWORD *)this + 913) || *((_BYTE *)this + 11025) || *((_QWORD *)this + 1396) )
  {
    *((_BYTE *)this + 11306) = 0;
    *((_BYTE *)this + 11310) = 1;
  }
LABEL_11:
  *((_BYTE *)this + 11302) = 0;
  **((_DWORD **)this + 1397) = 0;
  *((_BYTE *)this + 11311) = 0;
  *((_DWORD *)this + 2818) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 11248, 16LL);
  if ( !*((_BYTE *)this + 11312) )
    COverlayContext::DisableHardwareCursor(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    McTemplateU0d_EventWriteTransfer(v15, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Stop, 0LL);
  return 0LL;
}
