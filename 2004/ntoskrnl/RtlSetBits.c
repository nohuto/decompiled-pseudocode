/*
 * XREFs of RtlSetBits @ 0x1402D6370
 * Callers:
 *     RtlFindClearBitsAndSet @ 0x140269270 (RtlFindClearBitsAndSet.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402B9F20 (MiBuildMdlForMappedFileFault.c)
 *     MiFindFreePageFileSpace @ 0x14030F5B4 (MiFindFreePageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x140310538 (MiSetPageFileAllocationBits.c)
 *     MiReduceMappedFileReadAhead @ 0x14034930C (MiReduceMappedFileReadAhead.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140352140 (MiStoreSetPageFileRunEvicted.c)
 *     MiReduceMappedFileReadBehind @ 0x14035486C (MiReduceMappedFileReadBehind.c)
 *     MiGetPrototypePteRanges @ 0x1403584E8 (MiGetPrototypePteRanges.c)
 *     HalpMmAllocCtxAlloc @ 0x14037AA88 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuProcessDeviceEntries @ 0x1404DC7DC (HalpIommuProcessDeviceEntries.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404DF800 (HsaUpdateRemappingTableEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x14053D600 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x14053DBC0 (MiExtendPagingFileMaximum.c)
 *     SepAddLuidToIndexEntry @ 0x140614528 (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140631C0C (SepGetLowBoxNumberEntry.c)
 *     HvpAddFreeCellHint @ 0x14069EE54 (HvpAddFreeCellHint.c)
 *     HvCheckBin @ 0x14069EF00 (HvCheckBin.c)
 *     HvpRemoveFreeCellHint @ 0x14069F910 (HvpRemoveFreeCellHint.c)
 *     HvpMarkDirty @ 0x14069FD40 (HvpMarkDirty.c)
 *     MiLockdownSections @ 0x1407488EC (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x140748A78 (RtlMarkExceptionHandlingPages.c)
 *     MiReserveDriverPtes @ 0x14074A39C (MiReserveDriverPtes.c)
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x140790834 (CmpMountPreloadedHives.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140862100 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x140862354 (HalpIrtAllocateIndex.c)
 *     HvpUpdateRecoveryVector @ 0x14087ECA0 (HvpUpdateRecoveryVector.c)
 *     PopSetBootPhaseRange @ 0x140993708 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x14099374C (PopDiscardRange.c)
 *     PopCloneRange @ 0x140993768 (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x140993930 (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x1409AB1BC (PnprMirrorMarkedPages.c)
 *     ViAllocateContiguousMemory @ 0x1409CA39C (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x140A49458 (MiInitializeTopLevelBitmap.c)
 *     MiReserveBootDriverPtes @ 0x140A62A08 (MiReserveBootDriverPtes.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
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
      v7 = byte_14001D960[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_14001A6F0[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14001D960[v6];
      goto LABEL_4;
    }
  }
}
