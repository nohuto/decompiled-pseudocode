/*
 * XREFs of IoFreeMdl @ 0x140267A50
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140220620 (IopBuildDeviceIoControlRequest.c)
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x140231960 (CcCopyBytesToUserBuffer.c)
 *     IopDropIrp @ 0x140267890 (IopDropIrp.c)
 *     CcZeroDataInCache @ 0x140267B0C (CcZeroDataInCache.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     HalPutScatterGatherList @ 0x14032EE70 (HalPutScatterGatherList.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x14033A400 (HalBuildMdlFromScatterGatherListV2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14033D220 (IopBuildAsynchronousFsdRequest.c)
 *     MiZeroPageWrite @ 0x14034D928 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x14035A640 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14035DDD8 (CcMdlWriteComplete2.c)
 *     HalpDmaFreeChildAdapter @ 0x14036ABB0 (HalpDmaFreeChildAdapter.c)
 *     HalMapTransferEx @ 0x14039C950 (HalMapTransferEx.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039CC28 (HalpDmaCheckMdlAccessibility.c)
 *     HalPutScatterGatherListV3 @ 0x14039FE90 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x14039FFA0 (HalFlushAdapterBuffersEx.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x1404C0C80 (HalBuildMdlFromScatterGatherListV3.c)
 *     CcLockSystemCacheBuffer @ 0x1404E5388 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1404E6A50 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x1404EC428 (HvlGetCoverageData.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405396FC (MiPrepareImagePagesForHotPatch.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405CE5D4 (WbMakeUserDataPagesKernelWritable.c)
 *     CcMdlRead @ 0x14060B620 (CcMdlRead.c)
 *     MiDeleteImageCreationMdls @ 0x14060EF1C (MiDeleteImageCreationMdls.c)
 *     CcMdlReadComplete2 @ 0x14060F040 (CcMdlReadComplete2.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406D8B78 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406DA058 @ 0x1406DA058 (sub_1406DA058.c)
 *     AlpcpInitializeCompletionList @ 0x1406F48D8 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1406F4DDC (AlpcpFreeCompletionList.c)
 *     FsRtlpFreeMdlChain @ 0x140889370 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088A850 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088A8F0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088B8BC (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x14088E278 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x14088F76C (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x140894E7C (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x1408AA5D0 (PnprFreeMappingReserve.c)
 *     MiApplyImageHotPatch @ 0x1408C5F5C (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408C928C (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x1408CAE4C (MiReleaseHotPatchResources.c)
 *     MiLockAndMapEntireDriver @ 0x1408CD4F4 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x1408CD774 (MiUnlockEntireDriver.c)
 *     NtFreeUserPhysicalPages @ 0x1408D3200 (NtFreeUserPhysicalPages.c)
 *     PopReadPagesFromHiberFile @ 0x1408E3AD8 (PopReadPagesFromHiberFile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140958900 (NtPssCaptureVaSpaceBulk.c)
 *     ViAllocateMapRegisterFile @ 0x1409CA5B4 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x1409CB3B4 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
