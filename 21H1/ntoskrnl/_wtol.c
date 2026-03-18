/*
 * XREFs of _wtol @ 0x1403CE010
 * Callers:
 *     _wtoi @ 0x1403CDFF0 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x140650758 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1403D0084 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
