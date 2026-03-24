/*
 * XREFs of MiIsPageOnBadList @ 0x14030356C
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x1402C96A8 (MiQueryPfn.c)
 *     MiCopyHeaderIfResident @ 0x1402E8D30 (MiCopyHeaderIfResident.c)
 *     MiDeleteClusterSection @ 0x1403003E0 (MiDeleteClusterSection.c)
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 *     MiFindContiguousPages @ 0x1403016E0 (MiFindContiguousPages.c)
 *     MiPfnsWorthTrying @ 0x140302130 (MiPfnsWorthTrying.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiLargePfnPromoteCandidate @ 0x1403F7020 (MiLargePfnPromoteCandidate.c)
 *     MiRemoveBadPages @ 0x14052EBC8 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x14052F0F8 (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x14052F810 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F930 (MmMarkPhysicalMemoryAsBad.c)
 *     MmTryIdentifyPage @ 0x140534868 (MmTryIdentifyPage.c)
 *     MmGetDumpRange @ 0x140538770 (MmGetDumpRange.c)
 *     MiArePageContentsZero @ 0x14054EBC8 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x140562E10 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x140563934 (MiMakePageBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL;
}
