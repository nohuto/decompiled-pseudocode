/*
 * XREFs of KiIdleSchedule @ 0x140256BD0
 * Callers:
 *     KiIdleLoop @ 0x140402950 (KiIdleLoop.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022E080 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x140231260 (KiStartThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiSearchForNewThread @ 0x140256CB8 (KiSearchForNewThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x14051FF30 (KiSendHeteroRescheduleIntRequest.c)
 */

__int64 __fastcall KiIdleSchedule(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdx
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = SchedulerAssist[6];
        SchedulerAssist[6] = v15 + 1;
        if ( v15 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = v14[6] - 1;
        v14[6] = v16;
        if ( !v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v18, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *(_BYTE *)(a1 + 12587) = 0;
  v7 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) == v7 )
    *(_QWORD *)(a1 + 16) = 0LL;
  _disable();
  KiEndThreadCycleAccumulation(a1, v7, 0LL);
  _enable();
  LOBYTE(v8) = 1;
  v9 = KiSearchForNewThread(a1, v8);
  if ( v9 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    v12 = KeGetCurrentPrcb();
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v17 = v13[6] - 1;
        v13[6] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
  }
  else
  {
    if ( KeHeteroSystem && !KeHeteroSystemVirtual )
      KiSendHeteroRescheduleIntRequest(a1);
    v10 = *(_QWORD *)(a1 + 24);
    _disable();
    KiStartThreadCycleAccumulation(a1, v10, 1);
    _enable();
  }
  return v9;
}
