/*
 * XREFs of KiIdleSchedule @ 0x140343C60
 * Callers:
 *     KiIdleLoop @ 0x140424300 (KiIdleLoop.c)
 * Callees:
 *     KiEndThreadAccountingPeriodEx @ 0x1402B9680 (KiEndThreadAccountingPeriodEx.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiSearchForNewThread @ 0x140343DC0 (KiSearchForNewThread.c)
 *     KiStartThreadCycleAccumulation @ 0x140345B70 (KiStartThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140574A7C (KiSendHeteroRescheduleIntRequest.c)
 */

__int64 __fastcall KiIdleSchedule(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v7; // r10
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  bool v13; // zf
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rdx
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v26 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v22 = SchedulerAssist[6];
      SchedulerAssist[6] = v22 + 1;
      if ( v22 == -1 )
LABEL_22:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    v20 = CurrentPrcb->SchedulerAssist;
    if ( v20 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v23 = v20[6] - 1;
        v20[6] = v23;
        if ( !v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v26, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 48) );
    v21 = CurrentPrcb->SchedulerAssist;
    if ( v21 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v24 = v21[6];
        v21[6] = v24 + 1;
        if ( v24 == -1 )
          goto LABEL_22;
      }
    }
  }
  *(_BYTE *)(a1 + 13243) = 0;
  v7 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) == v7 )
    *(_QWORD *)(a1 + 16) = 0LL;
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v8 = __rdtsc();
  v9 = v8 - *(_QWORD *)(a1 + 33152);
  v10 = *(unsigned int *)(v7 + 80);
  v11 = v9 + *(_QWORD *)(v7 + 72);
  *(_QWORD *)(v7 + 72) = v11;
  v12 = ((v9 * *(unsigned int *)(a1 + 33208)) >> 16) + v10;
  if ( v12 > 0xFFFFFFFF )
    LODWORD(v12) = -1;
  *(_QWORD *)(a1 + 33152) = v8;
  v13 = (*(_BYTE *)(v7 + 2) & 0xBE) == 0;
  *(_DWORD *)(v7 + 80) = v12;
  if ( !v13 )
  {
    LOBYTE(v8) = 1;
    KiEndThreadAccountingPeriodEx(a1, v7, v9, v8);
  }
  _enable();
  LOBYTE(v11) = 1;
  result = KiSearchForNewThread(a1, v11);
  v16 = result;
  if ( !result )
  {
    if ( KeHeteroSystem )
    {
      if ( !KeHeteroSystemVirtual )
        KiSendHeteroRescheduleIntRequest(a1);
    }
    v17 = *(_QWORD *)(a1 + 24);
    _disable();
    LOBYTE(v15) = 1;
    KiStartThreadCycleAccumulation(a1, v17, v15);
    _enable();
    return v16;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v18 = KeGetCurrentPrcb();
  v19 = v18->SchedulerAssist;
  if ( v19 && v18->NestingLevel <= 1u )
  {
    v25 = v19[6] - 1;
    v19[6] = v25;
    if ( !v25 )
      KiRemoveSystemWorkPriorityKick(v18);
    return v16;
  }
  return result;
}
