/*
 * XREFs of HalpTscAdvSynchComputeMinimumDeltaAlternate @ 0x14039D444
 * Callers:
 *     HalpTscAdvSynchCalculateRemoteDelta @ 0x14039D254 (HalpTscAdvSynchCalculateRemoteDelta.c)
 *     HalpTscAdvSynchTarget @ 0x14039D33C (HalpTscAdvSynchTarget.c)
 * Callees:
 *     HalpProcessorFence @ 0x1403F9EA0 (HalpProcessorFence.c)
 */

__int64 __fastcall HalpTscAdvSynchComputeMinimumDeltaAlternate(unsigned int a1, int a2)
{
  __int64 v2; // rdi
  int v3; // esi
  __int64 v4; // rbp
  int v5; // r14d
  unsigned __int64 *v6; // r12
  __int64 *v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rax

  v2 = 0LL;
  v3 = a2;
  v4 = 0x7FFFFFFFFFFFFFFFLL;
  v5 = 2;
  v6 = *(unsigned __int64 **)(((unsigned __int64)KeGetCurrentPrcb()->Number << 7) + TscRequest + 16);
  v7 = *(__int64 **)(((unsigned __int64)a1 << 7) + TscRequest + 16);
  while ( v3 )
  {
    --v3;
    do
    {
      _mm_pause();
      v8 = *v7;
    }
    while ( *v7 == v2 );
    v2 = *v7;
    HalpProcessorFence();
    v9 = __rdtsc();
    *v6 = v9;
    if ( v5 )
    {
      --v5;
    }
    else
    {
      v10 = v9 - v8;
      if ( v10 < v4 )
        v4 = v10;
    }
  }
  return v4;
}
