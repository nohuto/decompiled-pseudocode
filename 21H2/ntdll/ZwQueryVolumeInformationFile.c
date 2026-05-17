/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x18009DF60
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180048BF8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x18004C0E8 (EtwpFinalizeLogFileHeader.c)
 *     RtlpCreateNewDirectoryReference @ 0x18005FD2C (RtlpCreateNewDirectoryReference.c)
 *     LdrpCheckAppDirType @ 0x1800D06BC (LdrpCheckAppDirType.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x1801183C4 (RtlpQueryDiskSpacePolicyByHandle.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryVolumeInformationFile()
{
  __int64 result; // rax

  result = 73LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
