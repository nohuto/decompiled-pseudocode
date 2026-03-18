/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x14086CB28
 * Callers:
 *     CmShutdownSystem @ 0x14086DCC8 (CmShutdownSystem.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1405C7C10 (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x1406D5200 (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140C02130);
}
