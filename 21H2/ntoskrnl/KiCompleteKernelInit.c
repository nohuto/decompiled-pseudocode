/*
 * XREFs of KiCompleteKernelInit @ 0x140A58CF8
 * Callers:
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 * Callees:
 *     KeAttachProcess @ 0x140252530 (KeAttachProcess.c)
 *     KiUpdateThreadPriority @ 0x140291010 (KiUpdateThreadPriority.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeInitializeTimer2 @ 0x1403588D0 (KeInitializeTimer2.c)
 *     KiSetProcessorIdle @ 0x14035C560 (KiSetProcessorIdle.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiCreateCpuSetForProcessor @ 0x140A58F00 (KiCreateCpuSetForProcessor.c)
 *     KiInitializeThreadCycleTable @ 0x140A59068 (KiInitializeThreadCycleTable.c)
 *     KiAllocateHeteroConfigBuffer @ 0x140A5B8A4 (KiAllocateHeteroConfigBuffer.c)
 */

__int64 __fastcall KiCompleteKernelInit(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 CurrentIrql; // cl
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // si
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v13; // rcx
  bool v14; // zf
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  int HeteroConfigBuffer; // eax
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
  {
    *(_DWORD *)(a1 + 13224) = KiMaximumDpcQueueDepth;
    *(_DWORD *)(a1 + 13232) = KiMinimumDpcRate;
    *(_DWORD *)(a1 + 33108) = KiAdjustDpcThreshold;
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
    qword_140C2BB58 = 0LL;
    qword_140C2BB50 = (__int64)&qword_140C2BB48;
    qword_140C2BB48 = (__int64)&qword_140C2BB48;
    KeInitializeTimer2((__int64)&KiForegroundState, (__int64)KiForegroundTimerCallback, 0LL, 8LL);
    KeInitializeDpc((PRKDPC)&stru_140C2BAC8, (PKDEFERRED_ROUTINE)KiProcessPendingForegroundBoosts, 0LL);
    KeInitializeDpc(&stru_140C2BB08, (PKDEFERRED_ROUTINE)KiTriggerForegroundBoostDpc, 0LL);
    KeInitializeDpc(&KiUpdateVpThreadPriorityDpc, (PKDEFERRED_ROUTINE)KiUpdateVpBackingThreadPriorityDpcRoutine, 0LL);
    KiUpdateVpThreadPriorityLock = 0LL;
    qword_140C2BA28 = (__int64)&KiUpdateVpThreadPriorityListHead;
    KiUpdateVpThreadPriorityListHead = (__int64)&KiUpdateVpThreadPriorityListHead;
    KiUpdateVpThreadPriorityDpc.Importance = 2;
    HeteroConfigBuffer = KiAllocateHeteroConfigBuffer();
    if ( HeteroConfigBuffer < 0 )
      KeBugCheckEx(0x31u, HeteroConfigBuffer, 0xDuLL, 0LL, 0LL);
  }
  v7 = KiInitializeThreadCycleTable(a1);
  if ( v7 < 0 )
    KeBugCheckEx(0x31u, v7, 0xCuLL, 0LL, 0LL);
  v11 = 0;
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 80LL), *(unsigned __int8 *)(a1 + 209));
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 96LL), *(unsigned __int8 *)(a1 + 209));
  CurrentPrcb = KeGetCurrentPrcb();
  v24 = 0;
  while ( 1 )
  {
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v13[6];
        v13[6] = v20 + 1;
        if ( v20 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v21 = CurrentPrcb->SchedulerAssist;
    if ( v21 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = v21[6] - 1;
        v21[6] = v22;
        if ( !v22 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v24, v8, v9, v10);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v14 = *(_QWORD *)(a1 + 16) == 0LL;
  *(_BYTE *)(a1 + 35) = 1;
  if ( v14 )
  {
    v11 = 1;
    KiSetProcessorIdle(a1, 1LL, 1LL, v10);
  }
  KiUpdateThreadPriority(a1, a2, 0LL, v11);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 )
  {
    if ( v15->NestingLevel <= 1u )
    {
      v23 = v16[6] - 1;
      v16[6] = v23;
      if ( !v23 )
        KiRemoveSystemWorkPriorityKick((__int64)v15);
    }
  }
  return KiCreateCpuSetForProcessor(a1);
}
