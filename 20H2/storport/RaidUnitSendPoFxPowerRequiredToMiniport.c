/*
 * XREFs of RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C003FCE0
 * Callers:
 *     StorPortUnitDirectedPowerDown @ 0x1C00410B0 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C0041570 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0041E60 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00421F0 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0006380 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C001859C (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 5) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 320LL);
  return v2;
}
