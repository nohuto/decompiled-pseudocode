/*
 * XREFs of MiRestrictRangeToNode @ 0x1403B14C0
 * Callers:
 *     MiDescribePageRun @ 0x1403B0F18 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x14052E5A0 (MiInitializeDynamicPfns.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C542C (MiAddPhysicalMemoryChunks.c)
 *     MiSwitchToPfns @ 0x140A43AD8 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x140A43ECC (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140A44500 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A44604 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x140A448EC (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140A44D90 (MxComputeFreeNodeDescriptorRequirements.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MiSearchChannelTable @ 0x140547900 (MiSearchChannelTable.c)
 */

ULONG_PTR __fastcall MiRestrictRangeToNode(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rcx

  v4 = MiSearchNumaNodeTable(BugCheckParameter2)[2];
  if ( BugCheckParameter2 + a2 > v4 )
    a2 = v4 - BugCheckParameter2;
  if ( qword_140C4DED0 )
  {
    v6 = *(_QWORD *)(MiSearchChannelTable(BugCheckParameter2) + 16);
    v7 = v6 - BugCheckParameter2;
    if ( BugCheckParameter2 + a2 <= v6 )
      return a2;
    return v7;
  }
  return a2;
}
