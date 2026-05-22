/*
 * XREFs of ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x1801A543C
 * Callers:
 *     Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x18015AE7C (Windows--Internal--Holographic--PosePredictionHelpers--CreatePredictionNode.c)
 *     Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses @ 0x18015FCB0 (Windows--Internal--Holographic--PosePredictionHelpers--InterpolatePoses.c)
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1801620B0 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 *     PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials @ 0x1801645FC (PoseClientStatics--SpatialTrackingPoseToInversePoseWithDifferentials.c)
 * Callees:
 *     ST::mult_Ax_3x3_float_ @ 0x1801A5980 (ST--mult_Ax_3x3_float_.c)
 *     ST::transpose_3_float_ @ 0x1801A5A10 (ST--transpose_3_float_.c)
 */

__int64 __fastcall ST::SE3_invert<float>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v5; // rcx

  ST::transpose_3_float_();
  result = ST::mult_Ax_3x3_float_(a1 + 36, a1, a2 + 36);
  *v5 ^= _xmm;
  v5[1] ^= _xmm;
  v5[2] ^= _xmm;
  return result;
}
