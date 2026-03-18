/*
 * XREFs of ACPIInternalDecrementIrpReferenceCount @ 0x1C000E3B8
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C000CB00 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C000DE40 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIThermalActivateConstraint @ 0x1C000E024 (ACPIThermalActivateConstraint.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C000E1B0 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0011910 (ACPIThermalGetSensorDevice.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C00311B0 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C00505D0 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C0050720 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeferredWakeCompletion @ 0x1C0052B30 (ACPIDeferredWakeCompletion.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C00556D0 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIIrpCompletionRoutineWorker @ 0x1C0091A40 (ACPIIrpCompletionRoutineWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIInternalDecrementIrpReferenceCount(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 688), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 712), 0, 0);
  return result;
}
