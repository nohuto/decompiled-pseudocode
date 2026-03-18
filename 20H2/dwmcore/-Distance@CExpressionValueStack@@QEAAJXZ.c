/*
 * XREFs of ?Distance@CExpressionValueStack@@QEAAJXZ @ 0x1801FAFDC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     sqrtf_0 @ 0x1800EE99B (sqrtf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Distance(__int64 this)
{
  unsigned int v1; // edx
  __int64 v2; // rsi
  unsigned int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  __m128 v8; // xmm5
  __m128 v9; // xmm2
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  unsigned int v21; // [rsp+20h] [rbp-38h]
  __int64 v22; // [rsp+30h] [rbp-28h]

  v1 = *(_DWORD *)(this + 16);
  v2 = this;
  if ( v1 >= 2 )
  {
    v4 = *(_QWORD *)(this + 24);
    v3 = 0;
    v5 = 10LL * (v1 - 2);
    v6 = 10LL * (v1 - 1);
    v7 = *(_DWORD *)(v4 + 8 * v5 + 72);
    if ( v7 != *(_DWORD *)(v4 + 8 * v6 + 72) )
    {
      v21 = 3575;
      goto LABEL_3;
    }
    this = 18LL;
    switch ( v7 )
    {
      case 18:
        v19 = *(float *)(v4 + 8 * v5) - *(float *)(v4 + 8 * v6);
        *(_DWORD *)(v4 + 8 * v5 + 72) = 18;
        LODWORD(v15) = LODWORD(v19) & _xmm;
        goto LABEL_17;
      case 35:
        v18 = *(float *)(v4 + 8 * v5 + 4) - *(float *)(v4 + 8 * v6 + 4);
        v16 = *(float *)(v4 + 8 * v5) - *(float *)(v4 + 8 * v6);
        v17 = v18 * v18;
        break;
      case 52:
        v22 = *(_QWORD *)(v4 + 8 * v5);
        v16 = *(float *)(v4 + 8 * v5 + 8) - *(float *)(v4 + 8 * v6 + 8);
        v17 = (float)((float)(*((float *)&v22 + 1) - COERCE_FLOAT(HIDWORD(*(_QWORD *)(v4 + 8 * v6))))
                    * (float)(*((float *)&v22 + 1) - COERCE_FLOAT(HIDWORD(*(_QWORD *)(v4 + 8 * v6)))))
            + (float)((float)(*(float *)&v22 - COERCE_FLOAT(*(_QWORD *)(v4 + 8 * v6)))
                    * (float)(*(float *)&v22 - COERCE_FLOAT(*(_QWORD *)(v4 + 8 * v6))));
        break;
      case 69:
        v8 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 8 * v5));
        v9 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 8 * v6));
        v10 = v8.m128_f32[0] - v9.m128_f32[0];
        v11 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0] - _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
        v12 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
        v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
        v13 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
        v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
        v14 = (float)((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)((float)(v12 - v13) * (float)(v12 - v13)))
            + (float)((float)(v8.m128_f32[0] - v9.m128_f32[0]) * (float)(v8.m128_f32[0] - v9.m128_f32[0]));
        goto LABEL_12;
      default:
        v21 = 3635;
        goto LABEL_3;
    }
    v14 = v17 + (float)(v16 * v16);
LABEL_12:
    *(_DWORD *)(v4 + 8 * v5 + 72) = 18;
    v15 = sqrtf_0(v14);
LABEL_17:
    *(float *)(v4 + 8 * v5) = v15;
    *(_BYTE *)(v4 + 8 * v5 + 76) = 1;
    --*(_DWORD *)(v2 + 16);
    return v3;
  }
  v21 = 3552;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v21,
    0LL);
  return v3;
}
