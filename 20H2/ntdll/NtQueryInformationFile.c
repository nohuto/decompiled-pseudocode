/*
 * XREFs of NtQueryInformationFile @ 0x18009D2D0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008AB90 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800E4340 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800E500C (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x1800FD4B4 (RtlpGetFileSize.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1800FF400 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationFile()
{
  __int64 result; // rax

  result = 17LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
