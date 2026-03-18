/*
 * XREFs of _atoi64 @ 0x1403D0F6C
 * Callers:
 *     KiMatchLoadOption @ 0x1409A41F4 (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x140A983D8 (RamdiskStart.c)
 * Callees:
 *     _strtoi64 @ 0x1403D0EB0 (_strtoi64.c)
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
