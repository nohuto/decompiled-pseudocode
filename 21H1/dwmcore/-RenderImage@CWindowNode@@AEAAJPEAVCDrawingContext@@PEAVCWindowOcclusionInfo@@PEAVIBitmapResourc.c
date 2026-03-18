/*
 * XREFs of ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180048ABC
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800480E0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@H@Z @ 0x1800172E4 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ??0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z @ 0x180017B2C (--0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?ShouldUseGDIAlphaMarginsLinearInterpolation@CDrawingContext@@QEBA_NXZ @ 0x18001A438 (-ShouldUseGDIAlphaMarginsLinearInterpolation@CDrawingContext@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180029AC8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18002A790 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180036E30 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_NPEAU_MARGINS@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV3@2@Z @ 0x180047BEC (-GetAlphaMarginsRects@CWindowNode@@AEAA_NPEAU_MARGINS@@AEBV-$TMilRect_@HUtagRECT@@UMilPointAndSi.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180047DD4 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniquene.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048958 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180048A4C (-DoesContain@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180048A9C (-IsEmpty@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800497D4 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180050A2C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18005A300 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800950D4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180095D9C (--1CRegionShape@@UEAA@XZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A6070 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800A8EE0 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B5618 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800BAB48 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800BC3E4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800CB60C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800DC3D0 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x180192798 (-ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ.c)
 */

__int64 __fastcall CWindowNode::RenderImage(
        CWindowNode *this,
        struct CDrawingContext *a2,
        struct CWindowOcclusionInfo *a3,
        struct IBitmapResource *a4,
        const struct CShape *a5,
        struct _MARGINS *a6,
        unsigned int a7)
{
  int v8; // r13d
  int v10; // ebx
  bool v11; // al
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edi
  int v15; // esi
  int v16; // r12d
  __int64 v17; // rcx
  int v18; // r14d
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  struct CShape *v24; // r14
  struct IBitmapResource *v25; // r12
  int v26; // eax
  void *v27; // rcx
  void (__fastcall ***v28)(_QWORD, struct IBitmapResource **); // rcx
  _QWORD *v29; // rsi
  int v30; // r8d
  float v31; // xmm8_4
  float v32; // xmm9_4
  int v33; // eax
  float v34; // xmm7_4
  float v35; // xmm6_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm7_4
  float v39; // xmm2_4
  float v40; // xmm5_4
  float v41; // xmm3_4
  float v42; // xmm4_4
  char v43; // al
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 (__fastcall ***v47)(_QWORD, __int64); // rdx
  char AlphaMarginsRects; // al
  int v49; // ecx
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 (__fastcall ***v57)(_QWORD, __int64); // rdx
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 (__fastcall ***v61)(_QWORD, __int64); // rdx
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // r9d
  int v65; // r8d
  __int64 v66; // rax
  __int64 v67; // rcx
  float v68; // xmm3_4
  float v69; // xmm2_4
  float v70; // xmm1_4
  __int64 (__fastcall ***v71)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v72)(_QWORD, __int64); // rdx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 (__fastcall ***v75)(_QWORD, __int64); // rdx
  int v76; // eax
  int v77; // r9d
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rcx
  unsigned int v81; // [rsp+28h] [rbp-E0h]
  unsigned int v82; // [rsp+28h] [rbp-E0h]
  char v83; // [rsp+38h] [rbp-D0h]
  char v84; // [rsp+39h] [rbp-CFh]
  bool v85; // [rsp+3Ah] [rbp-CEh]
  struct IBitmapResource *v86; // [rsp+40h] [rbp-C8h] BYREF
  const struct CShape *v87; // [rsp+48h] [rbp-C0h]
  struct _MARGINS *v88; // [rsp+50h] [rbp-B8h]
  float v89[20]; // [rsp+58h] [rbp-B0h] BYREF
  struct tagRECT v90; // [rsp+A8h] [rbp-60h] BYREF
  char v91; // [rsp+B8h] [rbp-50h]
  struct CShape *v92[2]; // [rsp+C0h] [rbp-48h] BYREF
  struct tagRECT v93; // [rsp+D0h] [rbp-38h] BYREF
  struct CShape *v94[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v95; // [rsp+F0h] [rbp-18h] BYREF
  void **v96; // [rsp+108h] [rbp+0h] BYREF
  __int64 v97; // [rsp+110h] [rbp+8h]
  void *v98; // [rsp+118h] [rbp+10h] BYREF
  _BYTE *v99; // [rsp+120h] [rbp+18h]
  int v100; // [rsp+128h] [rbp+20h]
  __int64 v101; // [rsp+12Ch] [rbp+24h]
  _BYTE v102[16]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v103; // [rsp+148h] [rbp+40h]
  const unsigned int *v104; // [rsp+158h] [rbp+50h] BYREF
  __int64 v105; // [rsp+160h] [rbp+58h]
  void *lpMem; // [rsp+168h] [rbp+60h] BYREF
  _DWORD v107[16]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v108; // [rsp+1B0h] [rbp+A8h]
  int v109; // [rsp+1B8h] [rbp+B0h] BYREF
  int v110; // [rsp+1BCh] [rbp+B4h]
  int v111; // [rsp+1CCh] [rbp+C4h]

  v92[0] = this;
  v8 = 0;
  v88 = a6;
  v10 = 0;
  v11 = *((_BYTE *)this + 836) & 1;
  v87 = a5;
  v85 = v11;
  v86 = a4;
  v109 = 0;
  v84 = 0;
  v89[16] = 0.0;
  v93 = 0LL;
  v12 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x778u, 0LL);
LABEL_67:
    if ( v84 )
      CDrawingContext::PopRenderOptionsInternal(a2, 1);
    return (unsigned int)v14;
  }
  v14 = 0;
  v15 = *((_DWORD *)this + 174) - *((_DWORD *)this + 172);
  v16 = 0;
  v17 = (__int64)v87;
  v83 = 0;
  v18 = *((_DWORD *)this + 175) - *((_DWORD *)v92[0] + 173);
  *(_QWORD *)&v95 = 0LL;
  *((_QWORD *)&v95 + 1) = __PAIR64__(v18, v15);
  if ( v87 )
  {
    v19 = *(_QWORD *)v87;
    v90 = 0LL;
    v20 = (*(__int64 (__fastcall **)(const struct CShape *, struct tagRECT *, _QWORD))(v19 + 32))(v87, &v90, 0LL);
    v14 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x3A7u, 0LL);
      v83 = v85;
    }
    else
    {
      PixelAlign(v94, &v90);
      if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::DoesContain((__int64)&v95, (__int64)v94) )
      {
        TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v95, v94);
        v18 = HIDWORD(v95);
        v15 = DWORD2(v95);
        v8 = DWORD1(v95);
        v16 = v95;
      }
      else
      {
        v83 = 1;
      }
      (*(void (__fastcall **)(const struct CShape *, struct CShape **))(*(_QWORD *)v87 + 40LL))(v87, v94);
    }
  }
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v14, 0x77Du, 0LL);
    return (unsigned int)v14;
  }
  v22 = CWindowNode::ApplyTextureToLocalTransform((__int64)v92[0], (__int64 *)v86, (CMILMatrix *)v89, &v93);
  v14 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x781u, 0LL);
    return (unsigned int)v14;
  }
  if ( v18 > v8 && v15 > v16 && *(float *)&v93.right > *(float *)&v93.left && *(float *)&v93.bottom > *(float *)&v93.top )
  {
    v24 = v92[0];
    v25 = v86;
    v94[0] = 0LL;
    if ( v86 == (struct IBitmapResource *)((*((_QWORD *)v92[0] + 108) + 64LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v92[0] + 108) >> 64)) )
    {
      if ( CDrawingContext::DrawAsOverlay(a2, v86) )
        goto LABEL_104;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v89[0] - 1.0) & _xmm) >= 0.0000011920929
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(v89[5] - 1.0) & _xmm) >= 0.0000011920929 )
      {
        v10 = 2;
        v110 = 1;
        v109 = 2;
      }
    }
    v90 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v89);
    v26 = *((_DWORD *)a2 + 102);
    v93 = 0LL;
    *(_OWORD *)v92 = 0LL;
    if ( v26 )
      v27 = (void *)(*((_QWORD *)a2 + 53) + 68LL * (unsigned int)(v26 - 1));
    else
      v27 = &CMILMatrix::Identity;
    CMILMatrix::Transform2DBoundsHelper<1>(v27, &v90, &v93);
    v28 = (void (__fastcall ***)(_QWORD, struct IBitmapResource **))(*((_QWORD *)a2 + 4)
                                                                   + 8LL
                                                                   + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL)
                                                                            + 16LL));
    (**v28)(v28, &v86);
    v29 = (_QWORD *)((char *)a2 + 936);
    v30 = *((_DWORD *)a2 + 240);
    v31 = (float)(int)v86;
    v32 = (float)SHIDWORD(v86);
    if ( v30 && *(_DWORD *)(84LL * (unsigned int)(v30 - 1) + *v29) )
    {
      v33 = *((_DWORD *)a2 + 800);
      if ( !v33 )
      {
        v34 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v35 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
        v31 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
        v32 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
        goto LABEL_21;
      }
      *(_OWORD *)v92 = *(_OWORD *)(*((_QWORD *)a2 + 402) + 16LL * (unsigned int)(v33 - 1));
      v32 = *((float *)&v92[1] + 1);
      v31 = *(float *)&v92[1];
    }
    v34 = *(float *)v92;
    v35 = *((float *)v92 + 1);
LABEL_21:
    if ( v30 && *(_DWORD *)(84LL * (unsigned int)(v30 - 1) + *v29 + 4) )
    {
      if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(136LL * (unsigned int)(*((_DWORD *)a2 + 458) - 1) + *((_QWORD *)a2 + 226) + 112LL) )
      {
        CScopedClipStack::ComputeCpuClipBoundsInScope((struct CDrawingContext *)((char *)a2 + 936));
        v65 = *((_DWORD *)a2 + 458);
      }
      v66 = 136LL * (unsigned int)(v65 - 1);
      v67 = *((_QWORD *)a2 + 226);
      if ( *(float *)(v66 + v67 + 112) > v34 )
        v34 = *(float *)(v66 + v67 + 112);
      v68 = v35;
      if ( *(float *)(v66 + v67 + 116) > v35 )
      {
        v35 = *(float *)(v66 + v67 + 116);
        v68 = v35;
      }
      v69 = v31;
      if ( v31 > *(float *)(v66 + v67 + 120) )
      {
        v31 = *(float *)(v66 + v67 + 120);
        v69 = v31;
      }
      v70 = v32;
      if ( v32 > *(float *)(v66 + v67 + 124) )
      {
        v32 = *(float *)(v66 + v67 + 124);
        v70 = v32;
      }
      if ( v69 <= v34 || v70 <= v68 )
      {
        v32 = 0.0;
        v31 = 0.0;
        v35 = 0.0;
        v34 = 0.0;
      }
    }
    v36 = *(float *)&v93.left;
    if ( v34 > *(float *)&v93.left )
      v36 = v34;
    v37 = *(float *)&v93.top;
    v38 = *(float *)&v93.top;
    if ( v35 > *(float *)&v93.top )
    {
      v37 = v35;
      v38 = v35;
    }
    v39 = *(float *)&v93.right;
    v40 = *(float *)&v93.right;
    if ( *(float *)&v93.right > v31 )
    {
      v39 = v31;
      v40 = v31;
    }
    v41 = *(float *)&v93.bottom;
    v42 = *(float *)&v93.bottom;
    if ( *(float *)&v93.bottom > v32 )
    {
      v41 = v32;
      v42 = v32;
    }
    if ( v40 <= v36 || (v43 = 0, v42 <= v38) )
      v43 = 1;
    if ( v43 )
    {
      v41 = 0.0;
      v39 = 0.0;
      v37 = 0.0;
      v36 = 0.0;
      v40 = 0.0;
      v42 = 0.0;
    }
    if ( v40 <= v36 )
      goto LABEL_65;
    if ( v42 <= v37 )
      goto LABEL_65;
    v44 = *((_QWORD *)a2 + 742);
    if ( v44 )
    {
      if ( v39 <= v36 )
        goto LABEL_65;
      if ( v41 <= v37 )
        goto LABEL_65;
      *(float *)&v93.left = v36;
      *(float *)&v93.top = v37;
      *(float *)&v93.right = v39;
      *(float *)&v93.bottom = v41;
      if ( (unsigned __int8)CArrayBasedCoverageSet::IsCovered(v44 + 408, &v93, a7) )
        goto LABEL_65;
    }
    v97 = 0LL;
    v96 = &CRectanglesShape::`vftable';
    v98 = v102;
    v99 = v102;
    v100 = 1;
    v101 = 1LL;
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v102);
    v103 = 0LL;
    HIDWORD(v101) = 0;
    DynArrayImpl<0>::ShrinkToSize(&v98, 16LL);
    if ( v103 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
      v103 = 0LL;
    }
    v93 = v90;
    DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      (__int64)&v98,
      &v93,
      1LL);
    v105 = 0LL;
    v104 = &CRegionShape::`vftable';
    v107[0] = 0;
    lpMem = v107;
    v108 = 0LL;
    CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>(
      (const struct FastRegion::Internal::CRgnData **)&lpMem,
      (__int64)&v95,
      1u);
    *(_QWORD *)&v90.right = 0LL;
    v91 = 1;
    if ( v87 )
    {
      if ( !v83 )
      {
        *(_QWORD *)&v90.left = v94;
        v14 = CShape::Combine(&v96, v45, v87, 0LL, 1, &v90.right);
        if ( v91 )
        {
          v46 = *(_QWORD *)&v90.left;
          v47 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v90.left;
          **(_QWORD **)&v90.left = *(_QWORD *)&v90.right;
          if ( v47 )
            std::default_delete<CShape>::operator()(v46, v47);
        }
        if ( v14 >= 0 )
          goto LABEL_49;
        v81 = 1969;
LABEL_101:
        v64 = v14;
LABEL_102:
        MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v64, v81, 0LL);
LABEL_103:
        CRegionShape::~CRegionShape((CRegionShape *)&v104);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v96);
LABEL_104:
        if ( v94[0] )
          std::default_delete<CShape>::operator()(v63, (__int64 (__fastcall ***)(_QWORD, __int64))v94[0]);
        return (unsigned int)v14;
      }
      v92[0] = 0LL;
      *(_QWORD *)&v90.left = v92;
      v14 = CShape::Combine(v87, v45, &v104, 0LL, 1, &v90.right);
      if ( v91 )
      {
        v73 = *(_QWORD *)&v90.left;
        v72 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v90.left;
        **(_QWORD **)&v90.left = *(_QWORD *)&v90.right;
        if ( v72 )
          std::default_delete<CShape>::operator()(v73, v72);
      }
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v14, 0x7BCu, 0LL);
      }
      else
      {
        *(_QWORD *)&v90.left = v94;
        *(_QWORD *)&v90.right = 0LL;
        v91 = 1;
        v14 = CShape::Combine(&v96, v72, v92[0], 0LL, 1, &v90.right);
        if ( v91 )
        {
          v74 = *(_QWORD *)&v90.left;
          v75 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v90.left;
          **(_QWORD **)&v90.left = *(_QWORD *)&v90.right;
          if ( v75 )
            std::default_delete<CShape>::operator()(v74, v75);
        }
        if ( v14 >= 0 )
        {
          if ( v92[0] )
            std::default_delete<CShape>::operator()(v74, (__int64 (__fastcall ***)(_QWORD, __int64))v92[0]);
          goto LABEL_49;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v14, 0x7C1u, 0LL);
      }
      if ( v92[0] )
        std::default_delete<CShape>::operator()(v80, (__int64 (__fastcall ***)(_QWORD, __int64))v92[0]);
      goto LABEL_103;
    }
    *(_QWORD *)&v90.left = v94;
    v14 = CShape::Combine(&v96, v45, &v104, 0LL, 1, &v90.right);
    if ( v91 )
    {
      v46 = *(_QWORD *)&v90.left;
      v71 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v90.left;
      **(_QWORD **)&v90.left = *(_QWORD *)&v90.right;
      if ( v71 )
        std::default_delete<CShape>::operator()(v46, v71);
    }
    if ( v14 < 0 )
    {
      v81 = 1960;
      goto LABEL_101;
    }
LABEL_49:
    v90 = 0LL;
    v93 = 0LL;
    AlphaMarginsRects = CWindowNode::GetAlphaMarginsRects((__int64)v24, v88, &v95, &v90, &v93);
    v49 = *((_DWORD *)a2 + 75);
    if ( v49 != *((_DWORD *)a2 + 70) && v49 != 5 )
    {
      v10 |= 0x10u;
      v111 = *((_DWORD *)a2 + 75);
      v109 = v10;
    }
    if ( AlphaMarginsRects && v85 )
    {
      if ( v25 != (struct IBitmapResource *)((*((_QWORD *)v24 + 108) + 64LL) & -(__int64)(*((_QWORD *)v24 + 108) != 0LL))
        && CDrawingContext::ShouldUseGDIAlphaMarginsLinearInterpolation(a2) )
      {
        v10 |= 2u;
        v110 = -16777215;
        v109 = v10;
      }
      if ( !v10 )
      {
LABEL_76:
        if ( !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v90)
          && !(unsigned __int8)CDrawingContext::IsOccluded((__int64)a2, (__int64)&v90) )
        {
          v92[0] = 0LL;
          CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v109, &v90);
          *(_QWORD *)&v90.left = v92;
          *(_QWORD *)&v90.right = 0LL;
          v91 = 1;
          v14 = CShape::Combine(&v109, v55, v94[0], 0LL, 1, &v90.right);
          if ( v91 )
          {
            v56 = *(_QWORD *)&v90.left;
            v57 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v90.left;
            **(_QWORD **)&v90.left = *(_QWORD *)&v90.right;
            if ( v57 )
              std::default_delete<CShape>::operator()(v56, v57);
          }
          if ( v14 < 0 )
          {
            v82 = 2048;
            goto LABEL_150;
          }
          v58 = CDrawingContext::FillShapeWithBitmap(a2, v25, (const struct CMILMatrix *)v89, v92[0], 0, a7);
          v14 = v58;
          if ( v58 < 0 )
          {
            v82 = 2056;
LABEL_147:
            v77 = v58;
            goto LABEL_151;
          }
          CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v109);
          if ( v92[0] )
            std::default_delete<CShape>::operator()(v59, (__int64 (__fastcall ***)(_QWORD, __int64))v92[0]);
        }
        if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v93)
          || (unsigned __int8)CDrawingContext::IsOccluded((__int64)a2, (__int64)&v93) )
        {
          goto LABEL_53;
        }
        v92[0] = 0LL;
        CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v109, &v93);
        *(_QWORD *)&v90.left = v92;
        *(_QWORD *)&v90.right = 0LL;
        v91 = 1;
        v14 = CShape::Combine(&v109, v60, v94[0], 0LL, 1, &v90.right);
        if ( v91 )
        {
          v56 = *(_QWORD *)&v90.left;
          v61 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v90.left;
          **(_QWORD **)&v90.left = *(_QWORD *)&v90.right;
          if ( v61 )
            std::default_delete<CShape>::operator()(v56, v61);
        }
        if ( v14 >= 0 )
        {
          v58 = CDrawingContext::FillShapeWithBitmap(a2, v25, (const struct CMILMatrix *)v89, v92[0], v85, a7);
          v14 = v58;
          if ( v58 >= 0 )
          {
            CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v109);
            if ( v92[0] )
              std::default_delete<CShape>::operator()(v62, (__int64 (__fastcall ***)(_QWORD, __int64))v92[0]);
            goto LABEL_53;
          }
          v82 = 2076;
          goto LABEL_147;
        }
        v82 = 2069;
LABEL_150:
        v77 = v14;
LABEL_151:
        MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v77, v82, 0LL);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v109);
        if ( v92[0] )
          std::default_delete<CShape>::operator()(v78, (__int64 (__fastcall ***)(_QWORD, __int64))v92[0]);
        goto LABEL_156;
      }
      v76 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v109, 1);
      v14 = v76;
      if ( v76 >= 0 )
      {
        v84 = 1;
        goto LABEL_76;
      }
      v81 = 2034;
      goto LABEL_144;
    }
    if ( v10 )
    {
      v76 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v109, 1);
      v14 = v76;
      if ( v76 < 0 )
      {
        v81 = 2008;
LABEL_144:
        v64 = v76;
        goto LABEL_102;
      }
      v84 = 1;
    }
    v50 = CDrawingContext::FillShapeWithBitmap(a2, v25, (const struct CMILMatrix *)v89, v94[0], v85, a7);
    v14 = v50;
    if ( v50 >= 0 )
    {
LABEL_53:
      if ( v108 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v108 + 16LL))(v108);
      if ( v107 != lpMem )
      {
        operator delete(lpMem);
        v107[0] = 0;
        lpMem = v107;
      }
      v52 = v105;
      if ( v105 )
      {
        v105 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
      }
      HIDWORD(v101) = 0;
      v96 = &CRectanglesShape::`vftable';
      DynArrayImpl<0>::ShrinkToSize(&v98, 16LL);
      if ( v103 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
        v103 = 0LL;
      }
      if ( v98 != v99 )
      {
        operator delete(v98);
        v98 = 0LL;
      }
      v53 = v97;
      if ( v97 )
      {
        v97 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
      }
LABEL_65:
      if ( v94[0] )
        (**(void (__fastcall ***)(struct CShape *, __int64))v94[0])(v94[0], 1LL);
      goto LABEL_67;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x7E0u, 0LL);
LABEL_156:
    CRegionShape::~CRegionShape((CRegionShape *)&v104);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v96);
    if ( v94[0] )
      std::default_delete<CShape>::operator()(v79, (__int64 (__fastcall ***)(_QWORD, __int64))v94[0]);
    goto LABEL_67;
  }
  return (unsigned int)v14;
}
