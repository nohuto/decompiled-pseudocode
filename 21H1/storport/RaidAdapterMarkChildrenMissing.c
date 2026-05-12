/*
 * XREFs of RaidAdapterMarkChildrenMissing @ 0x1C002BECC
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0077F30 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x1C002C928 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterRemoveZombieChildren @ 0x1C002CA40 (RaidAdapterRemoveZombieChildren.c)
 */

__int64 __fastcall RaidAdapterMarkChildrenMissing(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, RaUnitAdapterSurpriseRemove);
  return RaidAdapterRemoveZombieChildren(a1, RaUnitAdapterSurpriseRemove);
}
