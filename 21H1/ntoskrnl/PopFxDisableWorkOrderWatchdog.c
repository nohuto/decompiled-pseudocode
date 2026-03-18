/*
 * XREFs of PopFxDisableWorkOrderWatchdog @ 0x1402D7C94
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x1402D7B3C (PopFxDispatchPluginWorkOnce.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x140564A5C (PopFxCompleteDirectedPowerTransition.c)
 * Callees:
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x1405638EC (PopFxBugCheck.c)
 */

void __fastcall PopFxDisableWorkOrderWatchdog(__int64 *BugCheckParameter2)
{
  KIRQL v2; // al
  __int64 *v3; // rdx
  unsigned __int64 v4; // rdi
  __int64 **v5; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  if ( BugCheckParameter2 )
  {
    if ( !KeCancelTimer((PKTIMER)(BugCheckParameter2 + 2)) )
      PopFxBugCheck(0x618uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter2[21], 0LL);
    v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkOrderLock);
    BugCheckParameter2[21] = 0LL;
    BugCheckParameter2[19] = 0LL;
    v3 = (__int64 *)*BugCheckParameter2;
    v4 = v2;
    v5 = (__int64 **)BugCheckParameter2[1];
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 || *v5 != BugCheckParameter2 )
      __fastfail(3u);
    *v5 = v3;
    v3[1] = (__int64)v5;
    KxReleaseSpinLock(&PopWorkOrderLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v10 = (v9 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
}
