/*
 * XREFs of KiIdleSchedule @ 0x1402DA0C0
 * Callers:
 *     KiIdleLoop @ 0x140400500 (KiIdleLoop.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x1402BECC0 (KiStartThreadCycleAccumulation.c)
 *     KiSearchForNewThread @ 0x1402D9CEC (KiSearchForNewThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x14051E450 (KiSendHeteroRescheduleIntRequest.c)
 */

__int64 __fastcall KiIdleSchedule(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdx
  struct _KPRCB *v8; // rcx
  _DWORD *v9; // rdx
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+30h] [rbp+8h] BYREF

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
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
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
      KeYieldProcessorEx(&v14);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *(_BYTE *)(a1 + 12587) = 0;
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) == v4 )
    *(_QWORD *)(a1 + 16) = 0LL;
  _disable();
  KiEndThreadCycleAccumulation(a1, v4, 0LL);
  _enable();
  v5 = KiSearchForNewThread(a1, 1);
  if ( v5 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    v8 = KeGetCurrentPrcb();
    v9 = v8->SchedulerAssist;
    if ( v9 )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v13 = v9[6] - 1;
        v9[6] = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
  }
  else
  {
    if ( KeHeteroSystem && !KeHeteroSystemVirtual )
      KiSendHeteroRescheduleIntRequest(a1);
    v6 = *(_QWORD *)(a1 + 24);
    _disable();
    KiStartThreadCycleAccumulation(a1, v6, 1);
    _enable();
  }
  return v5;
}
