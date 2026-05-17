/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x1800DD9CC
 * Callers:
 *     RtlReportException @ 0x1800DCAA0 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x1800DCB70 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwTerminateProcess @ 0x18009DBC0 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x1800A0330 (ZwRaiseException.c)
 *     WerpIsDebugPortPresent @ 0x1800DDC30 (WerpIsDebugPortPresent.c)
 */

void __fastcall WerpBreakIntoDebuggerIfPresent(__int64 a1, __int64 a2, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)WerpIsDebugPortPresent() )
  {
    do
      ZwRaiseException();
    while ( (unsigned int)WerpIsDebugPortPresent() );
    ZwTerminateProcess();
  }
}
