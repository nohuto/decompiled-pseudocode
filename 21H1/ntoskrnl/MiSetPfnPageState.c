/*
 * XREFs of MiSetPfnPageState @ 0x140223340
 * Callers:
 *     MiUnlinkNodeLargePageHelper @ 0x140223EC0 (MiUnlinkNodeLargePageHelper.c)
 *     MiFreeLargePageMemory @ 0x140345AB8 (MiFreeLargePageMemory.c)
 *     MiInsertLargePageChain @ 0x140345BE8 (MiInsertLargePageChain.c)
 *     MiMakeLargePageTable @ 0x140537EF4 (MiMakeLargePageTable.c)
 *     MiFreeSlabEntry @ 0x14054D0E0 (MiFreeSlabEntry.c)
 *     MiDemotePfnListChain @ 0x140558728 (MiDemotePfnListChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnPageState(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 34) ^= (*(_BYTE *)(a1 + 34) ^ a2) & 7;
}
