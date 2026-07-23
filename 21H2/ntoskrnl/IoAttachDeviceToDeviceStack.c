/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x140380DE0
 * Callers:
 *     HalpAddDevice @ 0x1407AE6B0 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x1409E5EF4 (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140271504 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL);
}
