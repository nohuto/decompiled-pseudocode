/*
 * XREFs of __wtol @ 0x4B2F8040
 * Callers:
 *     __wtoi @ 0x4B2F8000 (__wtoi.c)
 * Callees:
 *     _wcstolX @ 0x4B2FAC41 (_wcstolX.c)
 */

int __cdecl _wtol(const wchar_t *String)
{
  if ( String )
    return wcstolX(String, 0, 10, 1);
  else
    return 0;
}
