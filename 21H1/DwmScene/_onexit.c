/*
 * XREFs of _onexit @ 0x18011E504
 * Callers:
 *     atexit @ 0x18011E554 (atexit.c)
 * Callees:
 *     _o__crt_atexit @ 0x18011E00B (_o__crt_atexit.c)
 *     _o__register_onexit_function @ 0x18011E046 (_o__register_onexit_function.c)
 */

_onexit_t __cdecl onexit(_onexit_t Func)
{
  int v2; // eax
  int (__cdecl *v3)(); // rcx

  if ( __ROR8__(qword_18021ACC0 ^ _security_cookie, _security_cookie & 0x3F) == -1LL )
    v2 = o__crt_atexit();
  else
    v2 = o__register_onexit_function();
  v3 = 0LL;
  if ( !v2 )
    return Func;
  return v3;
}
