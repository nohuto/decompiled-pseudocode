/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x1402199E0
 * Callers:
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1402180C0 (MiZeroAndFlushPtes.c)
 *     MiZeroPageWorkMapping @ 0x14021987C (MiZeroPageWorkMapping.c)
 *     MiDeleteSystemPageTable @ 0x140234FA0 (MiDeleteSystemPageTable.c)
 *     MiMakeVaRangeNoAccess @ 0x1402470B4 (MiMakeVaRangeNoAccess.c)
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 *     MiMakePteClean @ 0x14031A2BC (MiMakePteClean.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     MiRevertValidPte @ 0x14033F050 (MiRevertValidPte.c)
 *     MiDecommitLargePoolVa @ 0x140370830 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x140378C4C (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x1403BA0BC (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x1403BA2AC (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403BA398 (MiDemoteValidLargePageOneLevel.c)
 *     MiUnmapMdlCommon @ 0x140531964 (MiUnmapMdlCommon.c)
 *     MiDecommitLargePte @ 0x14053CE20 (MiDecommitLargePte.c)
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x14054FB9C (MiDeleteLargeUserPde.c)
 *     MiReleaseLargePteMappings @ 0x1405541FC (MiReleaseLargePteMappings.c)
 *     MiFreeBootDriverPages @ 0x140A51050 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
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
