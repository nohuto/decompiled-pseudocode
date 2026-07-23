/*
 * XREFs of _RtlDowncaseUnicodeChar@4 @ 0x4B34DB60
 * Callers:
 *     <none>
 * Callees:
 *     _NLS_DOWNCASE@4 @ 0x4B2AABCB (_NLS_DOWNCASE@4.c)
 */

WCHAR __cdecl RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(SourceCharacter);
}
