/*
 * XREFs of _onexit @ 0x180123DD4
 * Callers:
 *     atexit @ 0x180123E24 (atexit.c)
 * Callees:
 *     _o__crt_atexit @ 0x1801238DB (_o__crt_atexit.c)
 *     _o__register_onexit_function @ 0x180123916 (_o__register_onexit_function.c)
 */

_onexit_t __cdecl onexit(_onexit_t Func)
{
  int v2; // eax
  int (__cdecl *v3)(); // rcx

  if ( __ROR8__(qword_180221FF0 ^ _security_cookie, _security_cookie & 0x3F) == -1LL )
    v2 = o__crt_atexit();
  else
    v2 = o__register_onexit_function();
  v3 = 0LL;
  if ( !v2 )
    return Func;
  return v3;
}
