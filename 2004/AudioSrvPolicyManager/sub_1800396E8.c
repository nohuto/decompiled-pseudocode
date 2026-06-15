/*
 * XREFs of sub_1800396E8 @ 0x1800396E8
 * Callers:
 *     __report_gsfailure @ 0x180039750 (__report_gsfailure.c)
 * Callees:
 *     sub_18003A2E0 @ 0x18003A2E0 (sub_18003A2E0.c)
 */

BOOL __fastcall sub_1800396E8(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_18004FBD0 = IsDebuggerPresent();
  sub_18003A2E0(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_18004FBD0 )
    sub_18003A2E0(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
