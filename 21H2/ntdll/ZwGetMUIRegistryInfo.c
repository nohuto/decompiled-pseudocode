/*
 * XREFs of ZwGetMUIRegistryInfo @ 0x18009F510
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070080 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008BF50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFC70 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F1270 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x180106130 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetMUIRegistryInfo()
{
  __int64 result; // rax

  result = 247LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
