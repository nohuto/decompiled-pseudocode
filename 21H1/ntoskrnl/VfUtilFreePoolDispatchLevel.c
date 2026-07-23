/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x14059AB80
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x1409D4428 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409D4510 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x1409DE8C0 (IovpSessionDataDereference.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x14036F930 (VfPoolDelayFreeIfPossible.c)
 */

void __fastcall VfUtilFreePoolDispatchLevel(_SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
