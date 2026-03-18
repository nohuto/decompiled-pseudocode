/*
 * XREFs of MiGetLeafVa @ 0x1402374D0
 * Callers:
 *     MiFillSystemPtes @ 0x14021BC90 (MiFillSystemPtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x140221080 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     MiMapPagesToZero @ 0x14023D1E0 (MiMapPagesToZero.c)
 *     MiIsPageTableDeletable @ 0x140245F90 (MiIsPageTableDeletable.c)
 *     MiPrefetchVirtualMemory @ 0x140248300 (MiPrefetchVirtualMemory.c)
 *     MiGetNextPageTable @ 0x140256100 (MiGetNextPageTable.c)
 *     MiInPagePageTable @ 0x140258DB0 (MiInPagePageTable.c)
 *     MiCompletePrivateZeroFault @ 0x1402A2830 (MiCompletePrivateZeroFault.c)
 *     MiRevertValidPte @ 0x1402AF480 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 *     MiInitializeSystemPageTable @ 0x1402E28D4 (MiInitializeSystemPageTable.c)
 *     MiCountSharedPages @ 0x140312D60 (MiCountSharedPages.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiClearNonPagedPtes @ 0x14032DB6C (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x14032DE00 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x14032E4E0 (MiDeleteSystemPageTable.c)
 *     MiEvictPageTableLock @ 0x14032E85C (MiEvictPageTableLock.c)
 *     MiZeroAndFlushPtes @ 0x1403374F0 (MiZeroAndFlushPtes.c)
 *     MiReplacePageTablePage @ 0x14034221C (MiReplacePageTablePage.c)
 *     MiFlushDirtyBitsToPfn @ 0x1403519CC (MiFlushDirtyBitsToPfn.c)
 *     MiMakeVaRangeNoAccess @ 0x140356C84 (MiMakeVaRangeNoAccess.c)
 *     MiFlushValidPteFromTb @ 0x140376F60 (MiFlushValidPteFromTb.c)
 *     MiReplicatePteChange @ 0x1403A17B4 (MiReplicatePteChange.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B6560 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x1403B6748 (MiPfnRangeIsZero.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403EEE64 (MiDeleteEmptyPageTableCommit.c)
 *     MiMirrorRemoveInactivePages @ 0x14052F8A4 (MiMirrorRemoveInactivePages.c)
 *     MiDecommitLargePte @ 0x140537710 (MiDecommitLargePte.c)
 *     MiMakeLargePageTable @ 0x140538544 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x140540670 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x140540BEC (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1405411EC (MiDbgWriteCheck.c)
 *     MiProtectAweRegion @ 0x140547E94 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x140548DC8 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x14055E5E8 (MiScrubLargeMappedPage.c)
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
