/*
 * XREFs of __report_gsfailure @ 0x180069B00
 * Callers:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 * Callees:
 *     sub_180069A98 @ 0x180069A98 (sub_180069A98.c)
 *     capture_previous_context @ 0x180069BD8 (capture_previous_context.c)
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
  qword_18019DBF0 = retaddr;
  ContextRecord.Rcx = v2;
  dword_18019DBE0 = -1073740791;
  dword_18019DBE4 = 1;
  dword_18019DBF8 = 1;
  unk_18019DC00 = 2LL;
  sub_180069A98((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
