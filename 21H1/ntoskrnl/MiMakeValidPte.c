/*
 * XREFs of MiMakeValidPte @ 0x14028D330
 * Callers:
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiWsleFree @ 0x140220E30 (MiWsleFree.c)
 *     MiGetPteFromCopyList @ 0x140222160 (MiGetPteFromCopyList.c)
 *     MiLinkPoolCommitChain @ 0x140222320 (MiLinkPoolCommitChain.c)
 *     MiAllocateKernelStackPages @ 0x140224500 (MiAllocateKernelStackPages.c)
 *     MiCreateSharedZeroPages @ 0x140225160 (MiCreateSharedZeroPages.c)
 *     MiFillSystemPtes @ 0x140274CE0 (MiFillSystemPtes.c)
 *     MiReadyStandbyPageForActive @ 0x1402801E0 (MiReadyStandbyPageForActive.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14028FAA0 (MiDecrementAndInsertStandbyPages.c)
 *     MiGetUltraMapping @ 0x1402968A0 (MiGetUltraMapping.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiSetProtectionOnTransitionPte @ 0x1402ACC58 (MiSetProtectionOnTransitionPte.c)
 *     MiCopyToUserVa @ 0x1402AD900 (MiCopyToUserVa.c)
 *     MiCompleteRestrictedImageFault @ 0x1402B4EE0 (MiCompleteRestrictedImageFault.c)
 *     MiAssignNonPagedPoolPte @ 0x1402B83B0 (MiAssignNonPagedPoolPte.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiMakeSystemCachePteValid @ 0x1402BB58C (MiMakeSystemCachePteValid.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiInsertPhysicalPteMapping @ 0x1402FB198 (MiInsertPhysicalPteMapping.c)
 *     MiUnlinkStandbyPfn @ 0x140300770 (MiUnlinkStandbyPfn.c)
 *     MiCopySinglePage @ 0x140302BB4 (MiCopySinglePage.c)
 *     MiMakeTransitionPteValid @ 0x1403037D0 (MiMakeTransitionPteValid.c)
 *     MiZeroLargePage @ 0x14030B58C (MiZeroLargePage.c)
 *     MiInitializeSystemPageTable @ 0x140328C34 (MiInitializeSystemPageTable.c)
 *     MiMapPageFileHash @ 0x140341CD8 (MiMapPageFileHash.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x1403511A8 (MiFillPhysicalPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     MiMapArbitraryPage @ 0x1403669C0 (MiMapArbitraryPage.c)
 *     MiResolveProtoCombine @ 0x140367EE4 (MiResolveProtoCombine.c)
 *     MiMapSinglePage @ 0x1403684B4 (MiMapSinglePage.c)
 *     MmSetPageProtection @ 0x140376CE0 (MmSetPageProtection.c)
 *     MiMapMemoryDumpMdl @ 0x140380EF4 (MiMapMemoryDumpMdl.c)
 *     MiBuildReservationCluster @ 0x140383580 (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14039436C (MiUpdateImagePfnImportRelocations.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403971C4 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AE258 (MiTimeSingleLargePageZeroWorker.c)
 *     MiInitializeUnusablePfns @ 0x1403AEB10 (MiInitializeUnusablePfns.c)
 *     MiMapWithLargePages @ 0x1403B48CC (MiMapWithLargePages.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B5C7C (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B5F58 (MiDemoteValidLargePageOneLevel.c)
 *     MiFillGapPtes @ 0x1403B8B7C (MiFillGapPtes.c)
 *     MiMapMdlCommon @ 0x1403C4744 (MiMapMdlCommon.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403ED43C (MiUpdateLargePageSectionPfns.c)
 *     MiZeroWithSystemPtes @ 0x1403EE228 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403EE508 (MiZeroWithUltraSpace.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiUnmapMdlCommon @ 0x14052BC04 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14052C690 (MmProtectMdlSystemAddress.c)
 *     MiHugePageOperation @ 0x14052D458 (MiHugePageOperation.c)
 *     MiMapFrame @ 0x140531464 (MiMapFrame.c)
 *     MiInitializeSlowPte @ 0x140533F8C (MiInitializeSlowPte.c)
 *     MiMakeLargePageTable @ 0x140537EF4 (MiMakeLargePageTable.c)
 *     MmMapHotPatchTablePage @ 0x140539990 (MmMapHotPatchTablePage.c)
 *     MiEnableLargeSubsection @ 0x14053AE8C (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x14053B034 (MiFillPageWithImageExtentContents.c)
 *     MiMapRetpolineStubs @ 0x14053E51C (MiMapRetpolineStubs.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405406D0 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x1405422E0 (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x140542C80 (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x1405435E4 (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545010 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x140547844 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x140548778 (MiWriteAwePtes.c)
 *     MiInitializeProtoPfn @ 0x14054F4A0 (MiInitializeProtoPfn.c)
 *     MiScrubNodeLargePageList @ 0x140551348 (MiScrubNodeLargePageList.c)
 *     MiBuildForkPageTable @ 0x1405524DC (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x140554BB0 (MiFinishLastForkPageTable.c)
 *     MiInsertLargeUserMapping @ 0x140558A88 (MiInsertLargeUserMapping.c)
 *     MiScrubPage @ 0x14055E804 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x140631750 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1406CA7E4 (MiValidateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x1406F10F0 (MiAllocateTopLevelPage.c)
 *     MmAllocateIndependentPagesEx @ 0x14074B21C (MmAllocateIndependentPagesEx.c)
 *     MiInitializeDynamicBitmap @ 0x1407720EC (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14077289C (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x1407827B4 (MiInitializeShadowPageTable.c)
 *     MiProtectLargeKernelHalRange @ 0x1407838B0 (MiProtectLargeKernelHalRange.c)
 *     MmAllocateNonCachedMemory @ 0x1408C1DA0 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CD838 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408CDF80 (MiCreateHardwareEnclave.c)
 *     MmChangeKernelCfgBitmap @ 0x1408D3008 (MmChangeKernelCfgBitmap.c)
 *     MiCaptureSparsePages @ 0x1408D3C14 (MiCaptureSparsePages.c)
 *     MxMapVa @ 0x140A45B74 (MxMapVa.c)
 *     MiMapBBTMemory @ 0x140A4D920 (MiMapBBTMemory.c)
 *     MiInitializeTbFlush @ 0x140A4D9F8 (MiInitializeTbFlush.c)
 *     MiInitializeDummyPages @ 0x140A4DFBC (MiInitializeDummyPages.c)
 *     MxCopyPage @ 0x140A4EF28 (MxCopyPage.c)
 *     MxSwapPages @ 0x140A4F77C (MxSwapPages.c)
 *     MiInitializeSharedUserData @ 0x140A5003C (MiInitializeSharedUserData.c)
 *     MiInitializeGapFrames @ 0x140A5F0F0 (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x140A6D284 (MiMapDummyPages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A905FC (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MiUserPdeOrAbove @ 0x1402FD5C0 (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 LeafVa; // rbp
  unsigned __int64 v14; // rcx
  int v15; // eax

  v4 = a3;
  v5 = a3 & 0x1F;
  v7 = (a2 & 0xFFFFFFFFFLL) << 12;
  v8 = v7 | MmProtectToPteMask[v5] & 0xFFFF000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_2;
  LeafVa = (__int64)(a1 << 25) >> 16;
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v8 = v7 | MmProtectToPteMask[v5] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (a3 & 0x4000000) == 0 )
    {
      v8 = v7 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v5] & 0x7FFF000000000E7FLL | 0x21;
    }
    if ( (unsigned int)MiUserPdeOrAbove(a1, v7, a3, a4) )
      v8 |= 4uLL;
  }
  v14 = v8;
  v8 |= 4uLL;
  if ( a1 > 0xFFFFF6BFFFFFFF78uLL )
    v8 = v14;
  if ( (v4 & 0x4000000) != 0 )
    LeafVa = MiGetLeafVa((__int64)(a1 << 25) >> 16, 0x3FFFFFFF78LL, a3, a4);
  if ( LeafVa < 0xFFFF800000000000uLL )
  {
    v15 = HIBYTE(word_140C4DF48);
    goto LABEL_25;
  }
  if ( byte_140C4F908[((LeafVa >> 39) & 0x1FF) - 256] != 1
    && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( LeafVa < qword_140C4FA78 || LeafVa > qword_140C4E2A8 )
      v15 = (unsigned __int8)word_140C4DF48;
    else
      v15 = HIBYTE(word_140C4DF48);
LABEL_25:
    if ( !v15 )
      goto LABEL_3;
LABEL_2:
    v8 |= 0x100uLL;
  }
LABEL_3:
  v9 = v8 | 0x42;
  if ( v4 >= 0 || (v5 & 5) != 4 )
    v9 = v8;
  if ( (v4 & 0x40000000) != 0 )
    v9 &= ~4uLL;
  if ( (v4 & 0x20000000) != 0 )
    v9 = ((unsigned __int16)v9 ^ (unsigned __int16)((unsigned __int8)word_140C4DF48 << 8)) & 0x100 ^ (unsigned __int64)v9;
  v10 = v9 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v4 & 0x8000000) == 0 )
    v10 = v9;
  v11 = v10 | 0x80;
  if ( (v4 & 0x4000000) == 0 )
    v11 = v10;
  return v11 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
