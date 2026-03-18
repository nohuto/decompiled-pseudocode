/*
 * XREFs of RtlpCtContextInit @ 0x14091BD18
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058CBD0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D3EE0 (ExSubscribeWnfStateChange.c)
 *     RtlpCtContextFree @ 0x14091BCBC (RtlpCtContextFree.c)
 *     RtlpCtInitializeNotificationEvent @ 0x14091BDFC (RtlpCtInitializeNotificationEvent.c)
 *     RtlpCtInitializeWorkItem @ 0x14091BE48 (RtlpCtInitializeWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpCtContextInit(PVOID **a1, int a2)
{
  PVOID *PoolWithTag; // rax
  PVOID *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x67744364u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    PoolWithTag[2] = 0LL;
    v6 = RtlpCtInitializeNotificationEvent(PoolWithTag + 2);
    if ( v6 < 0
      || (v6 = RtlpCtInitializeWorkItem(v5, v5), v6 < 0)
      || (v6 = ExSubscribeWnfStateChange(
                 (__int64)(v5 + 1),
                 (__int64)&WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED,
                 8,
                 a2,
                 (__int64)RtlpRtlpCtSelfSubscribeCallback,
                 (__int64)v5),
          v6 < 0) )
    {
      RtlpCtContextFree(v5);
    }
    else
    {
      *a1 = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
