/*
 * XREFs of ??0PoseWithDifferentials@PosePredictionTools@@QEAA@XZ @ 0x1801566F8
 * Callers:
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x180161B60 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 *     PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials @ 0x1801640AC (PoseClientStatics--SpatialTrackingPoseToInversePoseWithDifferentials.c)
 * Callees:
 *     <none>
 */

PosePredictionTools::PoseWithDifferentials *__fastcall PosePredictionTools::PoseWithDifferentials::PoseWithDifferentials(
        PosePredictionTools::PoseWithDifferentials *this)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx

  v1 = (_DWORD *)((char *)this + 72);
  v2 = 6LL;
  *(_OWORD *)this = `ST::SE3_identity<float>'::`2'::id;
  *((_OWORD *)this + 1) = xmmword_1801DC700;
  *((_OWORD *)this + 2) = xmmword_1801DC710;
  do
  {
    *(v1 - 6) = 0;
    *v1++ = 0;
    --v2;
  }
  while ( v2 );
  return this;
}
