/*
 * XREFs of RaidAdapterMarkChildrenMissing @ 0x1C002D2D8
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C007934C (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x1C002DD38 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterRemoveZombieChildren @ 0x1C002DE58 (RaidAdapterRemoveZombieChildren.c)
 */

__int64 __fastcall RaidAdapterMarkChildrenMissing(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, RaUnitAdapterSurpriseRemove);
  return RaidAdapterRemoveZombieChildren(a1, RaUnitAdapterSurpriseRemove);
}
