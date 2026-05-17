/*
 * XREFs of RtlReportFatalFailure @ 0x1800FF540
 * Callers:
 *     RtlReportCriticalFailure @ 0x1800FF47C (RtlReportCriticalFailure.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801087AC (RtlpHpRaiseFatalLimitError.c)
 * Callees:
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     ZwTerminateProcess @ 0x18009DBC0 (ZwTerminateProcess.c)
 *     RtlReportException @ 0x1800DCAA0 (RtlReportException.c)
 */

void __fastcall RtlReportFatalFailure(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
