/*
 * XREFs of ?DistanceSquared@CExpressionValueStack@@QEAAJXZ @ 0x1801FCFFC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::DistanceSquared(__int64 this)
{
  unsigned int v1; // r9d
  __int64 v2; // r10
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __m128 v8; // xmm4
  __m128 v9; // xmm2
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm5_4
  float v15; // xmm1_4
  unsigned int v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+30h] [rbp-28h]

  v1 = *(_DWORD *)(this + 16);
  v2 = this;
  if ( v1 >= 2 )
  {
    v4 = *(_QWORD *)(this + 24);
    v3 = 0;
    v5 = 10LL * (v1 - 2);
    v6 = 10LL * (v1 - 1);
    v7 = *(_DWORD *)(v4 + 8 * v5 + 72);
    if ( v7 == *(_DWORD *)(v4 + 8 * v6 + 72) )
    {
      this = 18LL;
      switch ( v7 )
      {
        case 18:
          v14 = (float)(*(float *)(v4 + 8 * v5) - *(float *)(v4 + 8 * v6))
              * (float)(*(float *)(v4 + 8 * v5) - *(float *)(v4 + 8 * v6));
          break;
        case 35:
          v15 = *(float *)(v4 + 8 * v5 + 4) - *(float *)(v4 + 8 * v6 + 4);
          v14 = (float)(v15 * v15)
              + (float)((float)(*(float *)(v4 + 8 * v5) - *(float *)(v4 + 8 * v6))
                      * (float)(*(float *)(v4 + 8 * v5) - *(float *)(v4 + 8 * v6)));
          break;
        case 52:
          v18 = *(_QWORD *)(v4 + 8 * v5);
          v14 = (float)((float)((float)(*((float *)&v18 + 1) - COERCE_FLOAT(HIDWORD(*(_QWORD *)(v4 + 8 * v6))))
                              * (float)(*((float *)&v18 + 1) - COERCE_FLOAT(HIDWORD(*(_QWORD *)(v4 + 8 * v6)))))
                      + (float)((float)(*(float *)&v18 - COERCE_FLOAT(*(_QWORD *)(v4 + 8 * v6)))
                              * (float)(*(float *)&v18 - COERCE_FLOAT(*(_QWORD *)(v4 + 8 * v6)))))
              + (float)((float)(*(float *)(v4 + 8 * v5 + 8) - *(float *)(v4 + 8 * v6 + 8))
                      * (float)(*(float *)(v4 + 8 * v5 + 8) - *(float *)(v4 + 8 * v6 + 8)));
          break;
        case 69:
          v8 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 8 * v5));
          v9 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 8 * v6));
          v10 = v8.m128_f32[0] - v9.m128_f32[0];
          v11 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
          v12 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0] - _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
          v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
          v13 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
          v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
          v14 = (float)((float)((float)(v12 * v12) + (float)(v10 * v10))
                      + (float)((float)(v11 - v13) * (float)(v11 - v13)))
              + (float)((float)(v8.m128_f32[0] - v9.m128_f32[0]) * (float)(v8.m128_f32[0] - v9.m128_f32[0]));
          break;
        default:
          v17 = 3751;
          goto LABEL_3;
      }
      *(_BYTE *)(v4 + 8 * v5 + 76) = 1;
      *(_DWORD *)(v4 + 8 * v5 + 72) = 18;
      *(float *)(v4 + 8 * v5) = v14;
      --*(_DWORD *)(v2 + 16);
      return v3;
    }
    v17 = 3691;
  }
  else
  {
    v17 = 3668;
  }
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v17,
    0LL);
  return v3;
}
