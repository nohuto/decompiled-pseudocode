/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x14029A7DC
 * Callers:
 *     MiZeroPage @ 0x140233310 (MiZeroPage.c)
 *     MmUnmapIoSpace @ 0x140297530 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x140297640 (MiZeroAndFlushPtes.c)
 *     MiZeroPageWorkMapping @ 0x14029A678 (MiZeroPageWorkMapping.c)
 *     MiDeleteSystemPageTable @ 0x1402B6DC0 (MiDeleteSystemPageTable.c)
 *     MiMakeVaRangeNoAccess @ 0x1402C8854 (MiMakeVaRangeNoAccess.c)
 *     MiMakePteClean @ 0x14030F56C (MiMakePteClean.c)
 *     MiMoveDirtyBitsToPfns @ 0x140317490 (MiMoveDirtyBitsToPfns.c)
 *     MiRevertValidPte @ 0x140334300 (MiRevertValidPte.c)
 *     MiDecommitLargePoolVa @ 0x140370CE0 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x1403790FC (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B9F4C (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x1403BA13C (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403BA228 (MiDemoteValidLargePageOneLevel.c)
 *     MiUnmapMdlCommon @ 0x140531724 (MiUnmapMdlCommon.c)
 *     MiDecommitLargePte @ 0x14053CBE0 (MiDecommitLargePte.c)
 *     MiProtectAweRegion @ 0x14054D364 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E298 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x14054F95C (MiDeleteLargeUserPde.c)
 *     MiReleaseLargePteMappings @ 0x140553FBC (MiReleaseLargePteMappings.c)
 *     MiFreeBootDriverPages @ 0x140A50050 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
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
