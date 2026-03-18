/*
 * XREFs of iswdigit @ 0x1403CE3F0
 * Callers:
 *     PfSnParsePrefetchParam @ 0x140650758 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1403D052C (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
