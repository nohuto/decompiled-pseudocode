/*
 * XREFs of MiGetLeafVa @ 0x14032CE60
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140210850 (MiCompletePrivateZeroFault.c)
 *     MiFillSystemPtes @ 0x140226EF0 (MiFillSystemPtes.c)
 *     MiMapPagesToZero @ 0x140234070 (MiMapPagesToZero.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiPrefetchVirtualMemory @ 0x140274EA0 (MiPrefetchVirtualMemory.c)
 *     MiCountSharedPages @ 0x14028C460 (MiCountSharedPages.c)
 *     MiClearNonPagedPtes @ 0x140296238 (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402964D0 (MiDeleteNonPagedPoolPte.c)
 *     MiZeroAndFlushPtes @ 0x140297640 (MiZeroAndFlushPtes.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402A0D3C (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteSystemPageTable @ 0x1402B6DC0 (MiDeleteSystemPageTable.c)
 *     MiMakeVaRangeNoAccess @ 0x1402C8854 (MiMakeVaRangeNoAccess.c)
 *     MiInitializeSystemPageTable @ 0x1402E5484 (MiInitializeSystemPageTable.c)
 *     MiIsPageTableDeletable @ 0x140305350 (MiIsPageTableDeletable.c)
 *     MiInPagePageTable @ 0x14030BDC0 (MiInPagePageTable.c)
 *     MiEvictPageTableLock @ 0x14030C620 (MiEvictPageTableLock.c)
 *     MiGetNextPageTable @ 0x14030D820 (MiGetNextPageTable.c)
 *     MiMoveDirtyBitsToPfns @ 0x140317490 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x14032C650 (NtGetWriteWatch.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 *     MiRevertValidPte @ 0x140334300 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiReplacePageTablePage @ 0x140363DF0 (MiReplacePageTablePage.c)
 *     MiFlushValidPteFromTb @ 0x1403790FC (MiFlushValidPteFromTb.c)
 *     MiReplicatePteChange @ 0x1403A4544 (MiReplicatePteChange.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B9A00 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x1403B9BE8 (MiPfnRangeIsZero.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403F4B14 (MiDeleteEmptyPageTableCommit.c)
 *     MiMirrorRemoveInactivePages @ 0x140534D74 (MiMirrorRemoveInactivePages.c)
 *     MiDecommitLargePte @ 0x14053CBE0 (MiDecommitLargePte.c)
 *     MiMakeLargePageTable @ 0x14053DA14 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x140545B40 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1405460BC (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1405466BC (MiDbgWriteCheck.c)
 *     MiProtectAweRegion @ 0x14054D364 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E298 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x140563A88 (MiScrubLargeMappedPage.c)
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
