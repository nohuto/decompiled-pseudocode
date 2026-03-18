/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x1403F0E28
 * Callers:
 *     MiIdentifyPfn @ 0x140206380 (MiIdentifyPfn.c)
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140226AB0 (MiActivePageClaimCandidate.c)
 *     MiZeroInParallelWorker @ 0x1402DF7C0 (MiZeroInParallelWorker.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 *     MiTryUnlinkNodeLargePage @ 0x140353DE8 (MiTryUnlinkNodeLargePage.c)
 *     MiFindLargeNodePage @ 0x1403925A0 (MiFindLargeNodePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403EE4FC (MiUpdateLargePageSectionPfns.c)
 *     MiZeroWithSystemPtes @ 0x1403EF588 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403EF868 (MiZeroWithUltraSpace.c)
 *     MiGetPagesRemainingInResidentPage @ 0x1403F0D08 (MiGetPagesRemainingInResidentPage.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F0E58 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiGetFastLargePages @ 0x1403F1E70 (MiGetFastLargePages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14052EB18 (MiInitializeLargeMdlLeafPfns.c)
 *     MiMirrorRemoveInactivePages @ 0x14052F8A4 (MiMirrorRemoveInactivePages.c)
 *     MiAllocateLargeZeroPages @ 0x1405585BC (MiAllocateLargeZeroPages.c)
 *     MiAssembleLargePagePfnList @ 0x140558980 (MiAssembleLargePagePfnList.c)
 *     MiFreeLargePages @ 0x140558FF8 (MiFreeLargePages.c)
 *     MiTransferPartitionPageRun @ 0x14055D970 (MiTransferPartitionPageRun.c)
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
