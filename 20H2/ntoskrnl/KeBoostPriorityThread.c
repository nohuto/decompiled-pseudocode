/*
 * XREFs of KeBoostPriorityThread @ 0x140336FA0
 * Callers:
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     ExpCreateWorkerThread @ 0x1406EDE1C (ExpCreateWorkerThread.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402DC410 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 *     EtwTracePriority @ 0x1405A6474 (EtwTracePriority.c)
 */

char __fastcall KeBoostPriorityThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  void *v4; // rax
  int v5; // ebp
  int v7; // r13d
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // r14
  _DWORD *v11; // rcx
  int v12; // r12d
  int v13; // eax
  unsigned __int64 updated; // rcx
  unsigned __int64 v15; // rdx
  ULONG_PTR v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KPRCB *v20; // rsi
  _DWORD *v21; // rcx
  _KTHREAD *NextThread; // rsi
  __int64 v23; // r8
  __int64 v24; // r8
  _DWORD *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // rcx
  int v30; // eax
  _DWORD *v31; // rcx
  int v32; // eax
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  bool v35; // zf
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  _SINGLE_LIST_ENTRY v40[9]; // [rsp+30h] [rbp-48h] BYREF
  int v41; // [rsp+80h] [rbp+8h] BYREF
  int v42; // [rsp+90h] [rbp+18h] BYREF
  int v43; // [rsp+98h] [rbp+20h]

  v4 = &KiInitialProcess;
  v5 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return (char)v4;
  v40[0].Next = 0LL;
  v7 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v41 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v26 = v11[6];
        v11[6] = v26 + 1;
        if ( v26 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v25 = CurrentPrcb->SchedulerAssist;
    if ( v25 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = v25[6] - 1;
        v25[6] = v27;
        if ( !v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v41, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v12 = *(char *)(a1 + 195);
  v43 = v12;
  if ( v12 < 16 && !*(_BYTE *)(a1 + 564) )
  {
    v13 = v5 + *(char *)(a1 + 563);
    if ( v13 > v12 )
    {
      v7 = v5 + *(char *)(a1 + 563);
      if ( v13 >= 16 )
        v7 = 15;
      if ( (_KTHREAD *)a1 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        updated = *(_QWORD *)(a1 + 72);
      }
      else
      {
        _disable();
        updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
        _enable();
      }
      v15 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
      if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
      *(_QWORD *)(a1 + 32) = v15;
      KiSetPriorityThread((_BYTE *)a1, (__int64)v40, v7);
    }
  }
  KiReleaseThreadLockSafe(a1);
  LOBYTE(v4) = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, v40);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      LOBYTE(v4) = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)v4 )
        LOBYTE(v4) = KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
    goto LABEL_21;
  }
  v16 = (ULONG_PTR)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
    v20 = KeGetCurrentPrcb();
    v42 = 0;
    v21 = v20->SchedulerAssist;
    if ( v21 )
    {
      if ( v20->NestingLevel <= 1u )
      {
        v28 = v21[6];
        v21[6] = v28 + 1;
        if ( v28 == -1 )
LABEL_55:
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v29 = v20->SchedulerAssist;
      if ( v29 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v30 = v29[6] - 1;
          v29[6] = v30;
          if ( !v30 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      do
        KeYieldProcessorEx(&v42, v17, v18, v19);
      while ( CurrentPrcb->PrcbLock );
      v31 = v20->SchedulerAssist;
      if ( v31 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v32 = v31[6];
          v31[6] = v32 + 1;
          if ( v32 == -1 )
            goto LABEL_55;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v16, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    v12 = v43;
    if ( NextThread->WaitBlockFill6[68] == 1 )
    {
      v23 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
      NextThread->ReadyTime = v23 + MEMORY[0xFFFFF78000000320];
    }
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v16 + 643) = 32;
    *(_BYTE *)(v16 + 390) = CurrentIrql;
    KiQueueReadyThread((__int64)CurrentPrcb, v16, v23);
    LOBYTE(v24) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(v16, NextThread, v24) )
      goto LABEL_19;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
      goto LABEL_61;
    goto LABEL_58;
  }
  if ( (*(_DWORD *)(v16 + 116) & 0x40) == 0 )
    goto LABEL_19;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
  {
LABEL_58:
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v33 = KeGetCurrentPrcb();
      v34 = v33->SchedulerAssist;
      v35 = (v34[5] & 0xFFFF0003) == 0;
      v34[5] &= 0xFFFF0003;
      if ( v35 )
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
LABEL_61:
  __writecr8(1uLL);
  *(_DWORD *)(v16 + 116) &= ~0x40u;
  KiDeliverApc(0, 0, 0LL);
LABEL_19:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v36 = KeGetCurrentPrcb();
      v37 = v36->SchedulerAssist;
      v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v35 = (v38 & v37[5]) == 0;
      v37[5] &= v38;
      if ( v35 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
  }
  LOBYTE(v4) = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_21:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v7 )
    LOBYTE(v4) = EtwTracePriority(a1, 1328, v12, v7, 0LL);
  return (char)v4;
}
