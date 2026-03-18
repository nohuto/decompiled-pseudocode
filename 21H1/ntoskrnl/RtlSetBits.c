/*
 * XREFs of RtlSetBits @ 0x1402E30C0
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x1402272A0 (MiBuildMdlForMappedFileFault.c)
 *     MiStoreSetPageFileRunEvicted @ 0x1403142F0 (MiStoreSetPageFileRunEvicted.c)
 *     MiReduceMappedFileReadBehind @ 0x140316DBC (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x14031991C (MiReduceMappedFileReadAhead.c)
 *     MiGetPrototypePteRanges @ 0x14031AA38 (MiGetPrototypePteRanges.c)
 *     MiSetPageFileAllocationBits @ 0x140320618 (MiSetPageFileAllocationBits.c)
 *     RtlFindClearBitsAndSet @ 0x140338F70 (RtlFindClearBitsAndSet.c)
 *     MiFindFreePageFileSpace @ 0x14034CC50 (MiFindFreePageFileSpace.c)
 *     HalpMmAllocCtxAlloc @ 0x140379D08 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuProcessDeviceEntries @ 0x1404DC2CC (HalpIommuProcessDeviceEntries.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404DF240 (HsaUpdateRemappingTableEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x14053CFB0 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x14053D570 (MiExtendPagingFileMaximum.c)
 *     SepGetLowBoxNumberEntry @ 0x140678498 (SepGetLowBoxNumberEntry.c)
 *     HvpAddFreeCellHint @ 0x140698D84 (HvpAddFreeCellHint.c)
 *     HvCheckBin @ 0x140698E30 (HvCheckBin.c)
 *     HvpRemoveFreeCellHint @ 0x140699840 (HvpRemoveFreeCellHint.c)
 *     HvpMarkDirty @ 0x140699C70 (HvpMarkDirty.c)
 *     SepAddLuidToIndexEntry @ 0x1406F7914 (SepAddLuidToIndexEntry.c)
 *     MiLockdownSections @ 0x140746D6C (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x140746EF8 (RtlMarkExceptionHandlingPages.c)
 *     MiReserveDriverPtes @ 0x14074881C (MiReserveDriverPtes.c)
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x140791858 (CmpMountPreloadedHives.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140860E00 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x140861054 (HalpIrtAllocateIndex.c)
 *     HvpUpdateRecoveryVector @ 0x14087D5D8 (HvpUpdateRecoveryVector.c)
 *     PopSetBootPhaseRange @ 0x1409920C8 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x14099210C (PopDiscardRange.c)
 *     PopCloneRange @ 0x140992128 (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x1409922F0 (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x1409AA35C (PnprMirrorMarkedPages.c)
 *     ViAllocateContiguousMemory @ 0x1409CA38C (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x140A43BF8 (MiInitializeTopLevelBitmap.c)
 *     MiReserveBootDriverPtes @ 0x140A5F908 (MiReserveBootDriverPtes.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
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
      v7 = byte_14001D830[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_14001A5B0[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14001D830[v6];
      goto LABEL_4;
    }
  }
}
