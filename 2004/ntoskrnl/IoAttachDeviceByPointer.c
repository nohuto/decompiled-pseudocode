/*
 * XREFs of IoAttachDeviceByPointer @ 0x1405004B0
 * Callers:
 *     <none>
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140277254 (IopAttachDeviceToDeviceStackSafe.c)
 */

NTSTATUS __stdcall IoAttachDeviceByPointer(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL) == 0LL ? 0xC000000E : 0;
}
