/*
 * XREFs of _towupper @ 0x4B2FA5F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUpcaseUnicodeChar@4 @ 0x4B2C01A0 (_RtlUpcaseUnicodeChar@4.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
