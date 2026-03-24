/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x14086A758
 * Callers:
 *     CmShutdownSystem @ 0x14086B8F8 (CmShutdownSystem.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1405C9440 (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140725A44 (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140C02130);
}
