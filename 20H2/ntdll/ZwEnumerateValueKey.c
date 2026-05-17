/*
 * XREFs of ZwEnumerateValueKey @ 0x18009D310
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180045B7C (RtlpQueryRegistryValues.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DF28C (RtlpLookupSafeCurDirList.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E3A48 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpPopulateLanguageConfigList @ 0x180105F98 (RtlpPopulateLanguageConfigList.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180106AA4 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1801070B4 (_RtlpMuiRegPopulateBaseLanguages.c)
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
