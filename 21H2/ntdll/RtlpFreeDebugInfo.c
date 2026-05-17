/*
 * XREFs of RtlpFreeDebugInfo @ 0x180013E00
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180010FC0 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x1800112E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180011840 (RtlpAddDebugInfoToCriticalSection.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A1250 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall RtlpFreeDebugInfo(unsigned __int64 a1)
{
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) >= 0xAu
    && ((unsigned __int64)&RtlpStaticDebugInfo > a1 || a1 >= (unsigned __int64)&SRWLockSpinCycleCount) )
  {
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
  else
  {
    return RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, a1);
  }
}
