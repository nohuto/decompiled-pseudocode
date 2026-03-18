/*
 * XREFs of KeSetForceIdle @ 0x140579E04
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x1402D6004 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x14057A5A8 (KiSetForceIdleState.c)
 */

void __fastcall KeSetForceIdle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v6; // eax
  _DWORD *v7; // rcx
  int v8; // eax
  int v9; // edi
  __int64 v10; // rbx
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  int v13; // eax
  int v14; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER v15; // [rsp+38h] [rbp+10h] BYREF

  v15.QuadPart = 0LL;
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
    v10 = RtlGetInterruptTimePrecise(&v15) + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    if ( !v9 )
    {
      KiSetForceIdleState(2LL);
LABEL_18:
      KiForceIdleStartTime = v10;
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
