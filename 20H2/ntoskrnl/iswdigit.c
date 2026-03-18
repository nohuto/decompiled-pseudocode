/*
 * XREFs of iswdigit @ 0x1403D1EC0
 * Callers:
 *     PfSnParsePrefetchParam @ 0x14064C870 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1403D3FFC (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
