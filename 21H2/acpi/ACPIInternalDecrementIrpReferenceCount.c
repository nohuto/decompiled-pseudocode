/*
 * XREFs of ACPIInternalDecrementIrpReferenceCount @ 0x1C000575C
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0001EF0 (ACPIThermalGetSensorDevice.c)
 *     ACPIThermalActivateConstraint @ 0x1C0003F18 (ACPIThermalActivateConstraint.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C0005780 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C002E3E0 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C002E7C0 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C0030A70 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C004F600 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C004F740 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeferredWakeCompletion @ 0x1C0052250 (ACPIDeferredWakeCompletion.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C0055CE0 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIIrpCompletionRoutineWorker @ 0x1C00917C0 (ACPIIrpCompletionRoutineWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIInternalDecrementIrpReferenceCount(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 728), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 752), 0, 0);
  return result;
}
