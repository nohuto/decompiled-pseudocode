/*
 * XREFs of _wtol @ 0x1403CEE50
 * Callers:
 *     _wtoi @ 0x1403CEE30 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x1406B88E8 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1403D0EC4 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
