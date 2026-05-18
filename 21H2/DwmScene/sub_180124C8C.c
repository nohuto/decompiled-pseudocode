/*
 * XREFs of sub_180124C8C @ 0x180124C8C
 * Callers:
 *     __report_gsfailure @ 0x180124CF0 (__report_gsfailure.c)
 * Callees:
 *     sub_180124B38 @ 0x180124B38 (sub_180124B38.c)
 */

BOOL __fastcall sub_180124C8C(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_180222610 = IsDebuggerPresent();
  sub_180124B38();
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_180222610 )
    sub_180124B38();
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
