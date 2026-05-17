/*
 * XREFs of NtReadFile @ 0x18009D170
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x1800556B4 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180056508 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpResReadFile @ 0x1800E4828 (LdrpResReadFile.c)
 *     RtlCheckBootStatusIntegrity @ 0x1800EDE60 (RtlCheckBootStatusIntegrity.c)
 *     RtlpGetSetBootStatusData @ 0x1800EE6B4 (RtlpGetSetBootStatusData.c)
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
