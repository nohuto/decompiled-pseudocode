/*
 * XREFs of RaidAdapterSendPowerToMiniport @ 0x1C003D59C
 * Callers:
 *     RaidAdapterStopOnPowerdown @ 0x1C0010BA0 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0010C10 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00100E8 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00166D8 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPowerToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 6) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 304);
  return v2;
}
