/*
 * XREFs of PiPagePathSetState @ 0x1407B41E0
 * Callers:
 *     CmpVolumeContextCleanup @ 0x14086DF2C (CmpVolumeContextCleanup.c)
 *     PpPagePathAssign @ 0x14089CB80 (PpPagePathAssign.c)
 *     PpPagePathRelease @ 0x14089CB98 (PpPagePathRelease.c)
 *     MiDeletePagefile @ 0x1408CBB3C (MiDeletePagefile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IoQueueThreadIrp @ 0x14037EAF0 (IoQueueThreadIrp.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IoGetRelatedTargetDevice @ 0x1406855D0 (IoGetRelatedTargetDevice.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14071075C (PpDevNodeLockTree.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x1407B42C8 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407B432C (PpIrpAllocateDeviceUsageNotification.c)
 */

__int64 __fastcall PiPagePathSetState(struct _FILE_OBJECT *DmaAdapter, char a2)
{
  IRP *DeviceUsageNotification; // rax
  IRP *v5; // rbx
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  PDEVICE_OBJECT DeviceObject[8]; // [rsp+30h] [rbp-40h] BYREF
  PADAPTER_OBJECT DmaAdaptera; // [rsp+80h] [rbp+10h] BYREF

  memset(DeviceObject, 0, sizeof(DeviceObject));
  DmaAdaptera = 0LL;
  ObfReferenceObject(DmaAdapter);
  DeviceObject[0] = IoGetRelatedDeviceObject(DmaAdapter);
  LODWORD(DeviceObject[1]) = 1;
  BYTE4(DeviceObject[1]) = a2;
  DeviceObject[2] = (PDEVICE_OBJECT)DmaAdapter;
  DeviceUsageNotification = (IRP *)PpIrpAllocateDeviceUsageNotification(DeviceObject);
  v5 = DeviceUsageNotification;
  if ( DeviceUsageNotification )
  {
    IoQueueThreadIrp(DeviceUsageNotification);
    PpDevNodeLockTree(1);
    v6 = IofCallDriver(DeviceObject[0], v5);
    if ( v6 == 259 )
    {
      KeWaitForSingleObject(&DeviceObject[5], Executive, 0, 0, 0LL);
      v6 = (NTSTATUS)DeviceObject[3];
    }
    if ( v6 >= 0 && (int)IoGetRelatedTargetDevice(DmaAdapter, &DmaAdaptera) >= 0 )
    {
      LOBYTE(v7) = a2;
      PoDirectedDripsNotifyPagingDeviceUsage(DmaAdaptera, v7);
      HalPutDmaAdapter(DmaAdaptera);
    }
    PpDevNodeUnlockTree(1);
    return (unsigned int)v6;
  }
  else
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
    return 3221225495LL;
  }
}
