/*
 * XREFs of RtlpFreeDebugInfo @ 0x180013E00
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180010FC0 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x1800112E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180011840 (RtlpAddDebugInfoToCriticalSection.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A09E0 (RtlpInterlockedPushEntrySList.c)
 */

LOGICAL __fastcall RtlpFreeDebugInfo(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) >= 0xAu
    && (&RtlpStaticDebugInfo > (_UNKNOWN *)a1 || a1 >= &RtlpForceCSDebugInfoCreation) )
  {
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  else
  {
    return RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, a1, a3, a4);
  }
}
