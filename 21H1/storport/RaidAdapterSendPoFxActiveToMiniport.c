/*
 * XREFs of RaidAdapterSendPoFxActiveToMiniport @ 0x1C003D408
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C003EB20 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C003F260 (StorPortAdapterIdleCondition.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00100E8 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00166D8 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxActiveToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 304);
  return v2;
}
