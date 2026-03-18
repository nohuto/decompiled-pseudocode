/*
 * XREFs of IoGetDiskDeviceObject @ 0x140391690
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14033DC04 (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 */

NTSTATUS __stdcall IoGetDiskDeviceObject(PDEVICE_OBJECT FileSystemDeviceObject, PDEVICE_OBJECT *DiskDeviceObject)
{
  NTSTATUS v2; // ebx
  KIRQL v5; // bp
  PVPB Vpb; // rcx
  struct _DEVICE_OBJECT *RealDevice; // rcx

  v2 = 0;
  if ( FileSystemDeviceObject->Vpb )
    return -1073741811;
  v5 = KeAcquireQueuedSpinLock(9uLL);
  Vpb = FileSystemDeviceObject->DeviceObjectExtension->Vpb;
  if ( Vpb )
  {
    if ( Vpb->ReferenceCount && (Vpb->Flags & 1) != 0 )
    {
      RealDevice = Vpb->RealDevice;
      *DiskDeviceObject = RealDevice;
      ObfReferenceObjectWithTag(RealDevice, 0x746C6644u);
    }
    else
    {
      v2 = -1073741202;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  KeReleaseQueuedSpinLock(9uLL, v5);
  return v2;
}
