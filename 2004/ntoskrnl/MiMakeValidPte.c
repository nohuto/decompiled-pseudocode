/*
 * XREFs of MiMakeValidPte @ 0x1402342E0
 * Callers:
 *     MiFillSystemPtes @ 0x14021BC90 (MiFillSystemPtes.c)
 *     MiReadyStandbyPageForActive @ 0x140227190 (MiReadyStandbyPageForActive.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140236A50 (MiDecrementAndInsertStandbyPages.c)
 *     MiGetUltraMapping @ 0x14023D870 (MiGetUltraMapping.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MiSetProtectionOnTransitionPte @ 0x140253C28 (MiSetProtectionOnTransitionPte.c)
 *     MiCopyToUserVa @ 0x1402548D0 (MiCopyToUserVa.c)
 *     MiCompleteRestrictedImageFault @ 0x14025BEB0 (MiCompleteRestrictedImageFault.c)
 *     MiAssignNonPagedPoolPte @ 0x14025F380 (MiAssignNonPagedPoolPte.c)
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiMakeSystemCachePteValid @ 0x14026255C (MiMakeSystemCachePteValid.c)
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiWsleFree @ 0x1402B3AB0 (MiWsleFree.c)
 *     MiGetPteFromCopyList @ 0x1402B4DE0 (MiGetPteFromCopyList.c)
 *     MiLinkPoolCommitChain @ 0x1402B4FA0 (MiLinkPoolCommitChain.c)
 *     MiAllocateKernelStackPages @ 0x1402B7180 (MiAllocateKernelStackPages.c)
 *     MiCreateSharedZeroPages @ 0x1402B7DE0 (MiCreateSharedZeroPages.c)
 *     MiInitializeSystemPageTable @ 0x1402E28D4 (MiInitializeSystemPageTable.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x1402F51CC (MiFillPhysicalPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiMapPageFileHash @ 0x1403129A0 (MiMapPageFileHash.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiInsertPhysicalPteMapping @ 0x1403381C8 (MiInsertPhysicalPteMapping.c)
 *     MiUnlinkStandbyPfn @ 0x14033D070 (MiUnlinkStandbyPfn.c)
 *     MiCopySinglePage @ 0x14033F9B4 (MiCopySinglePage.c)
 *     MiMakeTransitionPteValid @ 0x1403405A0 (MiMakeTransitionPteValid.c)
 *     MiZeroLargePage @ 0x140349124 (MiZeroLargePage.c)
 *     MiMapArbitraryPage @ 0x140367380 (MiMapArbitraryPage.c)
 *     MiResolveProtoCombine @ 0x1403688A4 (MiResolveProtoCombine.c)
 *     MiMapSinglePage @ 0x140368E74 (MiMapSinglePage.c)
 *     MmSetPageProtection @ 0x140377AF0 (MmSetPageProtection.c)
 *     MiMapMemoryDumpMdl @ 0x140381734 (MiMapMemoryDumpMdl.c)
 *     MiBuildReservationCluster @ 0x1403844EC (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140394F3C (MiUpdateImagePfnImportRelocations.c)
 *     MiInitializeNewUltraHugeContext @ 0x140397DD4 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403A7E38 (MiTimeSingleLargePageZeroWorker.c)
 *     MiInitializeUnusablePfns @ 0x1403A86F0 (MiInitializeUnusablePfns.c)
 *     MiMapWithLargePages @ 0x1403B51CC (MiMapWithLargePages.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B6AAC (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B6D88 (MiDemoteValidLargePageOneLevel.c)
 *     MiFillGapPtes @ 0x1403B9EEC (MiFillGapPtes.c)
 *     MiMapMdlCommon @ 0x1403C56B4 (MiMapMdlCommon.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403EE4FC (MiUpdateLargePageSectionPfns.c)
 *     MiZeroWithSystemPtes @ 0x1403EF588 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403EF868 (MiZeroWithUltraSpace.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MiUnmapMdlCommon @ 0x14052C254 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14052CCE0 (MmProtectMdlSystemAddress.c)
 *     MiHugePageOperation @ 0x14052DAA8 (MiHugePageOperation.c)
 *     MiMapFrame @ 0x140531AB4 (MiMapFrame.c)
 *     MiInitializeSlowPte @ 0x1405345DC (MiInitializeSlowPte.c)
 *     MiMakeLargePageTable @ 0x140538544 (MiMakeLargePageTable.c)
 *     MmMapHotPatchTablePage @ 0x140539FE0 (MmMapHotPatchTablePage.c)
 *     MiEnableLargeSubsection @ 0x14053B4DC (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x14053B684 (MiFillPageWithImageExtentContents.c)
 *     MiMapRetpolineStubs @ 0x14053EB6C (MiMapRetpolineStubs.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140540D20 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x140542930 (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x1405432D0 (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x140543C34 (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545660 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x140547E94 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x140548DC8 (MiWriteAwePtes.c)
 *     MiInitializeProtoPfn @ 0x14054FAF0 (MiInitializeProtoPfn.c)
 *     MiScrubNodeLargePageList @ 0x140551998 (MiScrubNodeLargePageList.c)
 *     MiBuildForkPageTable @ 0x140552B2C (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x140555200 (MiFinishLastForkPageTable.c)
 *     MiInsertLargeUserMapping @ 0x1405590D8 (MiInsertLargeUserMapping.c)
 *     MiScrubPage @ 0x14055EE54 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x1405FC710 (MiRelocateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1406ABD7C (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x1406ABFD4 (MiAllocateTopLevelPage.c)
 *     MiValidateImagePfn @ 0x1406EBA64 (MiValidateImagePfn.c)
 *     MmAllocateIndependentPagesEx @ 0x14074F63C (MmAllocateIndependentPagesEx.c)
 *     MiInitializeDynamicBitmap @ 0x1407744FC (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x140774CAC (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x140788138 (MiInitializeShadowPageTable.c)
 *     MiProtectLargeKernelHalRange @ 0x140789240 (MiProtectLargeKernelHalRange.c)
 *     MmAllocateNonCachedMemory @ 0x1408C30F0 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CEB88 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408CF2D0 (MiCreateHardwareEnclave.c)
 *     MmChangeKernelCfgBitmap @ 0x1408D4358 (MmChangeKernelCfgBitmap.c)
 *     MiCaptureSparsePages @ 0x1408D4F64 (MiCaptureSparsePages.c)
 *     MxMapVa @ 0x140A3EDAC (MxMapVa.c)
 *     MiMapBBTMemory @ 0x140A53620 (MiMapBBTMemory.c)
 *     MiInitializeTbFlush @ 0x140A536F8 (MiInitializeTbFlush.c)
 *     MiInitializeDummyPages @ 0x140A53CBC (MiInitializeDummyPages.c)
 *     MxCopyPage @ 0x140A54C28 (MxCopyPage.c)
 *     MxSwapPages @ 0x140A5547C (MxSwapPages.c)
 *     MiInitializeSharedUserData @ 0x140A55D3C (MiInitializeSharedUserData.c)
 *     MiInitializeGapFrames @ 0x140A6225C (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x140A6D92C (MiMapDummyPages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A8FBEC (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MiUserPdeOrAbove @ 0x14033A900 (MiUserPdeOrAbove.c)
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
    if ( (unsigned int)MiUserPdeOrAbove(a1) )
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
    v15 = HIBYTE(word_140C4DE08);
    goto LABEL_25;
  }
  if ( byte_140C4F7C8[((LeafVa >> 39) & 0x1FF) - 256] != 1
    && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( LeafVa < qword_140C4F938 || LeafVa > qword_140C4E168 )
      v15 = (unsigned __int8)word_140C4DE08;
    else
      v15 = HIBYTE(word_140C4DE08);
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
    v9 = ((unsigned __int16)v9 ^ (unsigned __int16)((unsigned __int8)word_140C4DE08 << 8)) & 0x100 ^ (unsigned __int64)v9;
  v10 = v9 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v4 & 0x8000000) == 0 )
    v10 = v9;
  v11 = v10 | 0x80;
  if ( (v4 & 0x4000000) == 0 )
    v11 = v10;
  return v11 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
