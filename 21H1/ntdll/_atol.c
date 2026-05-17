/*
 * XREFs of _atol @ 0x4B2F6680
 * Callers:
 *     _atoi @ 0x4B2F6670 (_atoi.c)
 * Callees:
 *     _strtolX @ 0x4B2FA401 (_strtolX.c)
 */

int __cdecl atol(const char *String)
{
  if ( String )
    return strtolX(String, 0, 10, 1);
  else
    return 0;
}
