/*
 * XREFs of MiIsPageOnBadList @ 0x14030E2BC
 * Callers:
 *     MiQueryPfn @ 0x140247F88 (MiQueryPfn.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     MiCopyHeaderIfResident @ 0x14029A080 (MiCopyHeaderIfResident.c)
 *     MiDeleteClusterSection @ 0x14030B130 (MiDeleteClusterSection.c)
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiPfnsWorthTrying @ 0x14030CE80 (MiPfnsWorthTrying.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiLargePfnPromoteCandidate @ 0x1403F7020 (MiLargePfnPromoteCandidate.c)
 *     MiRemoveBadPages @ 0x14052EE08 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x14052F338 (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x14052FA50 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052FB70 (MmMarkPhysicalMemoryAsBad.c)
 *     MmTryIdentifyPage @ 0x140534AA8 (MmTryIdentifyPage.c)
 *     MmGetDumpRange @ 0x1405389B0 (MmGetDumpRange.c)
 *     MiArePageContentsZero @ 0x14054EE08 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x140563050 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x140563B74 (MiMakePageBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL;
}
