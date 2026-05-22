/*
 * XREFs of ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x180085510
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z @ 0x1800863A0 (-StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     fmodf_0 @ 0x18004A5F3 (fmodf_0.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x18007F1EC (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 *     ?ComputeDropOffTarget@RayStabilizer@@AEAA?AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z @ 0x180085098 (-ComputeDropOffTarget@RayStabilizer@@AEAA-AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z.c)
 *     ?ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z @ 0x180085E88 (-ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z.c)
 *     ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x18008649C (-TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z.c)
 *     ?XMQuaternionMultiply@DirectX@@YQ?AT__m128@@T2@0@Z @ 0x1800865DC (-XMQuaternionMultiply@DirectX@@YQ-AT__m128@@T2@0@Z.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x1800867B4 (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x180086AC8 (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 */

void __fastcall RayStabilizer::PerformDropOffStabilization(__m128 *this, struct RayStabilizationResult *a2)
{
  __int64 v2; // rsi
  __m128 v5; // xmm6
  unsigned __int64 v6; // xmm7_8
  __m128 *v7; // rax
  __m128 v8; // xmm9
  __m128 v9; // xmm10
  union __m128 *v10; // rdx
  DirectX *v11; // rcx
  union __m128 *v12; // r8
  union __m128 v13; // xmm0
  __m128 v14; // xmm3
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  __m128 v17; // xmm3
  __int64 v18; // rcx
  unsigned int v19; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v20; // [rsp+2Ch] [rbp-DCh]
  float v21; // [rsp+30h] [rbp-D8h]
  __m128 v22; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v23; // [rsp+48h] [rbp-C0h]
  __m128 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+68h] [rbp-A0h]
  __m128 v26; // [rsp+78h] [rbp-90h]
  unsigned __int64 v27; // [rsp+88h] [rbp-80h]
  float v28[32]; // [rsp+98h] [rbp-70h] BYREF

  v2 = *(unsigned int *)a2;
  RayStabilizationResult::GetAtStep(a2, &v24, v2 - 1);
  v5 = v24;
  v6 = v25;
  v27 = v25;
  v26 = v24;
  if ( (unsigned __int8)RayStabilizer::TransformRay(&v24, &v22) )
  {
    v24 = v22;
    v25 = v23;
    if ( RayStabilizer::ProcessHistory(
           (RayStabilizer *)this,
           v2 - 1,
           (const struct RayStabilizer::TargetingData *)&v22,
           (struct RayStabilizer::ProcessedHistoryData *)v28) )
    {
      v7 = RayStabilizer::ComputeDropOffTarget(this, &v24, v22.m128_f32, v28);
      v20 = 0;
      v21 = 0.0;
      v8 = *v7;
      v19 = 1065353216;
      v9 = v7[1];
      v26.m128_f32[0] = (float)((float)(v8.m128_f32[0] - v22.m128_f32[0]) * 0.66600001) + v22.m128_f32[0];
      v26.m128_f32[1] = (float)((float)(_mm_shuffle_ps(v8, v8, 85).m128_f32[0] - v22.m128_f32[1]) * 0.66600001)
                      + v22.m128_f32[1];
      v26.m128_f32[2] = (float)((float)(_mm_shuffle_ps(v8, v8, 170).m128_f32[0] - v22.m128_f32[2]) * 0.66600001)
                      + v22.m128_f32[2];
      fmodf_0(_mm_shuffle_ps(v9, v9, 170).m128_f32[0] - *((float *)&v23 + 2), 360.0);
      Windows::Foundation::Numerics::make_quaternion_from_axis_angle(&v24, &v19);
      v19 = 0;
      v21 = 0.0;
      v20 = 1065353216;
      fmodf_0(_mm_shuffle_ps(v9, v9, 255).m128_f32[0] - *((float *)&v23 + 3), 360.0);
      Windows::Foundation::Numerics::make_quaternion_from_axis_angle(&v22, &v19);
      v13 = DirectX::XMQuaternionMultiply(v11, v10, v12);
      v21 = FLOAT_N1_0;
      v19 = 0x80000000;
      v24 = v13;
      v20 = 0x80000000;
      Windows::Foundation::Numerics::transform(v22.m128_f32, (float *)&v19, v24.m128_f32);
      v14 = _mm_movelh_ps((__m128)v22.m128_u64[0], (__m128)v22.m128_u32[2]);
      v15 = _mm_mul_ps(v14, v14);
      v16 = _mm_shuffle_ps(v15, v15, 102);
      v15.m128_f32[0] = (float)(v15.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
      v17 = _mm_div_ps(v14, _mm_sqrt_ps(_mm_shuffle_ps(v15, v15, 0)));
      v26.m128_i32[3] = v17.m128_i32[0];
      v5 = v26;
      v27 = __PAIR64__(_mm_shuffle_ps(v17, v17, 170).m128_u32[0], _mm_shuffle_ps(v17, v17, 85).m128_u32[0]);
      v6 = v27;
    }
    else
    {
      v9 = (__m128)v25;
      v8 = v24;
    }
    this[3] = v8;
    this[5].m128_i8[0] = 1;
    this[4] = v9;
  }
  v18 = 3LL * *(unsigned int *)a2;
  *(__m128 *)((char *)a2 + 8 * v18 + 4) = v5;
  *(_QWORD *)((char *)a2 + 8 * v18 + 20) = v6;
  ++*(_DWORD *)a2;
}
