/*
 * XREFs of KeSetBasePriorityThread @ 0x140332450
 * Callers:
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x14078CA20 (PfTLoggingWorker.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093DAA8 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiSetPriorityThread @ 0x14026C6D0 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402DDB6C (KiAbQueueAutoBoostDpc.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14030F7B4 (KiPriQueueThreadPriorityChanged.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiComputeNewPriority @ 0x1403328C0 (KiComputeNewPriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140332B00 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 *     EtwTracePriority @ 0x1405A22E4 (EtwTracePriority.c)
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
  struct _KDPC *v17; // rcx
  char PriorityDecrement; // al
  _DISPATCHER_HEADER *volatile Queue; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  _DWORD *v23; // r9
  __int64 v24; // rbp
  _SINGLE_LIST_ENTRY *p_IoSelfBoostsEntry; // rdx
  struct _SINGLE_LIST_ENTRY **p_SystemArgument2; // r8
  volatile unsigned __int64 CycleTime; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int8 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  struct _KPRCB *v34; // r13
  _DWORD *v35; // rcx
  _KTHREAD *NextThread; // r13
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  _DWORD *v39; // rcx
  _DWORD *v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  bool v49; // zf
  _DWORD *v50; // rdx
  struct _KPRCB *v51; // r9
  _DWORD *v52; // r8
  int v53; // eax
  _QWORD v54[2]; // [rsp+30h] [rbp-48h] BYREF
  int v55; // [rsp+80h] [rbp+8h] BYREF
  int v56; // [rsp+90h] [rbp+18h] BYREF
  int v57; // [rsp+98h] [rbp+20h] BYREF

  Process = Thread->Process;
  v5 = Increment;
  v55 = 0;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v54[0] = 0LL;
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
  v56 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  v10 = CurrentPrcb->SchedulerAssist;
  if ( v10 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v41 = v10[6];
      v10[6] = v41 + 1;
      if ( v41 == -1 )
LABEL_70:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    v37 = CurrentPrcb->SchedulerAssist;
    if ( v37 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v42 = v37[6] - 1;
        v37[6] = v42;
        if ( !v42 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v56, *(__int64 *)&Increment, v2, (__int64)SchedulerAssist);
    while ( Thread->ThreadLock );
    v38 = CurrentPrcb->SchedulerAssist;
    if ( v38 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v43 = v38[6];
        v38[6] = v43 + 1;
        if ( v43 == -1 )
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
    v55 = v15;
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
      v55 = v15;
    }
    else
    {
      v16 = v15 - BasePriority + (char)KiComputeNewPriority(Thread, 0LL);
      v55 = v16;
      if ( v16 >= 16 )
      {
        v55 = 15;
      }
      else if ( v16 <= 0 )
      {
        v55 = 1;
      }
    }
  }
  v17 = (struct _KDPC *)KeGetCurrentPrcb();
  if ( (char)v15 < Thread->BasePriority )
  {
    if ( Thread->AbOwnedEntryCount )
    {
      p_IoSelfBoostsEntry = &Thread->IoSelfBoostsEntry;
      if ( Thread->IoSelfBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
      {
        p_SystemArgument2 = (struct _SINGLE_LIST_ENTRY **)&v17[541].SystemArgument2;
        if ( v17 != (struct _KDPC *)-34672LL )
        {
          p_IoSelfBoostsEntry->Next = *p_SystemArgument2;
          *p_SystemArgument2 = p_IoSelfBoostsEntry;
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
  if ( v55 != Thread->Priority )
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
    v29 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    v30 = v55;
    Thread->QuantumTarget = v29;
    KiSetPriorityThread(Thread, (__int64)v54, v30);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(&Queue->Lock, (__int64)Thread);
  else
    KiReleaseThreadLockSafe((__int64)Thread);
  KiReadyDeferredReadyList((__int64)CurrentPrcb, v54, v20, v21);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    {
      LOBYTE(v22) = 2;
      KiRequestSoftwareInterrupt(CurrentPrcb, v22);
    }
    goto LABEL_26;
  }
  v24 = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
    v34 = KeGetCurrentPrcb();
    v57 = 0;
    v35 = v34->SchedulerAssist;
    if ( v35 )
    {
      if ( v34->NestingLevel <= 1u )
      {
        v44 = v35[6];
        v35[6] = v44 + 1;
        if ( v44 == -1 )
LABEL_85:
          KiRemoveSystemWorkPriorityKick(v34);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v39 = v34->SchedulerAssist;
      if ( v39 )
      {
        if ( v34->NestingLevel <= 1u )
        {
          v45 = v39[6] - 1;
          v39[6] = v45;
          if ( !v45 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      do
        KeYieldProcessorEx(&v57, v31, v32, v33);
      while ( CurrentPrcb->PrcbLock );
      v40 = v34->SchedulerAssist;
      if ( v40 )
      {
        if ( v34->NestingLevel <= 1u )
        {
          v46 = v40[6];
          v40[6] = v46 + 1;
          if ( v46 == -1 )
            goto LABEL_85;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v24, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v24 + 643) = 32;
    *(_BYTE *)(v24 + 390) = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v24);
    if ( !(unsigned __int8)KiSwapContext(v24, NextThread, CurrentIrql) )
      goto LABEL_24;
    if ( !KiIrqlFlags )
      goto LABEL_102;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_102;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_102;
    v47 = KeGetCurrentPrcb();
    v48 = v47->SchedulerAssist;
    v49 = (v48[5] & 0xFFFF0003) == 0;
    v48[5] &= 0xFFFF0003;
    if ( !v49 )
      goto LABEL_102;
    goto LABEL_101;
  }
  if ( (*(_DWORD *)(v24 + 116) & 0x40) == 0 )
    goto LABEL_24;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v47 = KeGetCurrentPrcb();
      v50 = v47->SchedulerAssist;
      v49 = (v50[5] & 0xFFFF0003) == 0;
      v50[5] &= 0xFFFF0003;
      if ( v49 )
LABEL_101:
        KiRemoveSystemWorkPriorityKick(v47);
    }
  }
LABEL_102:
  __writecr8(1uLL);
  *(_DWORD *)(v24 + 116) &= ~0x40u;
  KiDeliverApc(0, 0LL, 0LL, v23);
LABEL_24:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v51 = KeGetCurrentPrcb();
      v52 = v51->SchedulerAssist;
      v53 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v49 = (v53 & v52[5]) == 0;
      v52[5] &= v53;
      if ( v49 )
        KiRemoveSystemWorkPriorityKick(v51);
    }
  }
  __writecr8(CurrentIrql);
LABEL_26:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, BasePriority, v15, (__int64)&v55);
  return v12;
}
