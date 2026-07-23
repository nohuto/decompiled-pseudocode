/*
 * XREFs of KeSetThreadChargeOnlySchedulingGroup @ 0x140225090
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1402C0590 (PsImpersonateContainerOfThread.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402D4110 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeSetThreadChargeOnlySchedulingGroup(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v7; // rbp
  _DWORD *v8; // rcx
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  bool v20; // zf
  int v21; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x200) != 0 )
  {
    if ( a2 )
      return 0;
  }
  else if ( !a2 || *(_QWORD *)(a1 + 104) )
  {
    return 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  KiUpdateTotalCyclesCurrentThread(CurrentPrcb, a1, 0LL);
  _enable();
  v7 = KeGetCurrentPrcb();
  v21 = 0;
  v8 = v7->SchedulerAssist;
  if ( v8 )
  {
    if ( v7->NestingLevel <= 1u )
    {
      v14 = v8[6];
      v8[6] = v14 + 1;
      if ( v14 == -1 )
LABEL_24:
        KiRemoveSystemWorkPriorityKick(v7);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    v11 = v7->SchedulerAssist;
    if ( v11 )
    {
      if ( v7->NestingLevel <= 1u )
      {
        v15 = v11[6] - 1;
        v11[6] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick(v7);
      }
    }
    do
      KeYieldProcessorEx(&v21);
    while ( CurrentPrcb->PrcbLock );
    v12 = v7->SchedulerAssist;
    if ( v12 )
    {
      if ( v7->NestingLevel <= 1u )
      {
        v16 = v12[6];
        v12[6] = v16 + 1;
        if ( v16 == -1 )
          goto LABEL_24;
      }
    }
  }
  if ( a2 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 9u);
    *(_QWORD *)(a1 + 104) = a2;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  }
  else
  {
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 9u);
  }
  _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  v9 = KeGetCurrentPrcb();
  v10 = v9->SchedulerAssist;
  if ( v10 )
  {
    if ( v9->NestingLevel <= 1u )
    {
      v17 = v10[6] - 1;
      v10[6] = v17;
      if ( !v17 )
        KiRemoveSystemWorkPriorityKick(v9);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
  {
    v18 = KeGetCurrentPrcb();
    v19 = v18->SchedulerAssist;
    v20 = (v19[5] & 0xFFFF0001) == 0;
    v19[5] &= 0xFFFF0001;
    if ( v20 )
      KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(0LL);
  return 1;
}
