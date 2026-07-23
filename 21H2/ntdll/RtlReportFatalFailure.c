/*
 * XREFs of RtlReportFatalFailure @ 0x1800FF500
 * Callers:
 *     RtlReportCriticalFailure @ 0x1800FF43C (RtlReportCriticalFailure.c)
 *     RtlpHpRaiseFatalLimitError @ 0x18010876C (RtlpHpRaiseFatalLimitError.c)
 * Callees:
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     ZwTerminateProcess @ 0x18009DB80 (ZwTerminateProcess.c)
 *     RtlReportException @ 0x1800DCA60 (RtlReportException.c)
 */

void __fastcall RtlReportFatalFailure(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
