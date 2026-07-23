/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1800EB350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __cdecl RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(SourceCharacter);
}
