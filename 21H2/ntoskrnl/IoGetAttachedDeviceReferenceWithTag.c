/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x140362020
 * Callers:
 *     PopAllocateIrp @ 0x14036DF40 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x14071DFF0 (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x14072FB64 (PiControlGetDeviceStack.c)
 *     PipCallDriverAddDevice @ 0x140741988 (PipCallDriverAddDevice.c)
 *     PnpQueryInterface @ 0x140765D84 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x14076910C (PnpAsynchronousCall.c)
 *     PopFxRegisterDevice @ 0x1407B578C (PopFxRegisterDevice.c)
 *     IopEjectDevice @ 0x1408B29C0 (IopEjectDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140310BD0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140310C70 (KeAcquireQueuedSpinLock.c)
 *     IoGetAttachedDevice @ 0x140353740 (IoGetAttachedDevice.c)
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
