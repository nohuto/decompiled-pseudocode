/*
 * XREFs of KiCompleteKernelInit @ 0x14099F010
 * Callers:
 *     KiInitializeKernel @ 0x14099E6F0 (KiInitializeKernel.c)
 * Callees:
 *     KeAttachProcess @ 0x140241420 (KeAttachProcess.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     KiSetProcessorIdle @ 0x14027878C (KiSetProcessorIdle.c)
 *     KeInitializeTimer2 @ 0x14029A5B0 (KeInitializeTimer2.c)
 *     KiUpdateThreadPriority @ 0x1402D56A0 (KiUpdateThreadPriority.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCreateCpuSetForProcessor @ 0x14099F1FC (KiCreateCpuSetForProcessor.c)
 */

__int64 __fastcall KiCompleteKernelInit(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 CurrentIrql; // cl
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // si
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v12; // rcx
  bool v13; // zf
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // [rsp+50h] [rbp+18h] BYREF

  if ( !a3 )
  {
    *(_DWORD *)(a1 + 12568) = KiMaximumDpcQueueDepth;
    *(_DWORD *)(a1 + 12576) = KiMinimumDpcRate;
    *(_DWORD *)(a1 + 32404) = KiAdjustDpcThreshold;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  _enable();
  KeAttachProcess(PsInitialSystemProcess);
  if ( !a3 )
  {
    qword_140C31F38 = 0LL;
    qword_140C31F30 = (__int64)&qword_140C31F28;
    qword_140C31F28 = (__int64)&qword_140C31F28;
    KeInitializeTimer2((__int64)&KiForegroundState, (__int64)KiForegroundTimerCallback, 0LL, 8LL);
    KeInitializeDpc((PRKDPC)&stru_140C31EA8, (PKDEFERRED_ROUTINE)KiProcessPendingForegroundBoosts, 0LL);
    KeInitializeDpc(&stru_140C31EE8, (PKDEFERRED_ROUTINE)KiTriggerForegroundBoostDpc, 0LL);
    KeInitializeDpc(&KiUpdateVpThreadPriorityDpc, (PKDEFERRED_ROUTINE)KiUpdateVpBackingThreadPriorityDpcRoutine, 0LL);
    KiUpdateVpThreadPriorityLock = 0LL;
    qword_140C31DC8 = (__int64)&KiUpdateVpThreadPriorityListHead;
    KiUpdateVpThreadPriorityListHead = (__int64)&KiUpdateVpThreadPriorityListHead;
    KiUpdateVpThreadPriorityDpc.Importance = 2;
  }
  v10 = 0;
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 80LL), *(unsigned __int8 *)(a1 + 209));
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 96LL), *(unsigned __int8 *)(a1 + 209));
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = 0;
  while ( 1 )
  {
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v12[6];
        v12[6] = v18 + 1;
        if ( v18 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v19 = CurrentPrcb->SchedulerAssist;
    if ( v19 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v19[6] - 1;
        v19[6] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v22, v7, v8, v9);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v13 = *(_QWORD *)(a1 + 16) == 0LL;
  *(_BYTE *)(a1 + 35) = 1;
  if ( v13 )
  {
    v10 = 1;
    KiSetProcessorIdle(a1, 1, 1);
  }
  KiUpdateThreadPriority(a1, a2, 0LL, v10);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v14 = KeGetCurrentPrcb();
  v15 = v14->SchedulerAssist;
  if ( v15 )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v21 = v15[6] - 1;
      v15[6] = v21;
      if ( !v21 )
        KiRemoveSystemWorkPriorityKick((__int64)v14);
    }
  }
  return KiCreateCpuSetForProcessor(a1);
}
