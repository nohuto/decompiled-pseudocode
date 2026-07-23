/*
 * XREFs of NtWaitForAlertByThreadId @ 0x1800A0AA0
 * Callers:
 *     TppCancelTimer @ 0x180012CB4 (TppCancelTimer.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18002F690 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     TppBarrierAdjust @ 0x18005299C (TppBarrierAdjust.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x18006382C (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18006399C (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlSleepConditionVariableSRW @ 0x180064000 (RtlSleepConditionVariableSRW.c)
 *     RtlSleepConditionVariableCS @ 0x1800642A0 (RtlSleepConditionVariableCS.c)
 *     RtlpRunOnceWaitForInit @ 0x180084040 (RtlpRunOnceWaitForInit.c)
 *     RtlDeleteTimerQueueEx @ 0x180084A20 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 464;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
