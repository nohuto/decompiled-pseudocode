/*
 * XREFs of __security_init_cookie @ 0x1C0088584
 * Callers:
 *     FxDriverEntry @ 0x1C003EA00 (FxDriverEntry.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_init_cookie()
{
  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
  _security_cookie_complement = ~_security_cookie;
}
