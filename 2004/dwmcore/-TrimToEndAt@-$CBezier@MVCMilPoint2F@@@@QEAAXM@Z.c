/*
 * XREFs of ?TrimToEndAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x18025EB58
 * Callers:
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x18025CD1C (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x18025EAB0 (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall CBezier<float,CMilPoint2F>::TrimToEndAt(float *a1, float a2)
{
  _UNKNOWN **result; // rax
  float v4; // xmm7_4
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 1.0 - a2;
  v5 = (float)((float)(1.0 - a2) * a1[4]) + (float)(a2 * a1[6]);
  v6 = (float)(a2 * a1[7]) + (float)((float)(1.0 - a2) * a1[5]);
  a1[6] = v5;
  a1[7] = v6;
  v7 = (float)(1.0 - a2) * a1[3];
  v8 = (float)((float)(1.0 - a2) * a1[2]) + (float)(a2 * a1[4]);
  v9 = v6 * a2;
  v10 = a2 * a1[5];
  a1[4] = v8;
  v11 = v7 + v10;
  v12 = (float)(v8 * (float)(1.0 - a2)) + (float)(v5 * a2);
  a1[5] = v11;
  v13 = (float)(1.0 - a2) * a1[1];
  v14 = (float)(a2 * a1[2]) + (float)((float)(1.0 - a2) * *a1);
  v15 = a2 * a1[3];
  a1[6] = v12;
  v16 = (float)(v11 * v4) + v9;
  a1[2] = v14;
  v17 = v13 + v15;
  a1[7] = v16;
  a1[3] = v17;
  v18 = (float)(v14 * v4) + (float)(a2 * a1[4]);
  v19 = a2 * a1[5];
  a1[4] = v18;
  v20 = (float)(v17 * v4) + v19;
  a1[5] = v20;
  a1[6] = (float)(v12 * a2) + (float)(v18 * v4);
  a1[7] = (float)(v16 * a2) + (float)(v20 * v4);
  return result;
}
