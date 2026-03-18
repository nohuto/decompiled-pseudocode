/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x14090C700
 * Callers:
 *     <none>
 * Callees:
 *     NLS_DOWNCASE @ 0x140340600 (NLS_DOWNCASE.c)
 */

WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(SourceCharacter);
}
