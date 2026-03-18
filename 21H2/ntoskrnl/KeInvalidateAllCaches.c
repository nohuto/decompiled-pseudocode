/*
 * XREFs of KeInvalidateAllCaches @ 0x140259C80
 * Callers:
 *     KeFlushIoBuffers @ 0x140232370 (KeFlushIoBuffers.c)
 *     MiChangePageAttributeBatch @ 0x1402680C0 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttributeContiguous @ 0x14026873C (MiChangePageAttributeContiguous.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140268B50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiFlushCacheMdl @ 0x140398948 (MiFlushCacheMdl.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x140419138 (MiRemovePhysicalMemoryBatchComplete.c)
 *     KeInvalidateRangeAllCaches @ 0x140570E60 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheRange @ 0x1405B2400 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140B08B40 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x140240404 (KxSetTimeStampBusy.c)
 *     KiIpiSendRequestEx @ 0x1402F42D4 (KiIpiSendRequestEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int CurrentPrcb; // esi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v4; // al
  struct _KPRCB *v5; // r10
  _DWORD *v6; // r9
  int v7; // edx
  bool v8; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  CurrentPrcb = (unsigned int)KeGetCurrentPrcb();
  if ( KxSetTimeStampBusy(&KiCacheFlushTimeStamp) )
  {
    KiIpiSendRequestEx(CurrentPrcb, 1, 0, 0, 6LL, (__int64)KeSweepLocalCaches, 0LL);
    _InterlockedIncrement(&KiCacheFlushTimeStamp);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v4 = KeGetCurrentIrql();
      if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
      {
        v5 = KeGetCurrentPrcb();
        v6 = v5->SchedulerAssist;
        v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v8 = (v7 & v6[5]) == 0;
        v6[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(v5);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 1;
}
