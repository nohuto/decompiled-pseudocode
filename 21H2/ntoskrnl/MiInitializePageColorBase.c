/*
 * XREFs of MiInitializePageColorBase @ 0x14023F280
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x140210120 (MiResolvePrivateZeroFault.c)
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiAllocateKernelStackPages @ 0x14023E800 (MiAllocateKernelStackPages.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiGetPageForHeader @ 0x14026E62C (MiGetPageForHeader.c)
 *     MiGetPoolPages @ 0x140274A0C (MiGetPoolPages.c)
 *     MiMapPageFileHash @ 0x1402CDE38 (MiMapPageFileHash.c)
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     MiInitializeColorBase @ 0x1402FD478 (MiInitializeColorBase.c)
 *     MiResolveMappedFileFault @ 0x140319480 (MiResolveMappedFileFault.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiAllocateMdlPagesByLists @ 0x140374714 (MiAllocateMdlPagesByLists.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0728 (MiTimeSingleLargePageZeroWorker.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403F5870 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiMakeOutswappedPageResident @ 0x14052BAC0 (MiMakeOutswappedPageResident.c)
 *     MiHugePageOperation @ 0x140532F78 (MiHugePageOperation.c)
 *     MmAllocateNonChargedSecurePages @ 0x14053430C (MmAllocateNonChargedSecurePages.c)
 *     MiPrefetchPreallocatePages @ 0x140539620 (MiPrefetchPreallocatePages.c)
 *     MiSwitchToTransition @ 0x140539F14 (MiSwitchToTransition.c)
 *     MiPruneStandbyPages @ 0x140550DD4 (MiPruneStandbyPages.c)
 *     MiProcessVaContiguityInformation @ 0x1405522C0 (MiProcessVaContiguityInformation.c)
 *     MiGetClusterPage @ 0x140555970 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140555E14 (MiIdealClusterPage.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x14055A138 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x14055AA64 (MiHandleForkTransitionPte.c)
 *     MiAllocateTopLevelPage @ 0x1406D0824 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x1406D1A78 (MiAllocateDriverPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1406EF910 (MiPfPrepareReadList.c)
 *     MiCombineIdenticalPages @ 0x1407266AC (MiCombineIdenticalPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140762A0C (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x14078708C (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x1408D7FE0 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x1408D87C8 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408DBE50 (MiInitializeScrubPacket.c)
 *     MxRelocatePageTables @ 0x140A56734 (MxRelocatePageTables.c)
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
    NodeShiftedColor = (a2 - 1) << byte_140C4DE8C;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  *(_DWORD *)(a3 + 12) = NodeShiftedColor;
  *(_DWORD *)(a3 + 8) = (1 << byte_140C4DE8D) - 1;
  if ( !a1 || (*(_BYTE *)(a1 + 184) & 7u) >= 2 )
    result = &CurrentPrcb->PageColor;
  *(_QWORD *)a3 = result;
  return result;
}
