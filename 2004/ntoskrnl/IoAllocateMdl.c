/*
 * XREFs of IoAllocateMdl @ 0x1402656A0
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140220620 (IopBuildDeviceIoControlRequest.c)
 *     CcZeroDataInCache @ 0x140267B0C (CcZeroDataInCache.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x14033A400 (HalBuildMdlFromScatterGatherListV2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14033D220 (IopBuildAsynchronousFsdRequest.c)
 *     MiZeroPageWrite @ 0x14034D928 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x14035A640 (CcPrepareMdlWrite.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039CC28 (HalpDmaCheckMdlAccessibility.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x1404C0C80 (HalBuildMdlFromScatterGatherListV3.c)
 *     CcLockSystemCacheBuffer @ 0x1404E5388 (CcLockSystemCacheBuffer.c)
 *     HvlGetCoverageData @ 0x1404EC428 (HvlGetCoverageData.c)
 *     MmAllocateMdlForIoSpace @ 0x14052CA00 (MmAllocateMdlForIoSpace.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405396FC (MiPrepareImagePagesForHotPatch.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405CE5D4 (WbMakeUserDataPagesKernelWritable.c)
 *     CcMdlRead @ 0x14060B620 (CcMdlRead.c)
 *     MiCreateMdl @ 0x14060C320 (MiCreateMdl.c)
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x14068B600 (NtWriteFile.c)
 *     NtReadFile @ 0x14068C230 (NtReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x14068CF20 (BuildQueryDirectoryIrp.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406D8B78 (WbMakeUserExecutablePagesKernelWritable.c)
 *     FsRtlKernelFsControlFile @ 0x1406DC3C0 (FsRtlKernelFsControlFile.c)
 *     NtQueryEaFile @ 0x1406EA6D0 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406EBFB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406EC5C0 (NtWriteFileGather.c)
 *     AlpcpInitializeCompletionList @ 0x1406F48D8 (AlpcpInitializeCompletionList.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406FCF10 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x14071EAF0 (NtSetEaFile.c)
 *     HalGetAdapterV2 @ 0x140752960 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407B1070 (HalGetAdapterV3.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088B8BC (HvlpDynamicUpdateMicrocode.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088F32C (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x14088F76C (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x1408928F0 (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140894BEC (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x1408AAA54 (PnprInitializeMappingReserve.c)
 *     MiApplyImageHotPatch @ 0x1408C5F5C (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408C928C (MiMapHotPatchImageInSystemSpace.c)
 *     MiLockAndMapEntireDriver @ 0x1408CD4F4 (MiLockAndMapEntireDriver.c)
 *     NtFreeUserPhysicalPages @ 0x1408D3200 (NtFreeUserPhysicalPages.c)
 *     PopReadPagesFromHiberFile @ 0x1408E3AD8 (PopReadPagesFromHiberFile.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x140944EC4 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x140945700 (EtwpSavePersistedLogger.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140958900 (NtPssCaptureVaSpaceBulk.c)
 *     VerifierIoAllocateMdl @ 0x1409C6400 (VerifierIoAllocateMdl.c)
 *     VerifierPortIoAllocateMdl @ 0x1409C6910 (VerifierPortIoAllocateMdl.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1409C7E20 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x1409CA5B4 (ViAllocateMapRegisterFile.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  result = (PMDL)ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x206C644Du);
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
