/*
 * XREFs of MiRestrictRangeToNode @ 0x1403AEFF0
 * Callers:
 *     MiDescribePageRun @ 0x1403AEA48 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x140528A80 (MiInitializeDynamicPfns.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C0ADC (MiAddPhysicalMemoryChunks.c)
 *     MiSwitchToPfns @ 0x140A44AE0 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x140A44ED4 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140A45508 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A4560C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x140A458F4 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140A45D98 (MxComputeFreeNodeDescriptorRequirements.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiSearchChannelTable @ 0x140541DE0 (MiSearchChannelTable.c)
 */

ULONG_PTR __fastcall MiRestrictRangeToNode(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rcx

  v4 = MiSearchNumaNodeTable(BugCheckParameter2)[2];
  if ( BugCheckParameter2 + a2 > v4 )
    a2 = v4 - BugCheckParameter2;
  if ( qword_140C4DE10 )
  {
    v6 = *(_QWORD *)(MiSearchChannelTable(BugCheckParameter2) + 16);
    v7 = v6 - BugCheckParameter2;
    if ( BugCheckParameter2 + a2 <= v6 )
      return a2;
    return v7;
  }
  return a2;
}
