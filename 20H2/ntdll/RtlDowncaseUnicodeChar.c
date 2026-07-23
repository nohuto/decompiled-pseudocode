/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1800EB500
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
