/*
 * XREFs of IoStartTimer @ 0x1405065E0
 * Callers:
 *     <none>
 * Callees:
 *     IopEnableTimer @ 0x140500950 (IopEnableTimer.c)
 */

void __stdcall IoStartTimer(PDEVICE_OBJECT DeviceObject)
{
  if ( (DeviceObject->DeviceObjectExtension->ExtensionFlags & 0xF) == 0 )
    IopEnableTimer((__int64)DeviceObject->Timer);
}
