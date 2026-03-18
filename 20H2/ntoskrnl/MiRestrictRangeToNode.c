/*
 * XREFs of MiRestrictRangeToNode @ 0x1403AB5C0
 * Callers:
 *     MiDescribePageRun @ 0x1403AB018 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x14052CAA0 (MiInitializeDynamicPfns.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C7C6C (MiAddPhysicalMemoryChunks.c)
 *     MiSwitchToPfns @ 0x140A43FB8 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x140A443AC (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140A449E0 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A44AE4 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x140A44DCC (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140A45270 (MxComputeFreeNodeDescriptorRequirements.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MiSearchChannelTable @ 0x140545E00 (MiSearchChannelTable.c)
 */

ULONG_PTR __fastcall MiRestrictRangeToNode(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rcx

  v4 = MiSearchNumaNodeTable(BugCheckParameter2)[2];
  if ( BugCheckParameter2 + a2 > v4 )
    a2 = v4 - BugCheckParameter2;
  if ( qword_140C4DD50 )
  {
    v6 = *(_QWORD *)(MiSearchChannelTable(BugCheckParameter2) + 16);
    v7 = v6 - BugCheckParameter2;
    if ( BugCheckParameter2 + a2 <= v6 )
      return a2;
    return v7;
  }
  return a2;
}
