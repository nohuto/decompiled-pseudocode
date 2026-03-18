/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C00CE7B8
 * Callers:
 *     toupper @ 0x1C00CCE14 (toupper.c)
 *     mbtowc @ 0x1C00CE674 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
