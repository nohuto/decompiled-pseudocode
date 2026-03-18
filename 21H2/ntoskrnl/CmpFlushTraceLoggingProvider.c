/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x140910800
 * Callers:
 *     CmShutdownSystem2 @ 0x14053EE38 (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1406527A8 (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x1406D6FD0 (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140C03868);
}
