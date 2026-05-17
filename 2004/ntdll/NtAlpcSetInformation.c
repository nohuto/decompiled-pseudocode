/*
 * XREFs of NtAlpcSetInformation @ 0x18009DFA0
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TpCallbackIndependent @ 0x1800621F0 (TpCallbackIndependent.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x180079464 (TppFastAlpcAdjustConcurrencyCount.c)
 *     TppAllocAlpcCompletion @ 0x1800796D4 (TppAllocAlpcCompletion.c)
 *     AlpcRegisterCompletionList @ 0x180085B30 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x180085C70 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x180085C90 (AlpcUnregisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800E0800 (AlpcAdjustCompletionListConcurrencyCount.c)
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
