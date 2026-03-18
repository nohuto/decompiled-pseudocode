/*
 * XREFs of IoGetAttachedDeviceReference @ 0x14020ACC0
 * Callers:
 *     CmpGetVolumeClusterSize @ 0x1405DCF4C (CmpGetVolumeClusterSize.c)
 *     CmpVolumeManagerGetContextForFile @ 0x1405DD2FC (CmpVolumeManagerGetContextForFile.c)
 *     WmipForwardWmiIrp @ 0x140647D4C (WmipForwardWmiIrp.c)
 *     IopFilterResourceRequirementsCall @ 0x140749EC0 (IopFilterResourceRequirementsCall.c)
 *     WmipRegisterDevice @ 0x14074E1A8 (WmipRegisterDevice.c)
 *     WmipGetFilePDO @ 0x140789624 (WmipGetFilePDO.c)
 *     HalpQueryPccInterface @ 0x140868E6C (HalpQueryPccInterface.c)
 *     IoBuildPoDeviceNotifyList @ 0x14099A0C0 (IoBuildPoDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1409ADED8 (IoShutdownSystem.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D4520 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     ObpIncrPointerCount @ 0x14027E460 (ObpIncrPointerCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int8 CurrentIrql; // si
  char *v3; // rcx
  struct _DEVICE_OBJECT *i; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v3 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  KxAcquireQueuedSpinLock(v3, *((_QWORD *)v3 + 1));
  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)DeviceObject - 48);
  ObpIncrPointerCount(&DeviceObject[-1].DeviceLock.Header.WaitListHead);
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return DeviceObject;
}
