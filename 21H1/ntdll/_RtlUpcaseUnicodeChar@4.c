/*
 * XREFs of _RtlUpcaseUnicodeChar@4 @ 0x4B2C01A0
 * Callers:
 *     _towupper @ 0x4B2FA5F0 (_towupper.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 */

WCHAR __cdecl RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_UPCASE(SourceCharacter);
}
