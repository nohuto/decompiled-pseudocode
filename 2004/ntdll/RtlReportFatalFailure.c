/*
 * XREFs of RtlReportFatalFailure @ 0x1800FF190
 * Callers:
 *     RtlReportCriticalFailure @ 0x1800FF0CC (RtlReportCriticalFailure.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801083FC (RtlpHpRaiseFatalLimitError.c)
 * Callees:
 *     RtlRaiseException @ 0x180051020 (RtlRaiseException.c)
 *     ZwTerminateProcess @ 0x18009D390 (ZwTerminateProcess.c)
 *     RtlReportException @ 0x1800DC950 (RtlReportException.c)
 */

void __fastcall RtlReportFatalFailure(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
