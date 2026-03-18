/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x1402D30A0
 * Callers:
 *     PopAllocateIrp @ 0x1403A3F0C (PopAllocateIrp.c)
 *     PnpAsynchronousCall @ 0x14074C5A8 (PnpAsynchronousCall.c)
 *     PnpQueryInterface @ 0x14074C6C0 (PnpQueryInterface.c)
 *     IopSynchronousCall @ 0x14074CA9C (IopSynchronousCall.c)
 *     PipCallDriverAddDevice @ 0x1407743C8 (PipCallDriverAddDevice.c)
 *     PiControlGetDeviceStack @ 0x1407F1CDC (PiControlGetDeviceStack.c)
 *     PopFxRegisterDevice @ 0x1408236BC (PopFxRegisterDevice.c)
 *     IopEjectDevice @ 0x1409585A4 (IopEjectDevice.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x14098C04C (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
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
