/*
 * XREFs of PopFxReleaseDevice @ 0x1405668D0
 * Callers:
 *     PopFxUnregisterDevice @ 0x14079C1FC (PopFxUnregisterDevice.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408DFC90 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408DFDC4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E0F50 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

LONG __fastcall PopFxReleaseDevice(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
  return result;
}
