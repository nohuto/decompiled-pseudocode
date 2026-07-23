/*
 * XREFs of ZwAlertThreadByThreadId @ 0x18009DEA0
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180010FC0 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x1800112E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180011840 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpWakeSRWLock @ 0x180015200 (RtlpWakeSRWLock.c)
 *     RtlRunOnceComplete @ 0x180043AF0 (RtlRunOnceComplete.c)
 *     TppIteWakeWaiters @ 0x1800549DC (TppIteWakeWaiters.c)
 *     RtlpWakeConditionVariable @ 0x180054AE4 (RtlpWakeConditionVariable.c)
 *     RtlWakeAllConditionVariable @ 0x180055420 (RtlWakeAllConditionVariable.c)
 *     RtlpWakeByAddress @ 0x18006322C (RtlpWakeByAddress.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x180063BAC (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180083B60 (RtlpInitializeStaticCriticalSection.c)
 *     RtlpTpTimerQueueRundown @ 0x180084B94 (RtlpTpTimerQueueRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertThreadByThreadId(HANDLE ThreadId)
{
  NTSTATUS result; // eax

  result = 112;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
