/*
 * XREFs of NtFlushInstallUILanguage @ 0x18009ED80
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008B950 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetInstallLanguage @ 0x1800F0D30 (RtlpSetInstallLanguage.c)
 *     RtlpRefreshCachedUILanguage @ 0x180106290 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtFlushInstallUILanguage(LANGID InstallUILanguage, ULONG SetComittedFlag)
{
  NTSTATUS result; // eax

  result = 231;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
