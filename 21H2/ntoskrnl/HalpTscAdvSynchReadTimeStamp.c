/*
 * XREFs of HalpTscAdvSynchReadTimeStamp @ 0x14039D578
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x14039CDE4 (HalpTscAdvSynchLeader.c)
 * Callees:
 *     HalpProcessorFence @ 0x1403F9EA0 (HalpProcessorFence.c)
 */

unsigned __int64 __fastcall HalpTscAdvSynchReadTimeStamp(unsigned int a1)
{
  unsigned __int64 v2; // r8
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a1 == KeGetCurrentPrcb()->Number )
  {
    HalpProcessorFence();
    return __rdtsc();
  }
  else
  {
    v2 = (unsigned __int64)a1 << 7;
    _InterlockedExchange((volatile __int32 *)(v2 + TscRequest), 7);
    while ( *(_DWORD *)(v2 + TscRequest) == 7 )
      _mm_pause();
    while ( *(_DWORD *)(v2 + TscRequest) )
      _mm_pause();
    _InterlockedOr(v3, 0);
    return *(_QWORD *)(v2 + TscRequest + 8);
  }
}
