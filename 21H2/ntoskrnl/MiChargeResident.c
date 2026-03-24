/*
 * XREFs of MiChargeResident @ 0x14025A658
 * Callers:
 *     MiObtainFaultCharges @ 0x14021BA90 (MiObtainFaultCharges.c)
 *     MiChargeForWriteInProgressPage @ 0x14025A5C4 (MiChargeForWriteInProgressPage.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402BE19C (MmAdjustWorkingSetSizeEx.c)
 *     MmGrowKernelStackEx @ 0x1402CAED0 (MmGrowKernelStackEx.c)
 *     MmSetHardFaultBehavior @ 0x1402D1848 (MmSetHardFaultBehavior.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D99DC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmChargeResources @ 0x1402DEA0C (MmChargeResources.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x1402E08B4 (MmStoreChargeResidentAvailableForRead.c)
 *     MiObtainSystemCharges @ 0x1402E5ABC (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x1402E5C90 (MiAcquireNonPagedResources.c)
 *     MmCreateKernelStack @ 0x14032A560 (MmCreateKernelStack.c)
 *     MiGetSubsectionCharges @ 0x140554EC8 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14055A984 (MiGetCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14055DEFC (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x14061C548 (MiCreatePagingFileMap.c)
 *     MiAllocatePerSessionProtos @ 0x1406BCA38 (MiAllocatePerSessionProtos.c)
 *     MmCreateProcessAddressSpace @ 0x1406D04E4 (MmCreateProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x1406ECC70 (MiInsertVadCharges.c)
 *     MiConstructLoaderEntry @ 0x14075DDD0 (MiConstructLoaderEntry.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407867BC (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x140786C10 (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x1407918C0 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CFC70 (MiChargeLargeProtoSubsection.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402B0CC8 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeResident(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // r11
  unsigned __int64 CachedResidentAvailable; // r10
  bool v6; // zf
  unsigned __int32 v7; // eax

  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a2 <= CachedResidentAvailable && (_DWORD)CachedResidentAvailable != -1 )
    {
      v7 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
             CachedResidentAvailable - a2,
             CachedResidentAvailable);
      v6 = (_DWORD)CachedResidentAvailable == v7;
      CachedResidentAvailable = v7;
      if ( v6 )
        return 1LL;
    }
  }
  return MiChargePartitionResidentAvailable(a1, a2, a3, a4);
}
