/*
 * XREFs of MiRestrictRangeToNode @ 0x1403A8BD0
 * Callers:
 *     MiDescribePageRun @ 0x1403A8628 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x1405290D0 (MiInitializeDynamicPfns.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C1E2C (MiAddPhysicalMemoryChunks.c)
 *     MiSwitchToPfns @ 0x140A3DD18 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x140A3E10C (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140A3E740 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A3E844 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x140A3EB2C (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140A3EFD0 (MxComputeFreeNodeDescriptorRequirements.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiSearchChannelTable @ 0x140542430 (MiSearchChannelTable.c)
 */

ULONG_PTR __fastcall MiRestrictRangeToNode(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rcx

  v4 = MiSearchNumaNodeTable(BugCheckParameter2)[2];
  if ( BugCheckParameter2 + a2 > v4 )
    a2 = v4 - BugCheckParameter2;
  if ( qword_140C4DCD0 )
  {
    v6 = *(_QWORD *)(MiSearchChannelTable(BugCheckParameter2) + 16);
    v7 = v6 - BugCheckParameter2;
    if ( BugCheckParameter2 + a2 <= v6 )
      return a2;
    return v7;
  }
  return a2;
}
