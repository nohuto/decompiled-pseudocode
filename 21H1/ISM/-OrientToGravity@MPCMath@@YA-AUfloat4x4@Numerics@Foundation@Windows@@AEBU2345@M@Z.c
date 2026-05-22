/*
 * XREFs of ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180193678
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180192AA0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1801964B0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180196D7C (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x18004AC4B (sqrtf_0.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1800D6300 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 */

__int64 __fastcall MPCMath::OrientToGravity(__int64 a1, __int64 a2, float a3)
{
  float v6; // xmm5_4
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm3
  float v11; // xmm2_4
  float v12; // xmm1_4
  __m128 v13; // xmm4
  __m128 v14; // xmm2
  __m128 v15; // xmm1
  __m128 v16; // xmm4
  float v17; // xmm1_4
  float v18; // xmm8_4
  __m128 v19; // xmm3
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm1_4
  __m128 v23; // xmm3
  __m128 v24; // xmm2
  __m128 v25; // xmm1
  _OWORD *v26; // rax
  unsigned __int64 v28; // [rsp+28h] [rbp-79h]
  unsigned __int64 v29; // [rsp+28h] [rbp-79h]
  float v30; // [rsp+30h] [rbp-71h]
  float v31; // [rsp+38h] [rbp-69h] BYREF
  __int128 v32; // [rsp+3Ch] [rbp-65h]
  float v33; // [rsp+4Ch] [rbp-55h]
  __int128 v34; // [rsp+50h] [rbp-51h]
  float v35; // [rsp+60h] [rbp-41h]
  __int128 v36; // [rsp+64h] [rbp-3Dh]
  float v37; // [rsp+74h] [rbp-2Dh]
  _BYTE v38[128]; // [rsp+78h] [rbp-29h] BYREF

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  v28 = *(_QWORD *)(a2 + 32);
  v30 = *(float *)(a2 + 40);
  v6 = sqrtf_0(
         (float)((float)(*((float *)&v28 + 1) * *((float *)&v28 + 1)) + (float)(*(float *)&v28 * *(float *)&v28))
       + (float)(v30 * v30));
  v7 = _mm_movelh_ps((__m128)v28, (__m128)LODWORD(v30));
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_shuffle_ps(v8, v8, 102);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] + v9.m128_f32[0]) + _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v10 = _mm_div_ps(v7, _mm_sqrt_ps(_mm_shuffle_ps(v8, v8, 0)));
  v11 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
  v12 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v10.m128_f32[0] * 0.0) + v12) + (float)(v11 * 0.0)) & _xmm) <= a3 )
  {
    v22 = v12 * 0.0;
    *((float *)&v29 + 1) = (float)(v10.m128_f32[0] * 0.0) - (float)(v11 * 0.0);
    *(float *)&v29 = v11 - v22;
    v23 = _mm_movelh_ps((__m128)v29, (__m128)COERCE_UNSIGNED_INT(v22 - v10.m128_f32[0]));
    v24 = _mm_mul_ps(v23, v23);
    v25 = _mm_shuffle_ps(v24, v24, 102);
    v24.m128_f32[0] = (float)(v24.m128_f32[0] + v25.m128_f32[0]) + _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
    v19 = _mm_div_ps(v23, _mm_sqrt_ps(_mm_shuffle_ps(v24, v24, 0)));
    v20 = _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
    v21 = _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
    v16.m128_f32[0] = (float)(v21 * 0.0) - v20;
    v18 = (float)(v20 * 0.0) - (float)(v19.m128_f32[0] * 0.0);
    v17 = v19.m128_f32[0] - (float)(v21 * 0.0);
  }
  else
  {
    v13 = _mm_movelh_ps(
            (__m128)__PAIR64__(
                      (float)(*(float *)(a2 + 8) * 0.0) - (float)(*(float *)a2 * 0.0),
                      (float)(*(float *)(a2 + 4) * 0.0) - *(float *)(a2 + 8)),
            (__m128)COERCE_UNSIGNED_INT(*(float *)a2 - (float)(*(float *)(a2 + 4) * 0.0)));
    v14 = _mm_mul_ps(v13, v13);
    v15 = _mm_shuffle_ps(v14, v14, 102);
    v14.m128_f32[0] = (float)(v14.m128_f32[0] + v15.m128_f32[0]) + _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
    v16 = _mm_div_ps(v13, _mm_sqrt_ps(_mm_shuffle_ps(v14, v14, 0)));
    v17 = _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
    v18 = _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
    v19.m128_f32[0] = v17 - (float)(v18 * 0.0);
    v20 = (float)(v18 * 0.0) - v16.m128_f32[0];
    v21 = (float)(v16.m128_f32[0] * 0.0) - (float)(v17 * 0.0);
  }
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(float *)(a1 + 40) = v17;
  *(_DWORD *)a1 = v19.m128_i32[0];
  v34 = 0LL;
  *(_DWORD *)(a1 + 20) = 1065353216;
  v37 = FLOAT_1_0;
  *(float *)(a1 + 4) = v21;
  *(float *)(a1 + 8) = v20;
  *(_DWORD *)(a1 + 32) = v16.m128_i32[0];
  *(float *)(a1 + 36) = v18;
  v31 = v6;
  v33 = v6;
  v35 = v6;
  v32 = 0LL;
  v36 = 0LL;
  v26 = Windows::Foundation::Numerics::operator*((__int64)v38, (__int128 *)a1, &v31);
  *(_OWORD *)a1 = *v26;
  *(_OWORD *)(a1 + 16) = v26[1];
  *(_OWORD *)(a1 + 32) = v26[2];
  *(_OWORD *)(a1 + 48) = v26[3];
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  return a1;
}
