/*
 * XREFs of IoAllocateMdl @ 0x140248500
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14020A0F0 (IopBuildDeviceIoControlRequest.c)
 *     CcZeroDataInCache @ 0x140240E98 (CcZeroDataInCache.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x14030C860 (HalBuildMdlFromScatterGatherListV2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140318510 (IopBuildAsynchronousFsdRequest.c)
 *     MiZeroPageWrite @ 0x14031E678 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x14032B1B0 (CcPrepareMdlWrite.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039FD78 (HalpDmaCheckMdlAccessibility.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F0F00 (IopAllocateAndPopulateWriteIrp.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x1404C41A0 (HalBuildMdlFromScatterGatherListV3.c)
 *     CcLockSystemCacheBuffer @ 0x1404E8918 (CcLockSystemCacheBuffer.c)
 *     HvlGetCoverageData @ 0x1404EFCB8 (HvlGetCoverageData.c)
 *     MmAllocateMdlForIoSpace @ 0x1405303D0 (MmAllocateMdlForIoSpace.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053D0CC (MiPrepareImagePagesForHotPatch.c)
 *     IopReadFile @ 0x1405CC21C (IopReadFile.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D4A78 (WbMakeUserDataPagesKernelWritable.c)
 *     NtWriteFile @ 0x1405F84C0 (NtWriteFile.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA070 (BuildQueryDirectoryIrp.c)
 *     IopXxxControlFile @ 0x14060FB00 (IopXxxControlFile.c)
 *     CcMdlRead @ 0x140657870 (CcMdlRead.c)
 *     FsRtlKernelFsControlFile @ 0x1406B4540 (FsRtlKernelFsControlFile.c)
 *     NtQueryEaFile @ 0x1406BE550 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406C05A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406C0D40 (NtWriteFileGather.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406CFAE0 (NtNotifyChangeDirectoryFileEx.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406E1A68 (WbMakeUserExecutablePagesKernelWritable.c)
 *     MiCreateMdl @ 0x140708B28 (MiCreateMdl.c)
 *     AlpcpInitializeCompletionList @ 0x14070FBF4 (AlpcpInitializeCompletionList.c)
 *     NtSetEaFile @ 0x14072C980 (NtSetEaFile.c)
 *     HalGetAdapterV2 @ 0x140761540 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407BEFB0 (HalGetAdapterV3.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14089140C (HvlpDynamicUpdateMicrocode.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140894DEC (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140895254 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x140898570 (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14089A89C (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x1408B0584 (PnprInitializeMappingReserve.c)
 *     MiApplyImageHotPatch @ 0x1408CBD9C (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408CF0CC (MiMapHotPatchImageInSystemSpace.c)
 *     MiLockAndMapEntireDriver @ 0x1408D3334 (MiLockAndMapEntireDriver.c)
 *     NtFreeUserPhysicalPages @ 0x1408D9040 (NtFreeUserPhysicalPages.c)
 *     PopReadPagesFromHiberFile @ 0x1408E96EC (PopReadPagesFromHiberFile.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x14094AC84 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x14094B4C0 (EtwpSavePersistedLogger.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095E6C0 (NtPssCaptureVaSpaceBulk.c)
 *     VerifierIoAllocateMdl @ 0x1409CC420 (VerifierIoAllocateMdl.c)
 *     VerifierPortIoAllocateMdl @ 0x1409CC930 (VerifierPortIoAllocateMdl.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1409CDE40 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x1409D05D4 (ViAllocateMapRegisterFile.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
