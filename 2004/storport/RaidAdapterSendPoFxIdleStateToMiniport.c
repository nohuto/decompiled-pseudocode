/*
 * XREFs of RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C003DA68
 * Callers:
 *     StorPortAdapterIdleState @ 0x1C003F900 (StorPortAdapterIdleState.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0011F5C (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0018548 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxIdleStateToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 9) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 304);
  return v2;
}
