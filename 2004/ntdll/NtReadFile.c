/*
 * XREFs of NtReadFile @ 0x18009CED0
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x180055664 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800564B8 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpResReadFile @ 0x1800E43D8 (LdrpResReadFile.c)
 *     RtlCheckBootStatusIntegrity @ 0x1800ED950 (RtlCheckBootStatusIntegrity.c)
 *     RtlpGetSetBootStatusData @ 0x1800EE1A4 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 NtReadFile()
{
  __int64 result; // rax

  result = 6LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
