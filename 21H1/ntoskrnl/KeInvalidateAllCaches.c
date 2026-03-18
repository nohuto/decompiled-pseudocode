/*
 * XREFs of KeInvalidateAllCaches @ 0x1403A18E0
 * Callers:
 *     KeFlushIoBuffers @ 0x1402FB650 (KeFlushIoBuffers.c)
 *     MiChangePageAttributeContiguous @ 0x14031F698 (MiChangePageAttributeContiguous.c)
 *     MiChangePageAttributeBatch @ 0x1403530A0 (MiChangePageAttributeBatch.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1403533F0 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateRangeAllCaches @ 0x140515630 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheMdl @ 0x14054E9C8 (MiFlushCacheMdl.c)
 *     MiFlushCacheRange @ 0x14054EA24 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140A4D184 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x1402444B4 (KxSetTimeStampBusy.c)
 *     KiIpiSendRequestEx @ 0x1402932A0 (KiIpiSendRequestEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
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
  CurrentPrcb = KeGetCurrentPrcb();
  if ( KxSetTimeStampBusy(&KiCacheFlushTimeStamp) )
  {
    KiIpiSendRequestEx((__int64)CurrentPrcb, 1, 0LL, 0, 6LL, (__int64 (__fastcall *)(__int64))KeSweepLocalCaches, 0LL);
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
