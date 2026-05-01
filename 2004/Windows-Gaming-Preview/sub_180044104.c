/*
 * XREFs of sub_180044104 @ 0x180044104
 * Callers:
 *     __report_gsfailure @ 0x180044170 (__report_gsfailure.c)
 * Callees:
 *     sub_180044D40 @ 0x180044D40 (sub_180044D40.c)
 */

BOOL __fastcall sub_180044104(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_18005AA40 = IsDebuggerPresent();
  sub_180044D40(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_18005AA40 )
    sub_180044D40(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
