/*
 * XREFs of MiSufficientAvailablePages @ 0x1402488D0
 * Callers:
 *     MiFindContiguousPages @ 0x140225A90 (MiFindContiguousPages.c)
 *     MiAllocateAccessLog @ 0x140247E40 (MiAllocateAccessLog.c)
 *     MiPrefetchVirtualMemory @ 0x140248300 (MiPrefetchVirtualMemory.c)
 *     MiPickClusterForMappedFileFault @ 0x14025ED3C (MiPickClusterForMappedFileFault.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     CcCanIWriteStreamEx @ 0x1402C1270 (CcCanIWriteStreamEx.c)
 *     MmEnoughMemoryForWrite @ 0x1402C4E58 (MmEnoughMemoryForWrite.c)
 *     MiStoreWriteModifiedPages @ 0x1402D3334 (MiStoreWriteModifiedPages.c)
 *     MiGetPoolPages @ 0x1402E1A7C (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x1402E1CAC (MiRetryNonPagedAllocation.c)
 *     MiGetPageTablePages @ 0x1402E2D70 (MiGetPageTablePages.c)
 *     MiScanPagefiles @ 0x1402F35B8 (MiScanPagefiles.c)
 *     MiComputeZeroClusterMaximum @ 0x1403122A4 (MiComputeZeroClusterMaximum.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiFillNoReservationCluster @ 0x14034D2C8 (MiFillNoReservationCluster.c)
 *     MiStoreSetEvictPageFile @ 0x140353A3C (MiStoreSetEvictPageFile.c)
 *     MiNoPagesLastChance @ 0x14054B328 (MiNoPagesLastChance.c)
 *     MiWaitForFreePage @ 0x140556D5C (MiWaitForFreePage.c)
 *     MiFindLargePageMemory @ 0x1408D6AE4 (MiFindLargePageMemory.c)
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
      if ( dword_140C4DCFC )
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
      if ( v8 >= dword_140C4DCFC )
        goto LABEL_7;
    }
  }
  return 1LL;
}
