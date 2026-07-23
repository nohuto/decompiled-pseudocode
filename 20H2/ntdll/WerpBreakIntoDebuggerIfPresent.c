/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x1800DDC1C
 * Callers:
 *     RtlReportException @ 0x1800DCCF0 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x1800DCDC0 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwTerminateProcess @ 0x18009D630 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x18009FD60 (ZwRaiseException.c)
 *     WerpIsDebugPortPresent @ 0x1800DDE80 (WerpIsDebugPortPresent.c)
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
