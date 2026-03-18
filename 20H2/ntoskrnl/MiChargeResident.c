/*
 * XREFs of MiChargeResident @ 0x140344234
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14025722C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiObtainFaultCharges @ 0x14027D270 (MiObtainFaultCharges.c)
 *     MmCreateKernelStack @ 0x1402AD970 (MmCreateKernelStack.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031CBE4 (MmAdjustWorkingSetSizeEx.c)
 *     MmGrowKernelStackEx @ 0x1403299E0 (MmGrowKernelStackEx.c)
 *     MmSetHardFaultBehavior @ 0x14032F7F8 (MmSetHardFaultBehavior.c)
 *     MiObtainSystemCharges @ 0x14033699C (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x140336B70 (MiAcquireNonPagedResources.c)
 *     MiChargeForWriteInProgressPage @ 0x1403441A0 (MiChargeForWriteInProgressPage.c)
 *     MmChargeResources @ 0x14035751C (MmChargeResources.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x1403588D4 (MmStoreChargeResidentAvailableForRead.c)
 *     MiGetSubsectionCharges @ 0x1405533F8 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCloneCharges @ 0x140558EB4 (MiGetCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14055C42C (MiCreateLargePfnList.c)
 *     MiInsertVadCharges @ 0x1406239C0 (MiInsertVadCharges.c)
 *     MiCreatePagingFileMap @ 0x1406826EC (MiCreatePagingFileMap.c)
 *     MiAllocatePerSessionProtos @ 0x1406DCC38 (MiAllocatePerSessionProtos.c)
 *     MmCreateProcessAddressSpace @ 0x1406ED8E8 (MmCreateProcessAddressSpace.c)
 *     MiConstructLoaderEntry @ 0x140756D38 (MiConstructLoaderEntry.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407829DC (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x140782E30 (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x140792150 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x1408D24B0 (MiChargeLargeProtoSubsection.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14031056C (MiChargePartitionResidentAvailable.c)
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
