/*
 * XREFs of StorpFreeTimer @ 0x1C003B49C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000EDC0 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003324C (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C0033368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C00334D0 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpFreeTimer(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *v4; // r9
  __int64 v6; // rsi
  struct _IO_WORKITEM *WorkItem; // rax
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // dx

  v2 = 0;
  v4 = a1;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x4Bu,
        (__int64)&WPP_42621249f2c9312d441c8bf8760aa631_Traceguids,
        a1,
        a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    v6 = *(_QWORD *)*(a1 - 2);
    if ( !v6 || *(_DWORD *)v6 )
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        return 3238002694LL;
      }
      v9 = 77;
    }
    else
    {
      if ( *a2 && !*(_DWORD *)*a2 )
      {
        _InterlockedExchange64(a2 + 17, 0LL);
        if ( !KeCancelTimer((PKTIMER)(a2 + 1)) )
        {
          KeRemoveQueueDpc((PRKDPC)(a2 + 9));
          if ( KeGetCurrentIrql() )
          {
            WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v6 + 8));
            a2[19] = WorkItem;
            if ( WorkItem )
              IoQueueWorkItem(WorkItem, StorpFreeTimerWorkItem, DelayedWorkQueue, a2);
            else
              return (unsigned int)-1056964605;
            return v2;
          }
          KeFlushQueuedDpcs();
        }
        ExFreePoolWithTag(a2, 0x54416152u);
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 4272));
        return 0LL;
      }
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        return 3238002694LL;
      }
      v9 = 78;
      v4 = a2;
    }
    WPP_SF_q((__int64)v8->AttachedDevice, v9, (__int64)&WPP_42621249f2c9312d441c8bf8760aa631_Traceguids, v4);
    return 3238002694LL;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x4Cu,
      (__int64)&WPP_42621249f2c9312d441c8bf8760aa631_Traceguids);
  }
  return 3238002696LL;
}
