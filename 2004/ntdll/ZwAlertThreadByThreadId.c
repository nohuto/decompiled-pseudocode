/*
 * XREFs of ZwAlertThreadByThreadId @ 0x18009DC00
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180010FC0 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x1800112E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180011840 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpWakeSRWLock @ 0x180015200 (RtlpWakeSRWLock.c)
 *     RtlRunOnceComplete @ 0x180043AA0 (RtlRunOnceComplete.c)
 *     TppIteWakeWaiters @ 0x18005498C (TppIteWakeWaiters.c)
 *     RtlpWakeConditionVariable @ 0x180054A94 (RtlpWakeConditionVariable.c)
 *     RtlWakeAllConditionVariable @ 0x1800553D0 (RtlWakeAllConditionVariable.c)
 *     RtlpWakeByAddress @ 0x18006311C (RtlpWakeByAddress.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x180063A9C (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180083A60 (RtlpInitializeStaticCriticalSection.c)
 *     RtlpTpTimerQueueRundown @ 0x180084A94 (RtlpTpTimerQueueRundown.c)
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
