/*
 * XREFs of HalpTscAdvSynchToTarget @ 0x140398190
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x1403AC640 (HalpTscAdvSynchLeader.c)
 * Callees:
 *     HalpTscAdvSynchCalculateRemoteDelta @ 0x1403ACC4C (HalpTscAdvSynchCalculateRemoteDelta.c)
 *     HalpTscTraceProcessorSynchronization @ 0x1403ACEA4 (HalpTscTraceProcessorSynchronization.c)
 *     HalpTscAdvSynchSkewCounter @ 0x14050DA5C (HalpTscAdvSynchSkewCounter.c)
 */

__int64 __fastcall HalpTscAdvSynchToTarget(unsigned int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned int v4; // edi
  int v5; // r14d
  unsigned int v6; // ebp
  __int64 result; // rax
  unsigned int i; // edi
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r8

  if ( !HalpTscAdjustAvailable )
    HalpTscAdvSynchSkewCounter(0LL);
  v2 = HalpTscAdvSynchCalculateRemoteDelta(a1, 0LL);
  v3 = 0x7FFFFFFFFFFFFFFFLL;
  if ( !HalpTscAdjustAvailable )
  {
    for ( i = 0; i < HalpTscSyncRecalculateSkews; ++i )
    {
      v9 = v3;
      v10 = v2;
      do
        HalpTscAdvSynchSkewCounter(0LL);
      while ( v11 != 1 );
      v2 = HalpTscAdvSynchCalculateRemoteDelta(a1, 0LL);
      v3 = (v2 - v10) / 100;
      if ( v3 >= v9 )
        v3 = v9;
    }
    *(_DWORD *)(HalpTscSkewOffset + 4LL * KeGetCurrentPrcb()->Number) = v3;
  }
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( !v4 )
    {
      if ( HalpTscAdjustAvailable )
      {
        v5 = v2;
        __writemsr(0x3Bu, v2 + __readmsr(0x3Bu));
      }
      else
      {
        v5 = v3 + v2;
        HalpTscAdvSynchSkewCounter(v3 + v2);
      }
    }
    v2 = HalpTscAdvSynchCalculateRemoteDelta(a1, 0LL);
    if ( !v4 )
      HalpTscTraceProcessorSynchronization(a1, KeGetCurrentPrcb()->Number, v2, v5, v6);
    ++v4;
    if ( (unsigned __int64)(v2 + 24) > 0x30 )
      v4 = 0;
    ++v6;
  }
  while ( v4 < 2 && v6 < 0x32 );
  result = HalpTscWaves;
  *(_DWORD *)(HalpTscWaves + 4LL * KeGetCurrentPrcb()->Number) = v6;
  return result;
}
