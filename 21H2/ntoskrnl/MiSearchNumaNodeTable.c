/*
 * XREFs of MiSearchNumaNodeTable @ 0x1403364E0
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiDemoteLargeFreePage @ 0x14020F71C (MiDemoteLargeFreePage.c)
 *     MiTryUnlinkNodeLargePage @ 0x14020F8CC (MiTryUnlinkNodeLargePage.c)
 *     MiReturnPhysicalPoolPages @ 0x14021B214 (MiReturnPhysicalPoolPages.c)
 *     MiRebuildLargeZeroPage @ 0x14021F3F0 (MiRebuildLargeZeroPage.c)
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiUpdatePageAttributeStamp @ 0x140246A30 (MiUpdatePageAttributeStamp.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x140249980 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiPageToNode @ 0x14024E754 (MiPageToNode.c)
 *     MiReplaceNumaStandbyPage @ 0x14025948C (MiReplaceNumaStandbyPage.c)
 *     MiTradeTransitionPage @ 0x140259688 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     MiInitializeMdlBatchPages @ 0x140294C34 (MiInitializeMdlBatchPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140295074 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiZeroLargePages @ 0x1402D6D70 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiLargePageFreeToZero @ 0x14030EA90 (MiLargePageFreeToZero.c)
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     MiInsertNumaStandbyPage @ 0x1403345E0 (MiInsertNumaStandbyPage.c)
 *     MmDeleteKernelStack @ 0x1403358C0 (MmDeleteKernelStack.c)
 *     MiDeleteClusterPage @ 0x140336580 (MiDeleteClusterPage.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiAllocateMdlPagesByLists @ 0x140374264 (MiAllocateMdlPagesByLists.c)
 *     MiInitializeNewUltraHugeContext @ 0x14039A814 (MiInitializeNewUltraHugeContext.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039CB94 (MiUnlinkNumaStandbyPage.c)
 *     MiDescribePageRun @ 0x1403B1088 (MiDescribePageRun.c)
 *     MiRestrictRangeToNode @ 0x1403B1630 (MiRestrictRangeToNode.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B63A4 (MiAddExpansionNonPagedPool.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B89C4 (MiMapContiguousMemoryLarge.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403BA398 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeDynamicPfns @ 0x14052E7E0 (MiInitializeDynamicPfns.c)
 *     MiHugePageOperation @ 0x1405331B8 (MiHugePageOperation.c)
 *     MiInsertHugeRangeInList @ 0x140533848 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x140533D9C (MiUnlinkHugeRange.c)
 *     MiPrefetchPreallocatePages @ 0x140539860 (MiPrefetchPreallocatePages.c)
 *     MiReplaceLockedPage @ 0x14053D9AC (MiReplaceLockedPage.c)
 *     MiQueryLeafPte @ 0x140547260 (MiQueryLeafPte.c)
 *     MI_NODE_FROM_PFN @ 0x140547D78 (MI_NODE_FROM_PFN.c)
 *     MiFreeListPageContentsChanged @ 0x14054F08C (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x14054F22C (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x14054F668 (MiSetPfnRemovalRequested.c)
 *     MiGetPagesToZero @ 0x14054FF8C (MiGetPagesToZero.c)
 *     MiPruneStandbyPages @ 0x140551014 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 *     MiLargePageMovesInProgress @ 0x140556D84 (MiLargePageMovesInProgress.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140A45500 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A45604 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x140A458EC (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140A45D90 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140A562F0 (MiHotAddBootDeferredDescriptors.c)
 *     MxSwitchDescriptors @ 0x140A9404C (MxSwitchDescriptors.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // r8d
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // edx

  v1 = dword_140C4DEC8;
  if ( dword_140C4DEC4 > (unsigned int)dword_140C4DEC8
    || (result = (char *)qword_140C4DF08 + 16 * dword_140C4DEC4, BugCheckParameter2 < *result)
    || dword_140C4DEC4 != dword_140C4DEC8 && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    if ( dword_140C4DEC8 < 0 )
LABEL_17:
      KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v4 = (v3 + v1) >> 1;
      result = (char *)qword_140C4DF08 + 16 * v4;
      if ( BugCheckParameter2 < *result )
      {
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)qword_140C4DF08, 0LL);
        v1 = v4 - 1;
      }
      else
      {
        if ( v4 == dword_140C4DEC8 || BugCheckParameter2 < result[2] )
        {
          dword_140C4DEC4 = (v3 + v1) >> 1;
          return result;
        }
        v3 = v4 + 1;
      }
      if ( v1 < v3 )
        goto LABEL_17;
    }
  }
  return result;
}
