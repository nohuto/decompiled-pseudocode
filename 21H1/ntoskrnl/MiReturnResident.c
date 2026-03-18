/*
 * XREFs of MiReturnResident @ 0x1402D4EFC
 * Callers:
 *     MiRemoveVadCharges @ 0x14062DDB0 (MiRemoveVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x14062DF50 (MiReleaseVadEventBlocks.c)
 *     MiInsertVadCharges @ 0x140633090 (MiInsertVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x1406339B8 (MmCleanProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x14063F164 (MiCreatePagingFileMap.c)
 *     MmDeleteProcessAddressSpace @ 0x14066299C (MmDeleteProcessAddressSpace.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 *     MiFreeInitializationCode @ 0x14074764C (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x14075E7D0 (MiReturnSystemImageCommitment.c)
 *     MiDereferenceSessionFinal @ 0x140763920 (MiDereferenceSessionFinal.c)
 *     MiMarkBootGuardPage @ 0x140781E08 (MiMarkBootGuardPage.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C3B90 (MmReturnChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CB320 (MiChargeLargeProtoSubsection.c)
 *     MiFreePartitionPhysicalPages @ 0x1408D67A0 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReturnResident(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 CachedResidentAvailable; // r8
  bool v5; // zf

  result = (unsigned __int64)&MiSystemPartition;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      for ( ; a2 + CachedResidentAvailable <= 0x100; result = a2 + (int)result )
      {
        if ( a2 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 CachedResidentAvailable + a2,
                                 CachedResidentAvailable);
        v5 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
        CachedResidentAvailable = (int)result;
        if ( v5 )
          return result;
        if ( (_DWORD)result == -1 )
          break;
      }
      if ( (int)CachedResidentAvailable > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 192,
                                 CachedResidentAvailable);
        if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
        {
          result = (unsigned int)(CachedResidentAvailable - 192);
          a2 += (int)result;
        }
      }
    }
  }
  if ( a2 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), a2);
  return result;
}
