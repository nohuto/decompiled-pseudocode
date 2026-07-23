/*
 * XREFs of KiCheckAndRearmForceIdle @ 0x14024DA3C
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140268950 (KiCallInterruptServiceRoutine.c)
 *     KiTimer2Expiration @ 0x1402ED030 (KiTimer2Expiration.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x140246860 (KeRemoveQueueDpcEx.c)
 *     RtlGetInterruptTimePrecise @ 0x1402CF060 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x1405239E0 (KiSetForceIdleState.c)
 */

void KiCheckAndRearmForceIdle()
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v2; // rcx
  _DWORD *v3; // rdx
  int v4; // eax
  _DWORD *v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  if ( KiForceIdleDisabled )
    return;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v4 = SchedulerAssist[6];
        SchedulerAssist[6] = v4 + 1;
        if ( v4 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    v5 = CurrentPrcb->SchedulerAssist;
    if ( v5 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v6 = v5[6] - 1;
        v5[6] = v6;
        if ( !v6 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v8);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleState == 1 )
  {
    KeRemoveQueueDpcEx((__int64)&KiForceIdleStartDpc, 0);
    KiSetForceIdleState(2LL);
  }
  else if ( KiForceIdleState != 2 )
  {
    goto LABEL_7;
  }
  KiForceIdleStartTime = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
                       + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
LABEL_7:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v2 = KeGetCurrentPrcb();
  v3 = v2->SchedulerAssist;
  if ( v3 && v2->NestingLevel <= 1u )
  {
    v7 = v3[6] - 1;
    v3[6] = v7;
    if ( !v7 )
      KiRemoveSystemWorkPriorityKick(v2);
  }
  _enable();
}
