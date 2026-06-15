/*
 * XREFs of __raise_securityfailure @ 0x14001CC9C
 * Callers:
 *     __report_gsfailure @ 0x14001CD00 (__report_gsfailure.c)
 *     __report_securityfailure @ 0x14001CDF4 (__report_securityfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x14001D510 (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_140084CD0 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_140084CD0 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
