/*
 * XREFs of KeReleaseSpinLock @ 0x14021E6F0
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x14020B5C0 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x14020FE90 (NtSetInformationFile.c)
 *     FsRtlPrivateLock @ 0x1402F8A80 (FsRtlPrivateLock.c)
 *     PnpDeviceActionWorker @ 0x14036EB50 (PnpDeviceActionWorker.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x1403EF3A4 (HalpDmaFindAdapterByDeviceId.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1403F0294 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1403F035C (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopCopyCompleteReadIrp @ 0x1403F0900 (IopCopyCompleteReadIrp.c)
 *     PopCaptureSleepStudyStatistics @ 0x14056EB48 (PopCaptureSleepStudyStatistics.c)
 *     VfPutDmaAdapter @ 0x1409CFC40 (VfPutDmaAdapter.c)
 *     ViCreateProcessCallbackInternal @ 0x1409DFAB4 (ViCreateProcessCallbackInternal.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x140514E58 (KiReleaseSpinLockInstrumented.c)
 */

void __stdcall KeReleaseSpinLock(PKSPIN_LOCK SpinLock, KIRQL NewIrql)
{
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v5; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v7; // r10
  _DWORD *v8; // r9
  int v9; // eax
  bool v10; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = NewIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(SpinLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)SpinLock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v5 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v5;
      if ( !v5 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        v7 = KeGetCurrentPrcb();
        v8 = v7->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v10 = (v9 & v8[5]) == 0;
        v8[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(v7);
      }
    }
  }
  __writecr8(v2);
}
