/*
 * XREFs of RtlReportFatalFailure @ 0x1800FF6A0
 * Callers:
 *     RtlReportCriticalFailure @ 0x1800FF5DC (RtlReportCriticalFailure.c)
 *     RtlpHpRaiseFatalLimitError @ 0x18010890C (RtlpHpRaiseFatalLimitError.c)
 * Callees:
 *     RtlRaiseException @ 0x180051070 (RtlRaiseException.c)
 *     ZwTerminateProcess @ 0x18009D630 (ZwTerminateProcess.c)
 *     RtlReportException @ 0x1800DCCF0 (RtlReportException.c)
 */

void __fastcall RtlReportFatalFailure(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
