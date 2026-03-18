/*
 * XREFs of KiAddProcessorToGroupSchedulingDatabase @ 0x1409B2D94
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BD198 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402950F0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAddProcessorToGroupSchedulingList @ 0x140521CEC (KiAddProcessorToGroupSchedulingList.c)
 *     KiInitializeProcessorGroupSchedulingData @ 0x140521D88 (KiInitializeProcessorGroupSchedulingData.c)
 */

void __fastcall KiAddProcessorToGroupSchedulingDatabase(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  int v14; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+50h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KiInitializeProcessorGroupSchedulingData(a1);
  v3 = *(_DWORD *)(v2 + 36);
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( KiGroupSchedulingEnabled )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v9 = SchedulerAssist[6];
          SchedulerAssist[6] = v9 + 1;
          if ( v9 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        break;
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v11 = v10[6] - 1;
          v10[6] = v11;
          if ( !v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v16, v4, v5, v6);
      while ( *(_QWORD *)(a1 + 48) );
    }
    KiAddProcessorToGroupSchedulingList(a1, (_QWORD **)&KiSchedulingGroupList, v3);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    v12 = KeGetCurrentPrcb();
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v14 = v13[6] - 1;
        v13[6] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v12);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
