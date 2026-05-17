/*
 * XREFs of ZwGetContextThread @ 0x18009EC40
 * Callers:
 *     RtlRemoteCall @ 0x1800FED50 (RtlRemoteCall.c)
 *     RtlpSaveUmsDebugRegisterState @ 0x18010D904 (RtlpSaveUmsDebugRegisterState.c)
 *     PsspDumpThread @ 0x1801165B8 (PsspDumpThread.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetContextThread()
{
  __int64 result; // rax

  result = 242LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
