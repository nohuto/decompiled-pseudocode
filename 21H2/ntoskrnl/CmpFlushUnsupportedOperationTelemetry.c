/*
 * XREFs of CmpFlushUnsupportedOperationTelemetry @ 0x1406D6FD0
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1406D6E10 (CmpDoReconcileNextHive.c)
 *     CmpFlushTraceLoggingProvider @ 0x140910800 (CmpFlushTraceLoggingProvider.c)
 * Callees:
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x14091D12C (CmpSendUnsupportedOperationTelemetryEvent.c)
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
  while ( v0 < 27 );
  return result;
}
