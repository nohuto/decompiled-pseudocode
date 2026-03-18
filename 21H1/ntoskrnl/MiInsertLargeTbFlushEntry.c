/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x1402FB584
 * Callers:
 *     MiRevertValidPte @ 0x14021C800 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     MiZeroPage @ 0x1402954B0 (MiZeroPage.c)
 *     MiMakePteClean @ 0x1402BBED4 (MiMakePteClean.c)
 *     MiDeleteSystemPageTable @ 0x1402F2740 (MiDeleteSystemPageTable.c)
 *     MmUnmapIoSpace @ 0x1402FA3B0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1402FA4C0 (MiZeroAndFlushPtes.c)
 *     MiMakeVaRangeNoAccess @ 0x140319094 (MiMakeVaRangeNoAccess.c)
 *     MiZeroPageWorkMapping @ 0x1403499BC (MiZeroPageWorkMapping.c)
 *     MiDecommitLargePoolVa @ 0x14036DA70 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x140376150 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B5C7C (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x1403B5E6C (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B5F58 (MiDemoteValidLargePageOneLevel.c)
 *     MiUnmapMdlCommon @ 0x14052BC04 (MiUnmapMdlCommon.c)
 *     MiDecommitLargePte @ 0x1405370C0 (MiDecommitLargePte.c)
 *     MiProtectAweRegion @ 0x140547844 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x140548778 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x140549E6C (MiDeleteLargeUserPde.c)
 *     MiReleaseLargePteMappings @ 0x14054E4CC (MiReleaseLargePteMappings.c)
 *     MiFreeBootDriverPages @ 0x140A42C14 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
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
