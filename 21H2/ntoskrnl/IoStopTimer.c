/*
 * XREFs of IoStopTimer @ 0x1403CEC70
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x1403CEC8C (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer(DeviceObject->Timer);
}
