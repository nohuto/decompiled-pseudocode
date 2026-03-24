/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x140381290
 * Callers:
 *     HalpAddDevice @ 0x1407AE4B0 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x1409E4EF4 (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402832F4 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL);
}
