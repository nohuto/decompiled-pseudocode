/*
 * XREFs of MiReturnResident @ 0x140296E9C
 * Callers:
 *     MiCreatePagingFileMap @ 0x14061C548 (MiCreatePagingFileMap.c)
 *     MmDeleteProcessAddressSpace @ 0x140682D54 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1406D04E4 (MmCreateProcessAddressSpace.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MmCleanProcessAddressSpace @ 0x1406EB24C (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x1406ECC70 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x1406ED1F0 (MiRemoveVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x1406ED390 (MiReleaseVadEventBlocks.c)
 *     MiFreeInitializationCode @ 0x14075EC6C (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x140773240 (MiReturnSystemImageCommitment.c)
 *     MiDereferenceSessionFinal @ 0x140778320 (MiDereferenceSessionFinal.c)
 *     MiMarkBootGuardPage @ 0x14079F9BC (MiMarkBootGuardPage.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C84E0 (MmReturnChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CFC70 (MiChargeLargeProtoSubsection.c)
 *     MiFreePartitionPhysicalPages @ 0x1408DB0F0 (MiFreePartitionPhysicalPages.c)
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
