/*
 * XREFs of IoStopTimer @ 0x1403CEB00
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x1403CEB1C (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer(DeviceObject->Timer);
}
