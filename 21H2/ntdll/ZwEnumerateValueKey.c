/*
 * XREFs of ZwEnumerateValueKey @ 0x18009D8A0
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180045B3C (RtlpQueryRegistryValues.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DF03C (RtlpLookupSafeCurDirList.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E38D8 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpPopulateLanguageConfigList @ 0x180105E38 (RtlpPopulateLanguageConfigList.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180106944 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180106F54 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

__int64 ZwEnumerateValueKey()
{
  __int64 result; // rax

  result = 19LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
