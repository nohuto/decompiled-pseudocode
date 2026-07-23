/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x1402F76F0
 * Callers:
 *     PopAllocateIrp @ 0x14036E0F0 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x1406FA580 (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x14072FD30 (PiControlGetDeviceStack.c)
 *     PipCallDriverAddDevice @ 0x140741B48 (PipCallDriverAddDevice.c)
 *     PnpQueryInterface @ 0x140765F44 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x1407692CC (PnpAsynchronousCall.c)
 *     PopFxRegisterDevice @ 0x1407B4EDC (PopFxRegisterDevice.c)
 *     IopEjectDevice @ 0x1408B2B20 (IopEjectDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     IoGetAttachedDevice @ 0x14035E490 (IoGetAttachedDevice.c)
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
