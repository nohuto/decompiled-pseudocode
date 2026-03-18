/*
 * XREFs of KiTryToAcquireThreadLock @ 0x1403348EC
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140202694 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14030F9B4 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KeTryToInsertQueueApc @ 0x140514D50 (KeTryToInsertQueueApc.c)
 *     KiMonitorCacheErrata @ 0x14051C790 (KiMonitorCacheErrata.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiTryToAcquireThreadLock(__int64 a1, _BYTE *a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  struct _KPRCB *v7; // rcx
  _DWORD *v8; // rdx
  int v9; // eax
  int v10; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v9 = SchedulerAssist[6];
      SchedulerAssist[6] = v9 + 1;
      if ( v9 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v7 = KeGetCurrentPrcb();
    v8 = v7->SchedulerAssist;
    if ( v8 )
    {
      if ( v7->NestingLevel <= 1u )
      {
        v10 = v8[6] - 1;
        v8[6] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick(v7);
      }
    }
    return 0;
  }
  else
  {
    if ( a2 )
      *a2 = 1;
    return 1;
  }
}
