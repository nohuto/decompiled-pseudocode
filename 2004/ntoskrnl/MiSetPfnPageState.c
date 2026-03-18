/*
 * XREFs of MiSetPfnPageState @ 0x1402B5FC0
 * Callers:
 *     MiUnlinkNodeLargePageHelper @ 0x1402B6B40 (MiUnlinkNodeLargePageHelper.c)
 *     MiFreeLargePageMemory @ 0x140316778 (MiFreeLargePageMemory.c)
 *     MiInsertLargePageChain @ 0x1403168A8 (MiInsertLargePageChain.c)
 *     MiMakeLargePageTable @ 0x140538544 (MiMakeLargePageTable.c)
 *     MiFreeSlabEntry @ 0x14054D730 (MiFreeSlabEntry.c)
 *     MiDemotePfnListChain @ 0x140558D78 (MiDemotePfnListChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnPageState(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 34) ^= (*(_BYTE *)(a1 + 34) ^ a2) & 7;
}
