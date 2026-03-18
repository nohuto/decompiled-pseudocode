/*
 * XREFs of ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B1FB0
 * Callers:
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180016DC4 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016E5C (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18004B760 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18007FDB0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800866D0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800936C0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180096E60 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180097700 (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 * Callees:
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180015724 (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18001793C (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800236B0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18008CFA0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x18009F1C8 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ??$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B29F4 (--$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x1800B2AB0 (--$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@R.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800B3500 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

char __fastcall CMILMatrix::Transform3DBoundsHelper<0>(__int64 a1, float *a2, __m128 *a3)
{
  __int64 v5; // r11
  char v6; // dl
  char v7; // r8
  float v8; // xmm5_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  char result; // al
  float v12; // xmm9_4
  __m128 v13; // xmm3
  float v14; // xmm5_4
  __m128 v15; // xmm4
  float v16; // xmm1_4
  float *v17; // r11
  float v18; // xmm5_4
  float v19; // xmm10_4
  __int32 v20; // xmm0_4
  __m128 v21; // xmm3
  __m128 v22; // xmm3
  __m128 v23; // xmm3
  float *v24; // r11
  float *v25; // r11
  float v26; // xmm6_4
  float v27; // xmm4_4
  float v28; // xmm2_4
  float v29; // xmm5_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  float v32; // xmm5_4
  float v33; // xmm0_4
  float v34; // xmm4_4
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm6_4
  float v40; // xmm0_4
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
  float v53; // xmm6_4
  float v54; // xmm6_4
  float v55; // xmm6_4
  float v56; // xmm6_4
  float v57; // xmm6_4
  float v58; // xmm6_4
  float v59; // xmm6_4
  float v60; // xmm4_4
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
    && IsCloseRealZero(a2[5], 0.000081380211)
    && IsCloseRealZero(a2[4], 0.000081380211) )
  {
    v7 = *(_BYTE *)(v5 + 64);
    v8 = *a2;
    v9 = a2[2];
    v10 = a2[1];
    result = (char)(4 * v7) >> 6;
    v12 = a2[3];
    *(float *)&v61 = *a2;
    v62 = (_BYTE *)__PAIR64__(LODWORD(v12), LODWORD(v9));
    *((float *)&v61 + 1) = v10;
    v63 = 0LL;
    if ( result )
    {
      v6 = result == v6;
    }
    else
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v5 - 1.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v5 + 4) - 0.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v5 + 12) - 0.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v5 + 16) - 0.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v5 + 20) - 1.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v5 + 28) - 0.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v5 + 60) - 1.0) & _xmm) >= 0.000081380211 )
      {
        v6 = 0;
      }
      result = 32 * v6;
      *(_BYTE *)(v5 + 64) = v7 ^ (v7 ^ (-16 - 32 * v6)) & 0x30;
      if ( v6 )
      {
        *(_BYTE *)(v5 + 65) &= ~2u;
        *(_BYTE *)(v5 + 65) |= 0x3Du;
      }
    }
    if ( v6 )
    {
      v13 = (__m128)*(unsigned int *)(v5 + 48);
      v13.m128_f32[0] = v13.m128_f32[0] + v8;
      v14 = *(float *)(v5 + 52) + v10;
      v15.m128_f32[0] = *(float *)(v5 + 48) + v9;
      v16 = *(float *)(v5 + 52) + v12;
    }
    else
    {
      result = CMILMatrix::IsTranslateAndScaleFor2DInput<1>(v5);
      if ( result )
      {
        v19 = v17[5];
        v13 = (__m128)*(unsigned int *)v17;
        v15 = v13;
        v13.m128_f32[0] = (float)(v13.m128_f32[0] * v18) + v17[12];
        v15.m128_f32[0] = (float)(v15.m128_f32[0] * v9) + v17[12];
        v14 = (float)(v19 * v10) + v17[13];
        v16 = (float)(v19 * v12) + v17[13];
        if ( *v17 <= 0.0 || v19 <= 0.0 )
        {
          v20 = v13.m128_i32[0];
          if ( v13.m128_f32[0] > v15.m128_f32[0] )
          {
            v13 = v15;
            v15.m128_i32[0] = v20;
          }
          if ( v14 > v16 )
          {
            v14 = (float)(v17[5] * v12) + v17[13];
            v16 = (float)(v19 * v10) + v17[13];
          }
        }
      }
      else
      {
        CMILMatrix::Transform2DRectToPerspective(
          (CMILMatrix *)v17,
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
    v21 = _mm_shuffle_ps(v13, v13, 225);
    v21.m128_f32[0] = v14;
    v22 = _mm_shuffle_ps(v21, v21, 198);
    v22.m128_f32[0] = v15.m128_f32[0];
    v23 = _mm_shuffle_ps(v22, v22, 39);
    v23.m128_f32[0] = v16;
    *a3 = _mm_shuffle_ps(v23, v23, 57);
    a3[1].m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    return result;
  }
  result = CMILMatrix::IsTranslate<1>(v5);
  if ( result )
  {
    a3->m128_f32[0] = v24[12] + *a2;
    a3->m128_f32[1] = a2[1] + v24[13];
    a3[1].m128_f32[0] = a2[4] + v24[14];
    a3->m128_f32[2] = a2[2] + v24[12];
    a3->m128_f32[3] = a2[3] + v24[13];
    a3[1].m128_f32[1] = a2[5] + v24[14];
    return result;
  }
  result = CMILMatrix::IsTranslateAndScale<1>((__int64)v24);
  if ( result )
  {
    v26 = (float)(*v25 * *a2) + v25[12];
    a3->m128_f32[0] = v26;
    v27 = (float)(a2[1] * v25[5]) + v25[13];
    a3->m128_f32[1] = v27;
    v28 = (float)(a2[4] * v25[10]) + v25[14];
    a3[1].m128_f32[0] = v28;
    v29 = (float)(a2[2] * *v25) + v25[12];
    a3->m128_f32[2] = v29;
    v30 = (float)(a2[3] * v25[5]) + v25[13];
    a3->m128_f32[3] = v30;
    v31 = (float)(a2[5] * v25[10]) + v25[14];
    a3[1].m128_f32[1] = v31;
    if ( *v25 <= 0.0 || v25[5] <= 0.0 || v25[10] <= 0.0 )
    {
      if ( v26 > v29 )
      {
        a3->m128_f32[0] = v29;
        a3->m128_f32[2] = v26;
      }
      if ( v27 > v30 )
      {
        a3->m128_f32[1] = v30;
        a3->m128_f32[3] = v27;
      }
      if ( v28 > v31 )
      {
        a3[1].m128_f32[0] = v31;
LABEL_134:
        a3[1].m128_f32[1] = v28;
      }
    }
  }
  else
  {
    result = CMILMatrix::Transform3DRectToPerspective(v25, a2, &v64);
    a3->m128_i32[0] = 2139095039;
    a3->m128_i32[1] = 2139095039;
    a3->m128_i32[2] = -8388609;
    a3->m128_i32[3] = -8388609;
    a3[1].m128_i32[0] = 2139095039;
    a3[1].m128_i32[1] = -8388609;
    v32 = a3->m128_f32[0];
    v33 = v64;
    if ( a3->m128_f32[0] > v64 )
    {
      a3->m128_f32[0] = v64;
      v32 = v33;
    }
    v34 = a3->m128_f32[2];
    if ( v33 > v34 )
    {
      a3->m128_f32[2] = v33;
      v34 = v33;
    }
    v35 = a3->m128_f32[1];
    v36 = v65;
    if ( v35 > v65 )
    {
      a3->m128_f32[1] = v65;
      v35 = v36;
    }
    v37 = a3->m128_f32[3];
    if ( v36 > v37 )
    {
      a3->m128_f32[3] = v36;
      v37 = v36;
    }
    v38 = a3[1].m128_f32[0];
    v39 = v66;
    if ( v38 > v66 )
    {
      a3[1].m128_f32[0] = v66;
      v38 = v39;
    }
    v40 = a3[1].m128_f32[1];
    if ( v39 > v40 )
    {
      a3[1].m128_f32[1] = v39;
      v40 = v39;
    }
    v41 = v67;
    if ( v32 > v67 )
    {
      a3->m128_f32[0] = v67;
      v32 = v41;
    }
    if ( v41 > v34 )
    {
      a3->m128_f32[2] = v41;
      v34 = v41;
    }
    v42 = v68;
    if ( v35 > v68 )
    {
      a3->m128_f32[1] = v68;
      v35 = v42;
    }
    if ( v42 > v37 )
    {
      a3->m128_f32[3] = v42;
      v37 = v42;
    }
    v43 = v69;
    if ( v38 > v69 )
    {
      a3[1].m128_f32[0] = v69;
      v38 = v43;
    }
    if ( v43 > v40 )
    {
      a3[1].m128_f32[1] = v43;
      v40 = v43;
    }
    v44 = v70;
    if ( v32 > v70 )
    {
      a3->m128_f32[0] = v70;
      v32 = v44;
    }
    if ( v44 > v34 )
    {
      a3->m128_f32[2] = v44;
      v34 = v44;
    }
    v45 = v71;
    if ( v35 > v71 )
    {
      a3->m128_f32[1] = v71;
      v35 = v45;
    }
    if ( v45 > v37 )
    {
      a3->m128_f32[3] = v45;
      v37 = v45;
    }
    v46 = v72;
    if ( v38 > v72 )
    {
      a3[1].m128_f32[0] = v72;
      v38 = v46;
    }
    if ( v46 > v40 )
    {
      a3[1].m128_f32[1] = v46;
      v40 = v46;
    }
    v47 = v73;
    if ( v32 > v73 )
    {
      a3->m128_f32[0] = v73;
      v32 = v47;
    }
    if ( v47 > v34 )
    {
      a3->m128_f32[2] = v47;
      v34 = v47;
    }
    v48 = v74;
    if ( v35 > v74 )
    {
      a3->m128_f32[1] = v74;
      v35 = v48;
    }
    if ( v48 > v37 )
    {
      a3->m128_f32[3] = v48;
      v37 = v48;
    }
    v49 = v75;
    if ( v38 > v75 )
    {
      a3[1].m128_f32[0] = v75;
      v38 = v49;
    }
    if ( v49 > v40 )
    {
      a3[1].m128_f32[1] = v49;
      v40 = v49;
    }
    v50 = v76;
    if ( v32 > v76 )
    {
      a3->m128_f32[0] = v76;
      v32 = v50;
    }
    if ( v50 > v34 )
    {
      a3->m128_f32[2] = v50;
      v34 = v50;
    }
    v51 = v77;
    if ( v35 > v77 )
    {
      a3->m128_f32[1] = v77;
      v35 = v51;
    }
    if ( v51 > v37 )
    {
      a3->m128_f32[3] = v51;
      v37 = v51;
    }
    v52 = v78;
    if ( v38 > v78 )
    {
      a3[1].m128_f32[0] = v78;
      v38 = v52;
    }
    if ( v52 > v40 )
    {
      a3[1].m128_f32[1] = v52;
      v40 = v52;
    }
    v53 = v79;
    if ( v32 > v79 )
    {
      a3->m128_f32[0] = v79;
      v32 = v53;
    }
    if ( v53 > v34 )
    {
      a3->m128_f32[2] = v53;
      v34 = v53;
    }
    v54 = v80;
    if ( v35 > v80 )
    {
      a3->m128_f32[1] = v80;
      v35 = v54;
    }
    if ( v54 > v37 )
    {
      a3->m128_f32[3] = v54;
      v37 = v54;
    }
    v55 = v81;
    if ( v38 > v81 )
    {
      a3[1].m128_f32[0] = v81;
      v38 = v55;
    }
    if ( v55 > v40 )
    {
      a3[1].m128_f32[1] = v55;
      v40 = v55;
    }
    v56 = v82;
    if ( v32 > v82 )
    {
      a3->m128_f32[0] = v82;
      v32 = v56;
    }
    if ( v56 > v34 )
    {
      a3->m128_f32[2] = v56;
      v34 = v56;
    }
    v57 = v83;
    if ( v35 > v83 )
    {
      a3->m128_f32[1] = v83;
      v35 = v57;
    }
    if ( v57 > v37 )
    {
      a3->m128_f32[3] = v57;
      v37 = v57;
    }
    v58 = v84;
    if ( v38 > v84 )
    {
      a3[1].m128_f32[0] = v84;
      v38 = v58;
    }
    if ( v58 > v40 )
    {
      a3[1].m128_f32[1] = v58;
      v40 = v58;
    }
    v59 = v85;
    if ( v32 > v85 )
      a3->m128_f32[0] = v85;
    if ( v59 > v34 )
      a3->m128_f32[2] = v59;
    v60 = v86;
    if ( v35 > v86 )
      a3->m128_f32[1] = v86;
    if ( v60 > v37 )
      a3->m128_f32[3] = v60;
    v28 = v87;
    if ( v38 > v87 )
      a3[1].m128_f32[0] = v87;
    if ( v28 > v40 )
      goto LABEL_134;
  }
  return result;
}
