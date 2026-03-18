/*
 * XREFs of MiSearchNumaNodeTable @ 0x14023A180
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 *     MiFindContiguousPages @ 0x140225A90 (MiFindContiguousPages.c)
 *     MiDeleteClusterPage @ 0x140234D60 (MiDeleteClusterPage.c)
 *     MmDeleteKernelStack @ 0x140239560 (MmDeleteKernelStack.c)
 *     MiZeroLargePages @ 0x14023B690 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x14023C480 (MiZeroPage.c)
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     MiInsertNumaStandbyPage @ 0x1402793E0 (MiInsertNumaStandbyPage.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 *     MiInitializeMdlBatchPages @ 0x140313C8C (MiInitializeMdlBatchPages.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140316224 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 *     MiReplaceNumaStandbyPage @ 0x1403184A0 (MiReplaceNumaStandbyPage.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiLargePageFreeToZero @ 0x14031A0B0 (MiLargePageFreeToZero.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x14031D0D8 (MiTradeTransitionPage.c)
 *     MiReturnPhysicalPoolPages @ 0x14032E1F4 (MiReturnPhysicalPoolPages.c)
 *     MiRebuildLargeZeroPage @ 0x140331AA0 (MiRebuildLargeZeroPage.c)
 *     MiDemoteLargeFreePage @ 0x140353CC8 (MiDemoteLargeFreePage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140353DE8 (MiTryUnlinkNodeLargePage.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiUpdatePageAttributeStamp @ 0x1403567A8 (MiUpdatePageAttributeStamp.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x1403593F0 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiPageToNode @ 0x14035DBD4 (MiPageToNode.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiAllocateMdlPagesByLists @ 0x140372634 (MiAllocateMdlPagesByLists.c)
 *     MiInitializeNewUltraHugeContext @ 0x140397DD4 (MiInitializeNewUltraHugeContext.c)
 *     MiUnlinkNumaStandbyPage @ 0x140399CB4 (MiUnlinkNumaStandbyPage.c)
 *     MiDescribePageRun @ 0x1403A8628 (MiDescribePageRun.c)
 *     MiRestrictRangeToNode @ 0x1403A8BD0 (MiRestrictRangeToNode.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B2244 (MiAddExpansionNonPagedPool.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B4F34 (MiMapContiguousMemoryLarge.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B6D88 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeDynamicPfns @ 0x1405290D0 (MiInitializeDynamicPfns.c)
 *     MiHugePageOperation @ 0x14052DAA8 (MiHugePageOperation.c)
 *     MiInsertHugeRangeInList @ 0x14052E138 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x14052E68C (MiUnlinkHugeRange.c)
 *     MiPrefetchPreallocatePages @ 0x140534150 (MiPrefetchPreallocatePages.c)
 *     MiReplaceLockedPage @ 0x14053829C (MiReplaceLockedPage.c)
 *     MiQueryLeafPte @ 0x140541B50 (MiQueryLeafPte.c)
 *     MI_NODE_FROM_PFN @ 0x140542668 (MI_NODE_FROM_PFN.c)
 *     MiFreeListPageContentsChanged @ 0x14054997C (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x140549B1C (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x140549F58 (MiSetPfnRemovalRequested.c)
 *     MiGetPagesToZero @ 0x14054A8AC (MiGetPagesToZero.c)
 *     MiPruneStandbyPages @ 0x14054B934 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x14054BF30 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 *     MiLargePageMovesInProgress @ 0x1405516A4 (MiLargePageMovesInProgress.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140A3E740 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A3E844 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x140A3EB2C (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140A3EFD0 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140A53668 (MiHotAddBootDeferredDescriptors.c)
 *     MxSwitchDescriptors @ 0x140A904DC (MxSwitchDescriptors.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // r8d
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // edx

  v1 = dword_140C4DC88;
  if ( dword_140C4DC84 > (unsigned int)dword_140C4DC88
    || (result = (char *)qword_140C4DCC8 + 16 * dword_140C4DC84, BugCheckParameter2 < *result)
    || dword_140C4DC84 != dword_140C4DC88 && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    if ( dword_140C4DC88 < 0 )
LABEL_17:
      KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v4 = (v3 + v1) >> 1;
      result = (char *)qword_140C4DCC8 + 16 * v4;
      if ( BugCheckParameter2 < *result )
      {
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)qword_140C4DCC8, 0LL);
        v1 = v4 - 1;
      }
      else
      {
        if ( v4 == dword_140C4DC88 || BugCheckParameter2 < result[2] )
        {
          dword_140C4DC84 = (v3 + v1) >> 1;
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
