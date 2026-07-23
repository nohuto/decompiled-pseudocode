/*
 * XREFs of NtFlushInstallUILanguage @ 0x18009F2F0
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008BF50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetInstallLanguage @ 0x1800F0B80 (RtlpSetInstallLanguage.c)
 *     RtlpRefreshCachedUILanguage @ 0x1801060F0 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtFlushInstallUILanguage(LANGID InstallUILanguage, ULONG SetComittedFlag)
{
  NTSTATUS result; // eax

  result = 232;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
