/*
 * XREFs of KeSetBasePriorityThread @ 0x1402ED310
 * Callers:
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x14078E8F0 (PfTLoggingWorker.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093ED28 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiComputeNewPriority @ 0x1402ED780 (KiComputeNewPriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402ED9C0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x14032A93C (KiAbQueueAutoBoostDpc.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14034CE84 (KiPriQueueThreadPriorityChanged.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 *     EtwTracePriority @ 0x1405A29D4 (EtwTracePriority.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  _KPROCESS *Process; // rdi
  LONG v5; // ebp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KTHREAD *CurrentThread; // r13
  _DWORD *v10; // rcx
  int BasePriority; // r12d
  LONG v12; // r14d
  char v13; // cl
  int v14; // eax
  int v15; // edi
  int v16; // edx
  struct _KPRCB *v17; // rcx
  char PriorityDecrement; // al
  _DISPATCHER_HEADER *volatile Queue; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbp
  _SINGLE_LIST_ENTRY *p_IoSelfBoostsEntry; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
  volatile unsigned __int64 CycleTime; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int8 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _KPRCB *v32; // r13
  _DWORD *v33; // rcx
  _KTHREAD *NextThread; // r13
  _DWORD *v35; // rcx
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  bool v47; // zf
  _DWORD *v48; // rdx
  struct _KPRCB *v49; // r9
  _DWORD *v50; // r8
  int v51; // eax
  _QWORD *v52[2]; // [rsp+30h] [rbp-48h] BYREF
  int v53; // [rsp+80h] [rbp+8h] BYREF
  int v54; // [rsp+90h] [rbp+18h] BYREF
  int v55; // [rsp+98h] [rbp+20h] BYREF

  Process = Thread->Process;
  v5 = Increment;
  v53 = 0;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v52[0] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    *(_QWORD *)&Increment = (-1LL << (CurrentIrql + 1)) & 4;
    v2 = (unsigned int)Increment | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v54 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  v10 = CurrentPrcb->SchedulerAssist;
  if ( v10 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v39 = v10[6];
      v10[6] = v39 + 1;
      if ( v39 == -1 )
LABEL_70:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    v35 = CurrentPrcb->SchedulerAssist;
    if ( v35 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v40 = v35[6] - 1;
        v35[6] = v40;
        if ( !v40 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v54, *(__int64 *)&Increment, v2, (__int64)SchedulerAssist);
    while ( Thread->ThreadLock );
    v36 = CurrentPrcb->SchedulerAssist;
    if ( v36 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v41 = v36[6];
        v36[6] = v41 + 1;
        if ( v41 == -1 )
          goto LABEL_70;
      }
    }
  }
  BasePriority = Thread->BasePriority;
  v12 = BasePriority - Process->BasePriority;
  if ( Thread->Saturation )
    v12 = 16 * Thread->Saturation;
  Thread->Saturation = 0;
  v13 = 0;
  if ( (int)abs32(v5) >= 16 )
  {
    v13 = 1;
    if ( v5 <= 0 )
      v13 = -1;
    Thread->Saturation = v13;
  }
  v14 = Process->BasePriority;
  v15 = v14 + v5;
  if ( (char)v14 >= 16 )
  {
    if ( v15 >= 16 )
    {
      if ( v15 > 31 )
        v15 = 31;
    }
    else
    {
      v15 = 16;
    }
    v53 = v15;
  }
  else
  {
    if ( v15 >= 16 )
    {
      v15 = 15;
    }
    else if ( v15 <= 0 )
    {
      v15 = 1;
    }
    if ( v13 )
    {
      v53 = v15;
    }
    else
    {
      v16 = v15 - BasePriority + (char)KiComputeNewPriority(Thread, 0LL);
      v53 = v16;
      if ( v16 >= 16 )
      {
        v53 = 15;
      }
      else if ( v16 <= 0 )
      {
        v53 = 1;
      }
    }
  }
  v17 = KeGetCurrentPrcb();
  if ( (char)v15 < Thread->BasePriority )
  {
    if ( Thread->AbOwnedEntryCount )
    {
      p_IoSelfBoostsEntry = &Thread->IoSelfBoostsEntry;
      if ( Thread->IoSelfBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
      {
        p_AbSelfIoBoostsList = &v17->AbSelfIoBoostsList;
        if ( v17 != (struct _KPRCB *)-34672LL )
        {
          p_IoSelfBoostsEntry->Next = p_AbSelfIoBoostsList->Next;
          p_AbSelfIoBoostsList->Next = p_IoSelfBoostsEntry;
          _InterlockedIncrement16(&Thread->KeReferenceCount);
          KiAbQueueAutoBoostDpc(v17);
        }
      }
    }
  }
  PriorityDecrement = Thread->PriorityDecrement;
  Thread->BasePriority = v15;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
    Thread->PriorityDecrement = 0;
  }
  if ( v53 != Thread->Priority )
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
    v27 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    v28 = v53;
    Thread->QuantumTarget = v27;
    KiSetPriorityThread(Thread, (__int64)v52, v28);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(Queue, Thread);
  else
    KiReleaseThreadLockSafe(Thread);
  KiReadyDeferredReadyList((__int64)CurrentPrcb, v52, v20, v21);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    goto LABEL_26;
  }
  v22 = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
    v32 = KeGetCurrentPrcb();
    v55 = 0;
    v33 = v32->SchedulerAssist;
    if ( v33 )
    {
      if ( v32->NestingLevel <= 1u )
      {
        v42 = v33[6];
        v33[6] = v42 + 1;
        if ( v42 == -1 )
LABEL_85:
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v37 = v32->SchedulerAssist;
      if ( v37 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v43 = v37[6] - 1;
          v37[6] = v43;
          if ( !v43 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      do
        KeYieldProcessorEx(&v55, v29, v30, v31);
      while ( CurrentPrcb->PrcbLock );
      v38 = v32->SchedulerAssist;
      if ( v38 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v44 = v38[6];
          v38[6] = v44 + 1;
          if ( v44 == -1 )
            goto LABEL_85;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v22, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v22 + 643) = 32;
    *(_BYTE *)(v22 + 390) = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v22);
    if ( !(unsigned __int8)KiSwapContext(v22, NextThread, CurrentIrql) )
      goto LABEL_24;
    if ( !KiIrqlFlags )
      goto LABEL_102;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_102;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_102;
    v45 = KeGetCurrentPrcb();
    v46 = v45->SchedulerAssist;
    v47 = (v46[5] & 0xFFFF0003) == 0;
    v46[5] &= 0xFFFF0003;
    if ( !v47 )
      goto LABEL_102;
    goto LABEL_101;
  }
  if ( (*(_DWORD *)(v22 + 116) & 0x40) == 0 )
    goto LABEL_24;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v45 = KeGetCurrentPrcb();
      v48 = v45->SchedulerAssist;
      v47 = (v48[5] & 0xFFFF0003) == 0;
      v48[5] &= 0xFFFF0003;
      if ( v47 )
LABEL_101:
        KiRemoveSystemWorkPriorityKick(v45);
    }
  }
LABEL_102:
  __writecr8(1uLL);
  *(_DWORD *)(v22 + 116) &= ~0x40u;
  KiDeliverApc(0, 0LL, 0LL);
LABEL_24:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v49 = KeGetCurrentPrcb();
      v50 = v49->SchedulerAssist;
      v51 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v47 = (v51 & v50[5]) == 0;
      v50[5] &= v51;
      if ( v47 )
        KiRemoveSystemWorkPriorityKick(v49);
    }
  }
  __writecr8(CurrentIrql);
LABEL_26:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, BasePriority, v15, (__int64)&v53);
  return v12;
}
