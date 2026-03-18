/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x1402E0EE0
 * Callers:
 *     PopAllocateIrp @ 0x14036D060 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x140687B88 (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x14071BD30 (PiControlGetDeviceStack.c)
 *     PipCallDriverAddDevice @ 0x140727018 (PipCallDriverAddDevice.c)
 *     PnpQueryInterface @ 0x14074F850 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x14075478C (PnpAsynchronousCall.c)
 *     PopFxRegisterDevice @ 0x14079CA3C (PopFxRegisterDevice.c)
 *     IopEjectDevice @ 0x1408AE5A0 (IopEjectDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     IoGetAttachedDevice @ 0x1402543B0 (IoGetAttachedDevice.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 */

PDEVICE_OBJECT __fastcall IoGetAttachedDeviceReferenceWithTag(PDEVICE_OBJECT DeviceObject, ULONG Tag)
{
  KIRQL v4; // di
  PDEVICE_OBJECT AttachedDevice; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  AttachedDevice = IoGetAttachedDevice(DeviceObject);
  ObfReferenceObjectWithTag(AttachedDevice, Tag);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return AttachedDevice;
}
