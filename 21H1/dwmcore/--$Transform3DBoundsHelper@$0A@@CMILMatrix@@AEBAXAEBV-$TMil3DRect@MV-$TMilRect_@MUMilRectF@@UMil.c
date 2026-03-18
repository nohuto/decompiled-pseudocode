/*
 * XREFs of ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A57F0
 * Callers:
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180017664 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800176FC (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18004D8A0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E7C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180065300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180066A10 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180067460 (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008F7C8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180012D60 (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800182CC (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x180023550 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005C260 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ @ 0x1800A6324 (--$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x1800A63E0 (--$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@R.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800A6474 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall CMILMatrix::Transform3DBoundsHelper<0>(__int64 a1, __int64 a2, __m128 *a3)
{
  bool v5; // dl
  __int64 v6; // r11
  char v7; // r8
  float v8; // xmm5_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  unsigned __int8 result; // al
  float v12; // xmm9_4
  __m128 v13; // xmm3
  float v14; // xmm5_4
  __m128 v15; // xmm4
  float v16; // xmm1_4
  __m128 v17; // xmm3
  __m128 v18; // xmm3
  __m128 v19; // xmm3
  float *v20; // r11
  float *v21; // r11
  float v22; // xmm5_4
  float v23; // xmm10_4
  float *v24; // r11
  float v25; // xmm5_4
  float v26; // xmm0_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm6_4
  float v33; // xmm0_4
  float v34; // xmm6_4
  float v35; // xmm6_4
  float v36; // xmm6_4
  float v37; // xmm6_4
  float v38; // xmm6_4
  float v39; // xmm6_4
  float v40; // xmm6_4
  float v41; // xmm6_4
  float v42; // xmm6_4
  float v43; // xmm6_4
  float v44; // xmm6_4
  float v45; // xmm6_4
  float v46; // xmm6_4
  float v47; // xmm6_4
  float v48; // xmm6_4
  float v49; // xmm6_4
  float v50; // xmm6_4
  float v51; // xmm6_4
  float v52; // xmm6_4
  float v53; // xmm4_4
  float v54; // xmm2_4
  __int32 v55; // xmm0_4
  float v56; // xmm6_4
  float v57; // xmm4_4
  float v58; // xmm5_4
  float v59; // xmm3_4
  float v60; // xmm1_4
  __int64 v61; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE *v62; // [rsp+30h] [rbp-D8h]
  __int128 v63; // [rsp+48h] [rbp-C0h] BYREF
  float v64; // [rsp+58h] [rbp-B0h] BYREF
  float v65; // [rsp+5Ch] [rbp-ACh]
  float v66; // [rsp+60h] [rbp-A8h]
  float v67; // [rsp+64h] [rbp-A4h]
  float v68; // [rsp+68h] [rbp-A0h]
  float v69; // [rsp+6Ch] [rbp-9Ch]
  float v70; // [rsp+70h] [rbp-98h]
  float v71; // [rsp+74h] [rbp-94h]
  float v72; // [rsp+78h] [rbp-90h]
  float v73; // [rsp+7Ch] [rbp-8Ch]
  float v74; // [rsp+80h] [rbp-88h]
  float v75; // [rsp+84h] [rbp-84h]
  float v76; // [rsp+88h] [rbp-80h]
  float v77; // [rsp+8Ch] [rbp-7Ch]
  float v78; // [rsp+90h] [rbp-78h]
  float v79; // [rsp+94h] [rbp-74h]
  float v80; // [rsp+98h] [rbp-70h]
  float v81; // [rsp+9Ch] [rbp-6Ch]
  float v82; // [rsp+A0h] [rbp-68h]
  float v83; // [rsp+A4h] [rbp-64h]
  float v84; // [rsp+A8h] [rbp-60h]
  float v85; // [rsp+ACh] [rbp-5Ch]
  float v86; // [rsp+B0h] [rbp-58h]
  float v87; // [rsp+B4h] [rbp-54h]
  _BYTE v88[32]; // [rsp+B8h] [rbp-50h] BYREF

  if ( CMILMatrix::Is2DAffine<1>(a1, 1)
    && COERCE_FLOAT(*(_DWORD *)(a2 + 20) & _xmm) < 0.000081380211
    && COERCE_FLOAT(*(_DWORD *)(a2 + 16) & _xmm) < 0.000081380211 )
  {
    v7 = *(_BYTE *)(v6 + 64);
    v8 = *(float *)a2;
    v9 = *(float *)(a2 + 8);
    v10 = *(float *)(a2 + 4);
    result = (char)(4 * v7) >> 6;
    v12 = *(float *)(a2 + 12);
    LODWORD(v61) = *(_DWORD *)a2;
    v62 = (_BYTE *)__PAIR64__(LODWORD(v12), LODWORD(v9));
    *((float *)&v61 + 1) = v10;
    v63 = 0LL;
    if ( result )
    {
      v5 = result == v5;
    }
    else
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v6 - 1.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v6 + 4) - 0.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v6 + 12) - 0.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v6 + 16) - 0.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v6 + 20) - 1.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v6 + 28) - 0.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v6 + 60) - 1.0) & _xmm) >= 0.000081380211 )
      {
        v5 = 0;
      }
      result = 32 * v5;
      *(_BYTE *)(v6 + 64) = v7 ^ (v7 ^ (-16 - 32 * v5)) & 0x30;
      if ( v5 )
      {
        *(_BYTE *)(v6 + 65) &= ~2u;
        *(_BYTE *)(v6 + 65) |= 0x3Du;
      }
    }
    if ( v5 )
    {
      v13 = (__m128)*(unsigned int *)(v6 + 48);
      v13.m128_f32[0] = v13.m128_f32[0] + v8;
      v14 = *(float *)(v6 + 52) + v10;
      v15.m128_f32[0] = *(float *)(v6 + 48) + v9;
      v16 = *(float *)(v6 + 52) + v12;
    }
    else
    {
      result = CMILMatrix::IsTranslateAndScaleFor2DInput<1>(v6);
      if ( result )
      {
        v23 = v21[5];
        v13 = (__m128)*(unsigned int *)v21;
        v15 = v13;
        v13.m128_f32[0] = (float)(v13.m128_f32[0] * v22) + v21[12];
        v15.m128_f32[0] = (float)(v15.m128_f32[0] * v9) + v21[12];
        v14 = (float)(v23 * v10) + v21[13];
        v16 = (float)(v23 * v12) + v21[13];
        if ( *v21 <= 0.0 || v23 <= 0.0 )
        {
          v55 = v13.m128_i32[0];
          if ( v13.m128_f32[0] > v15.m128_f32[0] )
          {
            v13 = v15;
            v15.m128_i32[0] = v55;
          }
          if ( v14 > v16 )
          {
            v14 = (float)(v21[5] * v12) + v21[13];
            v16 = (float)(v23 * v10) + v21[13];
          }
        }
      }
      else
      {
        CMILMatrix::Transform2DRectToPerspective(
          (CMILMatrix *)v21,
          (const struct MilRectF *)&v61,
          (struct MilPoint2F *const)v88);
        v61 = 4LL;
        v62 = v88;
        result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
                   &v63,
                   &v61);
        v16 = *((float *)&v63 + 3);
        v15.m128_i32[0] = DWORD2(v63);
        v14 = *((float *)&v63 + 1);
        v13 = (__m128)(unsigned int)v63;
      }
    }
    v17 = _mm_shuffle_ps(v13, v13, 225);
    v17.m128_f32[0] = v14;
    v18 = _mm_shuffle_ps(v17, v17, 198);
    v18.m128_f32[0] = v15.m128_f32[0];
    v19 = _mm_shuffle_ps(v18, v18, 39);
    v19.m128_f32[0] = v16;
    *a3 = _mm_shuffle_ps(v19, v19, 57);
    a3[1].m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    return result;
  }
  result = CMILMatrix::IsTranslate<1>(v6);
  if ( result )
  {
    a3->m128_f32[0] = v20[12] + *(float *)a2;
    a3->m128_f32[1] = *(float *)(a2 + 4) + v20[13];
    a3[1].m128_f32[0] = *(float *)(a2 + 16) + v20[14];
    a3->m128_f32[2] = *(float *)(a2 + 8) + v20[12];
    a3->m128_f32[3] = *(float *)(a2 + 12) + v20[13];
    a3[1].m128_f32[1] = *(float *)(a2 + 20) + v20[14];
    return result;
  }
  result = CMILMatrix::IsTranslateAndScale<1>((__int64)v20);
  if ( result )
  {
    v56 = (float)(*v24 * *(float *)a2) + v24[12];
    a3->m128_f32[0] = v56;
    v57 = (float)(*(float *)(a2 + 4) * v24[5]) + v24[13];
    a3->m128_f32[1] = v57;
    v54 = (float)(*(float *)(a2 + 16) * v24[10]) + v24[14];
    a3[1].m128_f32[0] = v54;
    v58 = (float)(*(float *)(a2 + 8) * *v24) + v24[12];
    a3->m128_f32[2] = v58;
    v59 = (float)(*(float *)(a2 + 12) * v24[5]) + v24[13];
    a3->m128_f32[3] = v59;
    v60 = (float)(*(float *)(a2 + 20) * v24[10]) + v24[14];
    a3[1].m128_f32[1] = v60;
    if ( *v24 <= 0.0 || v24[5] <= 0.0 || v24[10] <= 0.0 )
    {
      if ( v56 > v58 )
      {
        a3->m128_f32[0] = v58;
        a3->m128_f32[2] = v56;
      }
      if ( v57 > v59 )
      {
        a3->m128_f32[1] = v59;
        a3->m128_f32[3] = v57;
      }
      if ( v54 > v60 )
      {
        a3[1].m128_f32[0] = v60;
LABEL_123:
        a3[1].m128_f32[1] = v54;
      }
    }
  }
  else
  {
    result = (unsigned __int8)CMILMatrix::Transform3DRectToPerspective(v24, (float *)a2, &v64);
    a3->m128_i32[0] = 2139095039;
    a3->m128_i32[1] = 2139095039;
    a3->m128_i32[2] = -8388609;
    a3->m128_i32[3] = -8388609;
    a3[1].m128_i32[0] = 2139095039;
    a3[1].m128_i32[1] = -8388609;
    v25 = a3->m128_f32[0];
    v26 = v64;
    if ( a3->m128_f32[0] > v64 )
    {
      a3->m128_f32[0] = v64;
      v25 = v26;
    }
    v27 = a3->m128_f32[2];
    if ( v26 > v27 )
    {
      a3->m128_f32[2] = v26;
      v27 = v26;
    }
    v28 = a3->m128_f32[1];
    v29 = v65;
    if ( v28 > v65 )
    {
      a3->m128_f32[1] = v65;
      v28 = v29;
    }
    v30 = a3->m128_f32[3];
    if ( v29 > v30 )
    {
      a3->m128_f32[3] = v29;
      v30 = v29;
    }
    v31 = a3[1].m128_f32[0];
    v32 = v66;
    if ( v31 > v66 )
    {
      a3[1].m128_f32[0] = v66;
      v31 = v32;
    }
    v33 = a3[1].m128_f32[1];
    if ( v32 > v33 )
    {
      a3[1].m128_f32[1] = v32;
      v33 = v32;
    }
    v34 = v67;
    if ( v25 > v67 )
    {
      a3->m128_f32[0] = v67;
      v25 = v34;
    }
    if ( v34 > v27 )
    {
      a3->m128_f32[2] = v34;
      v27 = v34;
    }
    v35 = v68;
    if ( v28 > v68 )
    {
      a3->m128_f32[1] = v68;
      v28 = v35;
    }
    if ( v35 > v30 )
    {
      a3->m128_f32[3] = v35;
      v30 = v35;
    }
    v36 = v69;
    if ( v31 > v69 )
    {
      a3[1].m128_f32[0] = v69;
      v31 = v36;
    }
    if ( v36 > v33 )
    {
      a3[1].m128_f32[1] = v36;
      v33 = v36;
    }
    v37 = v70;
    if ( v25 > v70 )
    {
      a3->m128_f32[0] = v70;
      v25 = v37;
    }
    if ( v37 > v27 )
    {
      a3->m128_f32[2] = v37;
      v27 = v37;
    }
    v38 = v71;
    if ( v28 > v71 )
    {
      a3->m128_f32[1] = v71;
      v28 = v38;
    }
    if ( v38 > v30 )
    {
      a3->m128_f32[3] = v38;
      v30 = v38;
    }
    v39 = v72;
    if ( v31 > v72 )
    {
      a3[1].m128_f32[0] = v72;
      v31 = v39;
    }
    if ( v39 > v33 )
    {
      a3[1].m128_f32[1] = v39;
      v33 = v39;
    }
    v40 = v73;
    if ( v25 > v73 )
    {
      a3->m128_f32[0] = v73;
      v25 = v40;
    }
    if ( v40 > v27 )
    {
      a3->m128_f32[2] = v40;
      v27 = v40;
    }
    v41 = v74;
    if ( v28 > v74 )
    {
      a3->m128_f32[1] = v74;
      v28 = v41;
    }
    if ( v41 > v30 )
    {
      a3->m128_f32[3] = v41;
      v30 = v41;
    }
    v42 = v75;
    if ( v31 > v75 )
    {
      a3[1].m128_f32[0] = v75;
      v31 = v42;
    }
    if ( v42 > v33 )
    {
      a3[1].m128_f32[1] = v42;
      v33 = v42;
    }
    v43 = v76;
    if ( v25 > v76 )
    {
      a3->m128_f32[0] = v76;
      v25 = v43;
    }
    if ( v43 > v27 )
    {
      a3->m128_f32[2] = v43;
      v27 = v43;
    }
    v44 = v77;
    if ( v28 > v77 )
    {
      a3->m128_f32[1] = v77;
      v28 = v44;
    }
    if ( v44 > v30 )
    {
      a3->m128_f32[3] = v44;
      v30 = v44;
    }
    v45 = v78;
    if ( v31 > v78 )
    {
      a3[1].m128_f32[0] = v78;
      v31 = v45;
    }
    if ( v45 > v33 )
    {
      a3[1].m128_f32[1] = v45;
      v33 = v45;
    }
    v46 = v79;
    if ( v25 > v79 )
    {
      a3->m128_f32[0] = v79;
      v25 = v46;
    }
    if ( v46 > v27 )
    {
      a3->m128_f32[2] = v46;
      v27 = v46;
    }
    v47 = v80;
    if ( v28 > v80 )
    {
      a3->m128_f32[1] = v80;
      v28 = v47;
    }
    if ( v47 > v30 )
    {
      a3->m128_f32[3] = v47;
      v30 = v47;
    }
    v48 = v81;
    if ( v31 > v81 )
    {
      a3[1].m128_f32[0] = v81;
      v31 = v48;
    }
    if ( v48 > v33 )
    {
      a3[1].m128_f32[1] = v48;
      v33 = v48;
    }
    v49 = v82;
    if ( v25 > v82 )
    {
      a3->m128_f32[0] = v82;
      v25 = v49;
    }
    if ( v49 > v27 )
    {
      a3->m128_f32[2] = v49;
      v27 = v49;
    }
    v50 = v83;
    if ( v28 > v83 )
    {
      a3->m128_f32[1] = v83;
      v28 = v50;
    }
    if ( v50 > v30 )
    {
      a3->m128_f32[3] = v50;
      v30 = v50;
    }
    v51 = v84;
    if ( v31 > v84 )
    {
      a3[1].m128_f32[0] = v84;
      v31 = v51;
    }
    if ( v51 > v33 )
    {
      a3[1].m128_f32[1] = v51;
      v33 = v51;
    }
    v52 = v85;
    if ( v25 > v85 )
      a3->m128_f32[0] = v85;
    if ( v52 > v27 )
      a3->m128_f32[2] = v52;
    v53 = v86;
    if ( v28 > v86 )
      a3->m128_f32[1] = v86;
    if ( v53 > v30 )
      a3->m128_f32[3] = v53;
    v54 = v87;
    if ( v31 > v87 )
      a3[1].m128_f32[0] = v87;
    if ( v54 > v33 )
      goto LABEL_123;
  }
  return result;
}
