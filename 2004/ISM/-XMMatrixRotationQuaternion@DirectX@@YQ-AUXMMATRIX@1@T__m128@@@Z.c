/*
 * XREFs of ?XMMatrixRotationQuaternion@DirectX@@YQ?AUXMMATRIX@1@T__m128@@@Z @ 0x1800C6AE8
 * Callers:
 *     ?QuaternionToEulerAngles@SpatialInteractionDevices@@YAJAEBUXMFLOAT4@DirectX@@PEAM11@Z @ 0x1800C6758 (-QuaternionToEulerAngles@SpatialInteractionDevices@@YAJAEBUXMFLOAT4@DirectX@@PEAM11@Z.c)
 *     SpatialInteractionDevices::AdjustOrientationAndScale @ 0x1800C8F38 (SpatialInteractionDevices--AdjustOrientationAndScale.c)
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_NW4HandState@1234@@Z @ 0x1800DE85C (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpati.c)
 *     ApplyTransform @ 0x1800DF5E4 (ApplyTransform.c)
 *     ?ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@4@1@Z @ 0x18016ACA0 (-ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@.c)
 *     ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x18016FEA0 (-UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall DirectX::XMMatrixRotationQuaternion(double a1)
{
  __m128 v1; // xmm4
  __m128 v2; // xmm3
  __m128 v3; // xmm1
  __m128 v4; // xmm5
  __m128 v5; // xmm0
  __m128 v6; // xmm4

  v1 = _mm_add_ps(*(__m128 *)&a1, *(__m128 *)&a1);
  v2 = _mm_mul_ps(v1, *(__m128 *)&a1);
  v3 = _mm_mul_ps(_mm_shuffle_ps(v1, v1, 230), _mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 208));
  v4 = _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 255), _mm_shuffle_ps(v1, v1, 201));
  v5 = _mm_shuffle_ps(_mm_add_ps(v4, v3), _mm_sub_ps(v3, v4), 73);
  v6 = _mm_shuffle_ps(
         _mm_sub_ps(
           _mm_sub_ps(
             (__m128)`DirectX::XMMatrixRotationQuaternion'::`2'::Constant1110,
             _mm_and_ps(_mm_shuffle_ps(v2, v2, 193), DirectX::g_XMMask3)),
           _mm_and_ps(_mm_shuffle_ps(v2, v2, 218), DirectX::g_XMMask3)),
         _mm_shuffle_ps(v5, v5, 120),
         76);
  return _mm_shuffle_ps(v6, v6, 120);
}
