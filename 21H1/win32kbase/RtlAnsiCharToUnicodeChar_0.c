/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C00CDF08
 * Callers:
 *     toupper @ 0x1C00CC564 (toupper.c)
 *     mbtowc @ 0x1C00CDDC4 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
