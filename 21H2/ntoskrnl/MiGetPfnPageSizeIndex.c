/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x1403F6AD8
 * Callers:
 *     MiTryUnlinkNodeLargePage @ 0x14029195C (MiTryUnlinkNodeLargePage.c)
 *     MiZeroInParallelWorker @ 0x1402E6010 (MiZeroInParallelWorker.c)
 *     MiInsertLargePageInNodeList @ 0x1402FEA50 (MiInsertLargePageInNodeList.c)
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140302700 (MiActivePageClaimCandidate.c)
 *     MiIdentifyPfn @ 0x140349250 (MiIdentifyPfn.c)
 *     MiFindLargeNodePage @ 0x140394ED0 (MiFindLargeNodePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F41AC (MiUpdateLargePageSectionPfns.c)
 *     MiZeroWithSystemPtes @ 0x1403F5238 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F5518 (MiZeroWithUltraSpace.c)
 *     MiGetPagesRemainingInResidentPage @ 0x1403F69B8 (MiGetPagesRemainingInResidentPage.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6B08 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiGetFastLargePages @ 0x1403F7B20 (MiGetFastLargePages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140533FE8 (MiInitializeLargeMdlLeafPfns.c)
 *     MiMirrorRemoveInactivePages @ 0x140534D74 (MiMirrorRemoveInactivePages.c)
 *     MiAllocateLargeZeroPages @ 0x14055DA5C (MiAllocateLargeZeroPages.c)
 *     MiAssembleLargePagePfnList @ 0x14055DE20 (MiAssembleLargePagePfnList.c)
 *     MiFreeLargePages @ 0x14055E498 (MiFreeLargePages.c)
 *     MiTransferPartitionPageRun @ 0x140562E10 (MiTransferPartitionPageRun.c)
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
