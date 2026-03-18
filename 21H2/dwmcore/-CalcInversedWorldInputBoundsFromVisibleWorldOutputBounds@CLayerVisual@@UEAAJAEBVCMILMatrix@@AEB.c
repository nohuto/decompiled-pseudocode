/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180222DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800CBC90 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1800D0448 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x180223308 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802235D0 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x1802236A0 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802236D0 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802237CC (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180260414 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 */

__int64 __fastcall CLayerVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CLayerVisual *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        _OWORD *a6)
{
  bool v6; // zf
  int BoundsWithLayerEffect; // eax
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned int v14; // ebx
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm5_4
  float v23; // xmm3_4
  int v24; // xmm1_4
  int v25; // eax
  __int64 v26; // rcx
  int ShadowBounds; // eax
  __int64 v28; // rcx
  __int64 v29; // r9
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm4_4
  float v36; // xmm3_4
  float v37; // xmm0_4
  void *v38; // rdx
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm4_4
  float v46; // xmm1_4
  __int64 v47; // r9
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm2_4
  float v52; // xmm1_4
  float v53; // xmm3_4
  float v54; // xmm4_4
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  float v59; // xmm1_4
  int v60; // xmm1_4
  __int128 v61; // xmm0
  int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // rcx
  __int128 v66; // xmm1
  __int128 v68; // [rsp+30h] [rbp-B9h] BYREF
  __int128 v69; // [rsp+40h] [rbp-A9h]
  __int128 v70; // [rsp+50h] [rbp-99h]
  __int128 v71; // [rsp+60h] [rbp-89h]
  int v72; // [rsp+70h] [rbp-79h]
  __int128 v73; // [rsp+80h] [rbp-69h] BYREF
  __int128 v74; // [rsp+90h] [rbp-59h] BYREF
  __int128 v75; // [rsp+A0h] [rbp-49h] BYREF
  int v76; // [rsp+B0h] [rbp-39h]
  int v77; // [rsp+B4h] [rbp-35h]
  __int128 v78; // [rsp+B8h] [rbp-31h] BYREF
  int v79; // [rsp+C8h] [rbp-21h]
  int v80; // [rsp+CCh] [rbp-1Dh]
  __int128 v81; // [rsp+D0h] [rbp-19h] BYREF

  v6 = *((_QWORD *)this + 91) == 0LL;
  v73 = 0LL;
  if ( v6 )
  {
    BoundsWithLayerEffect = CLayerVisual::GetBoundsWithLayerEffect(this, &v73);
    v14 = BoundsWithLayerEffect;
    if ( BoundsWithLayerEffect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, BoundsWithLayerEffect, 0x10Eu);
    }
    else
    {
      CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)&v73, (float *)&v73, v13);
      v15 = *(float *)a3;
      LODWORD(v16) = v73;
      if ( *(float *)a3 > *(float *)&v73 )
      {
        LODWORD(v73) = *(_DWORD *)a3;
        v16 = v15;
      }
      v17 = *((float *)&v73 + 1);
      v18 = *(float *)(a3 + 4);
      v19 = *((float *)&v73 + 1);
      if ( v18 > *((float *)&v73 + 1) )
      {
        DWORD1(v73) = *(_DWORD *)(a3 + 4);
        v17 = v18;
        v19 = v18;
      }
      v20 = *(float *)(a3 + 8);
      v21 = *((float *)&v73 + 2);
      if ( *((float *)&v73 + 2) > v20 )
      {
        DWORD2(v73) = *(_DWORD *)(a3 + 8);
        v21 = v20;
      }
      v22 = *(float *)(a3 + 12);
      v23 = *((float *)&v73 + 3);
      if ( *((float *)&v73 + 3) > v22 )
      {
        HIDWORD(v73) = *(_DWORD *)(a3 + 12);
        v23 = v22;
      }
      if ( v21 <= v16 || v23 <= v19 )
      {
        v16 = 0.0;
        v17 = 0.0;
        v21 = 0.0;
        v73 = 0uLL;
        v23 = 0.0;
      }
      *(_QWORD *)&v78 = __PAIR64__(LODWORD(v17), LODWORD(v16));
      v24 = *(_DWORD *)(a3 + 20);
      v79 = *(_DWORD *)(a3 + 16);
      v80 = v24;
      *((_QWORD *)&v78 + 1) = __PAIR64__(LODWORD(v23), LODWORD(v21));
      v25 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(this, a2, &v78, a4, a5, a6);
      v14 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x120u);
    }
    return v14;
  }
  v78 = 0LL;
  v74 = 0LL;
  v81 = 0LL;
  ShadowBounds = CLayerVisual::GetShadowBounds(this, &v73);
  v14 = ShadowBounds;
  if ( ShadowBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, ShadowBounds, 0x12Au);
    return v14;
  }
  if ( CLayerVisual::GetFlatteningToLocalSpace(this) )
  {
    v39 = *(_OWORD *)(a2 + 16);
    v72 = *(_DWORD *)(a2 + 64);
    v75 = 0LL;
    v40 = *(_OWORD *)a2;
    v69 = v39;
    v41 = *(_OWORD *)(a2 + 48);
    v68 = v40;
    v42 = *(_OWORD *)(a2 + 32);
    v71 = v41;
    v70 = v42;
    if ( (unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(&v68, a3, &v75) )
    {
      v43 = *(float *)&v73;
      if ( *(float *)&v75 > *(float *)&v73 )
      {
        LODWORD(v73) = v75;
        v43 = *(float *)&v75;
      }
      v44 = *((float *)&v73 + 1);
      if ( *((float *)&v75 + 1) > *((float *)&v73 + 1) )
      {
        DWORD1(v73) = DWORD1(v75);
        v44 = *((float *)&v75 + 1);
      }
      v45 = *((float *)&v73 + 2);
      if ( *((float *)&v73 + 2) > *((float *)&v75 + 2) )
      {
        DWORD2(v73) = DWORD2(v75);
        v45 = *((float *)&v75 + 2);
      }
      v46 = *((float *)&v73 + 3);
      if ( *((float *)&v73 + 3) > *((float *)&v75 + 3) )
      {
        HIDWORD(v73) = HIDWORD(v75);
        v46 = *((float *)&v75 + 3);
      }
      if ( v45 <= v43 || v46 <= v44 )
        v73 = 0uLL;
    }
    v38 = &CMILMatrix::Identity;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)&v73, (float *)&v73, v29);
    v30 = *(float *)a3;
    v31 = *(float *)&v73;
    if ( *(float *)a3 > *(float *)&v73 )
    {
      LODWORD(v73) = *(_DWORD *)a3;
      v31 = v30;
    }
    v32 = *(float *)(a3 + 4);
    v33 = *((float *)&v73 + 1);
    if ( v32 > *((float *)&v73 + 1) )
    {
      DWORD1(v73) = *(_DWORD *)(a3 + 4);
      v33 = v32;
    }
    v34 = *(float *)(a3 + 8);
    v35 = *((float *)&v73 + 2);
    if ( *((float *)&v73 + 2) > v34 )
    {
      DWORD2(v73) = *(_DWORD *)(a3 + 8);
      v35 = v34;
    }
    v36 = *(float *)(a3 + 12);
    v37 = *((float *)&v73 + 3);
    if ( *((float *)&v73 + 3) > v36 )
    {
      HIDWORD(v73) = *(_DWORD *)(a3 + 12);
      v37 = v36;
    }
    if ( v35 <= v31 || v37 <= v33 )
      v73 = 0uLL;
    LODWORD(v38) = a2;
  }
  CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
    (_DWORD)this,
    (_DWORD)v38,
    (unsigned int)&v73,
    (unsigned int)&v81,
    (__int64)&v78);
  CLayerVisual::GetMaskBounds(this);
  if ( !CLayerVisual::GetFlatteningToLocalSpace(this) )
  {
    CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)&v74, (float *)&v74, v47);
    v48 = *(float *)a3;
    v49 = *(float *)&v74;
    if ( *(float *)a3 > *(float *)&v74 )
    {
      LODWORD(v74) = *(_DWORD *)a3;
      v49 = v48;
    }
    v50 = *(float *)(a3 + 4);
    v51 = *((float *)&v74 + 1);
    if ( v50 > *((float *)&v74 + 1) )
    {
      DWORD1(v74) = *(_DWORD *)(a3 + 4);
      v51 = v50;
    }
    v52 = *(float *)(a3 + 8);
    v53 = *((float *)&v74 + 2);
    if ( *((float *)&v74 + 2) > v52 )
    {
      DWORD2(v74) = *(_DWORD *)(a3 + 8);
      v53 = v52;
    }
    v54 = *(float *)(a3 + 12);
LABEL_60:
    v59 = *((float *)&v74 + 3);
    if ( *((float *)&v74 + 3) > v54 )
    {
      *((float *)&v74 + 3) = v54;
      v59 = v54;
    }
    if ( v53 <= v49 || v59 <= v51 )
      v74 = 0uLL;
    goto LABEL_65;
  }
  v55 = *(_OWORD *)(a2 + 16);
  v72 = *(_DWORD *)(a2 + 64);
  v75 = 0LL;
  v56 = *(_OWORD *)a2;
  v69 = v55;
  v57 = *(_OWORD *)(a2 + 48);
  v68 = v56;
  v58 = *(_OWORD *)(a2 + 32);
  v71 = v57;
  v70 = v58;
  if ( (unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(&v68, a3, &v75) )
  {
    v49 = *(float *)&v74;
    if ( *(float *)&v75 > *(float *)&v74 )
    {
      LODWORD(v74) = v75;
      v49 = *(float *)&v75;
    }
    v51 = *((float *)&v74 + 1);
    if ( *((float *)&v75 + 1) > *((float *)&v74 + 1) )
    {
      DWORD1(v74) = DWORD1(v75);
      v51 = *((float *)&v75 + 1);
    }
    v53 = *((float *)&v74 + 2);
    if ( *((float *)&v74 + 2) > *((float *)&v75 + 2) )
    {
      DWORD2(v74) = DWORD2(v75);
      v53 = *((float *)&v75 + 2);
    }
    v54 = *((float *)&v75 + 3);
    goto LABEL_60;
  }
LABEL_65:
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v81, (float *)&v74);
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v78, (float *)&v74);
  if ( CDropShadow::GetMaskForLayerVisualNoRef(*((CDropShadow **)this + 91)) )
  {
    v66 = v78;
    *a5 = v81;
    *a6 = v66;
  }
  else
  {
    v60 = *(_DWORD *)(a3 + 20);
    v78 = v81;
    v79 = *(_DWORD *)(a3 + 16);
    v80 = v60;
    if ( CLayerVisual::GetFlatteningToLocalSpace(this) )
    {
      v61 = *(_OWORD *)((char *)this + 172);
      v76 = 0;
      v77 = 0;
      v75 = v61;
      v62 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
              this,
              (__int64)&CMILMatrix::Identity,
              &v78,
              (__int64)&v75,
              a5,
              a6);
      v14 = v62;
      if ( v62 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0LL, v62, 0x192u);
    }
    else
    {
      v64 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(this, a2, &v78, a4, a5, a6);
      v14 = v64;
      if ( v64 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0LL, v64, 0x19Fu);
    }
  }
  return v14;
}
