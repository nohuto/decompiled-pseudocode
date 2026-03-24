/*
 * XREFs of MiSearchNumaNodeTable @ 0x14032B790
 * Callers:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiMigratePfn @ 0x1402185F0 (MiMigratePfn.c)
 *     MiZeroLargePages @ 0x140232520 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x140233310 (MiZeroPage.c)
 *     MiReplaceNumaStandbyPage @ 0x14026B4EC (MiReplaceNumaStandbyPage.c)
 *     MiTradeTransitionPage @ 0x14026B6E8 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MiDemoteLargeFreePage @ 0x1402917AC (MiDemoteLargeFreePage.c)
 *     MiTryUnlinkNodeLargePage @ 0x14029195C (MiTryUnlinkNodeLargePage.c)
 *     MiReturnPhysicalPoolPages @ 0x140296934 (MiReturnPhysicalPoolPages.c)
 *     MiRebuildLargeZeroPage @ 0x1402A1FB0 (MiRebuildLargeZeroPage.c)
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     MiUpdatePageAttributeStamp @ 0x1402C81D0 (MiUpdatePageAttributeStamp.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x1402CB090 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiPageToNode @ 0x1402D03D4 (MiPageToNode.c)
 *     MiInitializeMdlBatchPages @ 0x1402E38E4 (MiInitializeMdlBatchPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402E3D24 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiInsertLargePageInNodeList @ 0x1402FEA50 (MiInsertLargePageInNodeList.c)
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 *     MiFindContiguousPages @ 0x1403016E0 (MiFindContiguousPages.c)
 *     MiLargePageFreeToZero @ 0x140303D40 (MiLargePageFreeToZero.c)
 *     MiWaitForInPageComplete @ 0x14031B1F0 (MiWaitForInPageComplete.c)
 *     MiInsertNumaStandbyPage @ 0x140329890 (MiInsertNumaStandbyPage.c)
 *     MmDeleteKernelStack @ 0x14032AB70 (MmDeleteKernelStack.c)
 *     MiDeleteClusterPage @ 0x14032B830 (MiDeleteClusterPage.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiAllocateMdlPagesByLists @ 0x140374714 (MiAllocateMdlPagesByLists.c)
 *     MiInitializeNewUltraHugeContext @ 0x14039A6C4 (MiInitializeNewUltraHugeContext.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039CA44 (MiUnlinkNumaStandbyPage.c)
 *     MiDescribePageRun @ 0x1403B0F18 (MiDescribePageRun.c)
 *     MiRestrictRangeToNode @ 0x1403B14C0 (MiRestrictRangeToNode.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B6234 (MiAddExpansionNonPagedPool.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B8854 (MiMapContiguousMemoryLarge.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403BA228 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeDynamicPfns @ 0x14052E5A0 (MiInitializeDynamicPfns.c)
 *     MiHugePageOperation @ 0x140532F78 (MiHugePageOperation.c)
 *     MiInsertHugeRangeInList @ 0x140533608 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x140533B5C (MiUnlinkHugeRange.c)
 *     MiPrefetchPreallocatePages @ 0x140539620 (MiPrefetchPreallocatePages.c)
 *     MiReplaceLockedPage @ 0x14053D76C (MiReplaceLockedPage.c)
 *     MiQueryLeafPte @ 0x140547020 (MiQueryLeafPte.c)
 *     MI_NODE_FROM_PFN @ 0x140547B38 (MI_NODE_FROM_PFN.c)
 *     MiFreeListPageContentsChanged @ 0x14054EE4C (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x14054EFEC (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x14054F428 (MiSetPfnRemovalRequested.c)
 *     MiGetPagesToZero @ 0x14054FD4C (MiGetPagesToZero.c)
 *     MiPruneStandbyPages @ 0x140550DD4 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x1405513D0 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140555E14 (MiIdealClusterPage.c)
 *     MiLargePageMovesInProgress @ 0x140556B44 (MiLargePageMovesInProgress.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140A44500 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A44604 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x140A448EC (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140A44D90 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140A552F0 (MiHotAddBootDeferredDescriptors.c)
 *     MxSwitchDescriptors @ 0x140A9304C (MxSwitchDescriptors.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // r8d
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // edx

  v1 = dword_140C4DE88;
  if ( dword_140C4DE84 > (unsigned int)dword_140C4DE88
    || (result = (char *)qword_140C4DEC8 + 16 * dword_140C4DE84, BugCheckParameter2 < *result)
    || dword_140C4DE84 != dword_140C4DE88 && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    if ( dword_140C4DE88 < 0 )
LABEL_17:
      KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v4 = (v3 + v1) >> 1;
      result = (char *)qword_140C4DEC8 + 16 * v4;
      if ( BugCheckParameter2 < *result )
      {
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)qword_140C4DEC8, 0LL);
        v1 = v4 - 1;
      }
      else
      {
        if ( v4 == dword_140C4DE88 || BugCheckParameter2 < result[2] )
        {
          dword_140C4DE84 = (v3 + v1) >> 1;
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
