/*
 * XREFs of PopFxReleaseDevice @ 0x14056A950
 * Callers:
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408E6D50 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408E6E84 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E8010 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

LONG __fastcall PopFxReleaseDevice(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
  return result;
}
