/*
 * XREFs of RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003EA0C
 * Callers:
 *     StorPortAdapterDirectedPowerDown @ 0x1C0040100 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1C0040480 (StorPortAdapterDirectedPowerUp.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0040BF0 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C0040EB0 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00134AC (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00189E0 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 7) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 320);
  return v2;
}
