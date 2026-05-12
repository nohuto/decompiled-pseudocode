/*
 * XREFs of RaidAdapterSendPowerToMiniport @ 0x1C003EA8C
 * Callers:
 *     RaidAdapterStopOnPowerdown @ 0x1C0013F70 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0013FE0 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00134AC (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00189E0 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPowerToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 6) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 320);
  return v2;
}
