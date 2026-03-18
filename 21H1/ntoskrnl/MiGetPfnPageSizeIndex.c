/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x1403EFAC8
 * Callers:
 *     MiIdentifyPfn @ 0x14025F2A0 (MiIdentifyPfn.c)
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x14027FB00 (MiActivePageClaimCandidate.c)
 *     MiTryUnlinkNodeLargePage @ 0x140316270 (MiTryUnlinkNodeLargePage.c)
 *     MiZeroInParallelWorker @ 0x1403248C0 (MiZeroInParallelWorker.c)
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 *     MiFindLargeNodePage @ 0x1403919F0 (MiFindLargeNodePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403ED43C (MiUpdateLargePageSectionPfns.c)
 *     MiZeroWithSystemPtes @ 0x1403EE228 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403EE508 (MiZeroWithUltraSpace.c)
 *     MiGetPagesRemainingInResidentPage @ 0x1403EF9A8 (MiGetPagesRemainingInResidentPage.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403EFAF8 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiGetFastLargePages @ 0x1403F0B10 (MiGetFastLargePages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14052E4C8 (MiInitializeLargeMdlLeafPfns.c)
 *     MiMirrorRemoveInactivePages @ 0x14052F254 (MiMirrorRemoveInactivePages.c)
 *     MiAllocateLargeZeroPages @ 0x140557F6C (MiAllocateLargeZeroPages.c)
 *     MiAssembleLargePagePfnList @ 0x140558330 (MiAssembleLargePagePfnList.c)
 *     MiFreeLargePages @ 0x1405589A8 (MiFreeLargePages.c)
 *     MiTransferPartitionPageRun @ 0x14055D320 (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnPageSizeIndex(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_QWORD *)(a1 + 40) & 0x1000000000LL) == 0 )
    return 0xFFFFFFFFLL;
  result = 3 - (*(_BYTE *)(a1 + 39) & 3u);
  if ( (_DWORD)result == 3 )
    return 0xFFFFFFFFLL;
  return result;
}
