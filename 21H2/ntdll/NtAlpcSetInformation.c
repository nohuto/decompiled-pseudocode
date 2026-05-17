/*
 * XREFs of NtAlpcSetInformation @ 0x18009E7D0
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TpCallbackIndependent @ 0x1800637F0 (TpCallbackIndependent.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x18007A594 (TppFastAlpcAdjustConcurrencyCount.c)
 *     TppAllocAlpcCompletion @ 0x18007A804 (TppAllocAlpcCompletion.c)
 *     AlpcRegisterCompletionList @ 0x180086230 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x180086370 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x180086390 (AlpcUnregisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800E0950 (AlpcAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     <none>
 */

__int64 NtAlpcSetInformation()
{
  __int64 result; // rax

  result = 141LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
