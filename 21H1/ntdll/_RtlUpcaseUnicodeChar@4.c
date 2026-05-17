/*
 * XREFs of _RtlUpcaseUnicodeChar@4 @ 0x4B2C01A0
 * Callers:
 *     _towupper @ 0x4B2FA5F0 (_towupper.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 */

unsigned __int16 __stdcall RtlUpcaseUnicodeChar(unsigned __int16 a1)
{
  return NLS_UPCASE(a1);
}
