/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x180084B94
 * Callers:
 *     RtlpTpTimerRundown @ 0x180009B48 (RtlpTpTimerRundown.c)
 *     RtlDeleteTimerQueueEx @ 0x180084A20 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     ZwSetEvent @ 0x18009D270 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18009DEA0 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpTpTimerQueueRundown(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    ZwAlertThreadByThreadId(v3, a2);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      ZwSetEvent(v4, 0LL);
  }
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
