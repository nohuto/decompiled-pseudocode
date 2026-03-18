/*
 * XREFs of MiInitializePageColorBase @ 0x1402B7AA0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14020F5F0 (MiResolvePrivateZeroFault.c)
 *     MiAllocateKernelStackPages @ 0x140224500 (MiAllocateKernelStackPages.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiInitializeColorBase @ 0x140310E1C (MiInitializeColorBase.c)
 *     MiGetPoolPages @ 0x140326CB4 (MiGetPoolPages.c)
 *     MiMapPageFileHash @ 0x140341CD8 (MiMapPageFileHash.c)
 *     MiGetPageForHeader @ 0x14034BFA0 (MiGetPageForHeader.c)
 *     MiAllocateMdlPagesByLists @ 0x140371824 (MiAllocateMdlPagesByLists.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AE258 (MiTimeSingleLargePageZeroWorker.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403EE860 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiHugePageOperation @ 0x14052D458 (MiHugePageOperation.c)
 *     MmAllocateNonChargedSecurePages @ 0x14052E7EC (MmAllocateNonChargedSecurePages.c)
 *     MiPrefetchPreallocatePages @ 0x140533B00 (MiPrefetchPreallocatePages.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     MiPruneStandbyPages @ 0x14054B2E4 (MiPruneStandbyPages.c)
 *     MiProcessVaContiguityInformation @ 0x14054C7D0 (MiProcessVaContiguityInformation.c)
 *     MiGetClusterPage @ 0x14054FE80 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x140554648 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x140554F74 (MiHandleForkTransitionPte.c)
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14062F350 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x1406F0068 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x1406F10F0 (MiAllocateTopLevelPage.c)
 *     MiCombineIdenticalPages @ 0x1407128D0 (MiCombineIdenticalPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14074B21C (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x14077289C (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x1408D3690 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x1408D3E78 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408D7500 (MiInitializeScrubPacket.c)
 *     MxRelocatePageTables @ 0x140A4ED90 (MxRelocatePageTables.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MiInitializePageColorBase(__int64 a1, int a2, __int64 a3)
{
  unsigned int *result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  int NodeShiftedColor; // edx

  result = (unsigned int *)a1;
  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (a2 - 1) << byte_140C4DDCC;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  *(_DWORD *)(a3 + 12) = NodeShiftedColor;
  *(_DWORD *)(a3 + 8) = (1 << byte_140C4DDCD) - 1;
  if ( !a1 || (*(_BYTE *)(a1 + 184) & 7u) >= 2 )
    result = &CurrentPrcb->PageColor;
  *(_QWORD *)a3 = result;
  return result;
}
