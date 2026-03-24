/*
 * XREFs of _tlgKeywordOn @ 0x1C000FB50
 * Callers:
 *     RunContext @ 0x1C0004DD0 (RunContext.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x1C0011D50 (AcpiDiagTraceTemperatureTelemetry.c)
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x1C004985C (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AcpiDiagTraceRecordAmlEvaluationStatistics @ 0x1C004A034 (AcpiDiagTraceRecordAmlEvaluationStatistics.c)
 *     IrqTraceAffinityPolicy @ 0x1C0096174 (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall tlgKeywordOn(__int64 a1)
{
  return (*(_QWORD *)(a1 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(a1 + 24) & 0x400000000000LL) == *(_QWORD *)(a1 + 24);
}
