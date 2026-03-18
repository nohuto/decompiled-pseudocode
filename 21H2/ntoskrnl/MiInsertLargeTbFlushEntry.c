/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x1402285E8
 * Callers:
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1402157EC (MiZeroAndFlushPtes.c)
 *     MiZeroPageWorkMapping @ 0x14022689C (MiZeroPageWorkMapping.c)
 *     MiFlushValidPteFromTb @ 0x140227254 (MiFlushValidPteFromTb.c)
 *     MiDecommitLargePoolVa @ 0x140228464 (MiDecommitLargePoolVa.c)
 *     MiDeleteSystemPageTable @ 0x140228CD0 (MiDeleteSystemPageTable.c)
 *     MiMakeVaRangeNoAccess @ 0x14024D7F4 (MiMakeVaRangeNoAccess.c)
 *     MiMakePteClean @ 0x14028ECFC (MiMakePteClean.c)
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 *     MiRevertValidPte @ 0x14032E130 (MiRevertValidPte.c)
 *     MiReplacePfnWithGapMapping @ 0x1403C92F4 (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x1403C9494 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403C9590 (MiDemoteValidLargePageOneLevel.c)
 *     MiUnmapMdlCommon @ 0x1405853E4 (MiUnmapMdlCommon.c)
 *     MiDecommitLargePte @ 0x140597940 (MiDecommitLargePte.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MiWritePteHighLevel @ 0x1405AE144 (MiWritePteHighLevel.c)
 *     MiDeleteLargeUserPde @ 0x1405B07F4 (MiDeleteLargeUserPde.c)
 *     MiReleaseLargePteMappings @ 0x1405B585C (MiReleaseLargePteMappings.c)
 *     MiFreeBootDriverPages @ 0x140B05620 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 */

__int64 __fastcall MiInsertLargeTbFlushEntry(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 result; // rax

  v6 = 0;
  do
  {
    a3 = a3 << 25 >> 16;
    result = MiInsertTbFlushEntry(a1, a3, 1LL, v6++);
  }
  while ( v6 <= a2 );
  return result;
}
