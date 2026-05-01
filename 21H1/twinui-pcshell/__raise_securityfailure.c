/*
 * XREFs of __raise_securityfailure @ 0x18008C868
 * Callers:
 *     __report_gsfailure @ 0x18008C8D0 (__report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x18008CFAC (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_18059F060 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_18059F060 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
