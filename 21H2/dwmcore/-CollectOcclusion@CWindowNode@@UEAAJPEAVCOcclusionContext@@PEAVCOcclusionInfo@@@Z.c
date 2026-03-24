/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800757B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180018B0C (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003C778 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800563A4 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180068454 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N2@Z @ 0x18006BC10 (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180075F90 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800869D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x1800B8A38 (-AddMultipleAndSet@-$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800BC000 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C468C (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C891C (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0dffffq_EventWriteTransfer @ 0x180183C50 (McTemplateU0dffffq_EventWriteTransfer.c)
 *     ??0CZOrderedRect@@QEAA@AEBUMilRectF@@HPEBVCMILMatrix@@@Z @ 0x180194870 (--0CZOrderedRect@@QEAA@AEBUMilRectF@@HPEBVCMILMatrix@@@Z.c)
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x1801948B8 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x1801F36B8 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801F392C (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        CWindowNode *this,
        struct COcclusionContext *a2,
        struct COcclusionInfo *a3,
        int a4)
{
  __int64 v5; // rdx
  int v8; // ebx
  __int64 v9; // rbx
  int v10; // r12d
  void **v11; // rdi
  __int64 v12; // r13
  void *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  char v16; // r12
  char *v17; // rdx
  int EffectiveBounds; // ebx
  __int64 v19; // r13
  __int64 v20; // rcx
  int v21; // r13d
  int v22; // eax
  __int64 *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // edx
  int v27; // r8d
  int v28; // ecx
  int v29; // eax
  __int64 (__fastcall ***v30)(_QWORD); // rcx
  __int64 (__fastcall **v31)(_QWORD); // rax
  struct IUnknown *v32; // r10
  int left; // r8d
  int right; // r13d
  int bottom; // r15d
  int top; // eax
  float v37; // xmm8_4
  float v38; // xmm6_4
  char v39; // al
  bool v40; // r14
  int v41; // eax
  CMILMatrix *v42; // rcx
  int v43; // eax
  struct tagRECT v44; // xmm3
  float v45; // xmm2_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  int v48; // eax
  unsigned int v49; // edx
  float v50; // xmm1_4
  unsigned __int64 v51; // r8
  __int64 v52; // rax
  unsigned int v53; // r8d
  __int64 v54; // rdx
  struct IUnknownVtbl *lpVtbl; // rax
  LONG v57; // ecx
  LONG v58; // eax
  int v59; // eax
  char *v60; // r8
  __int64 v61; // rcx
  int v62; // eax
  int v63; // ecx
  const struct CMILMatrix *v64; // r9
  CZOrderedRect *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rcx
  CShape **DxClipShape; // rax
  __int64 *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  int v73; // eax
  __int64 v74; // rcx
  int v75; // ebx
  __int64 *v76; // rax
  char *v77; // rbx
  unsigned int v78; // ecx
  char *v79; // r9
  __int64 v80; // rcx
  __m128 v81; // xmm2
  __m128 v82; // rt1
  __m128 v83; // xmm1
  __m128 v84; // xmm2
  __m128 v85; // rt1
  __m128 v86; // xmm1
  __m128 v87; // xmm2
  __m128 v88; // rt1
  __m128 v89; // xmm0
  __m128 v90; // xmm2
  __m128 v91; // rt1
  __m128 v92; // xmm0
  struct tagRECT *v93; // rcx
  bool v94; // cc
  float v95; // xmm6_4
  float v96; // xmm7_4
  float v97; // xmm4_4
  int v98; // eax
  char *v99; // rcx
  __int64 v100; // [rsp+20h] [rbp-E0h]
  unsigned int v101; // [rsp+20h] [rbp-E0h]
  float v102; // [rsp+40h] [rbp-C0h]
  float v103; // [rsp+40h] [rbp-C0h]
  float v104; // [rsp+40h] [rbp-C0h]
  float v105; // [rsp+40h] [rbp-C0h]
  __int64 v106; // [rsp+40h] [rbp-C0h]
  int v107; // [rsp+40h] [rbp-C0h]
  unsigned int v108; // [rsp+40h] [rbp-C0h]
  char v109[8]; // [rsp+48h] [rbp-B8h] BYREF
  struct IUnknown *v110; // [rsp+50h] [rbp-B0h] BYREF
  struct IBitmapRealization *v111; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT v112; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v113; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT rcDst; // [rsp+80h] [rbp-80h] BYREF
  __int128 v115; // [rsp+90h] [rbp-70h] BYREF
  __int128 v116; // [rsp+A0h] [rbp-60h]
  __int128 v117; // [rsp+B0h] [rbp-50h]
  __int128 v118; // [rsp+C0h] [rbp-40h]
  __int16 v119; // [rsp+D0h] [rbp-30h]

  v5 = *((_QWORD *)this + 31);
  v113 = 0LL;
  v111 = 0LL;
  v8 = 0;
  if ( v5 )
  {
    v60 = (char *)this + 132;
    v61 = v5 + 56 + *(int *)(*(_QWORD *)(v5 + 56) + 8LL);
    v62 = (*(__int64 (__fastcall **)(__int64, struct COcclusionContext *, char *))(*(_QWORD *)v61 + 8LL))(v61, a2, v60);
    v8 = v62;
    if ( v62 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v62, 0xF69u, 0LL);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v8, 0x42Du, 0LL);
    return (unsigned int)v8;
  }
  LODWORD(v9) = *((_DWORD *)a2 + 214);
  v10 = 0;
  v11 = (void **)((char *)a2 + 832);
  v12 = *((_QWORD *)a2 + 104);
  if ( (_DWORD)v9 )
  {
    while ( 1 )
    {
      v9 = (unsigned int)(v9 - 1);
      v63 = *((_DWORD *)a2 + 364);
      v107 = v63;
      *((_DWORD *)a2 + 364) = v63 + 2;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0dffffq_EventWriteTransfer(
          v63,
          v5,
          v63,
          a4,
          *(_DWORD *)(v12 + 20 * v9 + 4),
          *(_DWORD *)(v12 + 20 * v9 + 8),
          *(_DWORD *)(v12 + 20 * v9 + 12),
          *(_DWORD *)(v12 + 20 * v9 + 16));
        v63 = v107;
      }
      v64 = (struct COcclusionContext *)((char *)a2 + 1248);
      if ( !*((_BYTE *)a2 + 1244) )
        v64 = 0LL;
      v65 = CZOrderedRect::CZOrderedRect((CZOrderedRect *)&v115, (const struct MilRectF *)(v12 + 20 * v9), v63, v64);
      v10 = DynArray<CZOrderedRect,0>::AddMultipleAndSet((char *)a2 + 408, v65);
      if ( v10 < 0 )
        break;
      if ( !(_DWORD)v9 )
        goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v10, 0x25u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v10, 0x2FEu, 0LL);
  }
LABEL_4:
  v13 = *v11;
  *((_DWORD *)a2 + 214) = 0;
  if ( v13 != *((void **)a2 + 105) )
  {
    operator delete(v13);
    *((_QWORD *)a2 + 104) = *((_QWORD *)a2 + 105);
    *((_DWORD *)a2 + 213) = *((_DWORD *)a2 + 212);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v13, 0LL, 0, v10, 0x42Eu, 0LL);
    return (unsigned int)v10;
  }
  v14 = *((_DWORD *)a2 + 364);
  *((_DWORD *)a3 + 7) = v14;
  *((_DWORD *)a3 + 8) = v14;
  v15 = *((_QWORD *)this + 108);
  if ( v15
    && (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization((CCompositionSurfaceBitmap *)(v15 + 64), &v111) >= 0 )
  {
    DxClipShape = (CShape **)CWindowNode::GetDxClipShape(this, &rcDst);
    EffectiveBounds = CWindowNode::GetEffectiveBounds(this, *DxClipShape, &v113, v109, 0LL);
    CShapePtr::Release((CShapePtr *)&rcDst);
    if ( EffectiveBounds < 0 )
    {
      v101 = 1088;
      goto LABEL_152;
    }
    v69 = (__int64 *)CWindowNode::GetDxClipShape(this, &v112);
    v16 = v109[0];
    v70 = *((_QWORD *)this + 108);
    v100 = *v69;
    rcDst = v113;
    EffectiveBounds = CWindowNode::CollectOcclusionHelper(
                        (_DWORD)this,
                        v70,
                        (unsigned int)&rcDst,
                        (_DWORD)a2,
                        v100,
                        v109[0]);
    CShapePtr::Release((CShapePtr *)&v112);
    if ( EffectiveBounds < 0 )
    {
      v101 = 1094;
      goto LABEL_152;
    }
    if ( *((_BYTE *)a2 + 1245) )
    {
      v71 = *((_QWORD *)this + 108);
      v115 = _xmm;
      v72 = v71 + 64;
      v116 = _xmm;
      if ( !v71 )
        v72 = 0LL;
      v117 = _xmm;
      v118 = _xmm;
      v119 = 32085;
      v73 = CWindowNode::ApplyTextureToLocalTransform(this, v72, &v115, 0LL);
      EffectiveBounds = v73;
      if ( v73 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0x44Du, 0LL);
        goto LABEL_75;
      }
      v75 = *((_DWORD *)this + 209);
      v76 = (__int64 *)CWindowNode::GetDxClipShape(this, &rcDst);
      EffectiveBounds = COcclusionContext::CheckAndRecordOverlayCandidate(
                          (__int64)a2,
                          (__int64)this,
                          *(_QWORD *)(*((_QWORD *)this + 108) + 96LL),
                          &v115,
                          *v76,
                          v75);
      CShapePtr::Release((CShapePtr *)&rcDst);
      if ( EffectiveBounds < 0 )
      {
        v101 = 1107;
LABEL_152:
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, EffectiveBounds, v101, 0LL);
        goto LABEL_75;
      }
    }
  }
  else
  {
    v16 = v109[0];
  }
  v17 = (char *)*v11;
  EffectiveBounds = 0;
  LODWORD(v19) = *((_DWORD *)a2 + 214);
  v110 = (struct IUnknown *)*v11;
  if ( (_DWORD)v19 )
  {
    while ( 1 )
    {
      v19 = (unsigned int)(v19 - 1);
      v77 = &v17[20 * v19];
      v78 = *((_DWORD *)a2 + 364);
      v108 = v78;
      *((_DWORD *)a2 + 364) = v78 + 2;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0dffffq_EventWriteTransfer(
          v78,
          (_DWORD)v17,
          v78,
          a4,
          *((_DWORD *)v77 + 1),
          *((_DWORD *)v77 + 2),
          *((_DWORD *)v77 + 3),
          *((_DWORD *)v77 + 4));
        v78 = v108;
      }
      v79 = (char *)a2 + 1248;
      if ( !*((_BYTE *)a2 + 1244) )
        v79 = 0LL;
      EffectiveBounds = CArrayBasedCoverageSet::Add((char *)a2 + 408, v77, v78, v79);
      if ( EffectiveBounds < 0 )
        break;
      v17 = (char *)v110;
      if ( !(_DWORD)v19 )
        goto LABEL_10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, EffectiveBounds, 0x2FEu, 0LL);
  }
LABEL_10:
  v20 = (__int64)*v11;
  *((_DWORD *)a2 + 214) = 0;
  if ( v20 != *((_QWORD *)a2 + 105) )
  {
    operator delete((void *)v20);
    *((_QWORD *)a2 + 104) = *((_QWORD *)a2 + 105);
    *((_DWORD *)a2 + 213) = *((_DWORD *)a2 + 212);
  }
  if ( EffectiveBounds < 0 )
  {
    v101 = 1114;
    goto LABEL_152;
  }
  *((_DWORD *)a3 + 6) = *((_DWORD *)a2 + 364);
  if ( *((_QWORD *)this + 90) && !*((_BYTE *)this + 914) && (*((_BYTE *)this + 836) & 2) == 0 )
  {
    EffectiveBounds = CWindowNode::EnsureEffectiveSpriteClip(this);
    if ( EffectiveBounds < 0 )
    {
      v101 = 1123;
      goto LABEL_152;
    }
    v20 = 0LL;
    v21 = *((_DWORD *)this + 174) - *((_DWORD *)this + 172);
    EffectiveBounds = 0;
    v22 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
    v23 = (__int64 *)*((_QWORD *)this + 113);
    *(_QWORD *)&v113.left = 0LL;
    *(_QWORD *)&v113.right = __PAIR64__(v22, v21);
    LODWORD(v110) = v22;
    if ( !v23 )
      goto LABEL_45;
    v24 = *v23;
    rcDst = 0LL;
    EffectiveBounds = (*(__int64 (__fastcall **)(__int64 *, struct tagRECT *, _QWORD))(v24 + 32))(v23, &rcDst, 0LL);
    if ( EffectiveBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, EffectiveBounds, 0x3ACu, 0LL);
      v20 = 0LL;
    }
    else
    {
      if ( (rcDst.left & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v81 = 0LL;
        v81.m128_f32[0] = (float)(int)*(float *)&rcDst.left - *(float *)&rcDst.left;
        v82.m128_f32[0] = FLOAT_N0_5;
        v26 = (int)*(float *)&rcDst.left - _mm_cmple_ss(v81, v82).m128_u32[0];
      }
      else
      {
        v102 = *(float *)&rcDst.left + 6291456.25;
        v26 = (int)(LODWORD(v102) << 10) >> 11;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.left - (float)v26) & _xmm) > 0.00390625 )
      {
        v83.m128_f32[0] = (float)(int)*(float *)&rcDst.left;
        v26 = (int)*(float *)&rcDst.left + _mm_cmplt_ss((__m128)(unsigned int)rcDst.left, v83).m128_u32[0];
      }
      v112.left = v26;
      if ( (rcDst.top & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v84 = 0LL;
        v84.m128_f32[0] = (float)(int)*(float *)&rcDst.top - *(float *)&rcDst.top;
        v85.m128_f32[0] = FLOAT_N0_5;
        v27 = (int)*(float *)&rcDst.top - _mm_cmple_ss(v84, v85).m128_u32[0];
      }
      else
      {
        v103 = *(float *)&rcDst.top + 6291456.25;
        v27 = (int)(LODWORD(v103) << 10) >> 11;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.top - (float)v27) & _xmm) > 0.00390625 )
      {
        v86.m128_f32[0] = (float)(int)*(float *)&rcDst.top;
        v27 = (int)*(float *)&rcDst.top + _mm_cmplt_ss((__m128)(unsigned int)rcDst.top, v86).m128_u32[0];
      }
      v112.top = v27;
      if ( (rcDst.right & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v87 = 0LL;
        v87.m128_f32[0] = (float)(int)*(float *)&rcDst.right - *(float *)&rcDst.right;
        v88.m128_f32[0] = FLOAT_N0_5;
        v28 = (int)*(float *)&rcDst.right - _mm_cmple_ss(v87, v88).m128_u32[0];
      }
      else
      {
        v104 = *(float *)&rcDst.right + 6291456.25;
        v28 = (int)(LODWORD(v104) << 10) >> 11;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.right - (float)v28) & _xmm) > 0.00390625 )
      {
        v89 = 0LL;
        v89.m128_f32[0] = (float)(int)*(float *)&rcDst.right;
        v28 = (int)*(float *)&rcDst.right - _mm_cmplt_ss(v89, (__m128)(unsigned int)rcDst.right).m128_u32[0];
      }
      v112.right = v28;
      if ( (rcDst.bottom & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v90 = 0LL;
        v90.m128_f32[0] = (float)(int)*(float *)&rcDst.bottom - *(float *)&rcDst.bottom;
        v91.m128_f32[0] = FLOAT_N0_5;
        v29 = (int)*(float *)&rcDst.bottom - _mm_cmple_ss(v90, v91).m128_u32[0];
      }
      else
      {
        v105 = *(float *)&rcDst.bottom + 6291456.25;
        v29 = (int)(LODWORD(v105) << 10) >> 11;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.bottom - (float)v29) & _xmm) > 0.00390625 )
      {
        v92 = 0LL;
        v92.m128_f32[0] = (float)(int)*(float *)&rcDst.bottom;
        v29 = (int)*(float *)&rcDst.bottom - _mm_cmplt_ss(v92, (__m128)(unsigned int)rcDst.bottom).m128_u32[0];
      }
      v112.bottom = v29;
      if ( v28 <= v26 || v29 <= v27 || v26 >= 0 && v27 >= 0 && v28 <= v21 && v29 <= (int)v110 )
        TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v113, &v112);
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, struct IUnknown **))(*v23 + 40))(v23, &v110)
        && (_DWORD)v110 == 1 )
      {
        v20 = 0LL;
LABEL_45:
        v16 = 1;
        goto LABEL_46;
      }
      v16 = 0;
      v20 = 0LL;
    }
LABEL_46:
    if ( EffectiveBounds < 0 )
    {
      v101 = 1127;
      goto LABEL_152;
    }
    v30 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 90);
    v106 = *((_QWORD *)this + 113);
    v31 = *v30;
    v112 = v113;
    v32 = (struct IUnknown *)(*v31)(v30);
    left = v113.left + *((_DWORD *)this + 205);
    right = v112.right - *((_DWORD *)this + 206);
    bottom = v112.bottom - *((_DWORD *)this + 208);
    v110 = v32;
    EffectiveBounds = 0;
    v112.left = left;
    top = v112.top + *((_DWORD *)this + 207);
    v112.top = top;
    if ( right <= left )
    {
      right = left;
      v112.right = left;
    }
    else
    {
      v112.right = right;
    }
    if ( bottom <= top )
    {
      bottom = top;
      v112.bottom = top;
    }
    else
    {
      v112.bottom = bottom;
    }
    v20 = *((unsigned int *)this + 210);
    if ( (_DWORD)v20 || *((_DWORD *)this + 212) || *((_DWORD *)this + 211) || *((_DWORD *)this + 213) )
    {
      v57 = *((_DWORD *)this + 160) + v20;
      rcDst.right = *((_DWORD *)this + 162) - *((_DWORD *)this + 211);
      rcDst.top = *((_DWORD *)this + 212) + *((_DWORD *)this + 161);
      v58 = *((_DWORD *)this + 163) - *((_DWORD *)this + 213);
      rcDst.left = v57;
      rcDst.bottom = v58;
      IntersectRect(&rcDst, &rcDst, (const RECT *)this + 43);
      if ( !EqualRect(&rcDst, (const RECT *)this + 43) )
      {
        OffsetRect(&rcDst, -*((_DWORD *)this + 172), -*((_DWORD *)this + 173));
        v113 = rcDst;
        TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v112, &v113);
        bottom = v112.bottom;
        right = v112.right;
      }
      v32 = v110;
      left = v112.left;
      top = v112.top;
    }
    v37 = (float)left;
    v38 = (float)top;
    *(float *)&v112.left = (float)left;
    *(float *)&v112.top = (float)top;
    *(float *)&v112.right = (float)right;
    *(float *)&v112.bottom = (float)bottom;
    if ( !v16 )
    {
      if ( v106 )
      {
        v59 = COcclusionContext::DrawClippedImage(a2, v32, (float *)&v112.left, v106, *((_DWORD *)this + 209));
        EffectiveBounds = v59;
        if ( v59 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v59, 0x49Cu, 0LL);
      }
LABEL_74:
      if ( EffectiveBounds < 0 )
      {
        v101 = 1133;
        goto LABEL_152;
      }
      goto LABEL_75;
    }
    if ( *((_DWORD *)a2 + 365) )
      goto LABEL_74;
    v39 = *((_DWORD *)this + 209) & 1;
    v40 = 0;
    if ( !v32 )
      goto LABEL_81;
    if ( !v39 )
    {
      lpVtbl = v32->lpVtbl;
      v110 = 0LL;
      if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))lpVtbl->QueryInterface)(
             v32,
             &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
             &v110) >= 0 )
        v40 = ((unsigned __int8 (__fastcall *)(struct IUnknown *))v110->lpVtbl->AddRef)(v110) != 0;
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v110);
      if ( !v40 )
      {
LABEL_81:
        if ( EffectiveBounds < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, EffectiveBounds, 0x495u, 0LL);
        goto LABEL_74;
      }
    }
    if ( (float)right > v37 && (float)bottom > v38 )
    {
      v41 = *((_DWORD *)a2 + 6);
      LODWORD(v116) = 0;
      v113 = 0LL;
      v42 = v41
          ? (CMILMatrix *)(*((_QWORD *)a2 + 5) + 68LL * (unsigned int)(v41 - 1))
          : (CMILMatrix *)&CMILMatrix::Identity;
      CMILMatrix::Transform2DBoundsHelper<0>(v42);
      v43 = *((_DWORD *)a2 + 34);
      if ( v43 )
      {
        v93 = (struct tagRECT *)(*((_QWORD *)a2 + 19) + 16LL * (unsigned int)(v43 - 1));
        v44 = *v93;
        v94 = *(float *)&v113.left <= COERCE_FLOAT(*v93);
        v112 = *v93;
        if ( !v94 )
          v44.left = v113.left;
        v45 = *(float *)&v112.top;
        v95 = *(float *)&v112.top;
        if ( *(float *)&v113.top > *(float *)&v112.top )
        {
          v45 = *(float *)&v113.top;
          v95 = *(float *)&v113.top;
        }
        v46 = *(float *)&v112.right;
        v96 = *(float *)&v112.right;
        if ( *(float *)&v112.right > *(float *)&v113.right )
        {
          v46 = *(float *)&v113.right;
          v96 = *(float *)&v113.right;
        }
        v47 = *(float *)&v112.bottom;
        v97 = *(float *)&v112.bottom;
        if ( *(float *)&v112.bottom > *(float *)&v113.bottom )
        {
          v47 = *(float *)&v113.bottom;
          v97 = *(float *)&v113.bottom;
        }
        if ( v96 <= *(float *)&v44.left || v97 <= v95 )
        {
          v45 = 0.0;
          v47 = 0.0;
          v46 = 0.0;
          v44.left = 0;
        }
      }
      else
      {
        v44.left = v113.left;
        v45 = *(float *)&v113.top;
        v46 = *(float *)&v113.right;
        v47 = *(float *)&v113.bottom;
      }
      v48 = *((_DWORD *)a2 + 376);
      v49 = -1;
      *((_QWORD *)&v115 + 1) = __PAIR64__(LODWORD(v47), LODWORD(v46));
      *(_QWORD *)&v115 = __PAIR64__(LODWORD(v45), v44.left);
      v50 = (float)(v47 - v45) * (float)(v46 - *(float *)&v44.left);
      if ( v48 )
        v49 = *(_DWORD *)(*((_QWORD *)a2 + 190) + 4LL * (unsigned int)(v48 - 1));
      v51 = *((_QWORD *)a2 + 133);
      v20 = 0LL;
      if ( v51 )
      {
        while ( ((v49 >> v20) & 1) == 0 || v50 <= (float)(*((float *)a2 + (unsigned int)v20 + 300) * 0.25) )
        {
          v20 = (unsigned int)(v20 + 1);
          if ( (unsigned int)v20 >= v51 )
            goto LABEL_73;
        }
        v52 = *((unsigned int *)a2 + 214);
        v53 = v52 + 1;
        if ( (int)v52 + 1 < (unsigned int)v52 )
        {
          EffectiveBounds = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        else
        {
          if ( v53 <= *((_DWORD *)a2 + 213) )
          {
            v20 = (__int64)*v11;
            v54 = 5 * v52;
            *(_OWORD *)(v20 + 4 * v54) = v115;
            *(_DWORD *)(v20 + 4 * v54 + 16) = v116;
            *((_DWORD *)a2 + 214) = v53;
            goto LABEL_73;
          }
          v98 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 832, 20LL, 1LL, &v115);
          EffectiveBounds = v98;
          if ( v98 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v98, 0xC0u, 0LL);
        }
        if ( EffectiveBounds >= 0 )
          goto LABEL_74;
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, EffectiveBounds, 0x683u, 0LL);
      }
    }
LABEL_73:
    if ( EffectiveBounds >= 0 )
      goto LABEL_74;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, EffectiveBounds, 0x49Du, 0LL);
    goto LABEL_81;
  }
LABEL_75:
  if ( v111 )
  {
    v99 = (char *)v111 + *(int *)(*((_QWORD *)v111 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v99 + 16LL))(v99);
  }
  return (unsigned int)EffectiveBounds;
}
