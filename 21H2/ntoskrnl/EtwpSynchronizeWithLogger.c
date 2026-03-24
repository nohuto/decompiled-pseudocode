/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x1406B8D9C
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1403F9098 (EtwpTransitionToRealtime.c)
 *     EtwpRealtimeConnect @ 0x1406B88C8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406B8CF8 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpFlushTrace @ 0x1406DD6A4 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x140796D68 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x140934BE4 (EtwpIncrementTraceFile.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD40 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x14025F590 (ObGetCurrentIrql.c)
 *     KeResetEvent @ 0x14027BC40 (KeResetEvent.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, unsigned int a2)
{
  struct _KEVENT *v2; // rsi
  unsigned int v5; // ebx

  v2 = (struct _KEVENT *)(a1 + 472);
  KeResetEvent((PRKEVENT)(a1 + 472));
  _InterlockedOr((volatile signed __int32 *)(a1 + 836), a2);
  if ( ObGetCurrentIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 496), 0, 0);
  }
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  v5 = *(_DWORD *)(a1 + 56);
  KeResetEvent(v2);
  *(_DWORD *)(a1 + 56) = 0;
  return v5;
}
