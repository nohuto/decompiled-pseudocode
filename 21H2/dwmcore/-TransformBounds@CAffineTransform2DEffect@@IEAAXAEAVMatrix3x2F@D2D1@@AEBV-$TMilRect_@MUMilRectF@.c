/*
 * XREFs of ?TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV4@@Z @ 0x1801F5B28
 * Callers:
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801F5440 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

float *__fastcall CAffineTransform2DEffect::TransformBounds(__int64 a1, float *a2, float *a3, float *a4)
{
  float *result; // rax
  __int64 v5; // rcx
  float v6; // xmm10_4
  float v7; // xmm2_4
  float v8; // xmm5_4
  float v9; // xmm11_4
  float v10; // xmm9_4
  float v11; // xmm1_4
  float v12; // xmm7_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  float v16; // xmm11_4
  float v17; // xmm10_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm4_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // [rsp+8h] [rbp-70h]
  _DWORD v25[5]; // [rsp+Ch] [rbp-6Ch] BYREF

  result = (float *)v25;
  v5 = 3LL;
  v6 = *a2 * *a3;
  v7 = a3[3] * a2[2];
  v8 = a3[3] * a2[3];
  v9 = a2[1] * *a3;
  v10 = a2[2] * a3[1];
  v11 = v7 + v6;
  v12 = a2[3] * a3[1];
  v13 = a3[2] * *a2;
  v14 = (float)(v8 + v9) + a2[5];
  v15 = a3[2] * a2[1];
  v16 = (float)(v9 + v12) + a2[5];
  v17 = (float)(v6 + v10) + a2[4];
  v24 = v11 + a2[4];
  *(float *)v25 = v14;
  v18 = (float)(v13 + v7) + a2[4];
  v19 = (float)(v13 + v10) + a2[4];
  v20 = (float)(v15 + v8) + a2[5];
  v21 = (float)(v15 + v12) + a2[5];
  *a4 = v17;
  *(float *)&v25[1] = v18;
  v22 = v16;
  *(float *)&v25[3] = v19;
  *(float *)&v25[2] = v20;
  *(float *)&v25[4] = v21;
  do
  {
    v23 = fminf(*a4, *(result - 1));
    v16 = fminf(v16, *result);
    v17 = fmaxf(v17, *(result - 1));
    v22 = fmaxf(v22, *result);
    result += 2;
    *a4 = v23;
    --v5;
  }
  while ( v5 );
  a4[1] = v16;
  a4[2] = v17;
  a4[3] = v22;
  return result;
}
