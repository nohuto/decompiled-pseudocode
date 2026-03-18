/*
 * XREFs of HalpTscAdjustToTarget @ 0x1404BC098
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x140399F04 (HalpTscAdvSynchLeader.c)
 * Callees:
 *     HalpTscAdvSynchCalculateRemoteDelta @ 0x14039A374 (HalpTscAdvSynchCalculateRemoteDelta.c)
 *     HalpTscTraceProcessorSynchronization @ 0x14039A624 (HalpTscTraceProcessorSynchronization.c)
 */

__int64 __fastcall HalpTscAdjustToTarget(unsigned int a1)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-18h]

  v2 = HalpTscAdvSynchCalculateRemoteDelta(a1, (unsigned int)HalpTscRequestedIterations, 0LL);
  v3 = 0;
  v4 = 0;
  do
  {
    if ( !v3 )
    {
      __writemsr(0x3Bu, v2 + __readmsr(0x3Bu));
      LODWORD(v6) = v4;
      HalpTscTraceProcessorSynchronization(a1, KeGetCurrentPrcb()->Number, v2, v2, v6);
    }
    v2 = HalpTscAdvSynchCalculateRemoteDelta(a1, (unsigned int)HalpTscRequestedIterations, 0LL);
    ++v3;
    if ( (unsigned __int64)(v2 + 24) > 0x30 )
      v3 = 0;
    ++v4;
  }
  while ( v4 < 0x32 && v3 < 2 );
  result = HalpTscWaves;
  *(_DWORD *)(HalpTscWaves + 4LL * KeGetCurrentPrcb()->Number) = v4;
  return result;
}
