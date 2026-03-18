/*
 * XREFs of IoAttachDeviceByPointer @ 0x140557420
 * Callers:
 *     <none>
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14024FC04 (IopAttachDeviceToDeviceStackSafe.c)
 */

NTSTATUS __stdcall IoAttachDeviceByPointer(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL) == 0LL ? 0xC000000E : 0;
}
