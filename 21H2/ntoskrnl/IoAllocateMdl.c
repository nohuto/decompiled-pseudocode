/*
 * XREFs of IoAllocateMdl @ 0x14029C7F0
 * Callers:
 *     HalBuildMdlFromScatterGatherListV2 @ 0x140233930 (HalBuildMdlFromScatterGatherListV2.c)
 *     MiZeroPageWrite @ 0x1402459E8 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14029BAD0 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x14029C34C (CcZeroDataInCache.c)
 *     IopBuildDeviceIoControlRequest @ 0x1403428E0 (IopBuildDeviceIoControlRequest.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404183E0 (IopAllocateAndPopulateWriteIrp.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140503D4C (HalpDmaCheckMdlAccessibility.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x140511220 (HalBuildMdlFromScatterGatherListV3.c)
 *     CcLockSystemCacheBuffer @ 0x14053A460 (CcLockSystemCacheBuffer.c)
 *     HvlGetCoverageData @ 0x140543148 (HvlGetCoverageData.c)
 *     MmAllocateMdlForIoSpace @ 0x140585AD0 (MmAllocateMdlForIoSpace.c)
 *     MiLockPatchIatForDV @ 0x1405A1D20 (MiLockPatchIatForDV.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405A3818 (MiPrepareImagePagesForHotPatch.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406E0358 (WbMakeUserExecutablePagesKernelWritable.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     MiCreateMdl @ 0x1407084B0 (MiCreateMdl.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x1407563A0 (BuildQueryDirectoryIrp.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     AlpcpInitializeCompletionList @ 0x1407F5914 (AlpcpInitializeCompletionList.c)
 *     HalGetAdapterV2 @ 0x140845A60 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x140845F30 (HalGetAdapterV3.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140931378 (HvlpDynamicUpdateMicrocode.c)
 *     IopAllocateAndLockMdl @ 0x140933A9C (IopAllocateAndLockMdl.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140935320 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140935790 (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14093C164 (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x1409525B4 (PnprInitializeMappingReserve.c)
 *     MiLockAndMapEntireDriver @ 0x140970AB4 (MiLockAndMapEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x140971B68 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140976140 (MiMapHotPatchImageInSystemSpace.c)
 *     NtFreeUserPhysicalPages @ 0x14097D9E0 (NtFreeUserPhysicalPages.c)
 *     PopReadPagesFromHiberFile @ 0x14098F634 (PopReadPagesFromHiberFile.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1409EC8CC (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x1409ED100 (EtwpSavePersistedLogger.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A07780 (NtPssCaptureVaSpaceBulk.c)
 *     sub_140A0EC90 @ 0x140A0EC90 (sub_140A0EC90.c)
 *     IovAllocateMdl @ 0x140A7FF00 (IovAllocateMdl.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140A849F0 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x140A872C8 (ViAllocateMapRegisterFile.c)
 *     VerifierPortIoAllocateMdl @ 0x140A8A840 (VerifierPortIoAllocateMdl.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

PMDL __stdcall IoAllocateMdl(
        PVOID VirtualAddress,
        ULONG Length,
        BOOLEAN SecondaryBuffer,
        BOOLEAN ChargeQuota,
        PIRP Irp)
{
  __int16 v5; // si
  CSHORT v8; // r15
  unsigned __int64 v9; // rbx
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rbp
  PMDL result; // rax
  unsigned int Number; // ecx
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  unsigned int v19; // eax
  PMDL MdlAddress; // rcx
  struct _MDL *i; // rdx

  v5 = (__int16)VirtualAddress;
  v8 = 0;
  v9 = (((unsigned __int16)VirtualAddress & 0xFFF) + (unsigned __int64)Length + 4095) >> 12;
  if ( (unsigned int)v9 > 0x11 )
  {
    v19 = 8 * v9 + 48;
  }
  else
  {
    v8 = 8;
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[3].P;
    ++P->TotalAllocates;
    result = (PMDL)RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( result )
      goto LABEL_3;
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[3].L;
    ++L->TotalAllocates;
    result = (PMDL)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( result
      || (Size = L->Size,
          AllocateEx = L->AllocateEx,
          Tag = L->Tag,
          Type = (unsigned int)L->Type,
          ++L->AllocateMisses,
          (result = (PMDL)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
    {
LABEL_3:
      LODWORD(result->Next) = CurrentPrcb->Number;
    }
    if ( result )
    {
      LOWORD(Number) = result->Next;
      goto LABEL_6;
    }
    v19 = 184;
  }
  result = (PMDL)ExAllocatePool2(64LL, v19, 543974477LL);
  if ( !result )
    return result;
  Number = KeGetPcr()->Prcb.Number;
LABEL_6:
  *(&result->MdlFlags + 1) = Number;
  result->Next = 0LL;
  result->Size = 8 * (v9 + 6);
  result->StartVa = (PVOID)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  result->ByteOffset = v5 & 0xFFF;
  result->ByteCount = Length;
  result->MdlFlags = v8;
  if ( Irp )
  {
    if ( SecondaryBuffer )
    {
      MdlAddress = Irp->MdlAddress;
      for ( i = MdlAddress->Next; i; i = i->Next )
        MdlAddress = i;
      MdlAddress->Next = result;
    }
    else
    {
      Irp->MdlAddress = result;
    }
  }
  return result;
}
