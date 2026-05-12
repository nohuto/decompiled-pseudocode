/*
 * XREFs of RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003D51C
 * Callers:
 *     StorPortAdapterDirectedPowerDown @ 0x1C003EC10 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1C003EF90 (StorPortAdapterDirectedPowerUp.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C003F700 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C003F9C0 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00100E8 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00166D8 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 7) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 304);
  return v2;
}
