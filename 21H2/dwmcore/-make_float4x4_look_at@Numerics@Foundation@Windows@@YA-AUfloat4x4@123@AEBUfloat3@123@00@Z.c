/*
 * XREFs of ?make_float4x4_look_at@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@00@Z @ 0x18000B10C
 * Callers:
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x18000975C (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Num.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Numerics::make_float4x4_look_at(__int64 a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm11_4
  float v5; // xmm12_4
  float v6; // xmm13_4
  __m128 v7; // xmm10
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm10
  float v11; // xmm9_4
  float v12; // xmm8_4
  __m128 v13; // xmm7
  __m128 v14; // xmm2
  __m128 v15; // xmm1
  __m128 v16; // xmm7
  float v17; // xmm6_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  __int64 result; // rax
  float v21; // xmm3_4
  unsigned __int64 v22; // [rsp+8h] [rbp-39h]

  v4 = a2[2];
  v5 = *a2;
  v6 = a2[1];
  *(float *)&v22 = *a2 - *a3;
  *((float *)&v22 + 1) = v6 - a3[1];
  v7 = _mm_movelh_ps((__m128)v22, (__m128)COERCE_UNSIGNED_INT(v4 - a3[2]));
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_shuffle_ps(v8, v8, 102);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] + v9.m128_f32[0]) + _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v10 = _mm_div_ps(v7, _mm_sqrt_ps(_mm_shuffle_ps(v8, v8, 0)));
  v11 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
  v12 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  *(float *)&v22 = (float)(v11 * a4[1]) - (float)(v12 * a4[2]);
  *((float *)&v22 + 1) = (float)(v10.m128_f32[0] * a4[2]) - (float)(v11 * *a4);
  v13 = _mm_movelh_ps((__m128)v22, (__m128)COERCE_UNSIGNED_INT((float)(v12 * *a4) - (float)(v10.m128_f32[0] * a4[1])));
  v14 = _mm_mul_ps(v13, v13);
  v15 = _mm_shuffle_ps(v14, v14, 102);
  v14.m128_f32[0] = (float)(v14.m128_f32[0] + v15.m128_f32[0]) + _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
  v16 = _mm_div_ps(v13, _mm_sqrt_ps(_mm_shuffle_ps(v14, v14, 0)));
  v17 = _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
  v15.m128_f32[0] = _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
  v18 = (float)(v15.m128_f32[0] * v12) - (float)(v17 * v11);
  *(float *)(a1 + 16) = v17;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 32) = v15.m128_i32[0];
  *(_DWORD *)(a1 + 28) = 0;
  v19 = (float)(v16.m128_f32[0] * v11) - (float)(v15.m128_f32[0] * v10.m128_f32[0]);
  *(_DWORD *)a1 = v16.m128_i32[0];
  *(_DWORD *)(a1 + 44) = 0;
  result = a1;
  v21 = (float)(v17 * v10.m128_f32[0]) - (float)(v16.m128_f32[0] * v12);
  *(float *)(a1 + 20) = v19;
  *(_DWORD *)(a1 + 8) = v10.m128_i32[0];
  *(float *)(a1 + 24) = v12;
  *(float *)(a1 + 40) = v11;
  *(_DWORD *)(a1 + 48) = COERCE_UNSIGNED_INT((float)((float)(v17 * v6) + (float)(v16.m128_f32[0] * v5)) + (float)(v15.m128_f32[0] * v4)) ^ _xmm;
  *(_DWORD *)(a1 + 56) = COERCE_UNSIGNED_INT((float)((float)(v6 * v12) + (float)(v5 * v10.m128_f32[0])) + (float)(v4 * v11)) ^ _xmm;
  *(_DWORD *)(a1 + 52) = COERCE_UNSIGNED_INT((float)((float)(v19 * v6) + (float)(v5 * v18)) + (float)(v4 * v21)) ^ _xmm;
  *(float *)(a1 + 4) = v18;
  *(float *)(a1 + 36) = v21;
  return result;
}
