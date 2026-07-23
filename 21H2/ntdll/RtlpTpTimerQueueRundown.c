/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x180084ED4
 * Callers:
 *     RtlpTpTimerRundown @ 0x180009B48 (RtlpTpTimerRundown.c)
 *     RtlDeleteTimerQueueEx @ 0x180084D60 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     ZwSetEvent @ 0x18009D7C0 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18009E3F0 (ZwAlertThreadByThreadId.c)
 */

LOGICAL __fastcall RtlpTpTimerQueueRundown(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)a1[5];
  if ( v2 )
  {
    ZwAlertThreadByThreadId(v2);
  }
  else
  {
    v3 = (void *)a1[2];
    if ( v3 )
      ZwSetEvent(v3, 0LL);
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
