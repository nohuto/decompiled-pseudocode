/*
 * XREFs of MiSufficientAvailablePages @ 0x140275470
 * Callers:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiStoreWriteModifiedPages @ 0x140266950 (MiStoreWriteModifiedPages.c)
 *     MiScanPagefiles @ 0x1402732EC (MiScanPagefiles.c)
 *     MiComputeZeroClusterMaximum @ 0x14027449C (MiComputeZeroClusterMaximum.c)
 *     MmEnoughMemoryForWrite @ 0x140274618 (MmEnoughMemoryForWrite.c)
 *     MiGetPoolPages @ 0x140274A0C (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x140274C3C (MiRetryNonPagedAllocation.c)
 *     MiAllocateAccessLog @ 0x140274CE0 (MiAllocateAccessLog.c)
 *     MiPrefetchVirtualMemory @ 0x140274EA0 (MiPrefetchVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiFillNoReservationCluster @ 0x1402BF8A0 (MiFillNoReservationCluster.c)
 *     MiStoreSetEvictPageFile @ 0x1402C51BC (MiStoreSetEvictPageFile.c)
 *     MiGetPageTablePages @ 0x1402E59A0 (MiGetPageTablePages.c)
 *     MiFindContiguousPages @ 0x1403016E0 (MiFindContiguousPages.c)
 *     CcCanIWriteStreamEx @ 0x1403134D0 (CcCanIWriteStreamEx.c)
 *     MiPickClusterForMappedFileFault @ 0x140319C70 (MiPickClusterForMappedFileFault.c)
 *     MiNoPagesLastChance @ 0x1405507C8 (MiNoPagesLastChance.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 *     MiFindLargePageMemory @ 0x1408DA0E4 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSufficientAvailablePages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v5; // r9
  unsigned __int16 **i; // rcx
  unsigned __int16 *v7; // rdx
  unsigned int v8; // r10d

  v2 = *(_QWORD *)(a1 + 7104);
  if ( v2 < a2 )
  {
    v5 = 0LL;
    for ( i = (unsigned __int16 **)(a1 + 4200); ; ++i )
    {
      v7 = *i;
      v8 = 0;
      if ( dword_140C4DEFC )
        break;
LABEL_7:
      if ( ++v5 > 1 )
        return 0LL;
    }
    while ( 1 )
    {
      v2 += *v7;
      if ( v2 >= a2 )
        break;
      ++v8;
      v7 += 8;
      if ( v8 >= dword_140C4DEFC )
        goto LABEL_7;
    }
  }
  return 1LL;
}
