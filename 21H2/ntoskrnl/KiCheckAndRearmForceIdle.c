/*
 * XREFs of KiCheckAndRearmForceIdle @ 0x1402595B0
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140294110 (KiCallInterruptServiceRoutine.c)
 *     KiTimer2Expiration @ 0x1402F27B0 (KiTimer2Expiration.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x14057A5A8 (KiSetForceIdleState.c)
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
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
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
  KiForceIdleStartTime = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec + RtlGetInterruptTimePrecise(&v9);
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
