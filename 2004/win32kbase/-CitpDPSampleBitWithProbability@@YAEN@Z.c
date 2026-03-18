/*
 * XREFs of ?CitpDPSampleBitWithProbability@@YAEN@Z @ 0x1C01F9A48
 * Callers:
 *     ?CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C01F8DC0 (-CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 *     ?CitpDPBucketToHistogram@@YAIPEBU_CIT_DP_CALC_CONTEXT@@I@Z @ 0x1C01F9170 (-CitpDPBucketToHistogram@@YAIPEBU_CIT_DP_CALC_CONTEXT@@I@Z.c)
 *     ?CitpDPPerturbHistogram@@YAIPEBU_CIT_DP_CALC_CONTEXT@@I@Z @ 0x1C01F9924 (-CitpDPPerturbHistogram@@YAIPEBU_CIT_DP_CALC_CONTEXT@@I@Z.c)
 *     ?CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C01F9984 (-CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitpDPSampleBitWithProbability(double a1)
{
  int pbBuffer; // [rsp+40h] [rbp+8h] BYREF

  pbBuffer = 0;
  BCryptGenRandom(0LL, (PUCHAR)&pbBuffer, 4u, 2u);
  return a1 > (double)pbBuffer * 2.328306436538696e-10;
}
