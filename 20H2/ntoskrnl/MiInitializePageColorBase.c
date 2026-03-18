/*
 * XREFs of MiInitializePageColorBase @ 0x140231F50
 * Callers:
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiMapPageFileHash @ 0x14023BDF8 (MiMapPageFileHash.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiInitializeColorBase @ 0x14024F838 (MiInitializeColorBase.c)
 *     MiResolvePrivateZeroFault @ 0x140271440 (MiResolvePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiGetPoolPages @ 0x140333D10 (MiGetPoolPages.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     MiGetPageForHeader @ 0x140351198 (MiGetPageForHeader.c)
 *     MiAllocateMdlPagesByLists @ 0x140374584 (MiAllocateMdlPagesByLists.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AA828 (MiTimeSingleLargePageZeroWorker.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403F4030 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MiHugePageOperation @ 0x140531478 (MiHugePageOperation.c)
 *     MmAllocateNonChargedSecurePages @ 0x14053280C (MmAllocateNonChargedSecurePages.c)
 *     MiPrefetchPreallocatePages @ 0x140537B20 (MiPrefetchPreallocatePages.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 *     MiPruneStandbyPages @ 0x14054F304 (MiPruneStandbyPages.c)
 *     MiProcessVaContiguityInformation @ 0x1405507F0 (MiProcessVaContiguityInformation.c)
 *     MiGetClusterPage @ 0x140553EA0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140554344 (MiIdealClusterPage.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x140558668 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x1406ED7B8 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x1406EDC28 (MiAllocateTopLevelPage.c)
 *     MiCombineIdenticalPages @ 0x140722C1C (MiCombineIdenticalPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14075E21C (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x1407832AC (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x1408DA820 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x1408DB008 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408DE690 (MiInitializeScrubPacket.c)
 *     MxRelocatePageTables @ 0x140A55110 (MxRelocatePageTables.c)
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
    NodeShiftedColor = (a2 - 1) << byte_140C4DD0C;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  *(_DWORD *)(a3 + 12) = NodeShiftedColor;
  *(_DWORD *)(a3 + 8) = (1 << byte_140C4DD0D) - 1;
  if ( !a1 || (*(_BYTE *)(a1 + 184) & 7u) >= 2 )
    result = &CurrentPrcb->PageColor;
  *(_QWORD *)a3 = result;
  return result;
}
