/*
 * XREFs of towupper @ 0x1403CF990
 * Callers:
 *     PfSnParametersVerify @ 0x1407AA48C (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x14063E280 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
