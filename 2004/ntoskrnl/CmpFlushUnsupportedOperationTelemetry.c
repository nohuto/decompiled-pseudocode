/*
 * XREFs of CmpFlushUnsupportedOperationTelemetry @ 0x140708B68
 * Callers:
 *     CmpDoReconcileNextHive @ 0x14063C860 (CmpDoReconcileNextHive.c)
 *     CmpFlushTraceLoggingProvider @ 0x140867108 (CmpFlushTraceLoggingProvider.c)
 * Callees:
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x14087311C (CmpSendUnsupportedOperationTelemetryEvent.c)
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
