/*
 * XREFs of KiFastExitThreadWait @ 0x1402E493C
 * Callers:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x14020F400 (KeRemoveQueueEx.c)
 *     KeRemovePriQueue @ 0x1402B8840 (KeRemovePriQueue.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     KeWaitForGate @ 0x14030E9A4 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14030EAC0 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x140339758 (KeWaitForAlertByThreadId.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiExitThreadWait @ 0x1402E4A20 (KiExitThreadWait.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
