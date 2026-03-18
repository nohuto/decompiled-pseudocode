/*
 * XREFs of KeReleaseSpinLock @ 0x1402B1CB0
 * Callers:
 *     FsRtlPrivateLock @ 0x14021E2B0 (FsRtlPrivateLock.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14024E07C (EtwpCancelPendingStackWalkApcs.c)
 *     PopScanIdleList @ 0x1402D6330 (PopScanIdleList.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     PopFxActivateComponentDependents @ 0x140355A50 (PopFxActivateComponentDependents.c)
 *     WmipDeregisterRegEntry @ 0x1403A5AF0 (WmipDeregisterRegEntry.c)
 *     PopFxNotifyPreDIrpIssue @ 0x1403B5A24 (PopFxNotifyPreDIrpIssue.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1404178E8 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1404179B0 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopCopyCompleteReadIrp @ 0x140417DE0 (IopCopyCompleteReadIrp.c)
 *     PoFxAddDeviceRelation @ 0x140419310 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140419580 (PoFxRemoveDeviceRelation.c)
 *     PopFxDeviceRelationsCleanup @ 0x140419798 (PopFxDeviceRelationsCleanup.c)
 *     PopFxNotifyPostDIrpCompletion @ 0x140419AAC (PopFxNotifyPostDIrpCompletion.c)
 *     NtSubmitIoRing @ 0x14055A160 (NtSubmitIoRing.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056E8CC (KiReleaseSpinLockInstrumented.c)
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
