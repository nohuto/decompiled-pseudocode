/*
 * XREFs of IoStopTimer @ 0x1403CB4F0
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x1403CB50C (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer(DeviceObject->Timer);
}
