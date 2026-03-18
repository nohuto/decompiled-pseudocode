/*
 * XREFs of KiFastExitThreadWait @ 0x1402D8158
 * Callers:
 *     KeRemoveQueueEx @ 0x140207B10 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeRemovePriQueue @ 0x14028E810 (KeRemovePriQueue.c)
 *     KeWaitForAlertByThreadId @ 0x1402DA2F0 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KeWaitForGate @ 0x1402F5308 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1402F5424 (KiWaitForAllObjects.c)
 * Callees:
 *     KiExitThreadWait @ 0x1402D8240 (KiExitThreadWait.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiFastExitThreadWait(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // eax
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  *(_BYTE *)(a2 + 388) = 2;
  _InterlockedOr(v12, 0);
  if ( *(_QWORD *)(a2 + 64) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v10 = SchedulerAssist[6];
          SchedulerAssist[6] = v10 + 1;
          if ( v10 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
        break;
      v9 = CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v11 = v9[6] - 1;
          v9[6] = v11;
          if ( !v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v13);
      while ( *(_QWORD *)(a2 + 64) );
    }
    KiReleaseThreadLockSafe(a2);
  }
  LOBYTE(a3) = v3;
  return KiExitThreadWait(a1, a2, a3);
}
