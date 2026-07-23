/*
 * XREFs of HalpTscAdjustToLeader @ 0x14039D168
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x14039CDE4 (HalpTscAdvSynchLeader.c)
 * Callees:
 *     HalpTscAdvSynchCalculateRemoteDelta @ 0x14039D254 (HalpTscAdvSynchCalculateRemoteDelta.c)
 *     HalpTscTraceProcessorSynchronization @ 0x14039D504 (HalpTscTraceProcessorSynchronization.c)
 */

__int64 __fastcall HalpTscAdjustToLeader(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r8
  unsigned int v3; // ebx
  unsigned int v4; // esi
  __int64 result; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF

  v1 = (unsigned int)a1;
  v2 = HalpTscAdvSynchCalculateRemoteDelta(a1, (unsigned int)HalpTscRequestedIterations, 0LL);
  v3 = 0;
  v4 = 0;
  do
  {
    if ( !v3 )
    {
      *(_QWORD *)((v1 << 7) + TscRequest + 8) = -v2;
      _InterlockedOr(v6, 0);
      _InterlockedExchange((volatile __int32 *)((v1 << 7) + TscRequest), 3);
      while ( *(_DWORD *)((v1 << 7) + TscRequest) == 3 )
        _mm_pause();
      HalpTscTraceProcessorSynchronization(KeGetCurrentPrcb()->Number, v1, v2, v2, v4);
    }
    v2 = HalpTscAdvSynchCalculateRemoteDelta((unsigned int)v1, (unsigned int)HalpTscRequestedIterations, 0LL);
    ++v3;
    if ( (unsigned __int64)(v2 + 24) > 0x30 )
      v3 = 0;
    ++v4;
  }
  while ( v3 < 2 && v4 < 0x32 );
  result = HalpTscWaves;
  *(_DWORD *)(HalpTscWaves + 4 * v1) = v4;
  return result;
}
