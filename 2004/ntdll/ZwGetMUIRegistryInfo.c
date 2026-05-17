/*
 * XREFs of ZwGetMUIRegistryInfo @ 0x18009ECC0
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006EF50 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008B850 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF8D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0ED0 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x180105D80 (RtlpRefreshCachedUILanguage.c)
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
