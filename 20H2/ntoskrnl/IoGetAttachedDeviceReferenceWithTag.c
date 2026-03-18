/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x1402047B0
 * Callers:
 *     PopAllocateIrp @ 0x14036F900 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x1405DD164 (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x14072BB4C (PiControlGetDeviceStack.c)
 *     PipCallDriverAddDevice @ 0x1407361D4 (PipCallDriverAddDevice.c)
 *     PnpQueryInterface @ 0x140762AB4 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x140765A64 (PnpAsynchronousCall.c)
 *     PopFxRegisterDevice @ 0x1407AFD4C (PopFxRegisterDevice.c)
 *     IopEjectDevice @ 0x1408B53F0 (IopEjectDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDevice @ 0x14020D8F0 (IoGetAttachedDevice.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
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
