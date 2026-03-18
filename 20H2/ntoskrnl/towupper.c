/*
 * XREFs of towupper @ 0x1403D3460
 * Callers:
 *     PfSnParametersVerify @ 0x1407BB52C (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x140692420 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
