/*
 * XREFs of KiResetForceIdle @ 0x140521B40
 * Callers:
 *     KeClockInterruptNotify @ 0x140280F70 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1402843F0 (KeResumeClockTimerFromIdle.c)
 *     KiCallInterruptServiceRoutine @ 0x14033E8C0 (KiCallInterruptServiceRoutine.c)
 *     KeClearForceIdle @ 0x140521398 (KeClearForceIdle.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x140288C20 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KeIsForceIdleEngaged @ 0x1402E0E68 (KeIsForceIdleEngaged.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x140521CC0 (KiSetForceIdleState.c)
 *     PoTraceForceIdleReset @ 0x14056E2B8 (PoTraceForceIdleReset.c)
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
