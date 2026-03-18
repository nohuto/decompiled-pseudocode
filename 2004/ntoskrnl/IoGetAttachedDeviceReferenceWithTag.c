/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x140271850
 * Callers:
 *     PopAllocateIrp @ 0x14036CD00 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x14063A00C (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x14071DCB0 (PiControlGetDeviceStack.c)
 *     PipCallDriverAddDevice @ 0x140727744 (PipCallDriverAddDevice.c)
 *     PnpQueryInterface @ 0x140753EE0 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x140756E24 (PnpAsynchronousCall.c)
 *     PopFxRegisterDevice @ 0x1407A0A1C (PopFxRegisterDevice.c)
 *     IopEjectDevice @ 0x1408AF8C0 (IopEjectDevice.c)
 * Callees:
 *     IoGetAttachedDevice @ 0x140290C30 (IoGetAttachedDevice.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
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
