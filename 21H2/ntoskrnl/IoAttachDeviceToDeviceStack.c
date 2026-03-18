/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x14024FBC0
 * Callers:
 *     HalpAddDevice @ 0x14081E300 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x140A9E12C (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14024FC04 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return (PDEVICE_OBJECT)IopAttachDeviceToDeviceStackSafe(SourceDevice, TargetDevice, 0LL);
}
