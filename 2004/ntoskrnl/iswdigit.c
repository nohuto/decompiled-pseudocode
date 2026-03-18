/*
 * XREFs of iswdigit @ 0x1403CF230
 * Callers:
 *     PfSnParsePrefetchParam @ 0x1406B88E8 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1403D136C (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
