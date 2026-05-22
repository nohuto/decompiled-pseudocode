/*
 * XREFs of __report_gsfailure @ 0x18003C510
 * Callers:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x18003C4A8 (__raise_securityfailure.c)
 *     capture_previous_context @ 0x18003C5E8 (capture_previous_context.c)
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
  qword_180208B90 = retaddr;
  ContextRecord.Rcx = v2;
  dword_180208B80 = -1073740791;
  dword_180208B84 = 1;
  dword_180208B98 = 1;
  unk_180208BA0 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
