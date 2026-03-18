/*
 * XREFs of MiInitializePageColorBase @ 0x14025EA70
 * Callers:
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiResolvePrivateZeroFault @ 0x1402A2100 (MiResolvePrivateZeroFault.c)
 *     MiAllocateKernelStackPages @ 0x1402B7180 (MiAllocateKernelStackPages.c)
 *     MiGetPoolPages @ 0x1402E1A7C (MiGetPoolPages.c)
 *     MiMapPageFileHash @ 0x1403129A0 (MiMapPageFileHash.c)
 *     MiGetPageForHeader @ 0x14031CC60 (MiGetPageForHeader.c)
 *     MiInitializeColorBase @ 0x14034E4AC (MiInitializeColorBase.c)
 *     MiAllocateMdlPagesByLists @ 0x140372634 (MiAllocateMdlPagesByLists.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403A7E38 (MiTimeSingleLargePageZeroWorker.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403EFBC0 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MiHugePageOperation @ 0x14052DAA8 (MiHugePageOperation.c)
 *     MmAllocateNonChargedSecurePages @ 0x14052EE3C (MmAllocateNonChargedSecurePages.c)
 *     MiPrefetchPreallocatePages @ 0x140534150 (MiPrefetchPreallocatePages.c)
 *     MiSwitchToTransition @ 0x140534A44 (MiSwitchToTransition.c)
 *     MiPruneStandbyPages @ 0x14054B934 (MiPruneStandbyPages.c)
 *     MiProcessVaContiguityInformation @ 0x14054CE20 (MiProcessVaContiguityInformation.c)
 *     MiGetClusterPage @ 0x1405504D0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x140554C98 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     MiPfPrepareSequentialReadList @ 0x1405F9950 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1405FA310 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x1406A9548 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x1406ABFD4 (MiAllocateTopLevelPage.c)
 *     MiCombineIdenticalPages @ 0x140714C54 (MiCombineIdenticalPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14074F63C (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x140774CAC (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x1408D49E0 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x1408D51C8 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408D8850 (MiInitializeScrubPacket.c)
 *     MxRelocatePageTables @ 0x140A54A90 (MxRelocatePageTables.c)
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
    NodeShiftedColor = (a2 - 1) << byte_140C4DC8C;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  *(_DWORD *)(a3 + 12) = NodeShiftedColor;
  *(_DWORD *)(a3 + 8) = (1 << byte_140C4DC8D) - 1;
  if ( !a1 || (*(_BYTE *)(a1 + 184) & 7u) >= 2 )
    result = &CurrentPrcb->PageColor;
  *(_QWORD *)a3 = result;
  return result;
}
