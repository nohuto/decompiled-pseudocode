/*
 * XREFs of MiSufficientAvailablePages @ 0x1402A1900
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     CcCanIWriteStreamEx @ 0x14022E440 (CcCanIWriteStreamEx.c)
 *     MmEnoughMemoryForWrite @ 0x140232028 (MmEnoughMemoryForWrite.c)
 *     MiScanPagefiles @ 0x1402402B8 (MiScanPagefiles.c)
 *     MiFindContiguousPages @ 0x14027EAE0 (MiFindContiguousPages.c)
 *     MiAllocateAccessLog @ 0x1402A0E70 (MiAllocateAccessLog.c)
 *     MiPrefetchVirtualMemory @ 0x1402A1330 (MiPrefetchVirtualMemory.c)
 *     MiPickClusterForMappedFileFault @ 0x1402B7D6C (MiPickClusterForMappedFileFault.c)
 *     MiFillNoReservationCluster @ 0x14030FC38 (MiFillNoReservationCluster.c)
 *     MiStoreSetEvictPageFile @ 0x140315BBC (MiStoreSetEvictPageFile.c)
 *     MiGetPoolPages @ 0x140326CB4 (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x140326EE4 (MiRetryNonPagedAllocation.c)
 *     MiGetPageTablePages @ 0x1403290D0 (MiGetPageTablePages.c)
 *     MiComputeZeroClusterMaximum @ 0x1403415DC (MiComputeZeroClusterMaximum.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiStoreWriteModifiedPages @ 0x14034DC5C (MiStoreWriteModifiedPages.c)
 *     MiNoPagesLastChance @ 0x14054ACD8 (MiNoPagesLastChance.c)
 *     MiWaitForFreePage @ 0x14055670C (MiWaitForFreePage.c)
 *     MiFindLargePageMemory @ 0x1408D5794 (MiFindLargePageMemory.c)
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
      if ( dword_140C4DE3C )
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
      if ( v8 >= dword_140C4DE3C )
        goto LABEL_7;
    }
  }
  return 1LL;
}
