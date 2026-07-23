/*
 * XREFs of IoWMIWriteEvent @ 0x14037E280
 * Callers:
 *     PpmFireWmiEvent @ 0x140578738 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x1405787C0 (PpmWmiFireIdleAccountingEvent.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ExInterlockedInsertTailList @ 0x14021D900 (ExInterlockedInsertTailList.c)
 *     WmipDoFindRegEntryByProviderId @ 0x140253140 (WmipDoFindRegEntryByProviderId.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceEvent @ 0x1405A62D0 (EtwTraceEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMIWriteEvent(PVOID WnodeEventItem)
{
  NTSTATUS v1; // edi
  int v3; // ebx
  _LIST_ENTRY *PoolWithTag; // rbp
  int v5; // ebx
  unsigned __int64 v6; // r14
  _DWORD *RegEntryByProviderId; // rax
  struct _LIST_ENTRY *v8; // rbx
  NTSTATUS result; // eax
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  v1 = 0;
  if ( !WmipServiceDeviceObject )
    return -1073741823;
  v3 = *((_DWORD *)WnodeEventItem + 11);
  if ( (v3 & 0x60000) != 0 )
  {
    v10 = *(_DWORD *)WnodeEventItem;
    v11 = v3 & 0x20000;
    v12 = *((unsigned __int16 *)WnodeEventItem + 4);
    if ( (unsigned int)v10 < 0x30 )
      return -1073741789;
    if ( v11 )
    {
      if ( (unsigned int)v10 <= 0xFFFF )
        goto LABEL_16;
    }
    else if ( v10 >= 0 )
    {
LABEL_16:
      result = EtwTraceEvent(v12, WnodeEventItem, 48LL, 3222536192LL, 0);
      if ( v11 )
        return result;
      goto LABEL_3;
    }
    return -2147483643;
  }
LABEL_3:
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x77696D57u);
  if ( !PoolWithTag )
    return -1073741670;
  v5 = *((_DWORD *)WnodeEventItem + 1);
  v6 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByProviderId = WmipDoFindRegEntryByProviderId(v5);
  v8 = (struct _LIST_ENTRY *)RegEntryByProviderId;
  if ( RegEntryByProviderId )
    _InterlockedIncrement(RegEntryByProviderId + 12);
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  *((_DWORD *)WnodeEventItem + 10) = *((_DWORD *)WnodeEventItem + 2);
  PoolWithTag[1].Flink = v8;
  PoolWithTag[1].Blink = (struct _LIST_ENTRY *)WnodeEventItem;
  ExInterlockedInsertTailList(&WmipNPEvent, PoolWithTag, &WmipNPNotificationSpinlock);
  if ( _InterlockedIncrement(&WmipEventWorkItems) == 1 )
    ExQueueWorkItem(&WmipEventWorkQueueItem, DelayedWorkQueue);
  return v1;
}
