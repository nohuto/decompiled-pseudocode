/*
 * XREFs of IoWMIDeviceObjectToProviderId @ 0x14036DD10
 * Callers:
 *     PpmAllocWmiEvent @ 0x1405729C0 (PpmAllocWmiEvent.c)
 *     WmipSetTraceNotify @ 0x14076BDA8 (WmipSetTraceNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByDevice @ 0x14036DE04 (WmipDoFindRegEntryByDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG __stdcall IoWMIDeviceObjectToProviderId(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int64 v2; // rdi
  __int64 RegEntryByDevice; // rax
  ULONG v4; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v9; // edx
  bool v10; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = WmipDoFindRegEntryByDevice(DeviceObject);
  if ( RegEntryByDevice )
    v4 = *(_DWORD *)(RegEntryByDevice + 56);
  else
    v4 = 0;
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return v4;
}
