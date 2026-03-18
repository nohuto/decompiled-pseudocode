/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x1403385B4
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140221080 (MiMoveDirtyBitsToPfns.c)
 *     MiZeroPage @ 0x14023C480 (MiZeroPage.c)
 *     MiMakePteClean @ 0x140262EA4 (MiMakePteClean.c)
 *     MiRevertValidPte @ 0x1402AF480 (MiRevertValidPte.c)
 *     MiZeroPageWorkMapping @ 0x14031A67C (MiZeroPageWorkMapping.c)
 *     MiDeleteSystemPageTable @ 0x14032E4E0 (MiDeleteSystemPageTable.c)
 *     MmUnmapIoSpace @ 0x1403373E0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1403374F0 (MiZeroAndFlushPtes.c)
 *     MiMakeVaRangeNoAccess @ 0x140356C84 (MiMakeVaRangeNoAccess.c)
 *     MiDecommitLargePoolVa @ 0x14036E6A0 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x140376F60 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B6AAC (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x1403B6C9C (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B6D88 (MiDemoteValidLargePageOneLevel.c)
 *     MiUnmapMdlCommon @ 0x14052C254 (MiUnmapMdlCommon.c)
 *     MiDecommitLargePte @ 0x140537710 (MiDecommitLargePte.c)
 *     MiProtectAweRegion @ 0x140547E94 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x140548DC8 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x14054A4BC (MiDeleteLargeUserPde.c)
 *     MiReleaseLargePteMappings @ 0x14054EB1C (MiReleaseLargePteMappings.c)
 *     MiFreeBootDriverPages @ 0x140A48474 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
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
