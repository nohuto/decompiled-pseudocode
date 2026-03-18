/*
 * XREFs of MiSufficientAvailablePages @ 0x14022DC70
 * Callers:
 *     MiAllocateAccessLog @ 0x14022D1E0 (MiAllocateAccessLog.c)
 *     MiPrefetchVirtualMemory @ 0x14022D6A0 (MiPrefetchVirtualMemory.c)
 *     MiPickClusterForMappedFileFault @ 0x1402323EC (MiPickClusterForMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiComputeZeroClusterMaximum @ 0x14023C1EC (MiComputeZeroClusterMaximum.c)
 *     MiScanPagefiles @ 0x140265F58 (MiScanPagefiles.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     CcCanIWriteStreamEx @ 0x14029AAB0 (CcCanIWriteStreamEx.c)
 *     MiFillNoReservationCluster @ 0x14031E248 (MiFillNoReservationCluster.c)
 *     MiStoreSetEvictPageFile @ 0x1403245AC (MiStoreSetEvictPageFile.c)
 *     MiGetPoolPages @ 0x140333D10 (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x140333F40 (MiRetryNonPagedAllocation.c)
 *     MiGetPageTablePages @ 0x140336880 (MiGetPageTablePages.c)
 *     MiStoreWriteModifiedPages @ 0x140342AB0 (MiStoreWriteModifiedPages.c)
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MmEnoughMemoryForWrite @ 0x1403541BC (MmEnoughMemoryForWrite.c)
 *     MiNoPagesLastChance @ 0x14054ECF8 (MiNoPagesLastChance.c)
 *     MiWaitForFreePage @ 0x14055A72C (MiWaitForFreePage.c)
 *     MiFindLargePageMemory @ 0x1408DC924 (MiFindLargePageMemory.c)
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
      if ( dword_140C4DD7C )
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
      if ( v8 >= dword_140C4DD7C )
        goto LABEL_7;
    }
  }
  return 1LL;
}
