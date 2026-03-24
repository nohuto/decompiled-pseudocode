/*
 * XREFs of MiMakeValidPte @ 0x14032E730
 * Callers:
 *     MiFillSystemPtes @ 0x140226EF0 (MiFillSystemPtes.c)
 *     MiGetUltraMapping @ 0x140234700 (MiGetUltraMapping.c)
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiAssignNonPagedPoolPte @ 0x14023B9F0 (MiAssignNonPagedPoolPte.c)
 *     MiAllocateKernelStackPages @ 0x14023E800 (MiAllocateKernelStackPages.c)
 *     MiGetPteFromCopyList @ 0x140240980 (MiGetPteFromCopyList.c)
 *     MiCreateSharedZeroPages @ 0x140241770 (MiCreateSharedZeroPages.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MiInsertPhysicalPteMapping @ 0x140298318 (MiInsertPhysicalPteMapping.c)
 *     MiUnlinkStandbyPfn @ 0x1402B07E0 (MiUnlinkStandbyPfn.c)
 *     MiMakeTransitionPteValid @ 0x1402B1F90 (MiMakeTransitionPteValid.c)
 *     MiCopySinglePage @ 0x1402B4BC4 (MiCopySinglePage.c)
 *     MiZeroLargePage @ 0x1402B71F8 (MiZeroLargePage.c)
 *     MiMapPageFileHash @ 0x1402CDE38 (MiMapPageFileHash.c)
 *     MiInitializeSystemPageTable @ 0x1402E5484 (MiInitializeSystemPageTable.c)
 *     MiZeroPhysicalPage @ 0x1402E6380 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x1402E6470 (MiFillPhysicalPages.c)
 *     MiSetSystemCodeProtection @ 0x1402E6818 (MiSetSystemCodeProtection.c)
 *     MiReadyStandbyPageForActive @ 0x140302DE0 (MiReadyStandbyPageForActive.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     MiLinkPoolCommitChain @ 0x14030B540 (MiLinkPoolCommitChain.c)
 *     MiCopyToUserVa @ 0x14030E538 (MiCopyToUserVa.c)
 *     MiCompleteRestrictedImageFault @ 0x14031D0A0 (MiCompleteRestrictedImageFault.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiWsleFree @ 0x140327ED0 (MiWsleFree.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14032C3E0 (MiDecrementAndInsertStandbyPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiMakeSystemCachePteValid @ 0x14035E91C (MiMakeSystemCachePteValid.c)
 *     MmProtectPool @ 0x140362D68 (MmProtectPool.c)
 *     MiSetProtectionOnTransitionPte @ 0x140364614 (MiSetProtectionOnTransitionPte.c)
 *     MiMapArbitraryPage @ 0x140369610 (MiMapArbitraryPage.c)
 *     MiResolveProtoCombine @ 0x14036AB34 (MiResolveProtoCombine.c)
 *     MiMapSinglePage @ 0x14036B104 (MiMapSinglePage.c)
 *     MmSetPageProtection @ 0x140379C80 (MmSetPageProtection.c)
 *     MiMapMemoryDumpMdl @ 0x140383A04 (MiMapMemoryDumpMdl.c)
 *     MiBuildReservationCluster @ 0x140386DF0 (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140397874 (MiUpdateImagePfnImportRelocations.c)
 *     MiInitializeNewUltraHugeContext @ 0x14039A6C4 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0728 (MiTimeSingleLargePageZeroWorker.c)
 *     MiInitializeUnusablePfns @ 0x1403B0FE0 (MiInitializeUnusablePfns.c)
 *     MiMapWithLargePages @ 0x1403B8AEC (MiMapWithLargePages.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B9F4C (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403BA228 (MiDemoteValidLargePageOneLevel.c)
 *     MiFillGapPtes @ 0x1403BCE4C (MiFillGapPtes.c)
 *     MiMapMdlCommon @ 0x1403C8C44 (MiMapMdlCommon.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F41AC (MiUpdateLargePageSectionPfns.c)
 *     MiZeroWithSystemPtes @ 0x1403F5238 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F5518 (MiZeroWithUltraSpace.c)
 *     MiMakeOutswappedPageResident @ 0x14052BAC0 (MiMakeOutswappedPageResident.c)
 *     MiUnmapMdlCommon @ 0x140531724 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1405321B0 (MmProtectMdlSystemAddress.c)
 *     MiHugePageOperation @ 0x140532F78 (MiHugePageOperation.c)
 *     MiMapFrame @ 0x140536F84 (MiMapFrame.c)
 *     MiInitializeSlowPte @ 0x140539AAC (MiInitializeSlowPte.c)
 *     MiMakeLargePageTable @ 0x14053DA14 (MiMakeLargePageTable.c)
 *     MmMapHotPatchTablePage @ 0x14053F4B0 (MmMapHotPatchTablePage.c)
 *     MiEnableLargeSubsection @ 0x1405409AC (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x140540B54 (MiFillPageWithImageExtentContents.c)
 *     MiMapRetpolineStubs @ 0x14054403C (MiMapRetpolineStubs.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405461F0 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x140547E00 (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x1405487A0 (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x140549104 (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549A28 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AB30 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x14054D364 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E298 (MiWriteAwePtes.c)
 *     MiInitializeProtoPfn @ 0x140554F90 (MiInitializeProtoPfn.c)
 *     MiScrubNodeLargePageList @ 0x140556E38 (MiScrubNodeLargePageList.c)
 *     MiBuildForkPageTable @ 0x140557FCC (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x14055A6A0 (MiFinishLastForkPageTable.c)
 *     MiInsertLargeUserMapping @ 0x14055E578 (MiInsertLargeUserMapping.c)
 *     MiScrubPage @ 0x1405642F4 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x1405FC260 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x14069BD04 (MiValidateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1406D04E4 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x1406D0824 (MiAllocateTopLevelPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140762A0C (MmAllocateIndependentPagesEx.c)
 *     MiInitializeDynamicBitmap @ 0x1407868DC (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14078708C (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x1407A0368 (MiInitializeShadowPageTable.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1470 (MiProtectLargeKernelHalRange.c)
 *     MmAllocateNonCachedMemory @ 0x1408C66F0 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D2188 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408D28D0 (MiCreateHardwareEnclave.c)
 *     MmChangeKernelCfgBitmap @ 0x1408D7958 (MmChangeKernelCfgBitmap.c)
 *     MiCaptureSparsePages @ 0x1408D8564 (MiCaptureSparsePages.c)
 *     MxMapVa @ 0x140A44B6C (MxMapVa.c)
 *     MiMapBBTMemory @ 0x140A552A8 (MiMapBBTMemory.c)
 *     MiInitializeTbFlush @ 0x140A55380 (MiInitializeTbFlush.c)
 *     MiInitializeDummyPages @ 0x140A55944 (MiInitializeDummyPages.c)
 *     MxCopyPage @ 0x140A568CC (MxCopyPage.c)
 *     MxSwapPages @ 0x140A57120 (MxSwapPages.c)
 *     MiInitializeSharedUserData @ 0x140A579E0 (MiInitializeSharedUserData.c)
 *     MiInitializeGapFrames @ 0x140A66B10 (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x140A70FCC (MiMapDummyPages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A92754 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x1402ABED4 (MiUserPdeOrAbove.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 */

unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 LeafVa; // rbp
  unsigned __int64 v13; // rcx
  int v14; // eax

  v4 = a3 & 0x1F;
  v6 = (a2 & 0xFFFFFFFFFLL) << 12;
  v7 = v6 | MmProtectToPteMask[v4] & 0xFFFF000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_2;
  LeafVa = (__int64)(a1 << 25) >> 16;
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v7 = v6 | MmProtectToPteMask[v4] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (a3 & 0x4000000) == 0 )
    {
      v7 = v6 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v4] & 0x7FFF000000000E7FLL | 0x21;
    }
    if ( (unsigned int)MiUserPdeOrAbove(a1) )
      v7 |= 4uLL;
  }
  v13 = v7;
  v7 |= 4uLL;
  if ( a1 > 0xFFFFF6BFFFFFFF78uLL )
    v7 = v13;
  if ( (a3 & 0x4000000) != 0 )
    LeafVa = MiGetLeafVa((__int64)(a1 << 25) >> 16);
  if ( LeafVa < 0xFFFF800000000000uLL )
  {
    v14 = HIBYTE(word_140C4E008);
    goto LABEL_25;
  }
  if ( byte_140C4F9C8[((LeafVa >> 39) & 0x1FF) - 256] != 1
    && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( LeafVa < qword_140C4FB38 || LeafVa > qword_140C4E368 )
      v14 = (unsigned __int8)word_140C4E008;
    else
      v14 = HIBYTE(word_140C4E008);
LABEL_25:
    if ( !v14 )
      goto LABEL_3;
LABEL_2:
    v7 |= 0x100uLL;
  }
LABEL_3:
  v8 = v7 | 0x42;
  if ( a3 >= 0 || (v4 & 5) != 4 )
    v8 = v7;
  if ( (a3 & 0x40000000) != 0 )
    v8 &= ~4uLL;
  if ( (a3 & 0x20000000) != 0 )
    v8 = ((unsigned __int16)v8 ^ (unsigned __int16)((unsigned __int8)word_140C4E008 << 8)) & 0x100 ^ (unsigned __int64)v8;
  v9 = v8 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v9 = v8;
  v10 = v9 | 0x80;
  if ( (a3 & 0x4000000) == 0 )
    v10 = v9;
  return v10 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
