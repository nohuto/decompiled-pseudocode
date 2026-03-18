/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x140912330
 * Callers:
 *     <none>
 * Callees:
 *     NLS_DOWNCASE @ 0x140311630 (NLS_DOWNCASE.c)
 */

WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(SourceCharacter);
}
