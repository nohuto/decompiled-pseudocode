/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x14059ED10
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x1409DA4A8 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409DA590 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x1409E4940 (IovpSessionDataDereference.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1403724B0 (VfPoolDelayFreeIfPossible.c)
 */

void __fastcall VfUtilFreePoolDispatchLevel(_SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
