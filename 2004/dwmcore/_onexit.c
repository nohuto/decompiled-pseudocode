/*
 * XREFs of _onexit @ 0x1800E2C24
 * Callers:
 *     atexit @ 0x1800E2C7C (atexit.c)
 * Callees:
 *     _crt_atexit @ 0x1800E39A2 (_crt_atexit.c)
 *     _o__register_onexit_function_0 @ 0x1800E39FC (_o__register_onexit_function_0.c)
 */

_onexit_t __cdecl onexit(_onexit_t Func)
{
  int v2; // eax
  int (__cdecl *v3)(); // rcx

  if ( __ROR8__((uintptr_t)Table._first ^ _security_cookie, _security_cookie & 0x3F) == -1LL )
    v2 = crt_atexit((_PVFV)Func);
  else
    v2 = o__register_onexit_function_0(&Table, Func);
  v3 = 0LL;
  if ( !v2 )
    return Func;
  return v3;
}
