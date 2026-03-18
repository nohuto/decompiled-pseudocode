/*
 * XREFs of IoGetAttachedDeviceReference @ 0x14027D520
 * Callers:
 *     WmipForwardWmiIrp @ 0x1406818BC (WmipForwardWmiIrp.c)
 *     CmpGetVolumeClusterSize @ 0x140687970 (CmpGetVolumeClusterSize.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140687D20 (CmpVolumeManagerGetContextForFile.c)
 *     IopFilterResourceRequirementsCall @ 0x140739430 (IopFilterResourceRequirementsCall.c)
 *     WmipRegisterDevice @ 0x14073DA48 (WmipRegisterDevice.c)
 *     WmipGetFilePDO @ 0x140778C14 (WmipGetFilePDO.c)
 *     HalpQueryPccInterface @ 0x14086212C (HalpQueryPccInterface.c)
 *     IoBuildPoDeviceNotifyList @ 0x140992920 (IoBuildPoDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1409A7108 (IoShutdownSystem.c)
 *     VfIrpSendSynchronousIrp @ 0x1409CE4F0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObpIncrPointerCount @ 0x14026B720 (ObpIncrPointerCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int8 CurrentIrql; // si
  volatile __int64 **v3; // rcx
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
  v3 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  KxAcquireQueuedSpinLock((__int64)v3, v3[1]);
  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)DeviceObject - 48);
  ObpIncrPointerCount((volatile signed __int64 *)&DeviceObject[-1].DeviceLock.Header.WaitListHead);
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
