/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180099A20
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006A08 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180010240 (-IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1800141E4 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x18006359C (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@.c)
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180064698 (-clear_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x1800646F8 (-reserve_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18006E46C (-IsEmpty@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006E4C8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180088404 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18008CE74 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18009AEB4 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7060 (-CheckOcclusionRelevance@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800C9D10 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2240 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800D7718 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 *     ?GetTopByReference@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800D85C8 (-GetTopByReference@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0dffffq_EventWriteTransfer @ 0x180112CF6 (McTemplateU0dffffq_EventWriteTransfer.c)
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x1801E0B94 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x1802440A4 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180244228 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        __m128i *this,
        struct COcclusionContext *a2,
        struct COcclusionInfo *a3,
        int a4)
{
  __int64 v5; // rdx
  int EffectiveBounds; // ebx
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  int (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // r15
  __int64 v20; // rcx
  __int64 v21; // r13
  LONG v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // r12d
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  char v30; // r13
  __int64 v31; // r12
  __int32 v32; // ecx
  float left; // xmm8_4
  float top; // xmm6_4
  float right; // xmm9_4
  float bottom; // xmm7_4
  int v37; // eax
  void *v38; // rcx
  LONG v39; // xmm9_4
  LONG v40; // xmm6_4
  struct tagRECT v41; // xmm0
  LONG v42; // xmm7_4
  float v43; // xmm10_4
  LONG v44; // xmm8_4
  float v45; // xmm11_4
  float v46; // xmm12_4
  char *v47; // rax
  struct tagRECT *TopByReference; // rax
  bool v50; // cc
  float v51; // xmm1_4
  __int128 v52; // xmm0
  LONG v53; // xmm1_4
  float v54; // xmm9_4
  LONG v55; // xmm2_4
  float v56; // xmm5_4
  LONG v57; // xmm3_4
  float v58; // xmm4_4
  int v59; // eax
  __int64 v60; // rcx
  struct tagRECT v61; // xmm0
  __int8 *v62; // r8
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // rcx
  unsigned int v66; // ecx
  __int64 v67; // rbx
  char *v68; // r9
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // r13
  CShape **DxClipShape; // rax
  __int64 *v73; // rax
  int v74; // ebx
  __int64 *v75; // rax
  unsigned int v76; // edx
  __int64 v77; // rbx
  char *v78; // r9
  __int64 v79; // rcx
  __m128 v80; // xmm2
  __m128 v81; // xmm2
  __m128 v82; // xmm2
  __m128 v83; // xmm2
  __m128 v84; // rt1
  int v85; // r9d
  char *v86; // rcx
  unsigned int v87; // [rsp+20h] [rbp-E0h]
  __int64 v88; // [rsp+40h] [rbp-C0h] BYREF
  char v89; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v90; // [rsp+4Ch] [rbp-B4h]
  struct IBitmapRealization *v91; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT v92; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v93; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT rcDst; // [rsp+80h] [rbp-80h] BYREF
  RECT rcSrc2; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v96[4]; // [rsp+A0h] [rbp-60h] BYREF
  char v97; // [rsp+E0h] [rbp-20h]
  char v98; // [rsp+E1h] [rbp-1Fh]

  v5 = this[16].m128i_i64[0];
  v92 = 0LL;
  v91 = 0LL;
  if ( v5 )
  {
    v62 = &this[8].m128i_i8[12];
    v63 = v5 + 64 + *(int *)(*(_QWORD *)(v5 + 64) + 8LL);
    v64 = (*(__int64 (__fastcall **)(__int64, struct COcclusionContext *, __int8 *))(*(_QWORD *)v63 + 8LL))(
            v63,
            a2,
            v62);
    EffectiveBounds = v64;
    if ( v64 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, v64, 0xF2Eu);
      MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0LL, EffectiveBounds, 0x3C0u);
      return (unsigned int)EffectiveBounds;
    }
  }
  EffectiveBounds = 0;
  v9 = (_QWORD *)((char *)a2 + 840);
  v10 = (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4;
  if ( (_DWORD)v10 )
  {
    while ( 1 )
    {
      v66 = *((_DWORD *)a2 + 357);
      v67 = 16LL * (unsigned int)(v10 - 1);
      LODWORD(v88) = v10 - 1;
      v90 = v66;
      *((_DWORD *)a2 + 357) = v66 + 2;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        McTemplateU0dffffq_EventWriteTransfer(
          v66,
          v10 - 1,
          v66,
          a4,
          *(_DWORD *)(*v9 + v67 + 4),
          *(_DWORD *)(*v9 + v67 + 8),
          *(_DWORD *)(*v9 + v67 + 12));
        v66 = v90;
      }
      v68 = (char *)a2 + 1208;
      if ( !*((_BYTE *)a2 + 1204) )
        v68 = 0LL;
      v69 = CArrayBasedCoverageSet::Add((char *)a2 + 448, v67 + *v9, v66, v68);
      EffectiveBounds = v69;
      if ( v69 < 0 )
        break;
      LODWORD(v10) = v88;
      if ( !(_DWORD)v88 )
        goto LABEL_3;
    }
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, v69, 0x2F5u);
  }
LABEL_3:
  v11 = (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4;
  if ( v11 )
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)a2 + 105,
      0LL,
      v11);
  if ( EffectiveBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, EffectiveBounds, 0x3C1u);
    return (unsigned int)EffectiveBounds;
  }
  v12 = *((_DWORD *)a2 + 357);
  *((_DWORD *)a3 + 11) = v12;
  *((_DWORD *)a3 + 12) = v12;
  if ( this[57].m128i_i8[8] )
  {
    v70 = CPtrArrayBase::operator[](&this[50].m128i_u64[1], 0LL);
    v71 = v70;
    if ( v70 )
    {
      if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization((CCompositionSurfaceBitmap *)(v70 + 72), &v91) >= 0 )
      {
        DxClipShape = (CShape **)CWindowNode::GetDxClipShape(this, &v93);
        EffectiveBounds = CWindowNode::GetEffectiveBounds(this, *DxClipShape, &v92, (bool *)&v89);
        CShapePtr::Release((CShapePtr *)&v93);
        if ( EffectiveBounds < 0 )
        {
          v87 = 979;
          goto LABEL_144;
        }
        v73 = (__int64 *)CWindowNode::GetDxClipShape(this, &rcSrc2);
        v93 = v92;
        EffectiveBounds = CWindowNode::CollectOcclusionHelper(
                            (_DWORD)this,
                            v71,
                            (unsigned int)&v93,
                            (_DWORD)a2,
                            *v73,
                            v89);
        CShapePtr::Release((CShapePtr *)&rcSrc2);
        if ( EffectiveBounds < 0 )
        {
          v87 = 985;
          goto LABEL_144;
        }
        if ( *((_BYTE *)a2 + 1205) )
        {
          v96[0] = _xmm;
          v96[1] = _xmm;
          v98 = v98 & 0xC0 | 0x17;
          v96[2] = _xmm;
          v96[3] = _xmm;
          v97 = 85;
          EffectiveBounds = CWindowNode::ApplyTextureToLocalTransform(this, v71 + 72, v96, 0LL);
          if ( EffectiveBounds < 0 )
          {
            v87 = 992;
            goto LABEL_144;
          }
          v74 = this[54].m128i_i32[3];
          v75 = (__int64 *)CWindowNode::GetDxClipShape(this, &v93);
          EffectiveBounds = COcclusionContext::CheckAndRecordOverlayCandidate(
                              (__int64)a2,
                              (__int64)this,
                              *(_QWORD *)(v71 + 104),
                              (__int64)v96,
                              *v75,
                              v74);
          CShapePtr::Release((CShapePtr *)&v93);
          if ( EffectiveBounds < 0 )
          {
            v87 = 998;
            goto LABEL_144;
          }
        }
      }
    }
  }
  v13 = 0LL;
  EffectiveBounds = 0;
  v14 = (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4;
  if ( (_DWORD)v14 )
  {
    while ( 1 )
    {
      v76 = *((_DWORD *)a2 + 357);
      v90 = v14 - 1;
      LODWORD(v88) = v76;
      v77 = (unsigned int)(v14 - 1);
      *((_DWORD *)a2 + 357) = v76 + 2;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        McTemplateU0dffffq_EventWriteTransfer(
          2 * v77,
          v76,
          v76,
          a4,
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v77 + 4),
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v77 + 8),
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v77 + 12));
        v76 = v88;
      }
      v78 = (char *)a2 + 1208;
      if ( !*((_BYTE *)a2 + 1204) )
        v78 = 0LL;
      EffectiveBounds = CArrayBasedCoverageSet::Add((char *)a2 + 448, *v9 + 16 * v77, v76, v78);
      if ( EffectiveBounds < 0 )
        break;
      LODWORD(v14) = v90;
      if ( !v90 )
        goto LABEL_130;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0LL, EffectiveBounds, 0x2F5u);
LABEL_130:
    v13 = 0LL;
  }
  v15 = (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4;
  if ( v15 )
  {
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)a2 + 105,
      0LL,
      v15);
    v13 = 0LL;
  }
  if ( EffectiveBounds < 0 )
  {
    v87 = 1005;
    goto LABEL_144;
  }
  *((_DWORD *)a3 + 10) = *((_DWORD *)a2 + 357);
  if ( !this[57].m128i_i8[7] )
    goto LABEL_65;
  v16 = this[50].m128i_i64[0];
  if ( (v16 & 2) != 0 )
  {
    v18 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
    v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  else
  {
    v17 = this[50].m128i_i64[0] & 1;
    v18 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( !v17 )
    goto LABEL_65;
  v19 = v17 == 1
      ? (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(v16 & 0xFFFFFFFFFFFFFFFCuLL)
      : *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v18 + 16);
  if ( !v19 || this[57].m128i_i8[2] || (this[54].m128i_i8[12] & 2) != 0 )
    goto LABEL_65;
  EffectiveBounds = CWindowNode::EnsureEffectiveSpriteClip((CWindowNode *)this);
  if ( EffectiveBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, EffectiveBounds, 0x3F7u);
    goto LABEL_65;
  }
  v21 = this[56].m128i_i64[1];
  v92.right = this[49].m128i_i32[2] - this[49].m128i_i32[0];
  v22 = this[49].m128i_i32[3] - this[49].m128i_i32[1];
  *(_QWORD *)&v92.left = 0LL;
  v92.bottom = v22;
  if ( !v21 )
    goto LABEL_41;
  v23 = *(_QWORD *)v21;
  rcDst = 0LL;
  v25 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD))(v23 + 48))(v21, &rcDst, 0LL);
  EffectiveBounds = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v25, 0x35Au);
    v85 = v25;
    v87 = 1018;
LABEL_145:
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v85, v87);
    goto LABEL_65;
  }
  LODWORD(v88) = rcDst.left;
  if ( (rcDst.left & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v80 = 0LL;
    v80.m128_f32[0] = (float)(int)*(float *)&rcDst.left - *(float *)&rcDst.left;
    v26 = (int)*(float *)&rcDst.left - _mm_cmple_ss(v80, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    *(float *)&v88 = *(float *)&rcDst.left + 6291456.25;
    v26 = (int)((_DWORD)v88 << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.left - (float)v26) & _xmm) > 0.00390625 )
    v26 = CFloatFPU::FloorSat(*(float *)&rcDst.left);
  v93.left = v26;
  LODWORD(v88) = rcDst.top;
  if ( (rcDst.top & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v81 = 0LL;
    v81.m128_f32[0] = (float)(int)*(float *)&rcDst.top - *(float *)&rcDst.top;
    v27 = (int)*(float *)&rcDst.top - _mm_cmple_ss(v81, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    *(float *)&v88 = *(float *)&rcDst.top + 6291456.25;
    v27 = (int)((_DWORD)v88 << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.top - (float)v27) & _xmm) > 0.00390625 )
    v27 = CFloatFPU::FloorSat(*(float *)&rcDst.top);
  v93.top = v27;
  LODWORD(v88) = rcDst.right;
  if ( (rcDst.right & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v82 = 0LL;
    v82.m128_f32[0] = (float)(int)*(float *)&rcDst.right - *(float *)&rcDst.right;
    v28 = (int)*(float *)&rcDst.right - _mm_cmple_ss(v82, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    *(float *)&v88 = *(float *)&rcDst.right + 6291456.25;
    v28 = (int)((_DWORD)v88 << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.right - (float)v28) & _xmm) > 0.00390625 )
    v28 = CFloatFPU::CeilingSat(*(float *)&rcDst.right);
  v93.right = v28;
  LODWORD(v88) = rcDst.bottom;
  if ( (rcDst.bottom & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v83 = 0LL;
    v83.m128_f32[0] = (float)(int)*(float *)&rcDst.bottom - *(float *)&rcDst.bottom;
    v84.m128_f32[0] = FLOAT_N0_5;
    LODWORD(v88) = _mm_cmple_ss(v83, v84).m128_u32[0];
    v29 = (int)*(float *)&rcDst.bottom - v88;
  }
  else
  {
    *(float *)&v88 = *(float *)&rcDst.bottom + 6291456.25;
    v29 = (int)((_DWORD)v88 << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.bottom - (float)v29) & _xmm) > 0.00390625 )
    v29 = CFloatFPU::CeilingSat(*(float *)&rcDst.bottom);
  v93.bottom = v29;
  TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v92.left, &v93.left);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 64LL))(v21, &v88) && (_DWORD)v88 == 1 )
LABEL_41:
    v30 = 1;
  else
    v30 = 0;
  EffectiveBounds = 0;
  v31 = this[56].m128i_i64[1];
  if ( this[53].m128i_i32[3] || this[54].m128i_i32[1] || this[54].m128i_i32[0] || this[54].m128i_i32[2] )
    CWindowNode::IntersectWithAlphaMargins(this, (__int64)&v92);
  v32 = this[55].m128i_i32[0];
  if ( v32 || this[55].m128i_i32[2] || this[55].m128i_i32[1] || this[55].m128i_i32[3] )
  {
    v61 = (struct tagRECT)this[47];
    *(_QWORD *)&rcSrc2.left = 0LL;
    rcDst = v61;
    rcDst.left = v32 + _mm_cvtsi128_si32((__m128i)v61);
    rcDst.right = v61.right - this[55].m128i_i32[1];
    rcDst.top = this[55].m128i_i32[2] + v61.top;
    rcDst.bottom = v61.bottom - this[55].m128i_i32[3];
    rcSrc2.right = this[49].m128i_i32[2] - this[49].m128i_i32[0];
    rcSrc2.bottom = this[49].m128i_i32[3] - this[49].m128i_i32[1];
    IntersectRect(&rcDst, &rcDst, &rcSrc2);
    if ( !EqualRect(&rcDst, &rcSrc2) )
      TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v92.left, &rcDst.left);
  }
  left = (float)v92.left;
  top = (float)v92.top;
  *(float *)&v93.left = (float)v92.left;
  *(float *)&v93.top = (float)v92.top;
  right = (float)v92.right;
  bottom = (float)v92.bottom;
  *(float *)&v93.right = (float)v92.right;
  *(float *)&v93.bottom = (float)v92.bottom;
  if ( v30 )
  {
    if ( !*((_DWORD *)a2 + 358) )
    {
      if ( (this[54].m128i_i8[12] & 1) != 0 )
      {
LABEL_53:
        if ( right > left && bottom > top )
        {
          v37 = *((_DWORD *)a2 + 8);
          v92 = 0LL;
          if ( v37 )
            v38 = (void *)(*((_QWORD *)a2 + 6) + 68LL * (unsigned int)(v37 - 1));
          else
            v38 = &CMILMatrix::Identity;
          CMILMatrix::Transform2DBoundsHelper<0>(v38, &v93, &v92);
          if ( *((_DWORD *)a2 + 36) )
          {
            TopByReference = (struct tagRECT *)CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::GetTopByReference();
            v39 = v92.left;
            v41 = *TopByReference;
            v50 = *(float *)&v92.left <= COERCE_FLOAT(*TopByReference);
            v93 = *TopByReference;
            if ( !v50 )
              v41.left = v92.left;
            v43 = *(float *)&v93.top;
            v40 = v92.top;
            v51 = *(float *)&v93.top;
            if ( *(float *)&v92.top > *(float *)&v93.top )
            {
              v43 = *(float *)&v92.top;
              v51 = *(float *)&v92.top;
            }
            v45 = *(float *)&v93.right;
            v42 = v92.right;
            if ( *(float *)&v93.right > *(float *)&v92.right )
              v45 = *(float *)&v92.right;
            v46 = *(float *)&v93.bottom;
            v44 = v92.bottom;
            if ( *(float *)&v93.bottom > *(float *)&v92.bottom )
              v46 = *(float *)&v92.bottom;
            if ( v45 <= *(float *)&v41.left || v46 <= v51 )
            {
              v43 = 0.0;
              v41.left = 0;
              v45 = 0.0;
              v46 = 0.0;
            }
          }
          else
          {
            v39 = v92.left;
            v40 = v92.top;
            v41.left = v92.left;
            v42 = v92.right;
            v43 = *(float *)&v92.top;
            v44 = v92.bottom;
            v45 = *(float *)&v92.right;
            v46 = *(float *)&v92.bottom;
          }
          if ( **((_DWORD **)a2 + 168) )
          {
            v92.left = PixelAlign(*(float *)&v41.left, 1);
            v92.top = PixelAlign(v43, 1);
            v92.right = PixelAlign(v45, 0);
            v92.bottom = PixelAlign(v46, 0);
            if ( !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v92) )
            {
              FastRegion::CRegion::CRegion((FastRegion::CRegion *)v96, &v92);
              CRegion::Subtract(
                (const struct FastRegion::Internal::CRgnData **)a2 + 168,
                (const struct FastRegion::Internal::CRgnData **)v96);
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v96);
            }
          }
          if ( *((_DWORD *)a2 + 44) )
          {
            v52 = *(_OWORD *)CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::GetTopByReference();
            v93 = (struct tagRECT)v52;
            if ( *(float *)&v39 > *(float *)&v52 )
              LODWORD(v52) = v39;
            v53 = v93.top;
            v54 = *(float *)&v93.top;
            if ( *(float *)&v40 > *(float *)&v93.top )
            {
              v53 = v40;
              v54 = *(float *)&v40;
            }
            v55 = v93.right;
            v56 = *(float *)&v93.right;
            if ( *(float *)&v93.right > *(float *)&v42 )
            {
              v55 = v42;
              v56 = *(float *)&v42;
            }
            v57 = v93.bottom;
            v58 = *(float *)&v93.bottom;
            if ( *(float *)&v93.bottom > *(float *)&v44 )
            {
              v57 = v44;
              v58 = *(float *)&v44;
            }
            if ( v56 <= *(float *)&v52 || v58 <= v54 )
            {
              v57 = 0;
              v55 = 0;
              v53 = 0;
              LODWORD(v52) = 0;
            }
            v92.left = v52;
            v92.top = v53;
            v92.right = v55;
            v92.bottom = v57;
          }
          else
          {
            v92.left = v39;
            v92.top = v40;
            v92.right = v42;
            v92.bottom = v44;
          }
          if ( (unsigned __int8)COcclusionContext::CheckOcclusionRelevance(a2, &v92) )
          {
            v47 = detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::reserve_region(
                    (char *)a2 + 840,
                    (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4,
                    1uLL);
            *(struct tagRECT *)v47 = v92;
          }
        }
        goto LABEL_64;
      }
      v88 = 0LL;
      if ( (**v19)(v19, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, &v88) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v88 + 8LL))(v88) )
      {
        wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v88);
        goto LABEL_53;
      }
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v88);
    }
LABEL_64:
    EffectiveBounds = 0;
    goto LABEL_65;
  }
  if ( v31 )
  {
    v59 = COcclusionContext::DrawClippedImage((_DWORD)a2, (_DWORD)v19, (unsigned int)&v93, v31, this[54].m128i_i32[3]);
    EffectiveBounds = v59;
    if ( v59 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0LL, v59, 0x429u);
      v87 = 1023;
LABEL_144:
      v85 = EffectiveBounds;
      goto LABEL_145;
    }
  }
LABEL_65:
  if ( v91 )
  {
    v86 = (char *)v91 + *(int *)(*((_QWORD *)v91 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v86 + 16LL))(v86);
  }
  return (unsigned int)EffectiveBounds;
}
