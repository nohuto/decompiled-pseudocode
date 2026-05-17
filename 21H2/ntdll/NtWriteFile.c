/*
 * XREFs of NtWriteFile @ 0x18009D740
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180048BF8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x18004C0E8 (EtwpFinalizeLogFileHeader.c)
 *     EtwpFlushBuffer @ 0x18004CA44 (EtwpFlushBuffer.c)
 *     EtwpWriteBufferCompressed @ 0x180087EB0 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1800882BC (EtwpWriteRemainingCompressedData.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EDEB0 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EE1B0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800EE544 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 NtWriteFile()
{
  __int64 result; // rax

  result = 8LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
