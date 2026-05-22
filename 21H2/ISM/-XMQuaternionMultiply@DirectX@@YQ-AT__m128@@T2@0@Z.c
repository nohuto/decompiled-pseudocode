/*
 * XREFs of ?XMQuaternionMultiply@DirectX@@YQ?AT__m128@@T2@0@Z @ 0x1800869FC
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x180085930 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     SpatialInteractionDevices::AdjustOrientationAndScale @ 0x1800C9308 (SpatialInteractionDevices--AdjustOrientationAndScale.c)
 *     SpatialInteractionDevices::ReadLocalOrientation @ 0x1800CA29C (SpatialInteractionDevices--ReadLocalOrientation.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180196460 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

union __m128 __fastcall DirectX::XMQuaternionMultiply(DirectX *this, union __m128 *a2, union __m128 *a3)
{
  __m128 v3; // xmm0
  __m128 v4; // xmm1
  __m128 v5; // xmm2
  __m128 v6; // xmm4
  __m128 v7; // xmm2

  v5 = _mm_shuffle_ps(v3, v3, 27);
  v6 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v5);
  v7 = _mm_shuffle_ps(v5, v5, 177);
  return _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(
               _mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), v7),
               (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY),
             _mm_mul_ps(
               _mm_mul_ps(_mm_shuffle_ps(v7, v7, 27), _mm_shuffle_ps(v4, v4, 170)),
               (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ)),
           _mm_add_ps(
             _mm_mul_ps(_mm_shuffle_ps(v4, v4, 255), v3),
             _mm_mul_ps((__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlWZYX, v6)));
}
