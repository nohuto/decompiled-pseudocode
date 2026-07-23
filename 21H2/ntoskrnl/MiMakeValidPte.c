/*
 * XREFs of MiMakeValidPte @ 0x140339480
 * Callers:
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiInsertPhysicalPteMapping @ 0x140218D98 (MiInsertPhysicalPteMapping.c)
 *     MiSetProtectionOnTransitionPte @ 0x140224A84 (MiSetProtectionOnTransitionPte.c)
 *     MiUnlinkStandbyPfn @ 0x14022EB40 (MiUnlinkStandbyPfn.c)
 *     MiMakeTransitionPteValid @ 0x140230140 (MiMakeTransitionPteValid.c)
 *     MiCopySinglePage @ 0x140232D74 (MiCopySinglePage.c)
 *     MiZeroLargePage @ 0x1402353D8 (MiZeroLargePage.c)
 *     MiMapPageFileHash @ 0x14024C338 (MiMapPageFileHash.c)
 *     MiInitializeSystemPageTable @ 0x1402967D4 (MiInitializeSystemPageTable.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x1402977C0 (MiFillPhysicalPages.c)
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 *     MiMakeSystemCachePteValid @ 0x1402A384C (MiMakeSystemCachePteValid.c)
 *     MiFillSystemPtes @ 0x1402CB7F0 (MiFillSystemPtes.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiAssignNonPagedPoolPte @ 0x1402E0240 (MiAssignNonPagedPoolPte.c)
 *     MiAllocateKernelStackPages @ 0x1402E3050 (MiAllocateKernelStackPages.c)
 *     MiGetPteFromCopyList @ 0x1402E51D0 (MiGetPteFromCopyList.c)
 *     MiCreateSharedZeroPages @ 0x1402E5FC0 (MiCreateSharedZeroPages.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiReadyStandbyPageForActive @ 0x14030DB30 (MiReadyStandbyPageForActive.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiLinkPoolCommitChain @ 0x140316290 (MiLinkPoolCommitChain.c)
 *     MiCopyToUserVa @ 0x140319288 (MiCopyToUserVa.c)
 *     MiCompleteRestrictedImageFault @ 0x140327DF0 (MiCompleteRestrictedImageFault.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiWsleFree @ 0x140332C20 (MiWsleFree.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140337130 (MiDecrementAndInsertStandbyPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiMapArbitraryPage @ 0x1403697C0 (MiMapArbitraryPage.c)
 *     MiResolveProtoCombine @ 0x14036ACE4 (MiResolveProtoCombine.c)
 *     MiMapSinglePage @ 0x14036B2B4 (MiMapSinglePage.c)
 *     MmSetPageProtection @ 0x1403797D0 (MmSetPageProtection.c)
 *     MiMapMemoryDumpMdl @ 0x140383BB4 (MiMapMemoryDumpMdl.c)
 *     MiBuildReservationCluster @ 0x140386F40 (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403979C4 (MiUpdateImagePfnImportRelocations.c)
 *     MiInitializeNewUltraHugeContext @ 0x14039A814 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0898 (MiTimeSingleLargePageZeroWorker.c)
 *     MiInitializeUnusablePfns @ 0x1403B1150 (MiInitializeUnusablePfns.c)
 *     MiMapWithLargePages @ 0x1403B8C5C (MiMapWithLargePages.c)
 *     MiReplacePfnWithGapMapping @ 0x1403BA0BC (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403BA398 (MiDemoteValidLargePageOneLevel.c)
 *     MiFillGapPtes @ 0x1403BCFBC (MiFillGapPtes.c)
 *     MiMapMdlCommon @ 0x1403C8DE4 (MiMapMdlCommon.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F41AC (MiUpdateLargePageSectionPfns.c)
 *     MiZeroWithSystemPtes @ 0x1403F5238 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F5518 (MiZeroWithUltraSpace.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MiUnmapMdlCommon @ 0x140531964 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1405323F0 (MmProtectMdlSystemAddress.c)
 *     MiHugePageOperation @ 0x1405331B8 (MiHugePageOperation.c)
 *     MiMapFrame @ 0x1405371C4 (MiMapFrame.c)
 *     MiInitializeSlowPte @ 0x140539CEC (MiInitializeSlowPte.c)
 *     MiMakeLargePageTable @ 0x14053DC54 (MiMakeLargePageTable.c)
 *     MmMapHotPatchTablePage @ 0x14053F6F0 (MmMapHotPatchTablePage.c)
 *     MiEnableLargeSubsection @ 0x140540BEC (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x140540D94 (MiFillPageWithImageExtentContents.c)
 *     MiMapRetpolineStubs @ 0x14054427C (MiMapRetpolineStubs.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140546430 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x140548040 (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x1405489E0 (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x140549344 (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AD70 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 *     MiInitializeProtoPfn @ 0x1405551D0 (MiInitializeProtoPfn.c)
 *     MiScrubNodeLargePageList @ 0x140557078 (MiScrubNodeLargePageList.c)
 *     MiBuildForkPageTable @ 0x14055820C (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x14055A8E0 (MiFinishLastForkPageTable.c)
 *     MiInsertLargeUserMapping @ 0x14055E7B8 (MiInsertLargeUserMapping.c)
 *     MiScrubPage @ 0x140564534 (MiScrubPage.c)
 *     MiValidateImagePfn @ 0x1405FAEC4 (MiValidateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1406A77C4 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x1406A7B04 (MiAllocateTopLevelPage.c)
 *     MiRelocateImagePfn @ 0x1406EB9C0 (MiRelocateImagePfn.c)
 *     MmAllocateIndependentPagesEx @ 0x140762BCC (MmAllocateIndependentPagesEx.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14078724C (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x1407A0568 (MiInitializeShadowPageTable.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1670 (MiProtectLargeKernelHalRange.c)
 *     MmAllocateNonCachedMemory @ 0x1408C6850 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D22E8 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408D2A30 (MiCreateHardwareEnclave.c)
 *     MmChangeKernelCfgBitmap @ 0x1408D7AB8 (MmChangeKernelCfgBitmap.c)
 *     MiCaptureSparsePages @ 0x1408D86C4 (MiCaptureSparsePages.c)
 *     MxMapVa @ 0x140A45B6C (MxMapVa.c)
 *     MiMapBBTMemory @ 0x140A562A8 (MiMapBBTMemory.c)
 *     MiInitializeTbFlush @ 0x140A56380 (MiInitializeTbFlush.c)
 *     MiInitializeDummyPages @ 0x140A56944 (MiInitializeDummyPages.c)
 *     MxCopyPage @ 0x140A578CC (MxCopyPage.c)
 *     MxSwapPages @ 0x140A58120 (MxSwapPages.c)
 *     MiInitializeSharedUserData @ 0x140A589E0 (MiInitializeSharedUserData.c)
 *     MiInitializeGapFrames @ 0x140A67B10 (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x140A71FCC (MiMapDummyPages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A93754 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14022A014 (MiUserPdeOrAbove.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
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
    v14 = HIBYTE(word_140C4E048);
    goto LABEL_25;
  }
  if ( byte_140C4FA08[((LeafVa >> 39) & 0x1FF) - 256] != 1
    && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( LeafVa < qword_140C4FB78 || LeafVa > qword_140C4E3A8 )
      v14 = (unsigned __int8)word_140C4E048;
    else
      v14 = HIBYTE(word_140C4E048);
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
    v8 = ((unsigned __int16)v8 ^ (unsigned __int16)((unsigned __int8)word_140C4E048 << 8)) & 0x100 ^ (unsigned __int64)v8;
  v9 = v8 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v9 = v8;
  v10 = v9 | 0x80;
  if ( (a3 & 0x4000000) == 0 )
    v10 = v9;
  return v10 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
