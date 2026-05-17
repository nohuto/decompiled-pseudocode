/*
 * XREFs of NtAlpcSetInformation @ 0x18009E240
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TpCallbackIndependent @ 0x180062300 (TpCallbackIndependent.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x180079564 (TppFastAlpcAdjustConcurrencyCount.c)
 *     TppAllocAlpcCompletion @ 0x1800797D4 (TppAllocAlpcCompletion.c)
 *     AlpcRegisterCompletionList @ 0x180085C30 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x180085D70 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x180085D90 (AlpcUnregisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800E0BA0 (AlpcAdjustCompletionListConcurrencyCount.c)
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
