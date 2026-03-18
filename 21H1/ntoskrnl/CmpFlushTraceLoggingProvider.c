/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x140865DE8
 * Callers:
 *     CmShutdownSystem @ 0x140866F58 (CmShutdownSystem.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1405C3850 (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x1406E4F08 (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140C02130);
}
