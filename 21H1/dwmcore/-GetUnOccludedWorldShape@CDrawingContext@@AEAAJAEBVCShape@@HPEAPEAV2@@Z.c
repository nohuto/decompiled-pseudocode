/*
 * XREFs of ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x180049320
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800497D4 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NH@Z @ 0x1801791AC (-DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18017B140 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18002F788 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A6070 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AC3B0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7A7C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800BC3E4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x180192798 (-ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::GetUnOccludedWorldShape(
        CDrawingContext *this,
        const struct CShape *a2,
        int a3,
        struct CShape **a4)
{
  char v4; // r14
  __int64 v6; // rsi
  const struct CShape *v7; // r12
  unsigned int v9; // r13d
  int v10; // eax
  CMatrixStack *v11; // r15
  int v12; // eax
  void *v13; // rdi
  void *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  void (__fastcall ***v17)(_QWORD, _DWORD *); // rcx
  char *v18; // rbx
  int v19; // r8d
  float v20; // xmm8_4
  float v21; // xmm9_4
  int v22; // eax
  float v23; // xmm7_4
  float v24; // xmm6_4
  float v25; // xmm10_4
  float v26; // xmm7_4
  float v27; // xmm2_4
  float v28; // xmm6_4
  float v29; // xmm1_4
  float v30; // xmm8_4
  float v31; // xmm0_4
  int v32; // r9d
  int v33; // edi
  __int64 v34; // r8
  float v35; // xmm9_4
  __int64 v36; // rdx
  __int64 v37; // r9
  __int64 v38; // rcx
  int v40; // edx
  float *v41; // rcx
  unsigned int v42; // r8d
  float v43; // xmm2_4
  float v44; // xmm3_4
  float v45; // xmm1_4
  float v46; // xmm5_4
  float v47; // xmm4_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  __int64 v50; // r11
  int v51; // ebx
  __int64 v52; // rcx
  char DoesIntersectUnsafe; // al
  int v54; // r8d
  unsigned int v55; // r9d
  int v56; // r10d
  __int128 v57; // xmm0
  const struct CMILMatrix *TopByReference; // rax
  __int64 (__fastcall *v59)(const struct CShape *, __int128 *, const struct CMILMatrix *, struct CShape **); // r10
  int v60; // eax
  __int64 v61; // rcx
  int v62; // r8d
  __int64 v63; // rax
  __int64 v64; // rcx
  float v65; // xmm3_4
  float v66; // xmm2_4
  float v67; // xmm1_4
  _DWORD v69[2]; // [rsp+40h] [rbp-91h] BYREF
  CMatrixStack *v70; // [rsp+48h] [rbp-89h]
  const struct CShape *v71; // [rsp+50h] [rbp-81h]
  struct CShape **v72; // [rsp+58h] [rbp-79h]
  float v73[6]; // [rsp+60h] [rbp-71h] BYREF
  __int128 v74; // [rsp+78h] [rbp-59h] BYREF
  __int128 v75; // [rsp+88h] [rbp-49h] BYREF

  v4 = 0;
  v72 = a4;
  *a4 = 0LL;
  v6 = *((_QWORD *)this + 742);
  v7 = a2;
  v71 = a2;
  v9 = -2003304309;
  if ( !v6 )
    return v9;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CShape *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, 0LL) )
    return v9;
  if ( !a3 )
    return v9;
  v10 = *((_DWORD *)this + 110);
  if ( v10 )
  {
    if ( *(_BYTE *)((unsigned int)(v10 - 1) + *((_QWORD *)this + 57)) )
      return v9;
  }
  v11 = (CDrawingContext *)((char *)this + 408);
  v12 = *((_DWORD *)this + 102);
  v13 = &CMILMatrix::Identity;
  v70 = (CDrawingContext *)((char *)this + 408);
  v14 = v12 ? (void *)(*((_QWORD *)this + 53) + 68LL * (unsigned int)(v12 - 1)) : &CMILMatrix::Identity;
  if ( !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v14) )
    return v9;
  v15 = *(_QWORD *)v7;
  v75 = 0LL;
  if ( (*(int (__fastcall **)(const struct CShape *, __int128 *, _QWORD))(v15 + 32))(v7, &v75, 0LL) < 0 )
    return v9;
  v16 = *(_DWORD *)v11;
  v74 = 0LL;
  *(_OWORD *)v73 = 0LL;
  if ( v16 )
    v13 = (void *)(*((_QWORD *)this + 53) + 68LL * (unsigned int)(v16 - 1));
  CMILMatrix::Transform2DBoundsHelper<1>(v13, &v75, &v74);
  v17 = (void (__fastcall ***)(_QWORD, _DWORD *))(*((_QWORD *)this + 4)
                                                + 8LL
                                                + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL));
  (**v17)(v17, v69);
  v18 = (char *)this + 936;
  v19 = *((_DWORD *)v18 + 6);
  v20 = (float)v69[0];
  v21 = (float)v69[1];
  if ( !v19 || !*(_DWORD *)(84LL * (unsigned int)(v19 - 1) + *(_QWORD *)v18) )
    goto LABEL_16;
  v22 = *((_DWORD *)v18 + 566);
  if ( v22 )
  {
    *(_OWORD *)v73 = *(_OWORD *)(*((_QWORD *)v18 + 285) + 16LL * (unsigned int)(v22 - 1));
    v21 = v73[3];
    v20 = v73[2];
LABEL_16:
    v23 = v73[0];
    v24 = v73[1];
    goto LABEL_17;
  }
  v23 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v24 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v20 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v21 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
LABEL_17:
  if ( v19 && *(_DWORD *)(84LL * (unsigned int)(v19 - 1) + *(_QWORD *)v18 + 4) )
  {
    if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(136LL * (unsigned int)(*((_DWORD *)v18 + 224) - 1) + *((_QWORD *)v18 + 109) + 112LL) )
    {
      CScopedClipStack::ComputeCpuClipBoundsInScope((CScopedClipStack *)v18);
      v62 = *((_DWORD *)v18 + 224);
    }
    v63 = 136LL * (unsigned int)(v62 - 1);
    v64 = *((_QWORD *)v18 + 109);
    if ( *(float *)(v63 + v64 + 112) > v23 )
      v23 = *(float *)(v63 + v64 + 112);
    v65 = v24;
    if ( *(float *)(v63 + v64 + 116) > v24 )
    {
      v24 = *(float *)(v63 + v64 + 116);
      v65 = v24;
    }
    v66 = v20;
    if ( v20 > *(float *)(v63 + v64 + 120) )
    {
      v20 = *(float *)(v63 + v64 + 120);
      v66 = v20;
    }
    v67 = v21;
    if ( v21 > *(float *)(v63 + v64 + 124) )
    {
      v21 = *(float *)(v63 + v64 + 124);
      v67 = v21;
    }
    if ( v66 <= v23 || v67 <= v65 )
    {
      v21 = 0.0;
      v20 = 0.0;
      v24 = 0.0;
      v23 = 0.0;
    }
  }
  LODWORD(v25) = v74;
  if ( v23 > *(float *)&v74 )
    v25 = v23;
  v26 = *((float *)&v74 + 1);
  v27 = *((float *)&v74 + 1);
  if ( v24 > *((float *)&v74 + 1) )
  {
    v26 = v24;
    v27 = v24;
  }
  v28 = *((float *)&v74 + 2);
  v29 = *((float *)&v74 + 2);
  if ( *((float *)&v74 + 2) > v20 )
  {
    v28 = v20;
    v29 = v20;
  }
  v30 = *((float *)&v74 + 3);
  v31 = *((float *)&v74 + 3);
  if ( *((float *)&v74 + 3) > v21 )
  {
    v30 = v21;
    v31 = v21;
  }
  if ( v29 <= v25 || v31 <= v27 )
  {
    v30 = 0.0;
    v28 = 0.0;
    v26 = 0.0;
    v25 = 0.0;
  }
  v32 = *(_DWORD *)(v6 + 824);
  v33 = 0;
  v34 = 0LL;
  *(_QWORD *)v73 = __PAIR64__(LODWORD(v26), LODWORD(v25));
  *(_QWORD *)&v73[2] = __PAIR64__(LODWORD(v30), LODWORD(v28));
  v35 = 0.0;
  v74 = 0LL;
  if ( v32 )
  {
    v50 = *(_QWORD *)(v6 + 800);
    do
    {
      v51 = v33;
      v52 = v50 + 36 * v34;
      if ( *(_DWORD *)(v52 + 16) > a3 )
        break;
      DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v52, v73);
      v33 = v56;
      if ( DoesIntersectUnsafe )
        v4 = 1;
      v34 = (unsigned int)(v54 + 1);
      if ( !DoesIntersectUnsafe )
        v33 = v51;
    }
    while ( (unsigned int)v34 < v55 );
    v11 = v70;
    v7 = v71;
  }
  v36 = 0LL;
  if ( *(_DWORD *)(v6 + 432) )
  {
    v37 = *(_QWORD *)(v6 + 408);
    do
    {
      v38 = v37 + 36 * v36;
      if ( *(_DWORD *)(v38 + 16) >= a3 )
        break;
      if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v38)
        && (!v4 || *((_DWORD *)v41 + 4) > v33) )
      {
        v43 = v25;
        v44 = v26;
        v45 = v28;
        if ( *v41 > v25 )
          v43 = *v41;
        v46 = v26;
        if ( v41[1] > v26 )
        {
          v44 = v41[1];
          v46 = v44;
        }
        v47 = v28;
        if ( v28 > v41[2] )
        {
          v45 = v41[2];
          v47 = v45;
        }
        v48 = v30;
        if ( v30 > v41[3] )
          v48 = v41[3];
        if ( v47 > v43 && v48 > v46 )
        {
          v49 = (float)(v45 - v43) * (float)(v48 - v44);
          if ( v49 > v35 )
          {
            v35 = v49;
            v74 = *(_OWORD *)v41;
          }
        }
      }
      v36 = (unsigned int)(v40 + 1);
    }
    while ( (unsigned int)v36 < v42 );
    v9 = -2003304309;
    if ( v35 > 0.0 )
    {
      v57 = v74;
      *(_OWORD *)v73 = v74;
      TopByReference = CMatrixStack::GetTopByReference(v11);
      v74 = v57;
      v60 = v59(v7, &v74, TopByReference, v72);
      v9 = v60;
      if ( v60 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v60, 0x13A7u, 0LL);
    }
  }
  return v9;
}
