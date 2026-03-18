/*
 * XREFs of MiGetLeafVa @ 0x140290520
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14020FD20 (MiCompletePrivateZeroFault.c)
 *     MiRevertValidPte @ 0x14021C800 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MiFillSystemPtes @ 0x140274CE0 (MiFillSystemPtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     MiMapPagesToZero @ 0x140296210 (MiMapPagesToZero.c)
 *     MiIsPageTableDeletable @ 0x14029EFC0 (MiIsPageTableDeletable.c)
 *     MiPrefetchVirtualMemory @ 0x1402A1330 (MiPrefetchVirtualMemory.c)
 *     MiGetNextPageTable @ 0x1402AF130 (MiGetNextPageTable.c)
 *     MiInPagePageTable @ 0x1402B1DE0 (MiInPagePageTable.c)
 *     MiClearNonPagedPtes @ 0x1402F1DCC (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402F2060 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x1402F2740 (MiDeleteSystemPageTable.c)
 *     MiEvictPageTableLock @ 0x1402F2ABC (MiEvictPageTableLock.c)
 *     MiZeroAndFlushPtes @ 0x1402FA4C0 (MiZeroAndFlushPtes.c)
 *     MiReplacePageTablePage @ 0x1403047BC (MiReplacePageTablePage.c)
 *     MiFlushDirtyBitsToPfn @ 0x140313B7C (MiFlushDirtyBitsToPfn.c)
 *     MiMakeVaRangeNoAccess @ 0x140319094 (MiMakeVaRangeNoAccess.c)
 *     MiInitializeSystemPageTable @ 0x140328C34 (MiInitializeSystemPageTable.c)
 *     MiCountSharedPages @ 0x1403420A0 (MiCountSharedPages.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiFlushValidPteFromTb @ 0x140376150 (MiFlushValidPteFromTb.c)
 *     MiReplicatePteChange @ 0x1403A1024 (MiReplicatePteChange.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B5730 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x1403B5918 (MiPfnRangeIsZero.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403EDB04 (MiDeleteEmptyPageTableCommit.c)
 *     MiMirrorRemoveInactivePages @ 0x14052F254 (MiMirrorRemoveInactivePages.c)
 *     MiDecommitLargePte @ 0x1405370C0 (MiDecommitLargePte.c)
 *     MiMakeLargePageTable @ 0x140537EF4 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x140540020 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x14054059C (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x140540B9C (MiDbgWriteCheck.c)
 *     MiProtectAweRegion @ 0x140547844 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x140548778 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x14055DF98 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafVa(unsigned __int64 a1)
{
  for ( ; a1 >= 0xFFFFF68000000000uLL; a1 = (__int64)(a1 << 25) >> 16 )
  {
    if ( a1 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  return a1;
}
