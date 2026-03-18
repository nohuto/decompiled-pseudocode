/*
 * XREFs of KeReleaseSpinLock @ 0x140322B60
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140269E64 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x14028FD10 (NtSetInformationFile.c)
 *     FsRtlPrivateLock @ 0x1402D6BF0 (FsRtlPrivateLock.c)
 *     PnpDeviceActionWorker @ 0x14036DEC0 (PnpDeviceActionWorker.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x1403EC87C (HalpDmaFindAdapterByDeviceId.c)
 *     PopCaptureSleepStudyStatistics @ 0x14056B118 (PopCaptureSleepStudyStatistics.c)
 *     VfPutDmaAdapter @ 0x1409C9C20 (VfPutDmaAdapter.c)
 *     ViCreateProcessCallbackInternal @ 0x1409D9A94 (ViCreateProcessCallbackInternal.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x140511528 (KiReleaseSpinLockInstrumented.c)
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
