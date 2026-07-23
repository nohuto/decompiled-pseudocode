/*
 * XREFs of NtSubscribeWnfStateChange @ 0x1800A0540
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x1800425EC (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x1800625DC (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSubscribeWnfStateChange(
        PCWNF_STATE_NAME StateName,
        WNF_CHANGE_STAMP ChangeStamp,
        ULONG EventMask,
        PULONG64 SubscriptionId)
{
  NTSTATUS result; // eax

  result = 442;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
