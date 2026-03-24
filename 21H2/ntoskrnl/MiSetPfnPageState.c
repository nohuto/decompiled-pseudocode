/*
 * XREFs of MiSetPfnPageState @ 0x140329F00
 * Callers:
 *     MiFreeLargePageMemory @ 0x1402FE654 (MiFreeLargePageMemory.c)
 *     MiInsertLargePageChain @ 0x1402FE784 (MiInsertLargePageChain.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140318F30 (MiUnlinkNodeLargePageHelper.c)
 *     MiMakeLargePageTable @ 0x14053DA14 (MiMakeLargePageTable.c)
 *     MiFreeSlabEntry @ 0x140552BD0 (MiFreeSlabEntry.c)
 *     MiDemotePfnListChain @ 0x14055E218 (MiDemotePfnListChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnPageState(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 34) ^= (*(_BYTE *)(a1 + 34) ^ a2) & 7;
}
