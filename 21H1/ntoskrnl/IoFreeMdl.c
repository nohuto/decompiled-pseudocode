/*
 * XREFs of IoFreeMdl @ 0x1402C0A80
 * Callers:
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x140279670 (IopBuildDeviceIoControlRequest.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x14028A9B0 (CcCopyBytesToUserBuffer.c)
 *     IopDropIrp @ 0x1402C08C0 (IopDropIrp.c)
 *     CcZeroDataInCache @ 0x1402C0B3C (CcZeroDataInCache.c)
 *     HalPutScatterGatherList @ 0x1402F30D0 (HalPutScatterGatherList.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x1402FD0C0 (HalBuildMdlFromScatterGatherListV2.c)
 *     MiZeroPageWrite @ 0x140310298 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x14031CA60 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1403201B4 (CcMdlWriteComplete2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403401B0 (IopBuildAsynchronousFsdRequest.c)
 *     HalpDmaFreeChildAdapter @ 0x14036A1F0 (HalpDmaFreeChildAdapter.c)
 *     HalMapTransferEx @ 0x14039C1C0 (HalMapTransferEx.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039C498 (HalpDmaCheckMdlAccessibility.c)
 *     HalPutScatterGatherListV3 @ 0x14039F700 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x14039F810 (HalFlushAdapterBuffersEx.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x1404C0810 (HalBuildMdlFromScatterGatherListV3.c)
 *     CcLockSystemCacheBuffer @ 0x1404E4DD8 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1404E64A0 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x1404EBDF8 (HvlGetCoverageData.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405390AC (MiPrepareImagePagesForHotPatch.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405CD204 (WbMakeUserDataPagesKernelWritable.c)
 *     CcMdlRead @ 0x140640770 (CcMdlRead.c)
 *     MiDeleteImageCreationMdls @ 0x14064414C (MiDeleteImageCreationMdls.c)
 *     CcMdlReadComplete2 @ 0x140644270 (CcMdlReadComplete2.c)
 *     AlpcpInitializeCompletionList @ 0x140676454 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140676E88 (AlpcpFreeCompletionList.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406EB818 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406ED14C @ 0x1406ED14C (sub_1406ED14C.c)
 *     FsRtlpFreeMdlChain @ 0x140888050 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140889530 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1408895D0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088A59C (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x14088CF58 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x14088E44C (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x140893B5C (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x1408A92B0 (PnprFreeMappingReserve.c)
 *     MiApplyImageHotPatch @ 0x1408C4C0C (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408C7F3C (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x1408C9AFC (MiReleaseHotPatchResources.c)
 *     MiLockAndMapEntireDriver @ 0x1408CC1A4 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x1408CC424 (MiUnlockEntireDriver.c)
 *     NtFreeUserPhysicalPages @ 0x1408D1EB0 (NtFreeUserPhysicalPages.c)
 *     PopReadPagesFromHiberFile @ 0x1408E2858 (PopReadPagesFromHiberFile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140957230 (NtPssCaptureVaSpaceBulk.c)
 *     ViAllocateMapRegisterFile @ 0x1409CA5A4 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x1409CB3A4 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
