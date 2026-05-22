/*
 * XREFs of __raise_securityfailure @ 0x18003C248
 * Callers:
 *     __report_gsfailure @ 0x18003C2B0 (__report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x18003BCCC (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_1802090F0 = IsDebuggerPresent();
  _crt_debugger_hook();
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_1802090F0 )
    _crt_debugger_hook();
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
