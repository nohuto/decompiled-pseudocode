/*
 * XREFs of __raise_securityfailure @ 0x18004512C
 * Callers:
 *     __report_gsfailure @ 0x180045170 (__report_gsfailure.c)
 *     sub_1800452E8 @ 0x1800452E8 (sub_1800452E8.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
