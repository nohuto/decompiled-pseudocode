/*
 * XREFs of ZwSetInformationFile @ 0x18009D2F0
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x180055664 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800564B8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpCreateFile @ 0x180056BD4 (EtwpCreateFile.c)
 *     TpBindFileToDirect @ 0x180075D98 (TpBindFileToDirect.c)
 *     LdrpResSetFilePointer @ 0x1800E4B78 (LdrpResSetFilePointer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationFile()
{
  __int64 result; // rax

  result = 39LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
