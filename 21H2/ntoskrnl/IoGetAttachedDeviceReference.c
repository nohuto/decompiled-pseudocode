/*
 * XREFs of IoGetAttachedDeviceReference @ 0x1402D1260
 * Callers:
 *     WmipForwardWmiIrp @ 0x14062E4FC (WmipForwardWmiIrp.c)
 *     CmpVolumeManagerGetContextForFile @ 0x1406F9894 (CmpVolumeManagerGetContextForFile.c)
 *     CmpGetVolumeClusterSize @ 0x1406FA368 (CmpGetVolumeClusterSize.c)
 *     IopFilterResourceRequirementsCall @ 0x140750C40 (IopFilterResourceRequirementsCall.c)
 *     WmipRegisterDevice @ 0x1407551C8 (WmipRegisterDevice.c)
 *     WmipGetFilePDO @ 0x14078D5C4 (WmipGetFilePDO.c)
 *     HalpQueryPccInterface @ 0x140866BDC (HalpQueryPccInterface.c)
 *     IoBuildPoDeviceNotifyList @ 0x1409982B0 (IoBuildPoDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1409ABD08 (IoShutdownSystem.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D2510 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObpIncrPointerCount @ 0x1402C08C0 (ObpIncrPointerCount.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  __int64 v1; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // si
  char *v5; // rcx
  struct _DEVICE_OBJECT *i; // rax
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v1 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v1;
  }
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  KxAcquireQueuedSpinLock(v5, *((_QWORD *)v5 + 1), v1, SchedulerAssist);
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
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return DeviceObject;
}
