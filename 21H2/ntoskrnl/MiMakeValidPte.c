/*
 * XREFs of MiMakeValidPte @ 0x1402CBD10
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x140213558 (MiInsertPhysicalPteMapping.c)
 *     MiMakeTransitionPteValid @ 0x140234EB4 (MiMakeTransitionPteValid.c)
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x140235AAC (MiFillPhysicalPages.c)
 *     MiUnlinkStandbyPfn @ 0x14023608C (MiUnlinkStandbyPfn.c)
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiInitializeNewUltraHugeContext @ 0x14025BDC8 (MiInitializeNewUltraHugeContext.c)
 *     MiZeroLargePage @ 0x14026A28C (MiZeroLargePage.c)
 *     MiCopySinglePage @ 0x14026BE94 (MiCopySinglePage.c)
 *     MiMapSinglePage @ 0x14026C124 (MiMapSinglePage.c)
 *     MiZeroWithUltraSpace @ 0x14026C4CC (MiZeroWithUltraSpace.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiInitializeSystemPageTable @ 0x14027C784 (MiInitializeSystemPageTable.c)
 *     MiCopyToUserVa @ 0x14028DF40 (MiCopyToUserVa.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiWsleFree @ 0x1402C2AD0 (MiWsleFree.c)
 *     MiGetUltraMapping @ 0x1402C6260 (MiGetUltraMapping.c)
 *     MiCompleteRestrictedImageFault @ 0x1402CB710 (MiCompleteRestrictedImageFault.c)
 *     MiMakeProtoTransition @ 0x1402CBAF0 (MiMakeProtoTransition.c)
 *     MiGetPteFromCopyList @ 0x1402CBF80 (MiGetPteFromCopyList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1402DAEB0 (MiUpdateImagePfnImportRelocations.c)
 *     MiFillSystemPtes @ 0x140308F00 (MiFillSystemPtes.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiSetProtectionOnTransitionPte @ 0x14032E970 (MiSetProtectionOnTransitionPte.c)
 *     MiAssignNonPagedPoolPte @ 0x14033A6B0 (MiAssignNonPagedPoolPte.c)
 *     MiResolveProtoCombine @ 0x14033A920 (MiResolveProtoCombine.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiCreateSharedZeroPages @ 0x14033C5F0 (MiCreateSharedZeroPages.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MiLinkPoolCommitChain @ 0x140352A00 (MiLinkPoolCommitChain.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiMakeSystemCachePteValid @ 0x140367828 (MiMakeSystemCachePteValid.c)
 *     MiMapPageFileHash @ 0x14037E338 (MiMapPageFileHash.c)
 *     MiMapMemoryDumpMdl @ 0x14038C4CC (MiMapMemoryDumpMdl.c)
 *     MiInitializeNewPfns @ 0x1403B790C (MiInitializeNewPfns.c)
 *     MmSetPageProtection @ 0x1403C2120 (MmSetPageProtection.c)
 *     MiMapWithLargePages @ 0x1403C7090 (MiMapWithLargePages.c)
 *     MiReplacePfnWithGapMapping @ 0x1403C92F4 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403C9590 (MiDemoteValidLargePageOneLevel.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403D452C (MiTimeSingleLargePageZeroWorker.c)
 *     MiMapMdlCommon @ 0x1403D77D4 (MiMapMdlCommon.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiUnmapMdlCommon @ 0x1405853E4 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 *     MiHugePageOperation @ 0x140586E78 (MiHugePageOperation.c)
 *     MiUpdateLargePageSectionPfns @ 0x14058D990 (MiUpdateLargePageSectionPfns.c)
 *     MiMapFrame @ 0x140591EB4 (MiMapFrame.c)
 *     MiInitializeSlowPte @ 0x14059508C (MiInitializeSlowPte.c)
 *     MiMakeLargePageTable @ 0x140598DA4 (MiMakeLargePageTable.c)
 *     MiCopyMemoryPagefileData @ 0x140599780 (MiCopyMemoryPagefileData.c)
 *     MiBuildReservationCluster @ 0x14059B62C (MiBuildReservationCluster.c)
 *     MiEnableLargeSubsection @ 0x14059E660 (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x14059E8F0 (MiFillPageWithImageExtentContents.c)
 *     MiPersistMdl @ 0x14059FECC (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x1405A1128 (MiTransferFileExtent.c)
 *     MiMapRetpolineStubs @ 0x1405A1F60 (MiMapRetpolineStubs.c)
 *     MmMapHotPatchTablePage @ 0x1405A3E3C (MmMapHotPatchTablePage.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405A4C68 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x1405A6AE4 (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x1405A7464 (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x1405A7D28 (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1405A9744 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x1405AE310 (MiWritePteHighLevelIsr.c)
 *     MiScrubNodeLargePageList @ 0x1405AF6F0 (MiScrubNodeLargePageList.c)
 *     MiZeroWithSystemPtes @ 0x1405B2A90 (MiZeroWithSystemPtes.c)
 *     MiBuildForkPageTable @ 0x1405B85F8 (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x1405BACCC (MiFinishLastForkPageTable.c)
 *     MiInsertLargeUserMapping @ 0x1405C2898 (MiInsertLargeUserMapping.c)
 *     MiInitializeProtoPfn @ 0x1405C4A48 (MiInitializeProtoPfn.c)
 *     MiScrubPage @ 0x1405C573C (MiScrubPage.c)
 *     MiValidateImagePfn @ 0x1406F3408 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1407BF070 (MiRelocateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1407F17B4 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x1407F1AF8 (MiAllocateTopLevelPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 *     MiInitializeShadowPageTable @ 0x14082A974 (MiInitializeShadowPageTable.c)
 *     MiInitializeDynamicBitmap @ 0x14082B1B4 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14082B4E0 (MiProtectLargeKernelHalRange.c)
 *     MmAllocateNonCachedMemory @ 0x14096A490 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x140979274 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140979A34 (MiCreateHardwareEnclave.c)
 *     MiCaptureSparsePages @ 0x14097E614 (MiCaptureSparsePages.c)
 *     MmMapProtectedKernelPage @ 0x14097F95C (MmMapProtectedKernelPage.c)
 *     MxSwapPages @ 0x140AF3FFC (MxSwapPages.c)
 *     MxMapVa @ 0x140AF61F4 (MxMapVa.c)
 *     MiInitializeGapFrames @ 0x140AF6B44 (MiInitializeGapFrames.c)
 *     MiMapBBTMemory @ 0x140B092AC (MiMapBBTMemory.c)
 *     MiInitializeTbFlush @ 0x140B09340 (MiInitializeTbFlush.c)
 *     MiInitializeDummyPages @ 0x140B098F0 (MiInitializeDummyPages.c)
 *     MiInitializeSharedUserData @ 0x140B0A680 (MiInitializeSharedUserData.c)
 *     MiFillGapPtes @ 0x140B1B0B0 (MiFillGapPtes.c)
 *     MiMapDummyPages @ 0x140B2D454 (MiMapDummyPages.c)
 *     MxCopyPage @ 0x140B51C0C (MxCopyPage.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B5229C (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14023261C (MiUserPdeOrAbove.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
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
  v6 = (a2 & 0xFFFFFFFFFFLL) << 12;
  v7 = v6 | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_2;
  LeafVa = (__int64)(a1 << 25) >> 16;
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v7 = v6 | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (a3 & 0x4000000) == 0 )
    {
      v7 = v6 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v4] & 0x7FF0000000000E7FLL | 0x21;
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
    v14 = HIBYTE(word_140C51864);
    goto LABEL_25;
  }
  if ( byte_140C53F50[((LeafVa >> 39) & 0x1FF) - 256] != 1
    && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( LeafVa < qword_140C540C0 || LeafVa > qword_140C51BF0 )
      v14 = (unsigned __int8)word_140C51864;
    else
      v14 = HIBYTE(word_140C51864);
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
    v8 = ((unsigned __int16)v8 ^ (unsigned __int16)((unsigned __int8)word_140C51864 << 8)) & 0x100 ^ (unsigned __int64)v8;
  v9 = v8 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v9 = v8;
  v10 = v9 | 0x80;
  if ( (a3 & 0x4000000) == 0 )
    v10 = v9;
  return v10 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
