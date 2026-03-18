/*
 * XREFs of IoFreeMdl @ 0x140349550
 * Callers:
 *     HalPutScatterGatherListV2 @ 0x140230618 (HalPutScatterGatherListV2.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x140233930 (HalBuildMdlFromScatterGatherListV2.c)
 *     IopDropIrp @ 0x140234D58 (IopDropIrp.c)
 *     MiZeroPageWrite @ 0x1402459E8 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1402581E0 (CcMdlWriteComplete2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14029BAD0 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x14029C34C (CcZeroDataInCache.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x14032A7D0 (CcCopyBytesToUserBuffer.c)
 *     IopBuildDeviceIoControlRequest @ 0x1403428E0 (IopBuildDeviceIoControlRequest.c)
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140503D4C (HalpDmaCheckMdlAccessibility.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x140511220 (HalBuildMdlFromScatterGatherListV3.c)
 *     HalPutScatterGatherListV3 @ 0x140511A58 (HalPutScatterGatherListV3.c)
 *     HalpDmaFreeChildAdapter @ 0x140513870 (HalpDmaFreeChildAdapter.c)
 *     HalFlushAdapterBuffersEx @ 0x140516D80 (HalFlushAdapterBuffersEx.c)
 *     HalMapTransferEx @ 0x140517000 (HalMapTransferEx.c)
 *     CcLockSystemCacheBuffer @ 0x14053A460 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x14053BB80 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x140543148 (HvlGetCoverageData.c)
 *     IopUnlockAndFreeMdl @ 0x1405570D0 (IopUnlockAndFreeMdl.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x1405A29F8 (MiUnlockAndFreeDvPatchImage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405A3818 (MiPrepareImagePagesForHotPatch.c)
 *     DifIoFreeMdlWrapper @ 0x14060EEB0 (DifIoFreeMdlWrapper.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     CcMdlReadComplete2 @ 0x1406C14E4 (CcMdlReadComplete2.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406E0358 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406E9DE4 @ 0x1406E9DE4 (sub_1406E9DE4.c)
 *     MiDeleteImageCreationMdls @ 0x140705E1C (MiDeleteImageCreationMdls.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     AlpcpInitializeCompletionList @ 0x1407F5914 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1407F7C68 (AlpcpFreeCompletionList.c)
 *     FsRtlpFreeMdlChain @ 0x14092EF10 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1409303C0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140930460 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140931378 (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x140933FE8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140935790 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x14093C640 (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x14095212C (PnprFreeMappingReserve.c)
 *     MiLockAndMapEntireDriver @ 0x140970AB4 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x140970D2C (MiUnlockEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x140971B68 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140976140 (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x1409778EC (MiReleaseHotPatchResources.c)
 *     NtFreeUserPhysicalPages @ 0x14097D9E0 (NtFreeUserPhysicalPages.c)
 *     PopReadPagesFromHiberFile @ 0x14098F634 (PopReadPagesFromHiberFile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A07780 (NtPssCaptureVaSpaceBulk.c)
 *     sub_140A0EC90 @ 0x140A0EC90 (sub_140A0EC90.c)
 *     ViAllocateMapRegisterFile @ 0x140A872C8 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140A880B0 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
    if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0
      || (_mm_lfence(), (CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v3]) == 0LL) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
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
