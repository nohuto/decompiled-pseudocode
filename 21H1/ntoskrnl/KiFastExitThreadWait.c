/*
 * XREFs of KiFastExitThreadWait @ 0x140329A64
 * Callers:
 *     KeRemovePriQueue @ 0x140225BC0 (KeRemovePriQueue.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x140268450 (KeRemoveQueueEx.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1402CD0F4 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x1402FC418 (KeWaitForAlertByThreadId.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiExitThreadWait @ 0x140329B50 (KiExitThreadWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiFastExitThreadWait(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp+20h] BYREF

  v4 = a3;
  *(_BYTE *)(a2 + 388) = 2;
  _InterlockedOr(v13, 0);
  if ( *(_QWORD *)(a2 + 64) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v11 = SchedulerAssist[6];
          SchedulerAssist[6] = v11 + 1;
          if ( v11 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
        break;
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = v10[6] - 1;
          v10[6] = v12;
          if ( !v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v14, a2, a3, a4);
      while ( *(_QWORD *)(a2 + 64) );
    }
    KiReleaseThreadLockSafe(a2);
  }
  LOBYTE(a3) = v4;
  return KiExitThreadWait(a1, a2, a3);
}
