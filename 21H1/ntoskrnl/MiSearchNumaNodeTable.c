/*
 * XREFs of MiSearchNumaNodeTable @ 0x1402931D0
 * Callers:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 *     MiFindContiguousPages @ 0x14027EAE0 (MiFindContiguousPages.c)
 *     MiDeleteClusterPage @ 0x14028DDB0 (MiDeleteClusterPage.c)
 *     MmDeleteKernelStack @ 0x1402925B0 (MmDeleteKernelStack.c)
 *     MiZeroLargePages @ 0x1402946C0 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402954B0 (MiZeroPage.c)
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 *     MiInsertNumaStandbyPage @ 0x1402DA110 (MiInsertNumaStandbyPage.c)
 *     MiReturnPhysicalPoolPages @ 0x1402F2454 (MiReturnPhysicalPoolPages.c)
 *     MiRebuildLargeZeroPage @ 0x1402F4D70 (MiRebuildLargeZeroPage.c)
 *     MiDemoteLargeFreePage @ 0x140316150 (MiDemoteLargeFreePage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140316270 (MiTryUnlinkNodeLargePage.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     MiUpdatePageAttributeStamp @ 0x140318BB8 (MiUpdatePageAttributeStamp.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x14031B820 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiPageToNode @ 0x140320084 (MiPageToNode.c)
 *     MiInitializeMdlBatchPages @ 0x140342FCC (MiInitializeMdlBatchPages.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140345564 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 *     MiReplaceNumaStandbyPage @ 0x1403477E0 (MiReplaceNumaStandbyPage.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiLargePageFreeToZero @ 0x1403493F0 (MiLargePageFreeToZero.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x14034C418 (MiTradeTransitionPage.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiAllocateMdlPagesByLists @ 0x140371824 (MiAllocateMdlPagesByLists.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403971C4 (MiInitializeNewUltraHugeContext.c)
 *     MiUnlinkNumaStandbyPage @ 0x140399524 (MiUnlinkNumaStandbyPage.c)
 *     MiAddExpansionNonPagedPool @ 0x1403AC5C4 (MiAddExpansionNonPagedPool.c)
 *     MiDescribePageRun @ 0x1403AEA48 (MiDescribePageRun.c)
 *     MiRestrictRangeToNode @ 0x1403AEFF0 (MiRestrictRangeToNode.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B4634 (MiMapContiguousMemoryLarge.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B5F58 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeDynamicPfns @ 0x140528A80 (MiInitializeDynamicPfns.c)
 *     MiHugePageOperation @ 0x14052D458 (MiHugePageOperation.c)
 *     MiInsertHugeRangeInList @ 0x14052DAE8 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x14052E03C (MiUnlinkHugeRange.c)
 *     MiPrefetchPreallocatePages @ 0x140533B00 (MiPrefetchPreallocatePages.c)
 *     MiReplaceLockedPage @ 0x140537C4C (MiReplaceLockedPage.c)
 *     MiQueryLeafPte @ 0x140541500 (MiQueryLeafPte.c)
 *     MI_NODE_FROM_PFN @ 0x140542018 (MI_NODE_FROM_PFN.c)
 *     MiFreeListPageContentsChanged @ 0x14054932C (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x1405494CC (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x140549908 (MiSetPfnRemovalRequested.c)
 *     MiGetPagesToZero @ 0x14054A25C (MiGetPagesToZero.c)
 *     MiPruneStandbyPages @ 0x14054B2E4 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x14054B8E0 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 *     MiLargePageMovesInProgress @ 0x140551054 (MiLargePageMovesInProgress.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140A45508 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A4560C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x140A458F4 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140A45D98 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140A4D968 (MiHotAddBootDeferredDescriptors.c)
 *     MxSwitchDescriptors @ 0x140A90EEC (MxSwitchDescriptors.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // r8d
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // edx

  v1 = dword_140C4DDC8;
  if ( dword_140C4DDC4 > (unsigned int)dword_140C4DDC8
    || (result = (char *)qword_140C4DE08 + 16 * dword_140C4DDC4, BugCheckParameter2 < *result)
    || dword_140C4DDC4 != dword_140C4DDC8 && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    if ( dword_140C4DDC8 < 0 )
LABEL_17:
      KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v4 = (v3 + v1) >> 1;
      result = (char *)qword_140C4DE08 + 16 * v4;
      if ( BugCheckParameter2 < *result )
      {
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)qword_140C4DE08, 0LL);
        v1 = v4 - 1;
      }
      else
      {
        if ( v4 == dword_140C4DDC8 || BugCheckParameter2 < result[2] )
        {
          dword_140C4DDC4 = (v3 + v1) >> 1;
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
