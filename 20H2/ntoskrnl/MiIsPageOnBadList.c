/*
 * XREFs of MiIsPageOnBadList @ 0x14034D80C
 * Callers:
 *     MiQueryPfn @ 0x140328448 (MiQueryPfn.c)
 *     MiDeleteClusterSection @ 0x14034A680 (MiDeleteClusterSection.c)
 *     MiTradePage @ 0x14034AE80 (MiTradePage.c)
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiPfnsWorthTrying @ 0x14034C3D0 (MiPfnsWorthTrying.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiCopyHeaderIfResident @ 0x140355BE4 (MiCopyHeaderIfResident.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiLargePfnPromoteCandidate @ 0x1403F5884 (MiLargePfnPromoteCandidate.c)
 *     MiRemoveBadPages @ 0x14052D0C8 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x14052D5F8 (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x14052DD10 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052DE30 (MmMarkPhysicalMemoryAsBad.c)
 *     MmTryIdentifyPage @ 0x140532D68 (MmTryIdentifyPage.c)
 *     MmGetDumpRange @ 0x140536C70 (MmGetDumpRange.c)
 *     MiArePageContentsZero @ 0x14054D0C8 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x140561340 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x140561E64 (MiMakePageBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL;
}
