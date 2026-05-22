/*
 * XREFs of ??$SE3_mult_a_binv@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x1801A522C
 * Callers:
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x180161BF0 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 *     ??$SE3_interpolate@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1M@Z @ 0x1801A4EF4 (--$SE3_interpolate@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1M@Z.c)
 * Callees:
 *     ST::mult_ABt_3x3x3_float_ @ 0x1801A5428 (ST--mult_ABt_3x3x3_float_.c)
 */

__int64 __fastcall ST::SE3_mult_a_binv<float>(float *a1, float *a2)
{
  __int64 result; // rax
  float *v5; // r11

  result = ST::mult_ABt_3x3x3_float_();
  a1[9] = a2[9] - (float)((float)((float)(v5[10] * a1[1]) + (float)(v5[9] * *a1)) + (float)(v5[11] * a1[2]));
  a1[10] = a2[10] - (float)((float)((float)(a1[4] * v5[10]) + (float)(a1[3] * v5[9])) + (float)(a1[5] * v5[11]));
  a1[11] = a2[11] - (float)((float)((float)(a1[7] * v5[10]) + (float)(a1[6] * v5[9])) + (float)(a1[8] * v5[11]));
  return result;
}
