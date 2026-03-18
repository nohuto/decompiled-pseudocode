/*
 * XREFs of ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x1800B1268
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800B0C64 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x1801AFCE0 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_1801AFCE0.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801B1BD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008A238 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AE6D8 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D1D9C (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetUnOccludedWorldShape(
        CDrawingContext *this,
        const struct CShape *a2,
        int a3,
        struct CShape **a4)
{
  __int64 v5; // r14
  unsigned int v9; // r15d
  int v10; // eax
  void *v11; // rdi
  void *v12; // r11
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // eax
  void *v17; // rcx
  void (__fastcall ***v18)(_QWORD, _DWORD *); // rcx
  int v19; // r8d
  int v20; // eax
  float v21; // xmm3_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm4_4
  float v25; // xmm5_4
  float v26; // xmm3_4
  float v27; // xmm7_4
  float v28; // xmm6_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  int v32; // r8d
  __int64 v33; // rdx
  float v34; // xmm8_4
  __int64 v35; // r9
  __int64 v36; // rcx
  int v38; // edx
  float *v39; // rcx
  unsigned int v40; // r8d
  float v41; // xmm5_4
  float v42; // xmm4_4
  float v43; // xmm7_4
  float v44; // xmm1_4
  float v45; // xmm10_4
  float v46; // xmm9_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  __int64 (__fastcall *v49)(const struct CShape *, __int128 *, void *, struct CShape **); // r11
  int v50; // eax
  int v51; // eax
  __int64 v52; // rcx
  float v53; // xmm7_4
  float v54; // xmm6_4
  float v55; // xmm0_4
  _DWORD v56[2]; // [rsp+38h] [rbp-89h] BYREF
  __int128 v57; // [rsp+40h] [rbp-81h] BYREF
  float v58[6]; // [rsp+50h] [rbp-71h] BYREF
  __int128 v59; // [rsp+68h] [rbp-59h] BYREF
  __int128 v60; // [rsp+78h] [rbp-49h] BYREF

  *a4 = 0LL;
  v5 = *((_QWORD *)this + 993);
  v9 = -2003304309;
  if ( !v5
    || !(*(unsigned __int8 (__fastcall **)(const struct CShape *, _QWORD))(*(_QWORD *)a2 + 64LL))(a2, 0LL)
    || !a3
    || (**((unsigned __int8 (__fastcall ***)(char *))this + 3))((char *)this + 24) )
  {
    return v9;
  }
  v10 = *((_DWORD *)this + 92);
  v11 = &CMILMatrix::Identity;
  v12 = v10 ? (void *)(*((_QWORD *)this + 48) + 68LL * (unsigned int)(v10 - 1)) : &CMILMatrix::Identity;
  if ( !CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v12)
    && !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(v13) )
  {
    return v9;
  }
  v14 = *(_QWORD *)a2;
  v60 = 0LL;
  if ( (*(int (__fastcall **)(const struct CShape *, __int128 *, _QWORD))(v14 + 48))(a2, &v60, 0LL) < 0 )
    return v9;
  v16 = *((_DWORD *)this + 92);
  *(_OWORD *)v58 = 0LL;
  v57 = 0LL;
  if ( v16 )
    v17 = (void *)(*((_QWORD *)this + 48) + 68LL * (unsigned int)(v16 - 1));
  else
    v17 = &CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<1>((__int64)v17, (__int64)&v60, v58, v15);
  v18 = (void (__fastcall ***)(_QWORD, _DWORD *))(*((_QWORD *)this + 4)
                                                + 8LL
                                                + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL));
  (**v18)(v18, v56);
  *(_QWORD *)&v59 = 0LL;
  v19 = *((_DWORD *)this + 222);
  *((float *)&v59 + 2) = (float)v56[0];
  *((float *)&v59 + 3) = (float)v56[1];
  if ( v19 && *(_DWORD *)(88LL * (unsigned int)(v19 - 1) + *((_QWORD *)this + 108)) )
  {
    v20 = *((_DWORD *)this + 732);
    if ( !v20 )
    {
      v21 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v22 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      v23 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v24 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
LABEL_16:
      if ( *(_DWORD *)(88LL * (unsigned int)(v19 - 1) + *((_QWORD *)this + 108) + 8) )
      {
        v57 = 0LL;
        CBaseClipStack::Top((unsigned int *)this + 740, &v57);
        if ( *(float *)&v57 > v21 )
          v21 = *(float *)&v57;
        v53 = v22;
        if ( *((float *)&v57 + 1) > v22 )
        {
          v22 = *((float *)&v57 + 1);
          v53 = *((float *)&v57 + 1);
        }
        v54 = v23;
        if ( v23 > *((float *)&v57 + 2) )
        {
          v23 = *((float *)&v57 + 2);
          v54 = *((float *)&v57 + 2);
        }
        v55 = v24;
        if ( v24 > *((float *)&v57 + 3) )
        {
          v24 = *((float *)&v57 + 3);
          v55 = *((float *)&v57 + 3);
        }
        if ( v54 <= v21 || v55 <= v53 )
        {
          v24 = 0.0;
          v23 = 0.0;
          v22 = 0.0;
          v21 = 0.0;
        }
      }
      goto LABEL_17;
    }
    v57 = *(_OWORD *)(*((_QWORD *)this + 368) + 16LL * (unsigned int)(v20 - 1));
LABEL_15:
    v21 = *(float *)&v57;
    v22 = *((float *)&v57 + 1);
    v23 = *((float *)&v57 + 2);
    v24 = *((float *)&v57 + 3);
    goto LABEL_16;
  }
  v57 = v59;
  if ( v19 )
    goto LABEL_15;
  v24 = *((float *)&v57 + 3);
  v23 = *((float *)&v57 + 2);
  v22 = *((float *)&v57 + 1);
  v21 = *(float *)&v57;
LABEL_17:
  v25 = v58[0];
  if ( v21 > v58[0] )
    v25 = v21;
  v26 = v58[1];
  v27 = v58[1];
  if ( v22 > v58[1] )
  {
    v26 = v22;
    v27 = v22;
  }
  v28 = v58[2];
  v29 = v58[2];
  if ( v58[2] > v23 )
  {
    v28 = v23;
    v29 = v23;
  }
  v30 = v58[3];
  v31 = v58[3];
  if ( v58[3] > v24 )
  {
    v30 = v24;
    v31 = v24;
  }
  if ( v29 <= v25 || v31 <= v27 )
  {
    v30 = 0.0;
    v28 = 0.0;
    v26 = 0.0;
  }
  v32 = *(_DWORD *)(v5 + 472);
  v33 = 0LL;
  v34 = 0.0;
  *(_OWORD *)v58 = 0LL;
  if ( v32 )
  {
    v35 = *(_QWORD *)(v5 + 448);
    do
    {
      v36 = v35 + 36 * v33;
      if ( *(_DWORD *)(v36 + 16) >= a3 )
        break;
      if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v36) )
      {
        v42 = v41;
        v43 = v26;
        v44 = v28;
        if ( *v39 > v41 )
          v42 = *v39;
        v45 = v26;
        if ( v39[1] > v26 )
        {
          v43 = v39[1];
          v45 = v43;
        }
        v46 = v28;
        if ( v28 > v39[2] )
        {
          v44 = v39[2];
          v46 = v44;
        }
        v47 = v30;
        if ( v30 > v39[3] )
          v47 = v39[3];
        if ( v46 > v42 && v47 > v45 )
        {
          v48 = (float)(v44 - v42) * (float)(v47 - v43);
          if ( v48 > v34 )
          {
            v34 = v48;
            *(_OWORD *)v58 = *(_OWORD *)v39;
          }
        }
      }
      v33 = (unsigned int)(v38 + 1);
    }
    while ( (unsigned int)v33 < v40 );
    if ( v34 > 0.0 )
    {
      v49 = *(__int64 (__fastcall **)(const struct CShape *, __int128 *, void *, struct CShape **))(*(_QWORD *)a2 + 96LL);
      v50 = *((_DWORD *)this + 92);
      v59 = *(_OWORD *)v58;
      if ( v50 )
        v11 = (void *)(*((_QWORD *)this + 48) + 68LL * (unsigned int)(v50 - 1));
      v51 = v49(a2, &v59, v11, a4);
      v9 = v51;
      if ( v51 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0LL, v51, 0x140Fu);
    }
  }
  return v9;
}
