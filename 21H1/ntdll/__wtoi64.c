/*
 * XREFs of __wtoi64 @ 0x4B2F8010
 * Callers:
 *     <none>
 * Callees:
 *     __wcstoi64 @ 0x4B2F7C20 (__wcstoi64.c)
 */

__int64 __cdecl _wtoi64(const wchar_t *String)
{
  if ( String )
    return _wcstoi64(String, 0, 10);
  else
    return 0LL;
}
