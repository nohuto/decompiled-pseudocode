/*
 * XREFs of HalpTscAdvSynchToTarget @ 0x1404C15A8
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x14039CDE4 (HalpTscAdvSynchLeader.c)
 * Callees:
 *     HalpTscAdvSynchCalculateRemoteDelta @ 0x14039D254 (HalpTscAdvSynchCalculateRemoteDelta.c)
 *     HalpTscTraceProcessorSynchronization @ 0x14039D504 (HalpTscTraceProcessorSynchronization.c)
 *     HalpTscAdvSynchSkewCounter @ 0x1404C1354 (HalpTscAdvSynchSkewCounter.c)
 */

__int64 __fastcall HalpTscAdvSynchToTarget(unsigned int a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  unsigned int i; // edi
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned int v8; // edi
  unsigned int v9; // esi
  __int64 v10; // r15
  __int64 result; // rax
  __int64 v12; // [rsp+20h] [rbp-28h]

  HalpTscAdvSynchSkewCounter(0LL);
  v2 = 0LL;
  v3 = 0x7FFFFFFFFFFFFFFFLL;
  for ( i = 0; i < HalpTscSyncRecalculateSkews; ++i )
  {
    v5 = v3;
    v6 = HalpTscAdvSynchCalculateRemoteDelta(a1, (unsigned int)HalpTscRequestedIterations, 0LL);
    v7 = 100LL;
    do
    {
      HalpTscAdvSynchSkewCounter(0LL);
      --v7;
    }
    while ( v7 );
    v2 = HalpTscAdvSynchCalculateRemoteDelta(a1, (unsigned int)HalpTscRequestedIterations, 0LL);
    v3 = (v2 - v6) / 100;
    if ( v3 >= v5 )
      v3 = v5;
  }
  v8 = 0;
  v9 = 0;
  *(_DWORD *)(HalpTscSkewOffset + 4LL * KeGetCurrentPrcb()->Number) = v3;
  do
  {
    v10 = v3 + v2;
    if ( !v8 )
      HalpTscAdvSynchSkewCounter(v3 + v2);
    v2 = HalpTscAdvSynchCalculateRemoteDelta(a1, (unsigned int)HalpTscRequestedIterations, 0LL);
    if ( !v8 )
    {
      LODWORD(v12) = v9;
      HalpTscTraceProcessorSynchronization(a1, KeGetCurrentPrcb()->Number, v2, v10, v12);
    }
    ++v8;
    if ( (unsigned __int64)(v2 + 24) > 0x30 )
      v8 = 0;
    ++v9;
  }
  while ( v9 < 0x32 && v8 < 2 );
  result = HalpTscWaves;
  *(_DWORD *)(HalpTscWaves + 4LL * KeGetCurrentPrcb()->Number) = v9;
  return result;
}
