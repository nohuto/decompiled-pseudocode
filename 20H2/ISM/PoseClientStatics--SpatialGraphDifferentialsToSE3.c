/*
 * XREFs of PoseClientStatics::SpatialGraphDifferentialsToSE3 @ 0x180163EB4
 * Callers:
 *     ?PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x180162180 (-PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoseClientStatics::SpatialGraphDifferentialsToSE3(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 16);
  if ( (result & 4) != 0 && (*(_BYTE *)(a2 + 156) & 1) == 0 )
  {
    a1[12] = *(_DWORD *)(a2 + 84) ^ _xmm;
    a1[13] = *(_DWORD *)(a2 + 88) ^ _xmm;
    a1[14] = *(_DWORD *)(a2 + 92) ^ _xmm;
    result = *(unsigned int *)(a2 + 16);
  }
  if ( (result & 0x10) != 0 )
  {
    a1[15] = *(_DWORD *)(a2 + 96) ^ _xmm;
    a1[16] = *(_DWORD *)(a2 + 100) ^ _xmm;
    a1[17] = *(_DWORD *)(a2 + 104) ^ _xmm;
  }
  return result;
}
