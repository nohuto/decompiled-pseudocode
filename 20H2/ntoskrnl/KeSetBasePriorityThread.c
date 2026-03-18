/*
 * XREFs of KeSetBasePriorityThread @ 0x1402DBEC0
 * Callers:
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x14079B030 (PfTLoggingWorker.c)
 *     EtwpCovSampCaptureContextStart @ 0x140944AE8 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiComputeNewPriority @ 0x1402DC330 (KiComputeNewPriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402DC410 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1403034BC (KiPriQueueThreadPriorityChanged.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035F69C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 *     EtwTracePriority @ 0x1405A6474 (EtwTracePriority.c)
 */

LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  _KPROCESS *Process; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KTHREAD *CurrentThread; // r13
  _DWORD *v8; // rcx
  int BasePriority; // r12d
  LONG v10; // r14d
  char v11; // cl
  int v12; // eax
  int v13; // edi
  int v14; // edx
  struct _KPRCB *v15; // rcx
  char PriorityDecrement; // al
  _DISPATCHER_HEADER *volatile Queue; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbp
  _SINGLE_LIST_ENTRY *p_IoSelfBoostsEntry; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
  volatile unsigned __int64 CycleTime; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int8 v25; // r8
  struct _KPRCB *v26; // r13
  _DWORD *v27; // rcx
  _KTHREAD *NextThread; // r13
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  _DWORD *SchedulerAssist; // r9
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  bool v42; // zf
  _DWORD *v43; // rdx
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  _SINGLE_LIST_ENTRY v47[2]; // [rsp+30h] [rbp-48h] BYREF
  int v48; // [rsp+80h] [rbp+8h] BYREF
  int v49; // [rsp+90h] [rbp+18h] BYREF
  int v50; // [rsp+98h] [rbp+20h] BYREF

  Process = Thread->Process;
  v48 = 0;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v47[0].Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v49 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  v8 = CurrentPrcb->SchedulerAssist;
  if ( v8 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v34 = v8[6];
      v8[6] = v34 + 1;
      if ( v34 == -1 )
LABEL_70:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    v29 = CurrentPrcb->SchedulerAssist;
    if ( v29 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v35 = v29[6] - 1;
        v29[6] = v35;
        if ( !v35 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v49);
    while ( Thread->ThreadLock );
    v30 = CurrentPrcb->SchedulerAssist;
    if ( v30 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v36 = v30[6];
        v30[6] = v36 + 1;
        if ( v36 == -1 )
          goto LABEL_70;
      }
    }
  }
  BasePriority = Thread->BasePriority;
  v10 = BasePriority - Process->BasePriority;
  if ( Thread->Saturation )
    v10 = 16 * Thread->Saturation;
  Thread->Saturation = 0;
  v11 = 0;
  if ( (int)abs32(Increment) >= 16 )
  {
    v11 = 1;
    if ( Increment <= 0 )
      v11 = -1;
    Thread->Saturation = v11;
  }
  v12 = Process->BasePriority;
  v13 = v12 + Increment;
  if ( (char)v12 >= 16 )
  {
    if ( v13 >= 16 )
    {
      if ( v13 > 31 )
        v13 = 31;
    }
    else
    {
      v13 = 16;
    }
    v48 = v13;
  }
  else
  {
    if ( v13 >= 16 )
    {
      v13 = 15;
    }
    else if ( v13 <= 0 )
    {
      v13 = 1;
    }
    if ( v11 )
    {
      v48 = v13;
    }
    else
    {
      v14 = v13 - BasePriority + (char)KiComputeNewPriority(Thread, 0LL);
      v48 = v14;
      if ( v14 >= 16 )
      {
        v48 = 15;
      }
      else if ( v14 <= 0 )
      {
        v48 = 1;
      }
    }
  }
  v15 = KeGetCurrentPrcb();
  if ( (char)v13 < Thread->BasePriority )
  {
    if ( Thread->AbOwnedEntryCount )
    {
      p_IoSelfBoostsEntry = &Thread->IoSelfBoostsEntry;
      if ( Thread->IoSelfBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
      {
        p_AbSelfIoBoostsList = &v15->AbSelfIoBoostsList;
        if ( v15 != (struct _KPRCB *)-34672LL )
        {
          p_IoSelfBoostsEntry->Next = p_AbSelfIoBoostsList->Next;
          p_AbSelfIoBoostsList->Next = p_IoSelfBoostsEntry;
          _InterlockedIncrement16(&Thread->KeReferenceCount);
          KiAbQueueAutoBoostDpc(v15);
        }
      }
    }
  }
  PriorityDecrement = Thread->PriorityDecrement;
  Thread->BasePriority = v13;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
    Thread->PriorityDecrement = 0;
  }
  if ( v48 != Thread->Priority )
  {
    if ( Thread != CurrentThread || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CycleTime = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, Thread, 0LL);
      _enable();
    }
    v24 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    v25 = v48;
    Thread->QuantumTarget = v24;
    KiSetPriorityThread(Thread, (__int64)v47, v25);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(Queue, Thread);
  else
    KiReleaseThreadLockSafe(Thread);
  KiReadyDeferredReadyList((__int64)CurrentPrcb, v47);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    {
      LOBYTE(v18) = 2;
      KiRequestSoftwareInterrupt(CurrentPrcb, v18);
    }
    goto LABEL_26;
  }
  v19 = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
    v26 = KeGetCurrentPrcb();
    v50 = 0;
    v27 = v26->SchedulerAssist;
    if ( v27 )
    {
      if ( v26->NestingLevel <= 1u )
      {
        v37 = v27[6];
        v27[6] = v37 + 1;
        if ( v37 == -1 )
LABEL_85:
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v31 = v26->SchedulerAssist;
      if ( v31 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v38 = v31[6] - 1;
          v31[6] = v38;
          if ( !v38 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      do
        KeYieldProcessorEx(&v50);
      while ( CurrentPrcb->PrcbLock );
      v32 = v26->SchedulerAssist;
      if ( v32 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v39 = v32[6];
          v32[6] = v39 + 1;
          if ( v39 == -1 )
            goto LABEL_85;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v19, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v19 + 643) = 32;
    *(_BYTE *)(v19 + 390) = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v19);
    if ( !(unsigned __int8)KiSwapContext(v19, NextThread, CurrentIrql) )
      goto LABEL_24;
    if ( !KiIrqlFlags )
      goto LABEL_102;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_102;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_102;
    v40 = KeGetCurrentPrcb();
    v41 = v40->SchedulerAssist;
    v42 = (v41[5] & 0xFFFF0003) == 0;
    v41[5] &= 0xFFFF0003;
    if ( !v42 )
      goto LABEL_102;
    goto LABEL_101;
  }
  if ( (*(_DWORD *)(v19 + 116) & 0x40) == 0 )
    goto LABEL_24;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v40 = KeGetCurrentPrcb();
      v43 = v40->SchedulerAssist;
      v42 = (v43[5] & 0xFFFF0003) == 0;
      v43[5] &= 0xFFFF0003;
      if ( v42 )
LABEL_101:
        KiRemoveSystemWorkPriorityKick(v40);
    }
  }
LABEL_102:
  __writecr8(1uLL);
  *(_DWORD *)(v19 + 116) &= ~0x40u;
  KiDeliverApc(0LL, 0LL, 0LL);
LABEL_24:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v44 = KeGetCurrentPrcb();
      v45 = v44->SchedulerAssist;
      v46 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v42 = (v46 & v45[5]) == 0;
      v45[5] &= v46;
      if ( v42 )
        KiRemoveSystemWorkPriorityKick(v44);
    }
  }
  __writecr8(CurrentIrql);
LABEL_26:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, BasePriority, v13, (__int64)&v48);
  return v10;
}
