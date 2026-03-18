/*
 * XREFs of ?CitpDPPerturbHistogram@@YAIPEBU_CIT_DP_CALC_CONTEXT@@I@Z @ 0x1C01F9924
 * Callers:
 *     ?CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C01F9984 (-CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 * Callees:
 *     ?CitpDPSampleBitWithProbability@@YAEN@Z @ 0x1C01F9A48 (-CitpDPSampleBitWithProbability@@YAEN@Z.c)
 */

__int64 __fastcall CitpDPPerturbHistogram(const struct _CIT_DP_CALC_CONTEXT *a1, unsigned int a2)
{
  unsigned int i; // ebx

  if ( *((double *)a1 + 6) != 0.0 )
  {
    for ( i = 0; i < 0x1F; ++i )
    {
      if ( CitpDPSampleBitWithProbability(*((double *)a1 + 6)) )
        a2 ^= 1 << i;
    }
  }
  return a2;
}
