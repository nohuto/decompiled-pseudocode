/*
 * XREFs of MiGetLeafVa @ 0x1402B0270
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x14022D6A0 (MiPrefetchVirtualMemory.c)
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MiGetNextPageTable @ 0x140235D70 (MiGetNextPageTable.c)
 *     MiIsPageTableDeletable @ 0x140236000 (MiIsPageTableDeletable.c)
 *     MiZeroAndFlushPtes @ 0x1402612E0 (MiZeroAndFlushPtes.c)
 *     MiCompletePrivateZeroFault @ 0x140271B70 (MiCompletePrivateZeroFault.c)
 *     MiFillSystemPtes @ 0x140286700 (MiFillSystemPtes.c)
 *     NtGetWriteWatch @ 0x1402AFA60 (NtGetWriteWatch.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MiRevertValidPte @ 0x1402B7550 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiMapPagesToZero @ 0x1402C2890 (MiMapPagesToZero.c)
 *     MiInPagePageTable @ 0x1402CBBA0 (MiInPagePageTable.c)
 *     MiEvictPageTableLock @ 0x1402CC400 (MiEvictPageTableLock.c)
 *     MiCountSharedPages @ 0x1402FF4F0 (MiCountSharedPages.c)
 *     MiClearNonPagedPtes @ 0x140301340 (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x1403015D0 (MiDeleteNonPagedPoolPte.c)
 *     MiReplacePageTablePage @ 0x140313100 (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTable @ 0x140314340 (MiDeleteSystemPageTable.c)
 *     MiFlushDirtyBitsToPfn @ 0x140322668 (MiFlushDirtyBitsToPfn.c)
 *     MiMakeVaRangeNoAccess @ 0x140327684 (MiMakeVaRangeNoAccess.c)
 *     MiInitializeSystemPageTable @ 0x140336364 (MiInitializeSystemPageTable.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiFlushValidPteFromTb @ 0x140378EF0 (MiFlushValidPteFromTb.c)
 *     MiReplicatePteChange @ 0x1403A3C84 (MiReplicatePteChange.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B9000 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x1403B91E8 (MiPfnRangeIsZero.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403F32D4 (MiDeleteEmptyPageTableCommit.c)
 *     MiMirrorRemoveInactivePages @ 0x140533274 (MiMirrorRemoveInactivePages.c)
 *     MiDecommitLargePte @ 0x14053B0E0 (MiDecommitLargePte.c)
 *     MiMakeLargePageTable @ 0x14053BF14 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x140544040 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1405445BC (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x140544BBC (MiDbgWriteCheck.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054C798 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x140561FB8 (MiScrubLargeMappedPage.c)
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
