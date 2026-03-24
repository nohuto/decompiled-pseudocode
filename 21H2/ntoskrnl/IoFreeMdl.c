/*
 * XREFs of IoFreeMdl @ 0x1402E9600
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14022B990 (IopBuildDeviceIoControlRequest.c)
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     HalPutScatterGatherList @ 0x14029E020 (HalPutScatterGatherList.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x1402AB920 (HalBuildMdlFromScatterGatherListV2.c)
 *     MiZeroPageWrite @ 0x1402BFD18 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x1402CC660 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1402D05D8 (CcMdlWriteComplete2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1402E7890 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x1402E86F8 (CcZeroDataInCache.c)
 *     IopDropIrp @ 0x1402E9444 (IopDropIrp.c)
 *     CcCopyBytesToUserBuffer @ 0x1403234C0 (CcCopyBytesToUserBuffer.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 *     HalpDmaFreeChildAdapter @ 0x14036D1C0 (HalpDmaFreeChildAdapter.c)
 *     HalMapTransferEx @ 0x14039F6E0 (HalMapTransferEx.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039F9B8 (HalpDmaCheckMdlAccessibility.c)
 *     HalPutScatterGatherListV3 @ 0x1403A2C20 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x1403A2D30 (HalFlushAdapterBuffersEx.c)
 *     IopUnlockAndFreeMdl @ 0x1403F11E0 (IopUnlockAndFreeMdl.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x1404C5B70 (HalBuildMdlFromScatterGatherListV3.c)
 *     CcLockSystemCacheBuffer @ 0x1404EA4A8 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1404EBB70 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x1404F1858 (HvlGetCoverageData.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EBCC (MiPrepareImagePagesForHotPatch.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D7AD8 (WbMakeUserDataPagesKernelWritable.c)
 *     AlpcpInitializeCompletionList @ 0x14067EC00 (AlpcpInitializeCompletionList.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140686A08 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140686D40 @ 0x140686D40 (sub_140686D40.c)
 *     sub_140688008 @ 0x140688008 (sub_140688008.c)
 *     AlpcpFreeCompletionList @ 0x1406C38D4 (AlpcpFreeCompletionList.c)
 *     CcMdlRead @ 0x1406D3BB0 (CcMdlRead.c)
 *     MiDeleteImageCreationMdls @ 0x1406D4ED4 (MiDeleteImageCreationMdls.c)
 *     CcMdlReadComplete2 @ 0x1406D4FF8 (CcMdlReadComplete2.c)
 *     FsRtlpFreeMdlChain @ 0x14088C460 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088D940 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088D9E0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088E9AC (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x140891398 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140892814 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x1408980FC (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x1408AD6D0 (PnprFreeMappingReserve.c)
 *     MiApplyImageHotPatch @ 0x1408C955C (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408CC88C (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x1408CE44C (MiReleaseHotPatchResources.c)
 *     MiLockAndMapEntireDriver @ 0x1408D0AF4 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x1408D0D74 (MiUnlockEntireDriver.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6800 (NtFreeUserPhysicalPages.c)
 *     PopReadPagesFromHiberFile @ 0x1408E6EEC (PopReadPagesFromHiberFile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095BF40 (NtPssCaptureVaSpaceBulk.c)
 *     ViAllocateMapRegisterFile @ 0x1409CD5C4 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x1409CE3C4 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeMdl(PMDL Mdl)
{
  CSHORT MdlFlags; // ax
  __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  MdlFlags = Mdl->MdlFlags;
  if ( (MdlFlags & 0x20) != 0 )
  {
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
    MdlFlags = Mdl->MdlFlags;
  }
  if ( (MdlFlags & 8) != 0 )
  {
    v3 = *((unsigned __int16 *)&Mdl->MdlFlags + 1);
    if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = 0LL;
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v3];
    }
    if ( !CurrentPrcb )
      CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[3].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[3].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)Mdl);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(PMDL))P->FreeEx)(Mdl);
    }
  }
  else
  {
    ExFreePoolWithTag(Mdl, 0);
  }
}
