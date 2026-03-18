/*
 * XREFs of MiSearchNumaNodeTable @ 0x1402C1550
 * Callers:
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 *     MiReturnPhysicalPoolPages @ 0x1402287C8 (MiReturnPhysicalPoolPages.c)
 *     MiClearStackOwners @ 0x140231FC0 (MiClearStackOwners.c)
 *     MiFreeSlabPage @ 0x14023B354 (MiFreeSlabPage.c)
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiUpdatePageAttributeStamp @ 0x14024DD20 (MiUpdatePageAttributeStamp.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x14024E5F8 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140265D40 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiDeleteClusterSection @ 0x140276E5C (MiDeleteClusterSection.c)
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MmDeleteKernelStackEx @ 0x1402C1900 (MmDeleteKernelStackEx.c)
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 *     MiUnlinkNodeLargePages @ 0x1402CA5E0 (MiUnlinkNodeLargePages.c)
 *     MiDeleteClusterPage @ 0x1402CC0F0 (MiDeleteClusterPage.c)
 *     MiLargePagePromote @ 0x1402CC9A0 (MiLargePagePromote.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiTradeTransitionPage @ 0x1402E8240 (MiTradeTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1402E851C (MiReplaceNumaStandbyPage.c)
 *     MiLargePageFreeToZero @ 0x1402E86F0 (MiLargePageFreeToZero.c)
 *     MiPurgingPageFromLookaside @ 0x1402E9540 (MiPurgingPageFromLookaside.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiFinalizeImageHeaderPage @ 0x1402EB1A0 (MiFinalizeImageHeaderPage.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiAllocateMdlPagesByLists @ 0x140324C60 (MiAllocateMdlPagesByLists.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiPfnToStandbyLookaside @ 0x140339140 (MiPfnToStandbyLookaside.c)
 *     MiCoalesceFreeLargePages @ 0x140358400 (MiCoalesceFreeLargePages.c)
 *     MiDemoteLargeFreePage @ 0x14038719C (MiDemoteLargeFreePage.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403872A4 (MiTryUnlinkNodeLargePages.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiCheckSlabPage @ 0x1403B1DEC (MiCheckSlabPage.c)
 *     MiDescribePageRun @ 0x1403B7624 (MiDescribePageRun.c)
 *     MiRestrictRangeToNode @ 0x1403B7A10 (MiRestrictRangeToNode.c)
 *     MiAddExpansionNonPagedPool @ 0x1403C3290 (MiAddExpansionNonPagedPool.c)
 *     MiMapContiguousMemoryLarge @ 0x1403C6E24 (MiMapContiguousMemoryLarge.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403C9590 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplaceLockedPage @ 0x1403D0BD4 (MiReplaceLockedPage.c)
 *     MiQueryLeafPte @ 0x14045C260 (MiQueryLeafPte.c)
 *     MiPruneStandbyPages @ 0x14045C812 (MiPruneStandbyPages.c)
 *     MiPageToNode @ 0x14057F520 (MiPageToNode.c)
 *     MiFindHighestDescriptorByNode @ 0x14057F840 (MiFindHighestDescriptorByNode.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 *     MiAddPartitionHugeRange @ 0x14058617C (MiAddPartitionHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140586A44 (MiHotRemoveHugeRange.c)
 *     MiHugePageOperation @ 0x140586E78 (MiHugePageOperation.c)
 *     MiInsertHugeRangeInList @ 0x1405875A0 (MiInsertHugeRangeInList.c)
 *     MiMakeEntireHugePfnGood @ 0x140587900 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x1405879D8 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1405882D0 (MiMarkHugePfnGood.c)
 *     MiSetHugeRangePartitionId @ 0x140588F74 (MiSetHugeRangePartitionId.c)
 *     MiUnlinkHugeRange @ 0x1405891A4 (MiUnlinkHugeRange.c)
 *     MiUpdateHugePageCounts @ 0x14058938C (MiUpdateHugePageCounts.c)
 *     MiPrefetchPreallocatePages @ 0x140594C08 (MiPrefetchPreallocatePages.c)
 *     MiKernelShadowStackIdealForCaching @ 0x1405A5628 (MiKernelShadowStackIdealForCaching.c)
 *     MiCompleteSecureProcessFault @ 0x1405A6E74 (MiCompleteSecureProcessFault.c)
 *     MiFreeListPageContentsChanged @ 0x1405AD7A0 (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x1405AD9AC (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x1405ADDA8 (MiSetPfnRemovalRequested.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1405AEA7C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePageMovesInProgress @ 0x1405AF29C (MiLargePageMovesInProgress.c)
 *     MiGetSlabAllocatorStandbyList @ 0x1405B10D8 (MiGetSlabAllocatorStandbyList.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 *     MiCoalesceActivePagesIntoFree @ 0x1405B4A34 (MiCoalesceActivePagesIntoFree.c)
 *     MiUpdatePartitionChildPageCounts @ 0x1405BFE08 (MiUpdatePartitionChildPageCounts.c)
 *     MiFreeLargePages @ 0x1405C1CE0 (MiFreeLargePages.c)
 *     MiFreeLargeProcessPagesToCache @ 0x1405C20CC (MiFreeLargeProcessPagesToCache.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140AF5C0C (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x140AF5F74 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140AF6408 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiCreateKernelHalSlabRange @ 0x140B04C20 (MiCreateKernelHalSlabRange.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140B0A424 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140B2920C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiHotAddBootDescriptor @ 0x140B51B94 (MiHotAddBootDescriptor.c)
 *     MxSwitchDescriptors @ 0x140B51D98 (MxSwitchDescriptors.c)
 *     MmUpdateSlabRangeType @ 0x140B52548 (MmUpdateSlabRangeType.c)
 *     MxInsertEnclaveBootPages @ 0x140B5273C (MxInsertEnclaveBootPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // r8d
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // edx

  v1 = dword_140C506C8;
  if ( dword_140C506C4 > (unsigned int)dword_140C506C8
    || (result = (char *)qword_140C50708 + 16 * dword_140C506C4, BugCheckParameter2 < *result)
    || dword_140C506C4 != dword_140C506C8 && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    if ( dword_140C506C8 < 0 )
LABEL_17:
      KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v4 = (v3 + v1) >> 1;
      result = (char *)qword_140C50708 + 16 * v4;
      if ( BugCheckParameter2 < *result )
      {
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)qword_140C50708, 0LL);
        v1 = v4 - 1;
      }
      else
      {
        if ( v4 == dword_140C506C8 || BugCheckParameter2 < result[2] )
        {
          dword_140C506C4 = (v3 + v1) >> 1;
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
