/*
 * XREFs of ___security_init_cookie @ 0x292010
 * Callers:
 *     _GsDriverEntry@8 @ 0x292000 (_GsDriverEntry@8.c)
 * Callees:
 *     <none>
 */

void __cdecl __security_init_cookie()
{
  if ( !__security_cookie || __security_cookie == -1153374642 )
    __fastfail(6u);
  __security_cookie_complement = ~__security_cookie;
}
