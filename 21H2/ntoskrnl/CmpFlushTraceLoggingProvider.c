/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x14086A8B8
 * Callers:
 *     CmShutdownSystem @ 0x14086BA58 (CmShutdownSystem.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1405C9670 (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140619E1C (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140C02130);
}
