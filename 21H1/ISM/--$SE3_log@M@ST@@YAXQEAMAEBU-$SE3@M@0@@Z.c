/*
 * XREFs of ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x1801A5508
 * Callers:
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1801620B0 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 *     ??$SE3_interpolate@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1M@Z @ 0x1801A5364 (--$SE3_interpolate@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1M@Z.c)
 * Callees:
 *     ST::cross_float_ @ 0x1801A57FC (ST--cross_float_.c)
 *     ??$SO3_compute_exp_diff_inv_coef@M@ST@@YAXAEAMMMMM@Z @ 0x1801A5E04 (--$SO3_compute_exp_diff_inv_coef@M@ST@@YAXAEAMMMMM@Z.c)
 *     ??$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z @ 0x1801A5E74 (--$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z.c)
 */

__int64 __fastcall ST::SE3_log<float>(float *a1, float *a2)
{
  float *v2; // rdi
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdx
  __int64 result; // rax
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm0_4
  float v17; // xmm6_4
  float v18; // xmm4_4
  float v19; // xmm1_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float v22; // xmm1_4
  float v23[4]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v24[4]; // [rsp+40h] [rbp-20h] BYREF
  float v25; // [rsp+80h] [rbp+20h] BYREF
  int v26; // [rsp+88h] [rbp+28h] BYREF
  int v27; // [rsp+90h] [rbp+30h] BYREF

  v2 = a1 + 3;
  ST::SO3_log_with_exp_coefs<float>((_DWORD)a1 + 12, (_DWORD)a2, (unsigned int)&v27, (unsigned int)&v26, (__int64)&v25);
  ST::SO3_compute_exp_diff_inv_coef<float>((unsigned int)&v25, v5, v6, v7, LODWORD(v25));
  ST::cross_float_(v23, v2, a2 + 9);
  result = ST::cross_float_(v24, v8, v23);
  v10 = a2[9];
  v11 = v25;
  v12 = *(float *)v24;
  v13 = v23[0] * 0.5;
  *a1 = v10;
  v14 = a2[10];
  v15 = v10 - v13;
  v16 = v23[1];
  a1[1] = v14;
  v17 = a2[11];
  v18 = v15 + (float)(v12 * v11);
  v19 = *(float *)&v24[1] * v11;
  *a1 = v18;
  v20 = (float)(v14 - (float)(v16 * 0.5)) + v19;
  v21 = v17 - (float)(v23[2] * 0.5);
  v22 = *(float *)&v24[2] * v11;
  a1[1] = v20;
  a1[2] = v21 + v22;
  return result;
}
