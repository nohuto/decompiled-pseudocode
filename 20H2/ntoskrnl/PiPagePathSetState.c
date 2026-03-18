/*
 * XREFs of PiPagePathSetState @ 0x1407C5BDC
 * Callers:
 *     CmpVolumeContextCleanup @ 0x14087553C (CmpVolumeContextCleanup.c)
 *     PpPagePathAssign @ 0x1408A39D0 (PpPagePathAssign.c)
 *     PpPagePathRelease @ 0x1408A39E8 (PpPagePathRelease.c)
 *     MiDeletePagefile @ 0x1408D2CCC (MiDeletePagefile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IoQueueThreadIrp @ 0x140381210 (IoQueueThreadIrp.c)
 *     memset @ 0x140411300 (memset.c)
 *     IoGetRelatedTargetDevice @ 0x1405DA600 (IoGetRelatedTargetDevice.c)
 *     PpDevNodeUnlockTree @ 0x14071F9C0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14071FAEC (PpDevNodeLockTree.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x1407C5CC4 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407C5D28 (PpIrpAllocateDeviceUsageNotification.c)
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
