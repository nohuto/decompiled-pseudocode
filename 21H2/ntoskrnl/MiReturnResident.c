/*
 * XREFs of MiReturnResident @ 0x140273F7C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x14067C848 (MmDeleteProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x1406861B8 (MiCreatePagingFileMap.c)
 *     MmCreateProcessAddressSpace @ 0x1406A77C4 (MmCreateProcessAddressSpace.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MmCleanProcessAddressSpace @ 0x14070262C (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x1407045D0 (MiRemoveVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x140704770 (MiReleaseVadEventBlocks.c)
 *     MiFreeInitializationCode @ 0x14075EE2C (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x140773400 (MiReturnSystemImageCommitment.c)
 *     MiDereferenceSessionFinal @ 0x1407784E0 (MiDereferenceSessionFinal.c)
 *     MiMarkBootGuardPage @ 0x14079FBBC (MiMarkBootGuardPage.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C8640 (MmReturnChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CFDD0 (MiChargeLargeProtoSubsection.c)
 *     MiFreePartitionPhysicalPages @ 0x1408DB250 (MiFreePartitionPhysicalPages.c)
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
