/*
 * XREFs of towupper @ 0x1403D07D0
 * Callers:
 *     PfSnParametersVerify @ 0x1407AD5EC (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x140609130 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
