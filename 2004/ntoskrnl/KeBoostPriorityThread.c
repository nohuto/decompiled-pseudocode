/*
 * XREFs of KeBoostPriorityThread @ 0x14030AEC4
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     ExpCreateWorkerThread @ 0x1406CF978 (ExpCreateWorkerThread.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402ED9C0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 *     EtwTracePriority @ 0x1405A29D4 (EtwTracePriority.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG_PTR v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KPRCB *v22; // rsi
  _DWORD *v23; // rcx
  _KTHREAD *NextThread; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  _DWORD *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  _DWORD *v34; // rcx
  int v35; // eax
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  bool v38; // zf
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  _QWORD *v43[9]; // [rsp+30h] [rbp-48h] BYREF
  int v44; // [rsp+80h] [rbp+8h] BYREF
  int v45; // [rsp+90h] [rbp+18h] BYREF
  int v46; // [rsp+98h] [rbp+20h]

  v4 = &KiInitialProcess;
  v5 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return (char)v4;
  v43[0] = 0LL;
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
  v44 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v29 = v11[6];
        v11[6] = v29 + 1;
        if ( v29 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v28 = CurrentPrcb->SchedulerAssist;
    if ( v28 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v30 = v28[6] - 1;
        v28[6] = v30;
        if ( !v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v44, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v12 = *(char *)(a1 + 195);
  v46 = v12;
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
      KiSetPriorityThread((_KTHREAD *)a1, (__int64)v43, v7);
    }
  }
  KiReleaseThreadLockSafe(a1);
  LOBYTE(v4) = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, v43, v16, v17);
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
  v18 = (ULONG_PTR)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
    v22 = KeGetCurrentPrcb();
    v45 = 0;
    v23 = v22->SchedulerAssist;
    if ( v23 )
    {
      if ( v22->NestingLevel <= 1u )
      {
        v31 = v23[6];
        v23[6] = v31 + 1;
        if ( v31 == -1 )
LABEL_55:
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v32 = v22->SchedulerAssist;
      if ( v32 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v33 = v32[6] - 1;
          v32[6] = v33;
          if ( !v33 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
      do
        KeYieldProcessorEx(&v45, v19, v20, v21);
      while ( CurrentPrcb->PrcbLock );
      v34 = v22->SchedulerAssist;
      if ( v34 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v35 = v34[6];
          v34[6] = v35 + 1;
          if ( v35 == -1 )
            goto LABEL_55;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v18, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    v12 = v46;
    if ( NextThread->WaitBlockFill6[68] == 1 )
    {
      v25 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
      NextThread->ReadyTime = v25 + MEMORY[0xFFFFF78000000320];
    }
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v18 + 643) = 32;
    *(_BYTE *)(v18 + 390) = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v18, v25, v26);
    LOBYTE(v27) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(v18, NextThread, v27) )
      goto LABEL_19;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
      goto LABEL_61;
    goto LABEL_58;
  }
  if ( (*(_DWORD *)(v18 + 116) & 0x40) == 0 )
    goto LABEL_19;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
  {
LABEL_58:
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v36 = KeGetCurrentPrcb();
      v37 = v36->SchedulerAssist;
      v38 = (v37[5] & 0xFFFF0003) == 0;
      v37[5] &= 0xFFFF0003;
      if ( v38 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
  }
LABEL_61:
  __writecr8(1uLL);
  *(_DWORD *)(v18 + 116) &= ~0x40u;
  KiDeliverApc(0, 0LL, 0LL);
LABEL_19:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v39 = KeGetCurrentPrcb();
      v40 = v39->SchedulerAssist;
      v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v38 = (v41 & v40[5]) == 0;
      v40[5] &= v41;
      if ( v38 )
        KiRemoveSystemWorkPriorityKick(v39);
    }
  }
  LOBYTE(v4) = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_21:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v7 )
    LOBYTE(v4) = EtwTracePriority(a1, 1328, v12, v7, 0LL);
  return (char)v4;
}
