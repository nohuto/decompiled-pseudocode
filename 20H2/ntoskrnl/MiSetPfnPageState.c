/*
 * XREFs of MiSetPfnPageState @ 0x1402AD310
 * Callers:
 *     MiUnlinkNodeLargePageHelper @ 0x1402312D0 (MiUnlinkNodeLargePageHelper.c)
 *     MiFreeLargePageMemory @ 0x1402F19BC (MiFreeLargePageMemory.c)
 *     MiInsertLargePageChain @ 0x1402F1AEC (MiInsertLargePageChain.c)
 *     MiMakeLargePageTable @ 0x14053BF14 (MiMakeLargePageTable.c)
 *     MiFreeSlabEntry @ 0x140551100 (MiFreeSlabEntry.c)
 *     MiDemotePfnListChain @ 0x14055C748 (MiDemotePfnListChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnPageState(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 34) ^= (*(_BYTE *)(a1 + 34) ^ a2) & 7;
}
