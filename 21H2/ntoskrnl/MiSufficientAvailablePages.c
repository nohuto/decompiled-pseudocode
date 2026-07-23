/*
 * XREFs of MiSufficientAvailablePages @ 0x140263410
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiFillNoReservationCluster @ 0x14023DCF0 (MiFillNoReservationCluster.c)
 *     MiStoreSetEvictPageFile @ 0x14024373C (MiStoreSetEvictPageFile.c)
 *     MiStoreWriteModifiedPages @ 0x1402548F0 (MiStoreWriteModifiedPages.c)
 *     MiScanPagefiles @ 0x14026128C (MiScanPagefiles.c)
 *     MiComputeZeroClusterMaximum @ 0x14026243C (MiComputeZeroClusterMaximum.c)
 *     MmEnoughMemoryForWrite @ 0x1402625B8 (MmEnoughMemoryForWrite.c)
 *     MiGetPoolPages @ 0x1402629AC (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x140262BDC (MiRetryNonPagedAllocation.c)
 *     MiAllocateAccessLog @ 0x140262C80 (MiAllocateAccessLog.c)
 *     MiPrefetchVirtualMemory @ 0x140262E40 (MiPrefetchVirtualMemory.c)
 *     MiGetPageTablePages @ 0x140296CF0 (MiGetPageTablePages.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     CcCanIWriteStreamEx @ 0x14031E220 (CcCanIWriteStreamEx.c)
 *     MiPickClusterForMappedFileFault @ 0x1403249C0 (MiPickClusterForMappedFileFault.c)
 *     MiNoPagesLastChance @ 0x140550A08 (MiNoPagesLastChance.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
 *     MiFindLargePageMemory @ 0x1408DA244 (MiFindLargePageMemory.c)
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
      if ( dword_140C4DF3C )
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
      if ( v8 >= dword_140C4DF3C )
        goto LABEL_7;
    }
  }
  return 1LL;
}
