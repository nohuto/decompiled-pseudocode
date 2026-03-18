/*
 * XREFs of MiChargeResident @ 0x1403550AC
 * Callers:
 *     MiObtainFaultCharges @ 0x14021B070 (MiObtainFaultCharges.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023E1A4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmChargeResources @ 0x1402C3CA0 (MmChargeResources.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x1403097A4 (MmStoreChargeResidentAvailableForRead.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14030E744 (MmAdjustWorkingSetSizeEx.c)
 *     MmGrowKernelStackEx @ 0x14031B660 (MmGrowKernelStackEx.c)
 *     MmSetHardFaultBehavior @ 0x140321048 (MmSetHardFaultBehavior.c)
 *     MiAcquireNonPagedResources @ 0x140328924 (MiAcquireNonPagedResources.c)
 *     MiObtainSystemCharges @ 0x1403291EC (MiObtainSystemCharges.c)
 *     MmCreateKernelStack @ 0x140354A10 (MmCreateKernelStack.c)
 *     MiChargeForWriteInProgressPage @ 0x140355018 (MiChargeForWriteInProgressPage.c)
 *     MiGetSubsectionCharges @ 0x14054F3D8 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCloneCharges @ 0x140554E94 (MiGetCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14055840C (MiCreateLargePfnList.c)
 *     MiInsertVadCharges @ 0x140633090 (MiInsertVadCharges.c)
 *     MiCreatePagingFileMap @ 0x14063F164 (MiCreatePagingFileMap.c)
 *     MiAllocatePerSessionProtos @ 0x1406E69C8 (MiAllocatePerSessionProtos.c)
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 *     MiConstructLoaderEntry @ 0x1407465D8 (MiConstructLoaderEntry.c)
 *     MiInitializeSystemWorkingSetList @ 0x140771FCC (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x140772420 (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x14077BBF0 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CB320 (MiChargeLargeProtoSubsection.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402A97C0 (MiChargePartitionResidentAvailable.c)
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
