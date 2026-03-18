/*
 * XREFs of IoStopTimer @ 0x1403DDEF0
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x1403DDF0C (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer(DeviceObject->Timer);
}
