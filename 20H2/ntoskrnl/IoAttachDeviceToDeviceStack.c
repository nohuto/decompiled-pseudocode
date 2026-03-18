/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x140380A50
 * Callers:
 *     HalpAddDevice @ 0x1407A5700 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x1409E7F04 (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140361624 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL);
}
