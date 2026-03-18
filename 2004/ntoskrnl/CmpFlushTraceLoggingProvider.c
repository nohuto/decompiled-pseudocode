/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x140867108
 * Callers:
 *     CmShutdownSystem @ 0x1408682A8 (CmShutdownSystem.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1405C3F80 (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140708B68 (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140C02130);
}
