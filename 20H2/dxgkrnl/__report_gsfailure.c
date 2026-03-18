/*
 * XREFs of __report_gsfailure @ 0x1C00243E0
 * Callers:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 * Callees:
 *     <none>
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  __fastfail(2u);
}
