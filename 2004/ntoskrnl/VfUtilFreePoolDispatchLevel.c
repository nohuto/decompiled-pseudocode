/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x14059B270
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x1409D4488 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409D4570 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x1409DE920 (IovpSessionDataDereference.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x140370560 (VfPoolDelayFreeIfPossible.c)
 */

void __fastcall VfUtilFreePoolDispatchLevel(_SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
