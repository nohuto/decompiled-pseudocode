/*
 * XREFs of SpatialInteractionDevices::AdjustOrientationAndScale @ 0x1800C8EA8
 * Callers:
 *     ?GetPoseOffset@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4PoseType@1@PEAUPoseData@1@@Z @ 0x1800C92B8 (-GetPoseOffset@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4PoseType@1@PEAUPoseData@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?XMQuaternionMultiply@DirectX@@YQ?AT__m128@@T2@0@Z @ 0x1800865DC (-XMQuaternionMultiply@DirectX@@YQ-AT__m128@@T2@0@Z.c)
 *     ?XMMatrixRotationQuaternion@DirectX@@YQ?AUXMMATRIX@1@T__m128@@@Z @ 0x1800C6A58 (-XMMatrixRotationQuaternion@DirectX@@YQ-AUXMMATRIX@1@T__m128@@@Z.c)
 */

void __fastcall SpatialInteractionDevices::AdjustOrientationAndScale(
        unsigned __int64 *a1,
        union __m128 *a2,
        union __m128 *a3)
{
  __m128 v3; // xmm1
  __m128 v4; // xmm2
  char v5; // al
  __m128 v6; // xmm6
  __m128 v7; // xmm4
  float v8; // xmm0_4
  union __m128 v9; // xmm0
  __int64 v10; // rcx

  v5 = *((_BYTE *)a1 + 28);
  if ( v5 || *((_BYTE *)a1 + 29) )
  {
    if ( v5 )
    {
      v6 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
      v7 = _mm_add_ps(
             _mm_add_ps(
               _mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), v3),
               _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), DirectX::XMMatrixRotationQuaternion(*(double *)&xmmword_180207A88))),
             _mm_mul_ps(_mm_shuffle_ps(v6, v6, 170), v4));
      *(_DWORD *)a1 = v7.m128_i32[0];
      *((_DWORD *)a1 + 1) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
      v7.m128_f32[0] = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
      *((_DWORD *)a1 + 2) = v7.m128_i32[0];
      *(float *)a1 = *(float *)a1 * 0.0099999998;
      v8 = *((float *)a1 + 1) * 0.0099999998;
      *((float *)a1 + 2) = v7.m128_f32[0] * 0.0099999998;
      *((float *)a1 + 1) = v8;
    }
    if ( *((_BYTE *)a1 + 29) )
    {
      v9 = DirectX::XMQuaternionMultiply((DirectX *)a1, a2, a3);
      *(union __m128 *)(v10 + 12) = v9;
    }
  }
}
