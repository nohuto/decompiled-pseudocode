/*
 * XREFs of MiIsPageOnBadList @ 0x140319D2C
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 *     MiFindContiguousPages @ 0x140225A90 (MiFindContiguousPages.c)
 *     MiPfnsWorthTrying @ 0x1402264E0 (MiPfnsWorthTrying.c)
 *     MiDeleteClusterSection @ 0x1402273C0 (MiDeleteClusterSection.c)
 *     MiCopyHeaderIfResident @ 0x140265B30 (MiCopyHeaderIfResident.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x140357C78 (MiQueryPfn.c)
 *     MiConvertStandbyToProto @ 0x140364CE8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MiLargePfnPromoteCandidate @ 0x1403F1370 (MiLargePfnPromoteCandidate.c)
 *     MiRemoveBadPages @ 0x1405296F8 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x140529C28 (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x14052A340 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052A460 (MmMarkPhysicalMemoryAsBad.c)
 *     MmTryIdentifyPage @ 0x14052F398 (MmTryIdentifyPage.c)
 *     MmGetDumpRange @ 0x1405332A0 (MmGetDumpRange.c)
 *     MiArePageContentsZero @ 0x1405496F8 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x14055D970 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x14055E494 (MiMakePageBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL;
}
