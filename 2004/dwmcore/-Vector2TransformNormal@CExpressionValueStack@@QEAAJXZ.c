/*
 * XREFs of ?Vector2TransformNormal@CExpressionValueStack@@QEAAJXZ @ 0x18020162C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector2TransformNormal(__int64 this)
{
  unsigned int v1; // r10d
  __int64 v2; // r9
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r10
  int v8; // eax
  float v9; // xmm5_4
  __m128 v10; // xmm1
  float v11; // xmm3_4
  float v12; // xmm4_4
  __m128 v13; // xmm0
  unsigned int v15; // [rsp+20h] [rbp-78h]

  v1 = *(_DWORD *)(this + 16);
  v2 = this;
  if ( v1 < 2 )
  {
    v15 = 7361;
LABEL_3:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v15,
      0LL);
    return v3;
  }
  v4 = *(_QWORD *)(this + 24);
  v5 = v1 - 1;
  v6 = 10LL * (v1 - 2);
  v7 = 10 * v5;
  if ( *(_DWORD *)(v4 + 8 * v6 + 72) != 35 )
  {
    v15 = 7367;
    goto LABEL_3;
  }
  v8 = *(_DWORD *)(v4 + 80 * v5 + 72);
  this = 265LL;
  if ( v8 != 104 && v8 != 265 )
  {
    v15 = 7375;
    goto LABEL_3;
  }
  v9 = *(float *)(v4 + 8 * v6);
  if ( v8 == 104 )
  {
    v10 = *(__m128 *)(v4 + 8 * v7);
    v11 = (float)(_mm_shuffle_ps(v10, v10, 255).m128_f32[0] * *(float *)(v4 + 8 * v6 + 4))
        + (float)(_mm_shuffle_ps(v10, v10, 85).m128_f32[0] * v9);
    v12 = (float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] * *(float *)(v4 + 8 * v6 + 4))
        + (float)(v10.m128_f32[0] * v9);
  }
  else
  {
    v13 = *(__m128 *)(v4 + 8 * v7);
    v11 = (float)(_mm_shuffle_ps(v13, v13, 85).m128_f32[0] * v9)
        + (float)(_mm_shuffle_ps(*(__m128 *)(v4 + 8 * v7 + 16), *(__m128 *)(v4 + 8 * v7 + 16), 85).m128_f32[0]
                * *(float *)(v4 + 8 * v6 + 4));
    v12 = (float)(COERCE_FLOAT(*(_OWORD *)(v4 + 8 * v7 + 16)) * *(float *)(v4 + 8 * v6 + 4))
        + (float)(v13.m128_f32[0] * v9);
  }
  *(_DWORD *)(v4 + 8 * v6 + 72) = 35;
  *(float *)(v4 + 8 * v6) = v12;
  *(float *)(v4 + 8 * v6 + 4) = v11;
  *(_BYTE *)(v4 + 8 * v6 + 76) = 1;
  --*(_DWORD *)(v2 + 16);
  return 0;
}
