/*
 * XREFs of MiChargeResident @ 0x1402F90CC
 * Callers:
 *     MiObtainFaultCharges @ 0x1402ADCF0 (MiObtainFaultCharges.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D0FD4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiAcquireNonPagedResources @ 0x1402E25C4 (MiAcquireNonPagedResources.c)
 *     MiObtainSystemCharges @ 0x1402E2E8C (MiObtainSystemCharges.c)
 *     MmCreateKernelStack @ 0x1402F8A30 (MmCreateKernelStack.c)
 *     MiChargeForWriteInProgressPage @ 0x1402F9038 (MiChargeForWriteInProgressPage.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x140303C54 (MmStoreChargeResidentAvailableForRead.c)
 *     MmChargeResources @ 0x140305F50 (MmChargeResources.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14034BC24 (MmAdjustWorkingSetSizeEx.c)
 *     MmGrowKernelStackEx @ 0x140359230 (MmGrowKernelStackEx.c)
 *     MmSetHardFaultBehavior @ 0x14035EB08 (MmSetHardFaultBehavior.c)
 *     MiGetSubsectionCharges @ 0x14054FA28 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1405554E4 (MiGetCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x140558A5C (MiCreateLargePfnList.c)
 *     MiInsertVadCharges @ 0x1405FE050 (MiInsertVadCharges.c)
 *     MiCreatePagingFileMap @ 0x14060A014 (MiCreatePagingFileMap.c)
 *     MmCreateProcessAddressSpace @ 0x1406ABD7C (MmCreateProcessAddressSpace.c)
 *     MiAllocatePerSessionProtos @ 0x14070A848 (MiAllocatePerSessionProtos.c)
 *     MiConstructLoaderEntry @ 0x140748158 (MiConstructLoaderEntry.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407743DC (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x140774830 (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x1407845F0 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CC670 (MiChargeLargeProtoSubsection.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140250790 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeResident(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r11
  unsigned __int64 CachedResidentAvailable; // r10
  bool v5; // zf
  unsigned __int32 v6; // eax

  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a2 <= CachedResidentAvailable && (_DWORD)CachedResidentAvailable != -1 )
    {
      v6 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
             CachedResidentAvailable - a2,
             CachedResidentAvailable);
      v5 = (_DWORD)CachedResidentAvailable == v6;
      CachedResidentAvailable = v6;
      if ( v5 )
        return 1LL;
    }
  }
  return MiChargePartitionResidentAvailable((__int64)a1, a2, a3);
}
