/*
 * XREFs of ?ColorLerpRgb@CExpressionValueStack@@QEAAJXZ @ 0x1801FAD30
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpRgb(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  CExpressionValueStack *v2; // r10
  __m128i *v3; // r8
  const __m128i *v4; // rdx
  float *v5; // rax
  float v6; // xmm0_4
  unsigned int v7; // ebx
  __m128 v8; // xmm5
  __m128 v9; // xmm4
  float v10; // xmm3_4
  float v11; // xmm0_4
  __int32 v12; // xmm1_4
  float v13; // xmm0_4
  unsigned int v15; // [rsp+20h] [rbp-28h]
  __m128i v16; // [rsp+30h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 3 )
  {
    v15 = 3278;
LABEL_9:
    v7 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v15,
      0LL);
    return v7;
  }
  v3 = (__m128i *)(*((_QWORD *)this + 3) + 80LL * (v1 - 3));
  v4 = (const __m128i *)(*((_QWORD *)this + 3) + 80LL * (v1 - 2));
  v5 = (float *)(*((_QWORD *)this + 3) + 80LL * (v1 - 1));
  this = (CExpressionValueStack *)v3[4].m128i_u32[2];
  v6 = *v5;
  if ( *((_DWORD *)v5 + 18) != 18 || (v7 = 0, (_DWORD)this != v4[4].m128i_i32[2]) )
  {
    v15 = 3304;
    goto LABEL_9;
  }
  if ( (_DWORD)this != 70 )
  {
    v15 = 3335;
    goto LABEL_9;
  }
  v8 = (__m128)_mm_loadu_si128(v4);
  v3[4].m128i_i32[2] = 70;
  v9 = (__m128)_mm_loadu_si128(v3);
  v3[4].m128i_i8[12] = 1;
  v10 = fmaxf(0.0, fminf(v6, 1.0));
  *(float *)v16.m128i_i32 = (float)((float)(v8.m128_f32[0] - v9.m128_f32[0]) * v10) + v9.m128_f32[0];
  v11 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  *(float *)&v12 = (float)((float)(_mm_shuffle_ps(v8, v8, 85).m128_f32[0] - v11) * v10) + v11;
  v13 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
  v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
  v16.m128i_i32[1] = v12;
  *(float *)&v16.m128i_i32[2] = (float)((float)(_mm_shuffle_ps(v8, v8, 170).m128_f32[0] - v13) * v10) + v13;
  *(float *)&v16.m128i_i32[3] = (float)((float)(_mm_shuffle_ps(v8, v8, 255).m128_f32[0] - v9.m128_f32[0]) * v10)
                              + v9.m128_f32[0];
  *v3 = v16;
  *((_DWORD *)v2 + 4) -= 2;
  return v7;
}
