/*
 * XREFs of _tlgKeywordOn @ 0x1C000F790
 * Callers:
 *     RunContext @ 0x1C0004A10 (RunContext.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x1C0011AF0 (AcpiDiagTraceTemperatureTelemetry.c)
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x1C004970C (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AcpiDiagTraceRecordAmlEvaluationStatistics @ 0x1C0049EE4 (AcpiDiagTraceRecordAmlEvaluationStatistics.c)
 *     IrqTraceAffinityPolicy @ 0x1C0095E64 (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall tlgKeywordOn(__int64 a1)
{
  return (*(_QWORD *)(a1 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(a1 + 24) & 0x400000000000LL) == *(_QWORD *)(a1 + 24);
}
