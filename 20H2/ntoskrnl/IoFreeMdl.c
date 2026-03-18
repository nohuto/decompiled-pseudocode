/*
 * XREFs of IoFreeMdl @ 0x14020A410
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14020A0F0 (IopBuildDeviceIoControlRequest.c)
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     CcZeroDataInCache @ 0x140240E98 (CcZeroDataInCache.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x1402A6C10 (CcCopyBytesToUserBuffer.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     HalPutScatterGatherList @ 0x140301D80 (HalPutScatterGatherList.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x14030C860 (HalBuildMdlFromScatterGatherListV2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140318510 (IopBuildAsynchronousFsdRequest.c)
 *     MiZeroPageWrite @ 0x14031E678 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x14032B1B0 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14032E894 (CcMdlWriteComplete2.c)
 *     HalpDmaFreeChildAdapter @ 0x14036CB90 (HalpDmaFreeChildAdapter.c)
 *     IopDropIrp @ 0x14038D720 (IopDropIrp.c)
 *     HalMapTransferEx @ 0x14039FAA0 (HalMapTransferEx.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039FD78 (HalpDmaCheckMdlAccessibility.c)
 *     HalPutScatterGatherListV3 @ 0x1403A2360 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x1403A2470 (HalFlushAdapterBuffersEx.c)
 *     IopUnlockAndFreeMdl @ 0x1403F04DC (IopUnlockAndFreeMdl.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x1404C41A0 (HalBuildMdlFromScatterGatherListV3.c)
 *     CcLockSystemCacheBuffer @ 0x1404E8918 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1404E9FE0 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x1404EFCB8 (HvlGetCoverageData.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053D0CC (MiPrepareImagePagesForHotPatch.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D4A78 (WbMakeUserDataPagesKernelWritable.c)
 *     CcMdlRead @ 0x140657870 (CcMdlRead.c)
 *     CcMdlReadComplete2 @ 0x1406CF87C (CcMdlReadComplete2.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406E1A68 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406E3154 @ 0x1406E3154 (sub_1406E3154.c)
 *     AlpcpFreeCompletionList @ 0x1406E3BE4 (AlpcpFreeCompletionList.c)
 *     MiDeleteImageCreationMdls @ 0x14070AF2C (MiDeleteImageCreationMdls.c)
 *     AlpcpInitializeCompletionList @ 0x14070FBF4 (AlpcpInitializeCompletionList.c)
 *     FsRtlpFreeMdlChain @ 0x14088EEC0 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1408903A0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140890440 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14089140C (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x140893DC8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140895254 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x14089AB2C (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x1408B0100 (PnprFreeMappingReserve.c)
 *     MiApplyImageHotPatch @ 0x1408CBD9C (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408CF0CC (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x1408D0C8C (MiReleaseHotPatchResources.c)
 *     MiLockAndMapEntireDriver @ 0x1408D3334 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x1408D35B4 (MiUnlockEntireDriver.c)
 *     NtFreeUserPhysicalPages @ 0x1408D9040 (NtFreeUserPhysicalPages.c)
 *     PopReadPagesFromHiberFile @ 0x1408E96EC (PopReadPagesFromHiberFile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095E6C0 (NtPssCaptureVaSpaceBulk.c)
 *     ViAllocateMapRegisterFile @ 0x1409D05D4 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x1409D13D4 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140295370 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
