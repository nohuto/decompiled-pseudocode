/*
 * XREFs of ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x180085C5C
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z @ 0x180086440 (-StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x180086B68 (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 */

void __fastcall RayStabilizer::PerformLowPassFilterStabilization(
        RayStabilizer *this,
        struct RayStabilizationResult *a2)
{
  __int64 v2; // r15
  unsigned int v4; // esi
  unsigned __int64 v5; // rdi
  int v6; // ecx
  float v7; // xmm6_4
  unsigned __int64 v8; // rax
  unsigned int v9; // r13d
  _QWORD *v10; // rcx
  __int64 v11; // r12
  float v12; // xmm10_4
  float v13; // xmm11_4
  float v14; // xmm12_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  float i; // xmm7_4
  int v18; // esi
  bool v19; // al
  int v20; // ecx
  float v21; // xmm2_4
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __m128 v24; // xmm3
  __m128 v25; // xmm2
  __m128 v26; // xmm1
  __m128 v27; // xmm3
  __int128 v28; // [rsp+28h] [rbp-69h] BYREF
  float v29; // [rsp+38h] [rbp-59h]
  float v30; // [rsp+3Ch] [rbp-55h]
  _QWORD *v31; // [rsp+F8h] [rbp+67h]

  v2 = *(unsigned int *)a2;
  v4 = 0;
  RayStabilizationResult::GetAtStep(a2, &v28, v2 - 1);
  v5 = *((_QWORD *)this + 4);
  if ( v5 > 3 )
    v5 = 3LL;
  v6 = v5 + 1;
  if ( (__int64)(v5 + 1) < 0 )
  {
    v8 = v6 & 1 | ((v5 + 1) >> 1);
    v7 = (float)(int)v8 + (float)(int)v8;
  }
  else
  {
    v7 = (float)v6;
  }
  v9 = 0;
  v10 = *(_QWORD **)this;
  v11 = *((_QWORD *)this + 3);
  v12 = *(float *)&v28 * v7;
  v31 = *(_QWORD **)this;
  v13 = *((float *)&v28 + 1) * v7;
  v14 = *((float *)&v28 + 2) * v7;
  v15 = *((float *)&v28 + 3) * v7;
  v16 = v29 * v7;
  for ( i = v30 * v7; ; i = i + (float)(v30 * v21) )
  {
    v18 = v4 | 1;
    v19 = v11 != *((_QWORD *)this + 4) + *((_QWORD *)this + 3) && v9 < v5;
    v4 = v18 & 0xFFFFFFFE;
    if ( !v19 )
      break;
    if ( v10 )
      v10 = (_QWORD *)*v10;
    RayStabilizationResult::GetAtStep(*(_QWORD *)(v10[1] + 8 * (v11 & (v10[2] - 1LL))), &v28, v2 - 1);
    v20 = v5 - v9;
    if ( (__int64)(v5 - v9) < 0 )
    {
      v22 = v20 & 1 | ((v5 - v9) >> 1);
      v21 = (float)(int)v22 + (float)(int)v22;
    }
    else
    {
      v21 = (float)v20;
    }
    v7 = v7 + v21;
    ++v11;
    v10 = v31;
    ++v9;
    v12 = (float)(*(float *)&v28 * v21) + v12;
    v13 = (float)(*((float *)&v28 + 1) * v21) + v13;
    v14 = (float)(*((float *)&v28 + 2) * v21) + v14;
    v15 = (float)(*((float *)&v28 + 3) * v21) + v15;
    v16 = (float)(v29 * v21) + v16;
  }
  v23 = 3LL * *(unsigned int *)a2;
  *(float *)&v28 = v15 * (float)(1.0 / v7);
  *((float *)&v28 + 1) = v16 * (float)(1.0 / v7);
  v24 = _mm_movelh_ps((__m128)(unsigned __int64)v28, (__m128)COERCE_UNSIGNED_INT(i * (float)(1.0 / v7)));
  *(float *)&v28 = v12 * (float)(1.0 / v7);
  v25 = _mm_mul_ps(v24, v24);
  *((float *)&v28 + 1) = v13 * (float)(1.0 / v7);
  *((float *)&v28 + 2) = v14 * (float)(1.0 / v7);
  v26 = _mm_shuffle_ps(v25, v25, 102);
  v25.m128_f32[0] = (float)(v25.m128_f32[0] + v26.m128_f32[0]) + _mm_shuffle_ps(v26, v26, 85).m128_f32[0];
  v27 = _mm_div_ps(v24, _mm_sqrt_ps(_mm_shuffle_ps(v25, v25, 0)));
  HIDWORD(v28) = v27.m128_i32[0];
  *(_OWORD *)((char *)a2 + 8 * v23 + 4) = v28;
  *(_QWORD *)((char *)a2 + 8 * v23 + 20) = _mm_unpacklo_ps(_mm_shuffle_ps(v27, v27, 85), _mm_shuffle_ps(v27, v27, 170)).m128_u64[0];
  ++*(_DWORD *)a2;
}
