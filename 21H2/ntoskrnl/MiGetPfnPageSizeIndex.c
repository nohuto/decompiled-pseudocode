/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x1403F6AD8
 * Callers:
 *     MiTryUnlinkNodeLargePage @ 0x14020F8CC (MiTryUnlinkNodeLargePage.c)
 *     MiZeroInParallelWorker @ 0x140297360 (MiZeroInParallelWorker.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x14030D450 (MiActivePageClaimCandidate.c)
 *     MiIdentifyPfn @ 0x140353FA0 (MiIdentifyPfn.c)
 *     MiFindLargeNodePage @ 0x140395020 (MiFindLargeNodePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F41AC (MiUpdateLargePageSectionPfns.c)
 *     MiZeroWithSystemPtes @ 0x1403F5238 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F5518 (MiZeroWithUltraSpace.c)
 *     MiGetPagesRemainingInResidentPage @ 0x1403F69B8 (MiGetPagesRemainingInResidentPage.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6B08 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiGetFastLargePages @ 0x1403F7B20 (MiGetFastLargePages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140534228 (MiInitializeLargeMdlLeafPfns.c)
 *     MiMirrorRemoveInactivePages @ 0x140534FB4 (MiMirrorRemoveInactivePages.c)
 *     MiAllocateLargeZeroPages @ 0x14055DC9C (MiAllocateLargeZeroPages.c)
 *     MiAssembleLargePagePfnList @ 0x14055E060 (MiAssembleLargePagePfnList.c)
 *     MiFreeLargePages @ 0x14055E6D8 (MiFreeLargePages.c)
 *     MiTransferPartitionPageRun @ 0x140563050 (MiTransferPartitionPageRun.c)
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
