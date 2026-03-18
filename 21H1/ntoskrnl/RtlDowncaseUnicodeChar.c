/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x14090B450
 * Callers:
 *     <none>
 * Callees:
 *     NLS_DOWNCASE @ 0x140303830 (NLS_DOWNCASE.c)
 */

WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(SourceCharacter);
}
