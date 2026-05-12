/*
 * XREFs of RaidAdapterSendPoFxActiveToMiniport @ 0x1C003E8F8
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C0040010 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C0040750 (StorPortAdapterIdleCondition.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00134AC (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00189E0 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxActiveToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 320);
  return v2;
}
