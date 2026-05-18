/*
 * XREFs of __report_gsfailure @ 0x180124CF0
 * Callers:
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 * Callees:
 *     sub_180124C8C @ 0x180124C8C (sub_180124C8C.c)
 *     capture_previous_context @ 0x180124DC4 (capture_previous_context.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  uintptr_t v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = StackCookie;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  capture_previous_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_1802220B0 = retaddr;
  ContextRecord.Rcx = v2;
  dword_1802220A0 = -1073740791;
  dword_1802220A4 = 1;
  dword_1802220B8 = 1;
  unk_1802220C0 = 2LL;
  sub_180124C8C((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
