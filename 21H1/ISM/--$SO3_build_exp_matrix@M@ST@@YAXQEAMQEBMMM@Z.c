/*
 * XREFs of ??$SO3_build_exp_matrix@M@ST@@YAXQEAMQEBMMM@Z @ 0x1801A5AB4
 * Callers:
 *     ??$SE3_exp@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x1801A520C (--$SE3_exp@M@ST@@YAXAEAU-$SE3@M@0@QEBM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ST::SO3_build_exp_matrix<float>(float *a1, float *a2, float a3, float a4)
{
  *a1 = 1.0 - (float)((float)((float)(a2[1] * a2[1]) + (float)(a2[2] * a2[2])) * a4);
  a1[4] = 1.0 - (float)((float)((float)(*a2 * *a2) + (float)(a2[2] * a2[2])) * a4);
  a1[8] = 1.0 - (float)((float)((float)(*a2 * *a2) + (float)(a2[1] * a2[1])) * a4);
  a1[1] = (float)((float)(a4 * *a2) * a2[1]) - (float)(a3 * a2[2]);
  a1[3] = (float)((float)(a4 * *a2) * a2[1]) + (float)(a3 * a2[2]);
  a1[2] = (float)((float)(a4 * *a2) * a2[2]) + (float)(a3 * a2[1]);
  a1[6] = (float)((float)(a4 * *a2) * a2[2]) - (float)(a3 * a2[1]);
  a1[5] = (float)((float)(a4 * a2[1]) * a2[2]) - (float)(a3 * *a2);
  a1[7] = (float)((float)(a4 * a2[1]) * a2[2]) + (float)(a3 * *a2);
}
