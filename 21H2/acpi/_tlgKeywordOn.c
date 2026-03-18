/*
 * XREFs of _tlgKeywordOn @ 0x1C0023FBC
 * Callers:
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x1C002F08C (AcpiDiagTraceTemperatureTelemetry.c)
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x1C0047F28 (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AcpiDiagTraceRecordAmlEvaluationStatistics @ 0x1C0048A14 (AcpiDiagTraceRecordAmlEvaluationStatistics.c)
 *     IrqTraceAffinityPolicy @ 0x1C009CEC0 (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall tlgKeywordOn(__int64 a1)
{
  return (*(_QWORD *)(a1 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(a1 + 24) & 0x400000000000LL) == *(_QWORD *)(a1 + 24);
}
