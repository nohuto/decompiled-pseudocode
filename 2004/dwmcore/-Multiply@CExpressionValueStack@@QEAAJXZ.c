/*
 * XREFs of ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180038DBC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18003943C (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180049218 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x1802008D0 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x18021CCF8 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Multiply(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  CExpressionValueStack *v2; // r10
  __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 *v6; // rdx
  int v7; // eax
  unsigned int v8; // ecx
  __int128 v9; // xmm0
  int v10; // eax
  __int64 v11; // xmm1_8
  float v13; // xmm0_4
  __int128 v14; // xmm1
  int v15; // r11d
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __m128 v18; // xmm4
  __m128 v19; // xmm3
  float v20; // eax
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  int v26; // eax
  unsigned int v27; // ecx
  __int128 v28; // [rsp+30h] [rbp-29h] BYREF
  __int64 v29; // [rsp+40h] [rbp-19h]
  __int64 v30; // [rsp+48h] [rbp-11h]
  float v31; // [rsp+50h] [rbp-9h]
  _OWORD v32[4]; // [rsp+60h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 2 )
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x42Au,
      0LL);
    return v4;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = 0;
  v5 = v3 + 80LL * (v1 - 2);
  v6 = (__int64 *)(80LL * (v1 - 1) + v3);
  v7 = *(_DWORD *)(v5 + 72);
  v8 = *((_DWORD *)v6 + 18);
  if ( v7 == v8 )
  {
    switch ( v7 )
    {
      case 104:
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v28,
          (const struct D2D1::Matrix3x2F *)v5,
          (const struct D2D1::Matrix3x2F *)v6);
        v9 = v28;
        *(_DWORD *)(v5 + 72) = v10;
        v11 = v29;
        *(_OWORD *)v5 = v9;
        *(_QWORD *)(v5 + 16) = v11;
        break;
      case 18:
        v13 = *(float *)v6 * *(float *)v5;
        *(_DWORD *)(v5 + 72) = 18;
        *(float *)v5 = v13;
        break;
      case 35:
        v24 = *(float *)v5 * *(float *)v6;
        v25 = *(float *)(v5 + 4) * *((float *)v6 + 1);
        *(_DWORD *)(v5 + 72) = 35;
        *(float *)v5 = v24;
        *(float *)(v5 + 4) = v25;
        break;
      case 52:
        v20 = *(float *)(v5 + 8);
        *(_QWORD *)&v28 = *(_QWORD *)v5;
        v30 = *v6;
        v21 = *(float *)&v30 * *(float *)&v28;
        *((float *)&v28 + 2) = v20;
        v22 = *((float *)&v30 + 1) * *((float *)&v28 + 1);
        v31 = *((float *)v6 + 2);
        v23 = v31 * v20;
        *(_DWORD *)(v5 + 72) = 52;
        *(float *)v5 = v21;
        *(float *)(v5 + 4) = v22;
        *(float *)(v5 + 8) = v23;
        break;
      default:
        switch ( v7 )
        {
          case 69:
            v18 = (__m128)_mm_loadu_si128((const __m128i *)v6);
            *(_DWORD *)(v5 + 72) = 69;
            v19 = (__m128)_mm_loadu_si128((const __m128i *)v5);
            *(float *)&v28 = v18.m128_f32[0] * v19.m128_f32[0];
            *((float *)&v28 + 3) = _mm_shuffle_ps(v18, v18, 255).m128_f32[0] * _mm_shuffle_ps(v19, v19, 255).m128_f32[0];
            *((float *)&v28 + 1) = _mm_shuffle_ps(v18, v18, 85).m128_f32[0] * _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
            *((float *)&v28 + 2) = _mm_shuffle_ps(v18, v18, 170).m128_f32[0] * _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
            break;
          case 71:
            D3DXQuaternionMultiply(
              (struct D2DQuaternion *)&v28,
              (const struct D2DQuaternion *)v6,
              (const struct D2DQuaternion *)v5);
            *(_DWORD *)(v5 + 72) = 71;
            break;
          case 265:
            D2DMatrixMultiply((struct D2DMatrix *)v32, (const struct D2DMatrix *)v5, (const struct D2DMatrix *)v6);
            v14 = v32[1];
            *(_OWORD *)v5 = v32[0];
            *(_DWORD *)(v5 + 72) = v15;
            v16 = v32[2];
            *(_OWORD *)(v5 + 16) = v14;
            v17 = v32[3];
            *(_OWORD *)(v5 + 32) = v16;
            *(_OWORD *)(v5 + 48) = v17;
            goto LABEL_5;
          default:
            v4 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast(
              v8,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              -2147467259,
              0x493u,
              0LL);
            return v4;
        }
        *(_OWORD *)v5 = v28;
        break;
    }
LABEL_5:
    *(_BYTE *)(v5 + 76) = 1;
    --*((_DWORD *)v2 + 4);
    return v4;
  }
  if ( v8 == 18 || v7 == 18 )
  {
    v26 = CExpressionValueStack::Scale(v2);
    v4 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(
        v27,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v26,
        0x4A2u,
        0LL);
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v8,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x4ACu,
      0LL);
  }
  return v4;
}
