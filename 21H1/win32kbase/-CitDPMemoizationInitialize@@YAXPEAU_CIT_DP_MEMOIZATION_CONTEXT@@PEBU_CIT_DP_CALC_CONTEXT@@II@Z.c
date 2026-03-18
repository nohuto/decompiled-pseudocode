/*
 * XREFs of ?CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C01FE7CC
 * Callers:
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01FECCC (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     ?CitpDPBucketToHistogram@@YAIPEBU_CIT_DP_CALC_CONTEXT@@I@Z @ 0x1C01FEB7C (-CitpDPBucketToHistogram@@YAIPEBU_CIT_DP_CALC_CONTEXT@@I@Z.c)
 *     ?CitpDPSampleBitWithProbability@@YAEN@Z @ 0x1C01FF454 (-CitpDPSampleBitWithProbability@@YAEN@Z.c)
 */

void __fastcall CitDPMemoizationInitialize(
        struct _CIT_DP_MEMOIZATION_CONTEXT *a1,
        const struct _CIT_DP_CALC_CONTEXT *a2,
        unsigned int a3,
        unsigned int a4)
{
  int *v5; // rbx
  __int64 v8; // r15
  double v9; // xmm0_8
  unsigned __int8 v10; // al
  double v11; // xmm0_8
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // ebp
  unsigned int pbBuffer; // [rsp+68h] [rbp+20h] BYREF

  pbBuffer = a4;
  v5 = (int *)((char *)a1 + 12);
  v8 = 11LL;
  do
  {
    pbBuffer = 0;
    BCryptGenRandom(0LL, (PUCHAR)&pbBuffer, 4u, 2u);
    v9 = *((double *)a2 + 4);
    *v5 ^= (*v5 ^ (pbBuffer % a3)) & 0x3FFFFFFF;
    v10 = CitpDPSampleBitWithProbability(v9);
    v11 = *((double *)a2 + 3);
    *v5 ^= (*v5 ^ (v10 << 30)) & 0x40000000;
    *v5 = *v5 & 0x7FFFFFFF | (CitpDPSampleBitWithProbability(v11) << 31);
    v13 = CitpDPBucketToHistogram(a2, v12);
    v5[2] = 0;
    v14 = 0;
    v5[1] = v13;
    do
    {
      if ( ((1 << v14) & v5[1]) != 0 || CitpDPSampleBitWithProbability(1.0 / *((double *)a2 + 2)) )
        v5[2] |= 1 << v14;
      ++v14;
    }
    while ( v14 < 0x1F );
    v5 += 3;
    --v8;
  }
  while ( v8 );
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *((_DWORD *)a1 + 2) = a3;
}
