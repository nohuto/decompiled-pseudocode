/*
 * XREFs of RtlSetBits @ 0x140343250
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14029C170 (MiBuildMdlForMappedFileFault.c)
 *     RtlFindClearBitsAndSet @ 0x1402E3170 (RtlFindClearBitsAndSet.c)
 *     MiGetPrototypePteRanges @ 0x140319788 (MiGetPrototypePteRanges.c)
 *     MiReduceMappedFileReadAhead @ 0x140319F10 (MiReduceMappedFileReadAhead.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140322B90 (MiStoreSetPageFileRunEvicted.c)
 *     MiReduceMappedFileReadBehind @ 0x14032552C (MiReduceMappedFileReadBehind.c)
 *     MiFindFreePageFileSpace @ 0x14033A15C (MiFindFreePageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x14033B0E0 (MiSetPageFileAllocationBits.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C7B8 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuProcessDeviceEntries @ 0x1404DFD6C (HalpIommuProcessDeviceEntries.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404E2D90 (HsaUpdateRemappingTableEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x140540FD0 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x140541590 (MiExtendPagingFileMaximum.c)
 *     SepGetLowBoxNumberEntry @ 0x14068E0C8 (SepGetLowBoxNumberEntry.c)
 *     SepAddLuidToIndexEntry @ 0x14068F8A0 (SepAddLuidToIndexEntry.c)
 *     HvpAddFreeCellHint @ 0x1407071B4 (HvpAddFreeCellHint.c)
 *     HvCheckBin @ 0x140707260 (HvCheckBin.c)
 *     HvpRemoveFreeCellHint @ 0x140707930 (HvpRemoveFreeCellHint.c)
 *     HvpMarkDirty @ 0x140707D60 (HvpMarkDirty.c)
 *     MiLockdownSections @ 0x1407574CC (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x140757658 (RtlMarkExceptionHandlingPages.c)
 *     MiReserveDriverPtes @ 0x140758F7C (MiReserveDriverPtes.c)
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407A0B34 (CmpMountPreloadedHives.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140867B20 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x140867D74 (HalpIrtAllocateIndex.c)
 *     HvpUpdateRecoveryVector @ 0x140884868 (HvpUpdateRecoveryVector.c)
 *     PopSetBootPhaseRange @ 0x140999868 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x1409998AC (PopDiscardRange.c)
 *     PopCloneRange @ 0x1409998C8 (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x140999A90 (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x1409B112C (PnprMirrorMarkedPages.c)
 *     ViAllocateContiguousMemory @ 0x1409D03BC (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x140A4F6E8 (MiInitializeTopLevelBitmap.c)
 *     MiReserveBootDriverPtes @ 0x140A69DC8 (MiReserveBootDriverPtes.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

void __stdcall RtlSetBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToSet )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToSet;
    if ( (unsigned int)v4 + NumberToSet <= 8 )
    {
      v7 = byte_14001DA60[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_14001A7F0[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14001DA60[v6];
      goto LABEL_4;
    }
  }
}
