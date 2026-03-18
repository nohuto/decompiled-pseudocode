/*
 * XREFs of MiReturnResident @ 0x14026307C
 * Callers:
 *     MiInsertVadCharges @ 0x1406239C0 (MiInsertVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 *     MiRemoveVadCharges @ 0x1406247E0 (MiRemoveVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x140624980 (MiReleaseVadEventBlocks.c)
 *     MmDeleteProcessAddressSpace @ 0x140660164 (MmDeleteProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x1406826EC (MiCreatePagingFileMap.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MmCreateProcessAddressSpace @ 0x1406ED8E8 (MmCreateProcessAddressSpace.c)
 *     MiFreeInitializationCode @ 0x140757DAC (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x14076F1B0 (MiReturnSystemImageCommitment.c)
 *     MiDereferenceSessionFinal @ 0x140774370 (MiDereferenceSessionFinal.c)
 *     MiMarkBootGuardPage @ 0x14079549C (MiMarkBootGuardPage.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408CAD20 (MmReturnChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x1408D24B0 (MiChargeLargeProtoSubsection.c)
 *     MiFreePartitionPhysicalPages @ 0x1408DD930 (MiFreePartitionPhysicalPages.c)
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
