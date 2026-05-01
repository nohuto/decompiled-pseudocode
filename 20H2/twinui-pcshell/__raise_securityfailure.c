/*
 * XREFs of __raise_securityfailure @ 0x18008CB48
 * Callers:
 *     __report_gsfailure @ 0x18008CBB0 (__report_gsfailure.c)
 *     __report_securityfailure @ 0x18008CCA4 (__report_securityfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x18008D3BC (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_1805CB290 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_1805CB290 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
