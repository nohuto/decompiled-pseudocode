/*
 * XREFs of ?TrimToStartAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x1802A1474
 * Callers:
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x1802A06CC (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x1802A1284 (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall CBezier<float,CMilPoint2F>::TrimToStartAt(float *a1, float a2)
{
  _UNKNOWN **result; // rax
  float v3; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm6_4
  float v9; // xmm6_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm6_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = a2 * a1[3];
  v5 = 1.0 - a2;
  v6 = a1[2] * (float)(1.0 - a2);
  v7 = (float)(1.0 - a2) * a1[1];
  *a1 = (float)((float)(1.0 - a2) * *a1) + (float)(a1[2] * a2);
  v8 = v3 + v7;
  a1[1] = v8;
  v9 = v8 * (float)(1.0 - a2);
  v10 = (float)(a2 * a1[4]) + v6;
  v11 = (float)((float)(1.0 - a2) * a1[3]) + (float)(a2 * a1[5]);
  a1[2] = v10;
  v12 = v10 * a2;
  a1[3] = v11;
  v13 = (float)(1.0 - a2) * a1[4];
  v14 = a2 * a1[6];
  v15 = a2 * a1[7];
  v16 = v14 + v13;
  v17 = v5 * a1[5];
  a1[4] = v16;
  v18 = v9 + (float)(v11 * a2);
  a1[5] = v15 + v17;
  *a1 = v12 + (float)(v5 * *a1);
  a1[1] = v18;
  v19 = v5 * a1[3];
  v20 = (float)(a2 * a1[4]) + (float)(v5 * a1[2]);
  v21 = a2 * a1[5];
  a1[2] = v20;
  v22 = v19 + v21;
  a1[3] = v22;
  *a1 = (float)(v20 * a2) + (float)(v5 * *a1);
  a1[1] = (float)(v18 * v5) + (float)(v22 * a2);
  return result;
}
