/*
 * XREFs of PiPagePathSetState @ 0x1407CA160
 * Callers:
 *     CmpVolumeContextCleanup @ 0x140872F30 (CmpVolumeContextCleanup.c)
 *     PpPagePathAssign @ 0x1408A1100 (PpPagePathAssign.c)
 *     PpPagePathRelease @ 0x1408A1118 (PpPagePathRelease.c)
 *     MiDeletePagefile @ 0x1408D05EC (MiDeletePagefile.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     IoQueueThreadIrp @ 0x140381460 (IoQueueThreadIrp.c)
 *     memset @ 0x140414300 (memset.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     IoGetRelatedTargetDevice @ 0x1406FCB4C (IoGetRelatedTargetDevice.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x1407CA248 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407CA2AC (PpIrpAllocateDeviceUsageNotification.c)
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
