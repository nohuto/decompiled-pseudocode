/*
 * XREFs of IoStopTimer @ 0x1403CA710
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x1403CA72C (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer(DeviceObject->Timer);
}
