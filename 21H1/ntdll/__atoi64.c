/*
 * XREFs of __atoi64 @ 0x4B2F6640
 * Callers:
 *     <none>
 * Callees:
 *     __strtoi64 @ 0x4B2FB755 (__strtoi64.c)
 */

__int64 __cdecl _atoi64(const char *String)
{
  if ( String )
    return _strtoi64(String, 0, 10);
  else
    return 0LL;
}
