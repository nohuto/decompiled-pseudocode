/*
 * XREFs of NtQueryInformationFile @ 0x18009D030
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008AA90 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800E3EF0 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800E4BBC (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x1800FCFA4 (RtlpGetFileSize.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1800FEEF0 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  NTSTATUS result; // eax

  result = 17;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
