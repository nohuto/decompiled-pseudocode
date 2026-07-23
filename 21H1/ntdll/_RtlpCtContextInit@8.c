/*
 * XREFs of _RtlpCtContextInit@8 @ 0x4B369E6A
 * Callers:
 *     _RtlRaiseCustomSystemEventTrigger@4 @ 0x4B369C20 (_RtlRaiseCustomSystemEventTrigger@4.c)
 * Callees:
 *     _RtlpSubscribeWnfStateChangeNotificationInternal@40 @ 0x4B2B068F (_RtlpSubscribeWnfStateChangeNotificationInternal@40.c)
 *     _TpAllocWork@16 @ 0x4B2B3CB0 (_TpAllocWork@16.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 *     _RtlpCtContextFree@4 @ 0x4B369E26 (_RtlpCtContextFree@4.c)
 */

int __thiscall RtlpCtContextInit(PVOID **this)
{
  struct _PEB *v1; // eax
  PVOID *Heap; // eax
  PVOID *v4; // esi
  NTSTATUS Event; // edi
  SIZE_T v7; // [esp-4h] [ebp-14h]

  v1 = NtCurrentPeb();
  LODWORD(v7) = 12;
  *this = 0;
  Heap = (PVOID *)RtlAllocateHeap(v1->ProcessHeap, 0, v7);
  v4 = Heap;
  if ( !Heap )
    return -1073741670;
  *Heap = 0;
  Heap[1] = 0;
  Heap[2] = 0;
  Event = NtCreateEvent(Heap + 2, 0x1F0003u, 0, NotificationEvent, 0);
  if ( Event < 0
    || (Event = TpAllocWork((PTP_WORK *)v4, RtlpRtlpCtWaitForWnfQuiescentWorker, v4, 0), Event < 0)
    || (Event = RtlpSubscribeWnfStateChangeNotificationInternal(
                  v4 + 1,
                  (int)RtlpRtlpCtSelfSubscribeCallback,
                  (int)v4,
                  0,
                  0,
                  4,
                  17,
                  WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED,
                  1099172670),
        Event < 0) )
  {
    RtlpCtContextFree(v4);
  }
  else
  {
    *this = v4;
  }
  return Event;
}
