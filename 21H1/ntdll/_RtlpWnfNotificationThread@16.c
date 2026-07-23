/*
 * XREFs of _RtlpWnfNotificationThread@16 @ 0x4B2DEA10
 * Callers:
 *     <none>
 * Callees:
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpWnfProcessCurrentDescriptor@8 @ 0x4B2DECC3 (_RtlpWnfProcessCurrentDescriptor@8.c)
 *     _NtGetCompleteWnfStateSubscription@24 @ 0x4B2F3890 (_NtGetCompleteWnfStateSubscription@24.c)
 *     _RtlpWnfCalculateAndSetNextTimer@0 @ 0x4B33C27B (_RtlpWnfCalculateAndSetNextTimer@0.c)
 */

void __stdcall RtlpWnfNotificationThread(PTP_CALLBACK_INSTANCE a1, PVOID Handle, PTP_WAIT Wait, TP_WAIT_RESULT a4)
{
  _WNF_STATE_NAME *p_StateName; // ebx
  _WNF_DELIVERY_DESCRIPTOR *Heap; // esi
  ULONG v6; // edi
  ULONG EventMask; // eax
  NTSTATUS CompleteWnfStateSubscription; // eax
  SIZE_T v9; // [esp-4h] [ebp-24h]
  LARGE_INTEGER Timeout; // [esp+Ch] [ebp-14h] BYREF
  ULONG64 OldSubscriptionId; // [esp+14h] [ebp-Ch] BYREF
  ULONG v12; // [esp+1Ch] [ebp-4h]

  p_StateName = 0;
  Timeout.QuadPart = -50000000LL;
  Heap = 0;
  OldSubscriptionId = 0LL;
  v6 = 0;
  v12 = 0;
  if ( !dword_4B3A664C )
    return;
  TpSetWaitEx(Wait, Handle, 0, 0);
  EventMask = 0;
  while ( 1 )
  {
    if ( Heap )
      goto LABEL_6;
    LODWORD(v9) = 4144;
    Heap = (_WNF_DELIVERY_DESCRIPTOR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    if ( !Heap )
      break;
    EventMask = v12;
LABEL_6:
    CompleteWnfStateSubscription = NtGetCompleteWnfStateSubscription(
                                     p_StateName,
                                     &OldSubscriptionId,
                                     EventMask,
                                     v6,
                                     Heap,
                                     0x1030u);
    if ( CompleteWnfStateSubscription < 0 )
      goto LABEL_7;
    v6 = RtlpWnfProcessCurrentDescriptor(Heap);
    if ( v6 == 259 )
    {
      p_StateName = 0;
      EventMask = 0;
      OldSubscriptionId = 0LL;
      v6 = 0;
      Heap = 0;
      v12 = 0;
    }
    else
    {
      p_StateName = &Heap->StateName;
      OldSubscriptionId = Heap->SubscriptionId;
      EventMask = Heap->EventMask;
      v12 = EventMask;
      if ( v6 == -1073741267 )
      {
        RtlpWnfCalculateAndSetNextTimer();
        EventMask = v12;
        Heap = 0;
      }
    }
  }
  CompleteWnfStateSubscription = -1073741801;
LABEL_7:
  if ( CompleteWnfStateSubscription != -2147483622 )
    TpSetWaitEx(Wait, Handle, &Timeout, 0);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
}
