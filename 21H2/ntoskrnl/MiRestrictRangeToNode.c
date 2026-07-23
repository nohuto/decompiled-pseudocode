/*
 * XREFs of MiRestrictRangeToNode @ 0x1403B1630
 * Callers:
 *     MiDescribePageRun @ 0x1403B1088 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x14052E7E0 (MiInitializeDynamicPfns.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C558C (MiAddPhysicalMemoryChunks.c)
 *     MiSwitchToPfns @ 0x140A44AD8 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x140A44ECC (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140A45500 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A45604 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x140A458EC (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140A45D90 (MxComputeFreeNodeDescriptorRequirements.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiSearchChannelTable @ 0x140547B40 (MiSearchChannelTable.c)
 */

ULONG_PTR __fastcall MiRestrictRangeToNode(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rcx

  v4 = MiSearchNumaNodeTable(BugCheckParameter2)[2];
  if ( BugCheckParameter2 + a2 > v4 )
    a2 = v4 - BugCheckParameter2;
  if ( qword_140C4DF10 )
  {
    v6 = *(_QWORD *)(MiSearchChannelTable(BugCheckParameter2) + 16);
    v7 = v6 - BugCheckParameter2;
    if ( BugCheckParameter2 + a2 <= v6 )
      return a2;
    return v7;
  }
  return a2;
}
