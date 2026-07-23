/*
 * XREFs of _WerpBreakIntoDebuggerIfPresent@12 @ 0x4B33AF53
 * Callers:
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 * Callees:
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _ZwRaiseException@12 @ 0x4B2F3FE0 (_ZwRaiseException@12.c)
 *     _WerpIsDebugPortPresent@0 @ 0x4B33B23B (_WerpIsDebugPortPresent@0.c)
 */

void __fastcall WerpBreakIntoDebuggerIfPresent(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, char a3)
{
  if ( (a3 & 4) == 0 && WerpIsDebugPortPresent() )
  {
    do
      ZwRaiseException(ExceptionRecord, ContextRecord, 0);
    while ( WerpIsDebugPortPresent() );
    ZwTerminateProcess((HANDLE)0xFFFFFFFF, ExceptionRecord->ExceptionCode);
  }
}
