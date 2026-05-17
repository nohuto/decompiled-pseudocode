/*
 * XREFs of NtQueryInformationFile @ 0x18009D860
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008B190 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800E41D0 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800E4E9C (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x1800FD354 (RtlpGetFileSize.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1800FF2A0 (RtlIsPartialPlaceholderFileHandle.c)
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
