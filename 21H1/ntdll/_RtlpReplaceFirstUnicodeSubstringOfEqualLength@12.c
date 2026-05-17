/*
 * XREFs of _RtlpReplaceFirstUnicodeSubstringOfEqualLength@12 @ 0x4B2E61A5
 * Callers:
 *     _RtlReplaceSystemDirectoryInPath@16 @ 0x4B2E6110 (_RtlReplaceSystemDirectoryInPath@16.c)
 * Callees:
 *     _RtlFindUnicodeSubstring@12 @ 0x4B2E61F0 (_RtlFindUnicodeSubstring@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpReplaceFirstUnicodeSubstringOfEqualLength(int a1, _WORD *a2, const void **a3)
{
  size_t v3; // edi
  void *UnicodeSubstring; // eax

  v3 = *(unsigned __int16 *)a3;
  if ( *a2 != (_WORD)v3 )
    return -1073741811;
  UnicodeSubstring = (void *)RtlFindUnicodeSubstring(a1, a2, 1);
  if ( UnicodeSubstring )
    memcpy(UnicodeSubstring, a3[1], v3);
  return 0;
}
