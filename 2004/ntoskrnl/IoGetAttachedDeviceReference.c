/*
 * XREFs of IoGetAttachedDeviceReference @ 0x1402244D0
 * Callers:
 *     CmpGetVolumeClusterSize @ 0x140639DF4 (CmpGetVolumeClusterSize.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14063A1A4 (CmpVolumeManagerGetContextForFile.c)
 *     WmipForwardWmiIrp @ 0x14064675C (WmipForwardWmiIrp.c)
 *     IopFilterResourceRequirementsCall @ 0x14073AFB0 (IopFilterResourceRequirementsCall.c)
 *     WmipRegisterDevice @ 0x14073F5C8 (WmipRegisterDevice.c)
 *     WmipGetFilePDO @ 0x14077B024 (WmipGetFilePDO.c)
 *     HalpQueryPccInterface @ 0x14086344C (HalpQueryPccInterface.c)
 *     IoBuildPoDeviceNotifyList @ 0x140993F60 (IoBuildPoDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1409A7F68 (IoShutdownSystem.c)
 *     VfIrpSendSynchronousIrp @ 0x1409CE500 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObpIncrPointerCount @ 0x1402126D0 (ObpIncrPointerCount.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int8 CurrentIrql; // si
  struct _DEVICE_OBJECT *i; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KxAcquireQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
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
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & v8[5]) == 0;
        v8[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return DeviceObject;
}
