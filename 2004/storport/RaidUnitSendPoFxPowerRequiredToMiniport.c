/*
 * XREFs of RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C003EDC0
 * Callers:
 *     StorPortUnitDirectedPowerDown @ 0x1C0040190 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C0040650 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0040F50 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00412E0 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0007340 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0018104 (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 5) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 304LL);
  return v2;
}
