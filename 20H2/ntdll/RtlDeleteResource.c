/*
 * XREFs of RtlDeleteResource @ 0x180010F30
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180010FC0 (RtlDeleteCriticalSection.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A0C80 (RtlpInterlockedPushEntrySList.c)
 */

void *__fastcall RtlDeleteResource(HANDLE *a1)
{
  int *v2; // rdx

  RtlDeleteCriticalSection(a1);
  NtClose(a1[5]);
  NtClose(a1[7]);
  v2 = (int *)a1[11];
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) >= 0xAu
    && (&RtlpStaticDebugInfo > (_UNKNOWN *)v2 || v2 >= &SRWLockSpinCycleCount) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1[11]);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, v2);
  }
  return memset(a1, 0, 0x60uLL);
}
