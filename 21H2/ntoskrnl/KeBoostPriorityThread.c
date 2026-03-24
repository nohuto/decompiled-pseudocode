/*
 * XREFs of KeBoostPriorityThread @ 0x1402E2510
 * Callers:
 *     ExpCreateWorkerThread @ 0x1406CFF28 (ExpCreateWorkerThread.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022E080 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14022F8C0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetPriorityThread @ 0x1402302A0 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x140230D60 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140293E54 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406470 (KiSwapContext.c)
 *     EtwTracePriority @ 0x1405A7EA4 (EtwTracePriority.c)
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
  __int64 v24; // r9
  __int64 v25; // r8
  _DWORD *v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  bool v36; // zf
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  _QWORD *v41[9]; // [rsp+30h] [rbp-48h] BYREF
  int v42; // [rsp+80h] [rbp+8h] BYREF
  int v43; // [rsp+90h] [rbp+18h] BYREF
  int v44; // [rsp+98h] [rbp+20h]

  v4 = &KiInitialProcess;
  v5 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return (char)v4;
  v41[0] = 0LL;
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
  v42 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = v11[6];
        v11[6] = v27 + 1;
        if ( v27 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v26 = CurrentPrcb->SchedulerAssist;
    if ( v26 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v28 = v26[6] - 1;
        v26[6] = v28;
        if ( !v28 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v42, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v12 = *(char *)(a1 + 195);
  v44 = v12;
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
      KiSetPriorityThread((_KTHREAD *)a1, (__int64)v41, v7);
    }
  }
  KiReleaseThreadLockSafe(a1);
  LOBYTE(v4) = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, v41);
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
    KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
    v20 = KeGetCurrentPrcb();
    v43 = 0;
    v21 = v20->SchedulerAssist;
    if ( v21 )
    {
      if ( v20->NestingLevel <= 1u )
      {
        v29 = v21[6];
        v21[6] = v29 + 1;
        if ( v29 == -1 )
LABEL_55:
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v30 = v20->SchedulerAssist;
      if ( v30 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v31 = v30[6] - 1;
          v30[6] = v31;
          if ( !v31 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      do
        KeYieldProcessorEx(&v43, v17, v18, v19);
      while ( CurrentPrcb->PrcbLock );
      v32 = v20->SchedulerAssist;
      if ( v32 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v33 = v32[6];
          v32[6] = v33 + 1;
          if ( v33 == -1 )
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
    v12 = v44;
    if ( NextThread->WaitBlockFill6[68] == 1 )
    {
      v23 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
      NextThread->ReadyTime = v23 + MEMORY[0xFFFFF78000000320];
    }
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v16 + 643) = 32;
    *(_BYTE *)(v16 + 390) = CurrentIrql;
    KiQueueReadyThread((__int64)CurrentPrcb, v16, v23, v24);
    LOBYTE(v25) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(v16, NextThread, v25) )
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
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      v36 = (v35[5] & 0xFFFF0003) == 0;
      v35[5] &= 0xFFFF0003;
      if ( v36 )
        KiRemoveSystemWorkPriorityKick(v34);
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
      v37 = KeGetCurrentPrcb();
      v38 = v37->SchedulerAssist;
      v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v36 = (v39 & v38[5]) == 0;
      v38[5] &= v39;
      if ( v36 )
        KiRemoveSystemWorkPriorityKick(v37);
    }
  }
  LOBYTE(v4) = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_21:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v7 )
    LOBYTE(v4) = EtwTracePriority(a1, 1328, v12, v7, 0LL);
  return (char)v4;
}
