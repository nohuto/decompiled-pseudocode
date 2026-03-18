/*
 * XREFs of MiMakeValidPte @ 0x1402B1B40
 * Callers:
 *     MiCopyToUserVa @ 0x140234540 (MiCopyToUserVa.c)
 *     MiSetProtectionOnTransitionPte @ 0x14023672C (MiSetProtectionOnTransitionPte.c)
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiMapPageFileHash @ 0x14023BDF8 (MiMapPageFileHash.c)
 *     MiCopySinglePage @ 0x1402516D4 (MiCopySinglePage.c)
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 *     MiInsertPhysicalPteMapping @ 0x14025F5F8 (MiInsertPhysicalPteMapping.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiFillSystemPtes @ 0x140286700 (MiFillSystemPtes.c)
 *     MiCreateSharedZeroPages @ 0x14028DDB0 (MiCreateSharedZeroPages.c)
 *     MiGetPteFromCopyList @ 0x140290F30 (MiGetPteFromCopyList.c)
 *     MiCompleteRestrictedImageFault @ 0x1402A07F0 (MiCompleteRestrictedImageFault.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiWsleFree @ 0x1402AB620 (MiWsleFree.c)
 *     MiDecrementAndInsertStandbyPages @ 0x1402AF7F0 (MiDecrementAndInsertStandbyPages.c)
 *     MiGetUltraMapping @ 0x1402C2F20 (MiGetUltraMapping.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiAssignNonPagedPoolPte @ 0x1402CA210 (MiAssignNonPagedPoolPte.c)
 *     MiLinkPoolCommitChain @ 0x1402CB030 (MiLinkPoolCommitChain.c)
 *     MiUnlinkStandbyPfn @ 0x14030FD50 (MiUnlinkStandbyPfn.c)
 *     MiMakeTransitionPteValid @ 0x1403115D0 (MiMakeTransitionPteValid.c)
 *     MiZeroLargePage @ 0x140319D50 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x1403333BC (MiFillPhysicalPages.c)
 *     MiInitializeSystemPageTable @ 0x140336364 (MiInitializeSystemPageTable.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiReadyStandbyPageForActive @ 0x14034D080 (MiReadyStandbyPageForActive.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiMakeSystemCachePteValid @ 0x140356A3C (MiMakeSystemCachePteValid.c)
 *     MiMapArbitraryPage @ 0x140369360 (MiMapArbitraryPage.c)
 *     MiResolveProtoCombine @ 0x14036A884 (MiResolveProtoCombine.c)
 *     MiMapSinglePage @ 0x14036AE54 (MiMapSinglePage.c)
 *     MmSetPageProtection @ 0x140379A80 (MmSetPageProtection.c)
 *     MiMapMemoryDumpMdl @ 0x140383414 (MiMapMemoryDumpMdl.c)
 *     MiBuildReservationCluster @ 0x140386698 (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403973FC (MiUpdateImagePfnImportRelocations.c)
 *     MiInitializeNewUltraHugeContext @ 0x14039A254 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AA828 (MiTimeSingleLargePageZeroWorker.c)
 *     MiInitializeUnusablePfns @ 0x1403AB0E0 (MiInitializeUnusablePfns.c)
 *     MiMapWithLargePages @ 0x1403B80EC (MiMapWithLargePages.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B954C (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B9828 (MiDemoteValidLargePageOneLevel.c)
 *     MiFillGapPtes @ 0x1403BC36C (MiFillGapPtes.c)
 *     MiMapMdlCommon @ 0x1403C80A4 (MiMapMdlCommon.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F2964 (MiUpdateLargePageSectionPfns.c)
 *     MiZeroWithSystemPtes @ 0x1403F39F8 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F3CD8 (MiZeroWithUltraSpace.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MiUnmapMdlCommon @ 0x14052FC24 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1405306B0 (MmProtectMdlSystemAddress.c)
 *     MiHugePageOperation @ 0x140531478 (MiHugePageOperation.c)
 *     MiMapFrame @ 0x140535484 (MiMapFrame.c)
 *     MiInitializeSlowPte @ 0x140537FAC (MiInitializeSlowPte.c)
 *     MiMakeLargePageTable @ 0x14053BF14 (MiMakeLargePageTable.c)
 *     MmMapHotPatchTablePage @ 0x14053D9B0 (MmMapHotPatchTablePage.c)
 *     MiEnableLargeSubsection @ 0x14053EEAC (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x14053F054 (MiFillPageWithImageExtentContents.c)
 *     MiMapRetpolineStubs @ 0x14054253C (MiMapRetpolineStubs.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405446F0 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x140546300 (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x140546CA0 (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x140547604 (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140549030 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054C798 (MiWriteAwePtes.c)
 *     MiInitializeProtoPfn @ 0x1405534C0 (MiInitializeProtoPfn.c)
 *     MiScrubNodeLargePageList @ 0x140555368 (MiScrubNodeLargePageList.c)
 *     MiBuildForkPageTable @ 0x1405564FC (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x140558BD0 (MiFinishLastForkPageTable.c)
 *     MiInsertLargeUserMapping @ 0x14055CAA8 (MiInsertLargeUserMapping.c)
 *     MiScrubPage @ 0x140562824 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x1406818C0 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1406BEE74 (MiValidateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1406ED8E8 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x1406EDC28 (MiAllocateTopLevelPage.c)
 *     MmAllocateIndependentPagesEx @ 0x14075E21C (MmAllocateIndependentPagesEx.c)
 *     MiInitializeDynamicBitmap @ 0x140782AFC (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x1407832AC (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x140795E48 (MiInitializeShadowPageTable.c)
 *     MiProtectLargeKernelHalRange @ 0x140796F50 (MiProtectLargeKernelHalRange.c)
 *     MmAllocateNonCachedMemory @ 0x1408C8F30 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D49C8 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408D5110 (MiCreateHardwareEnclave.c)
 *     MmChangeKernelCfgBitmap @ 0x1408DA198 (MmChangeKernelCfgBitmap.c)
 *     MiCaptureSparsePages @ 0x1408DADA4 (MiCaptureSparsePages.c)
 *     MxMapVa @ 0x140A4504C (MxMapVa.c)
 *     MiMapBBTMemory @ 0x140A53CA0 (MiMapBBTMemory.c)
 *     MiInitializeTbFlush @ 0x140A53D78 (MiInitializeTbFlush.c)
 *     MiInitializeDummyPages @ 0x140A5433C (MiInitializeDummyPages.c)
 *     MxCopyPage @ 0x140A552A8 (MxCopyPage.c)
 *     MxSwapPages @ 0x140A55AFC (MxSwapPages.c)
 *     MiInitializeSharedUserData @ 0x140A563BC (MiInitializeSharedUserData.c)
 *     MiInitializeGapFrames @ 0x140A6961C (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x140A7404C (MiMapDummyPages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A958EC (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MiUserPdeOrAbove @ 0x14030CD44 (MiUserPdeOrAbove.c)
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
    LeafVa = MiGetLeafVa((__int64)(a1 << 25) >> 16);
  if ( LeafVa < 0xFFFF800000000000uLL )
  {
    v15 = HIBYTE(word_140C4DE88);
    goto LABEL_25;
  }
  if ( byte_140C4F848[((LeafVa >> 39) & 0x1FF) - 256] != 1
    && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( LeafVa < qword_140C4F9B8 || LeafVa > qword_140C4E1E8 )
      v15 = (unsigned __int8)word_140C4DE88;
    else
      v15 = HIBYTE(word_140C4DE88);
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
    v9 = ((unsigned __int16)v9 ^ (unsigned __int16)((unsigned __int8)word_140C4DE88 << 8)) & 0x100 ^ (unsigned __int64)v9;
  v10 = v9 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v4 & 0x8000000) == 0 )
    v10 = v9;
  v11 = v10 | 0x80;
  if ( (v4 & 0x4000000) == 0 )
    v11 = v10;
  return v11 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
