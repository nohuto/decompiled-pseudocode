/*
 * XREFs of MiChargeResident @ 0x1402821F4
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140238330 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmSetHardFaultBehavior @ 0x140238AD8 (MmSetHardFaultBehavior.c)
 *     MmGrowKernelStackEx @ 0x14024E3F0 (MmGrowKernelStackEx.c)
 *     MmChargeResources @ 0x140262F20 (MmChargeResources.c)
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MiObtainSystemCharges @ 0x14027D190 (MiObtainSystemCharges.c)
 *     MiChargeForWriteInProgressPage @ 0x140282160 (MiChargeForWriteInProgressPage.c)
 *     MmCreateKernelStack @ 0x1402F4B70 (MmCreateKernelStack.c)
 *     MiObtainFaultCharges @ 0x140329630 (MiObtainFaultCharges.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14036D62C (MmAdjustWorkingSetSizeEx.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x1403B1A00 (MmStoreChargeResidentAvailableForRead.c)
 *     MmCreateKernelShadowStack @ 0x1405A5990 (MmCreateKernelShadowStack.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1405BAFB0 (MiGetCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x1405C14D4 (MiCreateLargePfnList.c)
 *     MiGetSubsectionCharges @ 0x1405C4980 (MiGetSubsectionCharges.c)
 *     MiAllocatePerSessionProtos @ 0x1406DDC90 (MiAllocatePerSessionProtos.c)
 *     MiCreatePagingFileMap @ 0x1406F3A44 (MiCreatePagingFileMap.c)
 *     MiConstructLoaderEntry @ 0x14075F4A4 (MiConstructLoaderEntry.c)
 *     MiInitializePartialVad @ 0x14079D7A8 (MiInitializePartialVad.c)
 *     MiInsertVadCharges @ 0x1407B88C0 (MiInsertVadCharges.c)
 *     MmCreateProcessAddressSpace @ 0x1407F17B4 (MmCreateProcessAddressSpace.c)
 *     MiSessionCreateInternal @ 0x1407F336C (MiSessionCreateInternal.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407F35F8 (MiInitializeSystemWorkingSetList.c)
 *     MmObtainChargesToLockPagedPool @ 0x14081D080 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x14096FE9C (MiChargeLargeProtoSubsection.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14028DC40 (MiChargePartitionResidentAvailable.c)
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
  return MiChargePartitionResidentAvailable(a1, a2, a3);
}
