/*
 * XREFs of sub_180069A98 @ 0x180069A98
 * Callers:
 *     __report_gsfailure @ 0x180069B00 (__report_gsfailure.c)
 * Callees:
 *     sub_18006A690 @ 0x18006A690 (sub_18006A690.c)
 */

BOOL __fastcall sub_180069A98(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_18019E150 = IsDebuggerPresent();
  sub_18006A690(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_18019E150 )
    sub_18006A690(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
