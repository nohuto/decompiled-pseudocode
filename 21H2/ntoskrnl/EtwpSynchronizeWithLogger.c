/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x1406EC9F8
 * Callers:
 *     EtwpTransitionToRealtime @ 0x140630D00 (EtwpTransitionToRealtime.c)
 *     EtwpRealtimeConnect @ 0x1406EC524 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406EC954 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpFlushTrace @ 0x1406ECACC (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1406ECE0C (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1409E4DAC (EtwpIncrementTraceFile.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, unsigned int a2)
{
  struct _KEVENT *v2; // rsi
  unsigned int v5; // ebx

  v2 = (struct _KEVENT *)(a1 + 456);
  KeResetEvent((PRKEVENT)(a1 + 456));
  _InterlockedOr((volatile signed __int32 *)(a1 + 824), a2);
  if ( ObGetCurrentIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
  }
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  v5 = *(_DWORD *)(a1 + 40);
  KeResetEvent(v2);
  *(_DWORD *)(a1 + 40) = 0;
  return v5;
}
