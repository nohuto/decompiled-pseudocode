/*
 * XREFs of ZwAlertThreadByThreadId @ 0x18009E3F0
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180010FC0 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x1800112E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180011840 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpWakeSRWLock @ 0x180015200 (RtlpWakeSRWLock.c)
 *     RtlRunOnceComplete @ 0x180043AB0 (RtlRunOnceComplete.c)
 *     RtlWakeAllConditionVariable @ 0x18004C9D0 (RtlWakeAllConditionVariable.c)
 *     TppIteWakeWaiters @ 0x18004EFCC (TppIteWakeWaiters.c)
 *     RtlpWakeConditionVariable @ 0x18004F0D4 (RtlpWakeConditionVariable.c)
 *     RtlpWakeByAddress @ 0x18006471C (RtlpWakeByAddress.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x18006509C (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180083F60 (RtlpInitializeStaticCriticalSection.c)
 *     RtlpTpTimerQueueRundown @ 0x180084ED4 (RtlpTpTimerQueueRundown.c)
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
