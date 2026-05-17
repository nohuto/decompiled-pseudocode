/*
 * XREFs of ZwGetMUIRegistryInfo @ 0x18009EF60
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006F050 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008B950 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFDE0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F13E0 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x180106290 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetMUIRegistryInfo()
{
  __int64 result; // rax

  result = 246LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
