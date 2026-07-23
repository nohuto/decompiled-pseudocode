/*
 * XREFs of MiGetLeafVa @ 0x140337BB0
 * Callers:
 *     MiCountSharedPages @ 0x140209600 (MiCountSharedPages.c)
 *     MiZeroAndFlushPtes @ 0x1402180C0 (MiZeroAndFlushPtes.c)
 *     MiClearNonPagedPtes @ 0x14021AB20 (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x14021ADB0 (MiDeleteNonPagedPoolPte.c)
 *     MiFlushDirtyBitsToPfn @ 0x14021E2BC (MiFlushDirtyBitsToPfn.c)
 *     MiReplacePageTablePage @ 0x140224260 (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTable @ 0x140234FA0 (MiDeleteSystemPageTable.c)
 *     MiMakeVaRangeNoAccess @ 0x1402470B4 (MiMakeVaRangeNoAccess.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiPrefetchVirtualMemory @ 0x140262E40 (MiPrefetchVirtualMemory.c)
 *     MiInitializeSystemPageTable @ 0x1402967D4 (MiInitializeSystemPageTable.c)
 *     MiCompletePrivateZeroFault @ 0x1402B5150 (MiCompletePrivateZeroFault.c)
 *     MiFillSystemPtes @ 0x1402CB7F0 (MiFillSystemPtes.c)
 *     MiMapPagesToZero @ 0x1402D88C0 (MiMapPagesToZero.c)
 *     MiIsPageTableDeletable @ 0x1403100A0 (MiIsPageTableDeletable.c)
 *     MiInPagePageTable @ 0x140316B10 (MiInPagePageTable.c)
 *     MiEvictPageTableLock @ 0x140317370 (MiEvictPageTableLock.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1403373A0 (NtGetWriteWatch.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiRevertValidPte @ 0x14033F050 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiFlushValidPteFromTb @ 0x140378C4C (MiFlushValidPteFromTb.c)
 *     MiReplicatePteChange @ 0x1403A4694 (MiReplicatePteChange.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B9B70 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x1403B9D58 (MiPfnRangeIsZero.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403F4B14 (MiDeleteEmptyPageTableCommit.c)
 *     MiMirrorRemoveInactivePages @ 0x140534FB4 (MiMirrorRemoveInactivePages.c)
 *     MiDecommitLargePte @ 0x14053CE20 (MiDecommitLargePte.c)
 *     MiMakeLargePageTable @ 0x14053DC54 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x140545D80 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1405462FC (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1405468FC (MiDbgWriteCheck.c)
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x140563CC8 (MiScrubLargeMappedPage.c)
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
