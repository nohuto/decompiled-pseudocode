/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x1403F533C
 * Callers:
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     MiInsertLargePageInNodeList @ 0x1402F1DC0 (MiInsertLargePageInNodeList.c)
 *     MiTryUnlinkNodeLargePage @ 0x1402F27F8 (MiTryUnlinkNodeLargePage.c)
 *     MiZeroInParallelWorker @ 0x140333530 (MiZeroInParallelWorker.c)
 *     MiTradePage @ 0x14034AE80 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x14034C9A0 (MiActivePageClaimCandidate.c)
 *     MiFindLargeNodePage @ 0x140394A60 (MiFindLargeNodePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F2964 (MiUpdateLargePageSectionPfns.c)
 *     MiZeroWithSystemPtes @ 0x1403F39F8 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F3CD8 (MiZeroWithUltraSpace.c)
 *     MiGetPagesRemainingInResidentPage @ 0x1403F521C (MiGetPagesRemainingInResidentPage.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F536C (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiGetFastLargePages @ 0x1403F6384 (MiGetFastLargePages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1405324E8 (MiInitializeLargeMdlLeafPfns.c)
 *     MiMirrorRemoveInactivePages @ 0x140533274 (MiMirrorRemoveInactivePages.c)
 *     MiAllocateLargeZeroPages @ 0x14055BF8C (MiAllocateLargeZeroPages.c)
 *     MiAssembleLargePagePfnList @ 0x14055C350 (MiAssembleLargePagePfnList.c)
 *     MiFreeLargePages @ 0x14055C9C8 (MiFreeLargePages.c)
 *     MiTransferPartitionPageRun @ 0x140561340 (MiTransferPartitionPageRun.c)
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
