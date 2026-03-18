/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C001B069
 * Callers:
 *     mbtowc @ 0x1C001AF6C (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
