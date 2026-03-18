/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x14037E260
 * Callers:
 *     HalpAddDevice @ 0x140796620 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x1409E1E84 (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14033DC04 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL);
}
