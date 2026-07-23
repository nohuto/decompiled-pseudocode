/*
 * XREFs of KiIdleSchedule @ 0x140278140
 * Callers:
 *     KiIdleLoop @ 0x140402B30 (KiIdleLoop.c)
 * Callees:
 *     KiSearchForNewThread @ 0x140278228 (KiSearchForNewThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x1402D5AB0 (KiStartThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140520170 (KiSendHeteroRescheduleIntRequest.c)
 */

__int64 __fastcall KiIdleSchedule(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v16 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = SchedulerAssist[6];
        SchedulerAssist[6] = v13 + 1;
        if ( v13 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v12[6] - 1;
        v12[6] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v16);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *(_BYTE *)(a1 + 12587) = 0;
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) == v4 )
    *(_QWORD *)(a1 + 16) = 0LL;
  _disable();
  KiEndThreadCycleAccumulation(a1, v4, 0LL);
  _enable();
  LOBYTE(v5) = 1;
  v6 = KiSearchForNewThread(a1, v5);
  if ( v6 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    v10 = KeGetCurrentPrcb();
    v11 = v10->SchedulerAssist;
    if ( v11 )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v15 = v11[6] - 1;
        v11[6] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
  }
  else
  {
    if ( KeHeteroSystem && !KeHeteroSystemVirtual )
      KiSendHeteroRescheduleIntRequest(a1);
    v8 = *(_QWORD *)(a1 + 24);
    _disable();
    LOBYTE(v7) = 1;
    KiStartThreadCycleAccumulation(a1, v8, v7);
    _enable();
  }
  return v6;
}
