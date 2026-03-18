/*
 * XREFs of CmpFlushUnsupportedOperationTelemetry @ 0x1406E4F08
 * Callers:
 *     CmpDoReconcileNextHive @ 0x14068EA00 (CmpDoReconcileNextHive.c)
 *     CmpFlushTraceLoggingProvider @ 0x140865DE8 (CmpFlushTraceLoggingProvider.c)
 * Callees:
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x140871E2C (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

__int64 CmpFlushUnsupportedOperationTelemetry()
{
  int v0; // ebx
  volatile __int32 *v1; // rdi
  __int64 result; // rax

  v0 = 0;
  v1 = (volatile __int32 *)&CmpUnsupportedOperationHits;
  do
  {
    if ( _InterlockedExchange(v1, 0) )
      result = CmpSendUnsupportedOperationTelemetryEvent((unsigned int)v0);
    ++v0;
    ++v1;
  }
  while ( v0 < 28 );
  return result;
}
