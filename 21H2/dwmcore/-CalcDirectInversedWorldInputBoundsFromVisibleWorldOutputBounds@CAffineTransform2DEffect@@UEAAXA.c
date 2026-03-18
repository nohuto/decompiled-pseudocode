/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180244F00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1801D9CB8 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18020521C (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV4@@Z @ 0x180245644 (-TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV-$TMilRect_@MUMilRectF@.c)
 */

unsigned __int8 __fastcall CAffineTransform2DEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        float *a2,
        _OWORD *a3,
        float *a4,
        float *a5,
        _OWORD *a6)
{
  int v7; // xmm1_4
  int v8; // xmm2_4
  int v10; // xmm3_4
  int v13; // xmm1_4
  __int64 v14; // xmm1_8
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  unsigned __int8 result; // al
  __int64 v18; // rcx
  __int64 v19; // r9
  float v20; // xmm2_4
  int v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm5_4
  float v28; // xmm4_4
  float v29; // xmm2_4
  __int128 v30; // [rsp+20h] [rbp-50h] BYREF
  int v31; // [rsp+30h] [rbp-40h]
  int v32; // [rsp+34h] [rbp-3Ch]
  __int128 v33; // [rsp+38h] [rbp-38h] BYREF
  int v34; // [rsp+48h] [rbp-28h]
  int v35; // [rsp+4Ch] [rbp-24h]
  D2D1_MATRIX_3X2_F v36; // [rsp+50h] [rbp-20h] BYREF

  v7 = *((_DWORD *)a2 + 1);
  v8 = *((_DWORD *)a2 + 12);
  v10 = *((_DWORD *)a2 + 13);
  *(float *)&v30 = *a2;
  *((float *)&v30 + 2) = a2[4];
  DWORD1(v30) = v7;
  v13 = *((_DWORD *)a2 + 5);
  v31 = v8;
  v32 = v10;
  v33 = *(_OWORD *)&_xmm;
  HIDWORD(v30) = v13;
  v34 = v8 ^ _xmm;
  v35 = v10 ^ _xmm;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v36,
    (const struct D2D1::Matrix3x2F *)&v30,
    (const struct D2D1::Matrix3x2F *)&v33);
  v14 = *(_QWORD *)&v36.m[2][0];
  *(_OWORD *)(a1 + 204) = *(_OWORD *)&v36.m11;
  v15 = *(_OWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 220) = v14;
  v16 = *(_QWORD *)(a1 + 184);
  *(_OWORD *)&v36.m11 = v15;
  *(_QWORD *)&v36.m[2][0] = v16;
  result = D2D1::Matrix3x2F::Invert(&v36);
  if ( result
    && (*a6 = *a3,
        v30 = 0LL,
        v33 = *a3,
        (result = CFilterEffect::InvertTransformToCalc2DBounds((__int64)a2, &v33, &v30)) != 0) )
  {
    CAffineTransform2DEffect::TransformBounds(v18, &v36, &v30, &v30);
    result = (unsigned __int8)CMILMatrix::Transform2DBoundsHelper<1>((__int64)a2, (__int64)&v30, (float *)&v33, v19);
    v20 = *(float *)&v33;
    v21 = DWORD2(v33);
    a5[1] = *((float *)&v33 + 1);
    a5[3] = *((float *)&v33 + 3);
    *a5 = v20;
    *((_DWORD *)a5 + 2) = v21;
    v22 = *a4;
    if ( *a4 <= v20 )
      v22 = v20;
    else
      *a5 = v22;
    v23 = a4[1];
    v24 = a5[1];
    if ( v23 > v24 )
    {
      a5[1] = v23;
      v24 = v23;
    }
    v25 = a5[2];
    v26 = a4[2];
    v27 = v25;
    if ( v25 > v26 )
    {
      a5[2] = v26;
      v25 = v26;
      v27 = v26;
    }
    v28 = a4[3];
    v29 = a5[3];
    if ( v29 > v28 )
    {
      a5[3] = v28;
      v25 = v27;
      v29 = v28;
    }
    if ( v25 <= v22 || v29 <= v24 )
    {
      a5[3] = 0.0;
      v22 = 0.0;
      a5[2] = 0.0;
      a5[1] = 0.0;
      *a5 = 0.0;
    }
  }
  else
  {
    *(_OWORD *)a5 = *a3;
    *a6 = *a3;
    v22 = *a5;
  }
  *(float *)(a1 + 196) = v22 - a2[12];
  *(float *)(a1 + 200) = a5[1] - a2[13];
  return result;
}
