/*
 * XREFs of ZwEnumerateValueKey @ 0x18009D070
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180045B2C (RtlpQueryRegistryValues.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DEEEC (RtlpLookupSafeCurDirList.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E35F8 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpPopulateLanguageConfigList @ 0x180105A88 (RtlpPopulateLanguageConfigList.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180106594 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180106BA4 (_RtlpMuiRegPopulateBaseLanguages.c)
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
