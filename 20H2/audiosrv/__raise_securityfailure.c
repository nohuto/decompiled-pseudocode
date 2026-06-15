/*
 * XREFs of __raise_securityfailure @ 0x180069C48
 * Callers:
 *     __report_gsfailure @ 0x180069CB0 (__report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x18006A840 (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_18019E140 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_18019E140 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
