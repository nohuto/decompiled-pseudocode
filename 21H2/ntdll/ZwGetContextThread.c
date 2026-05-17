/*
 * XREFs of ZwGetContextThread @ 0x18009F490
 * Callers:
 *     RtlRemoteCall @ 0x1800FF100 (RtlRemoteCall.c)
 *     RtlpSaveUmsDebugRegisterState @ 0x18010DCB4 (RtlpSaveUmsDebugRegisterState.c)
 *     PsspDumpThread @ 0x180116968 (PsspDumpThread.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetContextThread()
{
  __int64 result; // rax

  result = 243LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
