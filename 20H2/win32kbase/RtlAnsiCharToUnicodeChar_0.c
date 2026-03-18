/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C00CD9C8
 * Callers:
 *     toupper @ 0x1C00CC024 (toupper.c)
 *     mbtowc @ 0x1C00CD884 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
