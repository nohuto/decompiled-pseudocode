/*
 * XREFs of MiMakeTransitionPte @ 0x1402E4D28
 * Callers:
 *     MmOutSwapProcess @ 0x140211108 (MmOutSwapProcess.c)
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiExclusiveInsertPfnChainInList @ 0x14022DBD4 (MiExclusiveInsertPfnChainInList.c)
 *     MiMakeVaRangeNoAccess @ 0x14024D7F4 (MiMakeVaRangeNoAccess.c)
 *     MiOutPageSingleKernelStack @ 0x1402704A0 (MiOutPageSingleKernelStack.c)
 *     MiTrimSystemImagePages @ 0x1402D92AC (MiTrimSystemImagePages.c)
 *     MiInitializeTransitionPfn @ 0x1402E4724 (MiInitializeTransitionPfn.c)
 *     MiCreateDecayPfn @ 0x1402E48A0 (MiCreateDecayPfn.c)
 *     MiDecayNodeNowEmpty @ 0x1402E4BF0 (MiDecayNodeNowEmpty.c)
 *     MiCompletePrivateZeroFault @ 0x140321F70 (MiCompletePrivateZeroFault.c)
 *     MiSharedInsertPfnChainInList @ 0x140338DB0 (MiSharedInsertPfnChainInList.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x14038EF10 (MiUnlinkProtectedStandbyPfn.c)
 *     MiInitializeNewPfns @ 0x1403B790C (MiInitializeNewPfns.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MmMapHotPatchTablePage @ 0x1405A3E3C (MmMapHotPatchTablePage.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiBuildForkPageTable @ 0x1405B85F8 (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x1405BA864 (MiDuplicateCloneLeaf.c)
 *     MmFreeLoaderBlock @ 0x140B190F0 (MmFreeLoaderBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeTransitionPte(__int64 a1, char a2)
{
  __int64 v2; // rcx

  v2 = 32 * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFFLL) << 7) | 0x40);
  if ( qword_140C50780 )
  {
    if ( (qword_140C50780 & v2) != 0 )
      return v2 | 0x10;
    else
      return qword_140C50780 | v2;
  }
  return v2;
}
