/*
 * XREFs of _wtol @ 0x1403D1AE0
 * Callers:
 *     _wtoi @ 0x1403D1AC0 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x14064C870 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1403D3B54 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
