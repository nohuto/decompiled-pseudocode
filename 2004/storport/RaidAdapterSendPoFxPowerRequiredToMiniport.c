/*
 * XREFs of RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003DAEC
 * Callers:
 *     StorPortAdapterDirectedPowerDown @ 0x1C003F1E0 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1C003F560 (StorPortAdapterDirectedPowerUp.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C003FCD0 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C003FF90 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0011F5C (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0018548 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 7) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 304);
  return v2;
}
