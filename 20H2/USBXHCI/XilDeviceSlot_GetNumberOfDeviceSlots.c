/*
 * XREFs of XilDeviceSlot_GetNumberOfDeviceSlots @ 0x1C0037344
 * Callers:
 *     Controller_TelemetryAddControllerData @ 0x1C0076464 (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetNumberOfDeviceSlots(__int64 a1)
{
  return *(unsigned int *)(a1 + 96);
}
