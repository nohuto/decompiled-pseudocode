/*
 * XREFs of MiChargeResident @ 0x14027BBC8
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14023C7DC (MmAdjustWorkingSetSizeEx.c)
 *     MmGrowKernelStackEx @ 0x1402497C0 (MmGrowKernelStackEx.c)
 *     MmSetHardFaultBehavior @ 0x14024FC68 (MmSetHardFaultBehavior.c)
 *     MiChargeForWriteInProgressPage @ 0x14027BB34 (MiChargeForWriteInProgressPage.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14028AD2C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmChargeResources @ 0x14028FD5C (MmChargeResources.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x140291C04 (MmStoreChargeResidentAvailableForRead.c)
 *     MiObtainSystemCharges @ 0x140296E0C (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 *     MiObtainFaultCharges @ 0x1402C0390 (MiObtainFaultCharges.c)
 *     MmCreateKernelStack @ 0x1403352B0 (MmCreateKernelStack.c)
 *     MiGetSubsectionCharges @ 0x140555108 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14055ABC4 (MiGetCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14055E13C (MiCreateLargePfnList.c)
 *     MiAllocatePerSessionProtos @ 0x14061BC08 (MiAllocatePerSessionProtos.c)
 *     MiCreatePagingFileMap @ 0x1406861B8 (MiCreatePagingFileMap.c)
 *     MmCreateProcessAddressSpace @ 0x1406A77C4 (MmCreateProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 *     MiConstructLoaderEntry @ 0x14075DF90 (MiConstructLoaderEntry.c)
 *     MiInitializeSystemWorkingSetList @ 0x14078697C (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x140786DD0 (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x140792E70 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CFDD0 (MiChargeLargeProtoSubsection.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14022F028 (MiChargePartitionResidentAvailable.c)
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
