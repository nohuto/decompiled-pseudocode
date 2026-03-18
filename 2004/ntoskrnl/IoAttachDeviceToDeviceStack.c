/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x14037ED20
 * Callers:
 *     HalpAddDevice @ 0x1407963D0 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x1409E1EE4 (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140277254 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL);
}
