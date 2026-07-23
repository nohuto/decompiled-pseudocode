/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x1800DD98C
 * Callers:
 *     RtlReportException @ 0x1800DCA60 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x1800DCB30 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwTerminateProcess @ 0x18009DB80 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x1800A02F0 (ZwRaiseException.c)
 *     WerpIsDebugPortPresent @ 0x1800DDBF0 (WerpIsDebugPortPresent.c)
 */

void __fastcall WerpBreakIntoDebuggerIfPresent(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)WerpIsDebugPortPresent() )
  {
    do
      ZwRaiseException(ExceptionRecord, ContextRecord, 0);
    while ( (unsigned int)WerpIsDebugPortPresent() );
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
  }
}
