/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x140319B24
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MmUnmapIoSpace @ 0x1402611D0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1402612E0 (MiZeroAndFlushPtes.c)
 *     MiMakePteClean @ 0x14029EC0C (MiMakePteClean.c)
 *     MiRevertValidPte @ 0x1402B7550 (MiRevertValidPte.c)
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     MiDeleteSystemPageTable @ 0x140314340 (MiDeleteSystemPageTable.c)
 *     MiMakeVaRangeNoAccess @ 0x140327684 (MiMakeVaRangeNoAccess.c)
 *     MiZeroPageWorkMapping @ 0x140351698 (MiZeroPageWorkMapping.c)
 *     MiDecommitLargePoolVa @ 0x1403705F0 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x140378EF0 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B954C (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x1403B973C (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B9828 (MiDemoteValidLargePageOneLevel.c)
 *     MiUnmapMdlCommon @ 0x14052FC24 (MiUnmapMdlCommon.c)
 *     MiDecommitLargePte @ 0x14053B0E0 (MiDecommitLargePte.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054C798 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x14054DE8C (MiDeleteLargeUserPde.c)
 *     MiReleaseLargePteMappings @ 0x1405524EC (MiReleaseLargePteMappings.c)
 *     MiFreeBootDriverPages @ 0x140A4E704 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 */

unsigned __int64 __fastcall MiInsertLargeTbFlushEntry(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v6; // esi
  unsigned __int64 result; // rax

  v6 = 0;
  do
  {
    a3 = (__int64)(a3 << 25) >> 16;
    result = MiInsertTbFlushEntry(a1, a3, 1LL, v6++);
  }
  while ( v6 <= a2 );
  return result;
}
