/*
 * XREFs of ?Min@CExpressionValueStack@@QEAAJXZ @ 0x1800D8E60
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Min(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  __int64 v2; // rdx
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  float v7; // xmm0_4
  __m128 v9; // xmm3
  __m128 v10; // xmm4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  unsigned int v14; // [rsp+20h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-20h]
  __int128 v16; // [rsp+40h] [rbp-10h]
  __int64 v17; // [rsp+40h] [rbp-10h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v14 = 2297;
    goto LABEL_9;
  }
  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  v4 = 10LL * (v1 - 2);
  v5 = 10LL * (v1 - 1);
  v6 = *(_DWORD *)(v2 + 8 * v4 + 72);
  if ( v6 != *(_DWORD *)(v2 + 8 * v5 + 72) )
  {
    v14 = 2321;
    goto LABEL_9;
  }
  if ( v6 != 18 )
  {
    switch ( v6 )
    {
      case '#':
        v12 = fminf(*(float *)(v2 + 8 * v4), *(float *)(v2 + 8 * v5));
        v13 = fminf(*(float *)(v2 + 8 * v4 + 4), *(float *)(v2 + 8 * v5 + 4));
        *(_DWORD *)(v2 + 8 * v4 + 72) = 35;
        *(float *)(v2 + 8 * v4) = v12;
        *(float *)(v2 + 8 * v4 + 4) = v13;
        goto LABEL_5;
      case '4':
        v15 = *(_QWORD *)(v2 + 8 * v4);
        v17 = *(_QWORD *)(v2 + 8 * v5);
        v11 = fminf(*(float *)(v2 + 8 * v4 + 8), *(float *)(v2 + 8 * v5 + 8));
        *(_DWORD *)(v2 + 8 * v4 + 72) = 52;
        *(float *)(v2 + 8 * v4) = fminf(*(float *)&v15, *(float *)&v17);
        *(float *)(v2 + 8 * v4 + 4) = fminf(*((float *)&v15 + 1), *((float *)&v17 + 1));
        *(float *)(v2 + 8 * v4 + 8) = v11;
        goto LABEL_5;
      case 'E':
        v9 = (__m128)_mm_loadu_si128((const __m128i *)(v2 + 8 * v5));
        *(_DWORD *)(v2 + 8 * v4 + 72) = 69;
        v10 = (__m128)_mm_loadu_si128((const __m128i *)(v2 + 8 * v4));
        *(_QWORD *)&v16 = __PAIR64__(
                            COERCE_UNSIGNED_INT(fminf(_mm_shuffle_ps(v10, v10, 85).m128_f32[0], _mm_shuffle_ps(
                                                                                                  v9,
                                                                                                  v9,
                                                                                                  85).m128_f32[0])),
                            COERCE_UNSIGNED_INT(fminf(v10.m128_f32[0], v9.m128_f32[0])));
        *((_QWORD *)&v16 + 1) = __PAIR64__(
                                  COERCE_UNSIGNED_INT(
                                    fminf(
                                      _mm_shuffle_ps(v10, v10, 255).m128_f32[0],
                                      _mm_shuffle_ps(v9, v9, 255).m128_f32[0])),
                                  COERCE_UNSIGNED_INT(
                                    fminf(
                                      _mm_shuffle_ps(v10, v10, 170).m128_f32[0],
                                      _mm_shuffle_ps(v9, v9, 170).m128_f32[0])));
        *(_OWORD *)(v2 + 8 * v4) = v16;
        goto LABEL_5;
    }
    v14 = 2377;
LABEL_9:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v14,
      0LL);
    return v3;
  }
  v7 = fminf(*(float *)(v2 + 8 * v4), *(float *)(v2 + 8 * v5));
  *(_DWORD *)(v2 + 8 * v4 + 72) = 18;
  *(float *)(v2 + 8 * v4) = v7;
LABEL_5:
  *(_BYTE *)(v2 + 8 * v4 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v3;
}
