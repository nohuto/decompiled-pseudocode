/*
 * XREFs of MiIsPageOnBadList @ 0x14034906C
 * Callers:
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 *     MiFindContiguousPages @ 0x14027EAE0 (MiFindContiguousPages.c)
 *     MiPfnsWorthTrying @ 0x14027F530 (MiPfnsWorthTrying.c)
 *     MiDeleteClusterSection @ 0x140280410 (MiDeleteClusterSection.c)
 *     MiCopyHeaderIfResident @ 0x1402BEB60 (MiCopyHeaderIfResident.c)
 *     MiQueryPfn @ 0x14031A158 (MiQueryPfn.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiLargePfnPromoteCandidate @ 0x1403F0010 (MiLargePfnPromoteCandidate.c)
 *     MiRemoveBadPages @ 0x1405290A8 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1405295D8 (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x140529CF0 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140529E10 (MmMarkPhysicalMemoryAsBad.c)
 *     MmTryIdentifyPage @ 0x14052ED48 (MmTryIdentifyPage.c)
 *     MmGetDumpRange @ 0x140532C50 (MmGetDumpRange.c)
 *     MiArePageContentsZero @ 0x1405490A8 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x14055D320 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x14055DE44 (MiMakePageBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL;
}
