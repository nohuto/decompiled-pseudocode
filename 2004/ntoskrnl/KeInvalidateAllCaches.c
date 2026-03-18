/*
 * XREFs of KeInvalidateAllCaches @ 0x1403A2070
 * Callers:
 *     MiChangePageAttributeBatch @ 0x1402F70C0 (MiChangePageAttributeBatch.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1402F7410 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeFlushIoBuffers @ 0x140338680 (KeFlushIoBuffers.c)
 *     MiChangePageAttributeContiguous @ 0x14035D13C (MiChangePageAttributeContiguous.c)
 *     KeInvalidateRangeAllCaches @ 0x140515C80 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheMdl @ 0x14054F018 (MiFlushCacheMdl.c)
 *     MiFlushCacheRange @ 0x14054F074 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140A52E84 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x14023A250 (KiIpiSendRequestEx.c)
 *     KxSetTimeStampBusy @ 0x140280BB4 (KxSetTimeStampBusy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  __int64 v0; // rdx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v5; // al
  struct _KPRCB *v6; // r10
  _DWORD *v7; // r9
  int v8; // edx
  bool v9; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v0 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v0;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( KxSetTimeStampBusy(&KiCacheFlushTimeStamp, v0) )
  {
    KiIpiSendRequestEx((__int64)CurrentPrcb, 1, 0LL, 0, 6LL, (__int64 (__fastcall *)(__int64))KeSweepLocalCaches, 0LL);
    _InterlockedIncrement(&KiCacheFlushTimeStamp);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v5 = KeGetCurrentIrql();
      if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
      {
        v6 = KeGetCurrentPrcb();
        v7 = v6->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v8 & v7[5]) == 0;
        v7[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 1;
}
