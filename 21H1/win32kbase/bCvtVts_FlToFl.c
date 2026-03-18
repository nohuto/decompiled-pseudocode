/*
 * XREFs of bCvtVts_FlToFl @ 0x1C002E744
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C0076290 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCvtVts_FlToFl(float *a1, float *a2, float *a3, __int64 a4)
{
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm2_4

  for ( ; a4; --a4 )
  {
    v4 = a2[1];
    v5 = (float)(*a2 * *a1) + (float)(v4 * a1[2]);
    v6 = *a2 * a1[1];
    a2 += 2;
    v7 = (float)(v4 * a1[3]) + v6;
    *a3 = v5;
    a3[1] = v7;
    a3 += 2;
  }
  return 1LL;
}
