/*
 * XREFs of MiSearchNumaNodeTable @ 0x1402AEBA0
 * Callers:
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MiInsertNumaStandbyPage @ 0x1402ACFE0 (MiInsertNumaStandbyPage.c)
 *     MmDeleteKernelStack @ 0x1402ADF80 (MmDeleteKernelStack.c)
 *     MiDeleteClusterPage @ 0x1402AEC40 (MiDeleteClusterPage.c)
 *     MiZeroLargePages @ 0x1402C0D40 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     MiWaitForInPageComplete @ 0x1402D0710 (MiWaitForInPageComplete.c)
 *     MiDemoteLargeFreePage @ 0x1402F1808 (MiDemoteLargeFreePage.c)
 *     MiInsertLargePageInNodeList @ 0x1402F1DC0 (MiInsertLargePageInNodeList.c)
 *     MiTryUnlinkNodeLargePage @ 0x1402F27F8 (MiTryUnlinkNodeLargePage.c)
 *     MiReturnPhysicalPoolPages @ 0x140301A34 (MiReturnPhysicalPoolPages.c)
 *     MiRebuildLargeZeroPage @ 0x140304F60 (MiRebuildLargeZeroPage.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiUpdatePageAttributeStamp @ 0x140326FF8 (MiUpdatePageAttributeStamp.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x140329BA0 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiPageToNode @ 0x14032E6F4 (MiPageToNode.c)
 *     MiInitializeMdlBatchPages @ 0x1403347C4 (MiInitializeMdlBatchPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140334C04 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiTradePage @ 0x14034AE80 (MiTradePage.c)
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiLargePageFreeToZero @ 0x14034DC00 (MiLargePageFreeToZero.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiTradeTransitionPage @ 0x140350BC0 (MiTradeTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x14035149C (MiReplaceNumaStandbyPage.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiAllocateMdlPagesByLists @ 0x140374584 (MiAllocateMdlPagesByLists.c)
 *     MiInitializeNewUltraHugeContext @ 0x14039A254 (MiInitializeNewUltraHugeContext.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039C174 (MiUnlinkNumaStandbyPage.c)
 *     MiDescribePageRun @ 0x1403AB018 (MiDescribePageRun.c)
 *     MiRestrictRangeToNode @ 0x1403AB5C0 (MiRestrictRangeToNode.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B4BB4 (MiAddExpansionNonPagedPool.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B7E54 (MiMapContiguousMemoryLarge.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B9828 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeDynamicPfns @ 0x14052CAA0 (MiInitializeDynamicPfns.c)
 *     MiHugePageOperation @ 0x140531478 (MiHugePageOperation.c)
 *     MiInsertHugeRangeInList @ 0x140531B08 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x14053205C (MiUnlinkHugeRange.c)
 *     MiPrefetchPreallocatePages @ 0x140537B20 (MiPrefetchPreallocatePages.c)
 *     MiReplaceLockedPage @ 0x14053BC6C (MiReplaceLockedPage.c)
 *     MiQueryLeafPte @ 0x140545520 (MiQueryLeafPte.c)
 *     MI_NODE_FROM_PFN @ 0x140546038 (MI_NODE_FROM_PFN.c)
 *     MiFreeListPageContentsChanged @ 0x14054D34C (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x14054D4EC (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x14054D928 (MiSetPfnRemovalRequested.c)
 *     MiGetPagesToZero @ 0x14054E27C (MiGetPagesToZero.c)
 *     MiPruneStandbyPages @ 0x14054F304 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x14054F900 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140554344 (MiIdealClusterPage.c)
 *     MiLargePageMovesInProgress @ 0x140555074 (MiLargePageMovesInProgress.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140A449E0 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A44AE4 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x140A44DCC (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140A45270 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140A53CE8 (MiHotAddBootDeferredDescriptors.c)
 *     MxSwitchDescriptors @ 0x140A961DC (MxSwitchDescriptors.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // r8d
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // edx

  v1 = dword_140C4DD08;
  if ( dword_140C4DD04 > (unsigned int)dword_140C4DD08
    || (result = (char *)qword_140C4DD48 + 16 * dword_140C4DD04, BugCheckParameter2 < *result)
    || dword_140C4DD04 != dword_140C4DD08 && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    if ( dword_140C4DD08 < 0 )
LABEL_17:
      KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v4 = (v3 + v1) >> 1;
      result = (char *)qword_140C4DD48 + 16 * v4;
      if ( BugCheckParameter2 < *result )
      {
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)qword_140C4DD48, 0LL);
        v1 = v4 - 1;
      }
      else
      {
        if ( v4 == dword_140C4DD08 || BugCheckParameter2 < result[2] )
        {
          dword_140C4DD04 = (v3 + v1) >> 1;
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
