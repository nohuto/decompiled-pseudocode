/*
 * XREFs of MiRestrictRangeToNode @ 0x1403B7A10
 * Callers:
 *     MiDescribePageRun @ 0x1403B7624 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 *     MiAddPartitionHugeRange @ 0x14058617C (MiAddPartitionHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140586A44 (MiHotRemoveHugeRange.c)
 *     MiSetHugeRangePartitionId @ 0x140588F74 (MiSetHugeRangePartitionId.c)
 *     MiUpdatePartitionChildPageCounts @ 0x1405BFE08 (MiUpdatePartitionChildPageCounts.c)
 *     MiAddPhysicalMemoryChunks @ 0x140968AF4 (MiAddPhysicalMemoryChunks.c)
 *     MxCreateFreePfns @ 0x140AF5478 (MxCreateFreePfns.c)
 *     MiCreateDescriptorPfns @ 0x140AF5940 (MiCreateDescriptorPfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140AF5C0C (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x140AF5F74 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140AF6408 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140B2920C (MiRemoveLargeFreeLoaderDescriptors.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiSearchChannelTable @ 0x1405A6950 (MiSearchChannelTable.c)
 */

ULONG_PTR __fastcall MiRestrictRangeToNode(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rcx

  v4 = MiSearchNumaNodeTable(BugCheckParameter2)[2];
  if ( BugCheckParameter2 + a2 > v4 )
    a2 = v4 - BugCheckParameter2;
  if ( qword_140C50710 )
  {
    v6 = *(_QWORD *)(MiSearchChannelTable(BugCheckParameter2) + 16);
    v7 = v6 - BugCheckParameter2;
    if ( BugCheckParameter2 + a2 <= v6 )
      return a2;
    return v7;
  }
  return a2;
}
