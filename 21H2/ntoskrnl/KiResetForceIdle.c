/*
 * XREFs of KiResetForceIdle @ 0x140523860
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140268950 (KiCallInterruptServiceRoutine.c)
 *     KeClockInterruptNotify @ 0x1402C5F40 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C94E0 (KeResumeClockTimerFromIdle.c)
 *     KeClearForceIdle @ 0x1405230B8 (KeClearForceIdle.c)
 * Callees:
 *     KeIsForceIdleEngaged @ 0x140211564 (KeIsForceIdleEngaged.c)
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x1402CF060 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x1405239E0 (KiSetForceIdleState.c)
 *     PoTraceForceIdleReset @ 0x14056FF08 (PoTraceForceIdleReset.c)
 */

char __fastcall KiResetForceIdle(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // di
  char v5; // si
  __int16 v7; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  __int16 v18; // [rsp+30h] [rbp-8h]
  int v19; // [rsp+48h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+18h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  v4 = 0;
  v5 = a2;
  if ( !(_BYTE)a2 )
  {
    v7 = v18;
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = (v7 & 0x200) != 0;
    v19 = 0;
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
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
        break;
      v11 = CurrentPrcb->SchedulerAssist;
      if ( v11 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = v11[6] - 1;
          v11[6] = v12;
          if ( !v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v19, a2, a3, a4);
      while ( KiForceIdleLock );
    }
  }
  LOBYTE(v13) = KeIsForceIdleEngaged();
  if ( (_BYTE)v13 )
  {
    KiSetForceIdleState(3LL);
    if ( a1 == 3 )
      v14 = 0LL;
    else
      v14 = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
          + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
    KiForceIdleStartTime = v14;
    if ( !KiForceIdleStopDpc.DpcData )
      KiForceIdleStopDpc.Number = KiClockTimerOwner + 1280;
    KeInsertQueueDpc(&KiForceIdleStopDpc, 0LL, 0LL);
    LOBYTE(v13) = PoTraceForceIdleReset(a1);
  }
  if ( !v5 )
  {
    _InterlockedAnd64(&KiForceIdleLock, 0LL);
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v13 = v16[6] - 1;
        v16[6] = v13;
        if ( !v13 )
          LOBYTE(v13) = KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
    if ( v4 )
      _enable();
  }
  return v13;
}
