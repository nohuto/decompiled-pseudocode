/*
 * XREFs of KeSetForceIdle @ 0x14051DAF8
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x1402DEDF0 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14021F2E0 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x14051E2F0 (KiSetForceIdleState.c)
 */

void __fastcall KeSetForceIdle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v6; // eax
  _DWORD *v7; // rcx
  int v8; // eax
  int v9; // edi
  LARGE_INTEGER v10; // rbx
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  int v13; // eax
  int v14; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v6 = SchedulerAssist[6];
        SchedulerAssist[6] = v6 + 1;
        if ( v6 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = v7[6] - 1;
        v7[6] = v8;
        if ( !v8 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v14, a2, a3, a4);
    while ( KiForceIdleLock );
  }
  if ( !KiForceIdleDisabled )
  {
    v9 = KiForceIdleState;
    v10.QuadPart = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter)
                 + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    if ( !v9 )
    {
      KiSetForceIdleState(2LL);
LABEL_18:
      KiForceIdleStartTime = v10.QuadPart;
      goto LABEL_19;
    }
    if ( v9 == 3 )
      goto LABEL_18;
  }
LABEL_19:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v13 = v12[6] - 1;
      v12[6] = v13;
      if ( !v13 )
        KiRemoveSystemWorkPriorityKick((__int64)v11);
    }
  }
  _enable();
}
