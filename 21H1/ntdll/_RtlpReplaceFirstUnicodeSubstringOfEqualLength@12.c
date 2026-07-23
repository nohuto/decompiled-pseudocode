/*
 * XREFs of _RtlpReplaceFirstUnicodeSubstringOfEqualLength@12 @ 0x4B2E61A5
 * Callers:
 *     _RtlReplaceSystemDirectoryInPath@16 @ 0x4B2E6110 (_RtlReplaceSystemDirectoryInPath@16.c)
 * Callees:
 *     _RtlFindUnicodeSubstring@12 @ 0x4B2E61F0 (_RtlFindUnicodeSubstring@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpReplaceFirstUnicodeSubstringOfEqualLength(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        const void **a3)
{
  int v3; // edi
  PWCHAR UnicodeSubstring; // eax
  size_t v6; // [esp-4h] [ebp-Ch]

  v3 = *(unsigned __int16 *)a3;
  if ( SearchString->Length != (_WORD)v3 )
    return -1073741811;
  UnicodeSubstring = RtlFindUnicodeSubstring(FullString, SearchString, 1u);
  if ( UnicodeSubstring )
  {
    LODWORD(v6) = v3;
    memcpy(UnicodeSubstring, a3[1], v6);
  }
  return 0;
}
