/*
 * XREFs of KiTryToAcquireThreadLock @ 0x1402293B0
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140229114 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14023DB64 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 *     KeTryToInsertQueueApc @ 0x14051AA50 (KeTryToInsertQueueApc.c)
 *     KiMonitorCacheErrata @ 0x1405224D0 (KiMonitorCacheErrata.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
