/*
 * XREFs of KeSetBasePriorityThread @ 0x140258E60
 * Callers:
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x1407ACF60 (PfTLoggingWorker.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409422B8 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022E080 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14022F8C0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetPriorityThread @ 0x1402302A0 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x140230D60 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiComputeNewPriority @ 0x1402592D0 (KiComputeNewPriority.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402889FC (KiAbQueueAutoBoostDpc.c)
 *     KiRequestSoftwareInterrupt @ 0x140293E54 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14029F3A0 (KiPriQueueThreadPriorityChanged.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406470 (KiSwapContext.c)
 *     EtwTracePriority @ 0x1405A7EA4 (EtwTracePriority.c)
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
  __int64 v20; // rdx
  __int64 v21; // rbp
  _SINGLE_LIST_ENTRY *p_IoSelfBoostsEntry; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
  unsigned __int64 CycleTime; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int8 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KPRCB *v31; // r13
  _DWORD *v32; // rcx
  _KTHREAD *NextThread; // r13
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  struct _KPRCB *v44; // rcx
  _DWORD *v45; // rdx
  bool v46; // zf
  _DWORD *v47; // rdx
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  _QWORD *v51[2]; // [rsp+30h] [rbp-48h] BYREF
  int v52; // [rsp+80h] [rbp+8h] BYREF
  int v53; // [rsp+90h] [rbp+18h] BYREF
  int v54; // [rsp+98h] [rbp+20h] BYREF

  Process = Thread->Process;
  v5 = Increment;
  v52 = 0;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v51[0] = 0LL;
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
  v53 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  v10 = CurrentPrcb->SchedulerAssist;
  if ( v10 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v38 = v10[6];
      v10[6] = v38 + 1;
      if ( v38 == -1 )
LABEL_70:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    v34 = CurrentPrcb->SchedulerAssist;
    if ( v34 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v39 = v34[6] - 1;
        v34[6] = v39;
        if ( !v39 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v53, *(__int64 *)&Increment, v2, (__int64)SchedulerAssist);
    while ( Thread->ThreadLock );
    v35 = CurrentPrcb->SchedulerAssist;
    if ( v35 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v40 = v35[6];
        v35[6] = v40 + 1;
        if ( v40 == -1 )
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
    v52 = v15;
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
      v52 = v15;
    }
    else
    {
      v16 = v15 - BasePriority + (char)KiComputeNewPriority(Thread, 0LL);
      v52 = v16;
      if ( v16 >= 16 )
      {
        v52 = 15;
      }
      else if ( v16 <= 0 )
      {
        v52 = 1;
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
  if ( v52 != Thread->Priority )
  {
    if ( Thread != CurrentThread || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)Thread, 0LL);
      _enable();
    }
    v26 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    v27 = v52;
    Thread->QuantumTarget = v26;
    KiSetPriorityThread(Thread, (__int64)v51, v27);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(Queue, Thread);
  else
    KiReleaseThreadLockSafe(Thread);
  KiReadyDeferredReadyList((__int64)CurrentPrcb, v51);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    {
      LOBYTE(v20) = 2;
      KiRequestSoftwareInterrupt(CurrentPrcb, v20);
    }
    goto LABEL_26;
  }
  v21 = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
    v31 = KeGetCurrentPrcb();
    v54 = 0;
    v32 = v31->SchedulerAssist;
    if ( v32 )
    {
      if ( v31->NestingLevel <= 1u )
      {
        v41 = v32[6];
        v32[6] = v41 + 1;
        if ( v41 == -1 )
LABEL_85:
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v36 = v31->SchedulerAssist;
      if ( v36 )
      {
        if ( v31->NestingLevel <= 1u )
        {
          v42 = v36[6] - 1;
          v36[6] = v42;
          if ( !v42 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
      do
        KeYieldProcessorEx(&v54, v28, v29, v30);
      while ( CurrentPrcb->PrcbLock );
      v37 = v31->SchedulerAssist;
      if ( v37 )
      {
        if ( v31->NestingLevel <= 1u )
        {
          v43 = v37[6];
          v37[6] = v43 + 1;
          if ( v43 == -1 )
            goto LABEL_85;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v21, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v21 + 643) = 32;
    *(_BYTE *)(v21 + 390) = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v21);
    if ( !(unsigned __int8)KiSwapContext(v21, NextThread, CurrentIrql) )
      goto LABEL_24;
    if ( !KiIrqlFlags )
      goto LABEL_102;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_102;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_102;
    v44 = KeGetCurrentPrcb();
    v45 = v44->SchedulerAssist;
    v46 = (v45[5] & 0xFFFF0003) == 0;
    v45[5] &= 0xFFFF0003;
    if ( !v46 )
      goto LABEL_102;
    goto LABEL_101;
  }
  if ( (*(_DWORD *)(v21 + 116) & 0x40) == 0 )
    goto LABEL_24;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v44 = KeGetCurrentPrcb();
      v47 = v44->SchedulerAssist;
      v46 = (v47[5] & 0xFFFF0003) == 0;
      v47[5] &= 0xFFFF0003;
      if ( v46 )
LABEL_101:
        KiRemoveSystemWorkPriorityKick(v44);
    }
  }
LABEL_102:
  __writecr8(1uLL);
  *(_DWORD *)(v21 + 116) &= ~0x40u;
  KiDeliverApc(0, 0, 0LL);
LABEL_24:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v48 = KeGetCurrentPrcb();
      v49 = v48->SchedulerAssist;
      v50 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v46 = (v50 & v49[5]) == 0;
      v49[5] &= v50;
      if ( v46 )
        KiRemoveSystemWorkPriorityKick(v48);
    }
  }
  __writecr8(CurrentIrql);
LABEL_26:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, BasePriority, v15, (__int64)&v52);
  return v12;
}
