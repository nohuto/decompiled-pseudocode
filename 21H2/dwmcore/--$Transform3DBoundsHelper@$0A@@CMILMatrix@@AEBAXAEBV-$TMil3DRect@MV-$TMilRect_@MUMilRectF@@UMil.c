/*
 * XREFs of ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800D10DC
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAVCVisual@@@Z @ 0x180004728 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x18000A124 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180014DEC (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x180092FA0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800934F0 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x18000AD5C (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AA57C (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800ACAC4 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800ACB5C (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD824 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

char __fastcall CMILMatrix::Transform3DBoundsHelper<0>(__int64 a1, float *a2, float *a3)
{
  char v6; // al
  bool v7; // dl
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  float *v11; // rax
  float v12; // xmm5_4
  __int64 v13; // r9
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __int128 v16; // xmm0
  float v17; // xmm7_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm6_4
  float v21; // xmm3_4
  float v22; // xmm1_4
  float v23; // xmm5_4
  __int64 v24; // rcx
  float v25; // xmm2_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  float v28; // xmm5_4
  float v29; // xmm6_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  __m128 v32; // xmm0
  __int128 v34; // [rsp+28h] [rbp-79h] BYREF
  __int128 v35; // [rsp+38h] [rbp-69h] BYREF
  float v36; // [rsp+58h] [rbp-49h] BYREF
  char v37; // [rsp+5Ch] [rbp-45h] BYREF

  v6 = (char)(16 * *(_BYTE *)(a1 + 65)) >> 6;
  if ( v6 )
  {
    v7 = v6 == 1;
  }
  else
  {
    v7 = CMILMatrix::IsAffine<1>(a1, 0)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - v23) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - v23) & _xmm) < 0.000081380211;
    *(_BYTE *)(a1 + 65) &= 0xF3u;
    *(_BYTE *)(a1 + 65) |= (-4 - 8 * v7) & 0xC;
  }
  if ( v7
    && CMILMatrix::ProducesUniformZ<1>(a1)
    && (LOBYTE(v11) = CMILMatrix::IsTranslateIgnoreZ<1>(a1, v8, v9, v10), (_BYTE)v11)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 40) - 1.0) & _xmm) < 0.000081380211 )
  {
    *a3 = *a2 + *(float *)(a1 + 48);
    a3[1] = a2[1] + *(float *)(a1 + 52);
    a3[4] = a2[4] + *(float *)(a1 + 56);
    a3[2] = a2[2] + *(float *)(a1 + 48);
    a3[3] = a2[3] + *(float *)(a1 + 52);
    a3[5] = a2[5] + *(float *)(a1 + 56);
  }
  else
  {
    LOBYTE(v11) = CMILMatrix::IsTranslateAndScale<1>(a1);
    if ( (_BYTE)v11 )
    {
      v17 = (float)(*a2 * *(float *)a1) + *(float *)(a1 + 48);
      *a3 = v17;
      v18 = (float)(a2[1] * *(float *)(a1 + 20)) + *(float *)(a1 + 52);
      a3[1] = v18;
      v19 = (float)(a2[4] * *(float *)(a1 + 40)) + *(float *)(a1 + 56);
      a3[4] = v19;
      v20 = (float)(a2[2] * *(float *)a1) + *(float *)(a1 + 48);
      a3[2] = v20;
      v21 = (float)(a2[3] * *(float *)(a1 + 20)) + *(float *)(a1 + 52);
      a3[3] = v21;
      v22 = (float)(a2[5] * *(float *)(a1 + 40)) + *(float *)(a1 + 56);
      a3[5] = v22;
      if ( *(float *)a1 <= v12 || *(float *)(a1 + 20) <= v12 || *(float *)(a1 + 40) <= v12 )
      {
        if ( v17 > v20 )
        {
          *a3 = v20;
          a3[2] = v17;
        }
        if ( v18 > v21 )
        {
          a3[1] = v21;
          a3[3] = v18;
        }
        if ( v19 > v22 )
        {
          a3[4] = v22;
          a3[5] = v19;
        }
      }
    }
    else if ( CMILMatrix::IsPure2DUniformZ<1>(a1) )
    {
      v34 = 0LL;
      v35 = *(_OWORD *)a2;
      LOBYTE(v11) = CMILMatrix::Transform2DBoundsHelper<0>(a1, (__int64)&v35, (float *)&v34, v13);
      v14 = (__m128)*(unsigned int *)(a1 + 40);
      v15 = v14;
      v14.m128_f32[0] = (float)(v14.m128_f32[0] * a2[5]) + *(float *)(a1 + 56);
      v15.m128_f32[0] = (float)(v15.m128_f32[0] * a2[4]) + *(float *)(a1 + 56);
      if ( v15.m128_f32[0] > v14.m128_f32[0] )
      {
        v32 = v15;
        v15 = v14;
        v14 = v32;
      }
      v16 = v34;
      *(_OWORD *)a3 = v34;
      *((_QWORD *)a3 + 2) = _mm_unpacklo_ps(v15, v14).m128_u64[0];
      v35 = v16;
    }
    else
    {
      CMILMatrix::Transform3DRectToPerspective((float *)a1, a2, &v36);
      *a3 = 3.4028235e38;
      a3[1] = 3.4028235e38;
      a3[2] = -3.4028235e38;
      a3[3] = -3.4028235e38;
      a3[4] = 3.4028235e38;
      v24 = 8LL;
      a3[5] = -3.4028235e38;
      v11 = (float *)&v37;
      v25 = a3[1];
      v26 = a3[4];
      v27 = a3[2];
      v28 = a3[3];
      v29 = a3[5];
      do
      {
        v30 = *(v11 - 1);
        if ( *a3 > v30 )
          *a3 = v30;
        if ( v30 > v27 )
          v27 = v30;
        if ( v25 > *v11 )
          v25 = *v11;
        if ( *v11 > v28 )
          v28 = *v11;
        v31 = v11[1];
        if ( v26 > v31 )
          v26 = v11[1];
        if ( v31 > v29 )
          v29 = v11[1];
        v11 += 3;
        --v24;
      }
      while ( v24 );
      a3[1] = v25;
      a3[4] = v26;
      a3[2] = v27;
      a3[3] = v28;
      a3[5] = v29;
    }
  }
  return (char)v11;
}
