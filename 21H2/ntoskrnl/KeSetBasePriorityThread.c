/*
 * XREFs of KeSetBasePriorityThread @ 0x14027A3D0
 * Callers:
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x1407AD160 (PfTLoggingWorker.c)
 *     EtwpCovSampCaptureContextStart @ 0x140942488 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14021C900 (KiPriQueueThreadPriorityChanged.c)
 *     KiComputeNewPriority @ 0x14027A840 (KiComputeNewPriority.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402D4110 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     EtwTracePriority @ 0x1405A80D4 (EtwTracePriority.c)
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
  struct _KDPC *v15; // rcx
  char PriorityDecrement; // al
  _DISPATCHER_HEADER *volatile Queue; // rcx
  _KTHREAD *v18; // rbp
  _SINGLE_LIST_ENTRY *p_IoSelfBoostsEntry; // rdx
  struct _SINGLE_LIST_ENTRY **p_SystemArgument2; // r8
  volatile unsigned __int64 CycleTime; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  struct _KPRCB *v25; // r13
  _DWORD *v26; // rcx
  _KTHREAD *NextThread; // r13
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  bool v41; // zf
  _DWORD *v42; // rdx
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  int v45; // eax
  _QWORD v46[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v47; // [rsp+80h] [rbp+8h] BYREF
  int v48; // [rsp+90h] [rbp+18h] BYREF
  int v49; // [rsp+98h] [rbp+20h] BYREF

  Process = Thread->Process;
  v47 = 0;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v46[0] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v48 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  v8 = CurrentPrcb->SchedulerAssist;
  if ( v8 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v33 = v8[6];
      v8[6] = v33 + 1;
      if ( v33 == -1 )
LABEL_70:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    v28 = CurrentPrcb->SchedulerAssist;
    if ( v28 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v34 = v28[6] - 1;
        v28[6] = v34;
        if ( !v34 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v48);
    while ( Thread->ThreadLock );
    v29 = CurrentPrcb->SchedulerAssist;
    if ( v29 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v35 = v29[6];
        v29[6] = v35 + 1;
        if ( v35 == -1 )
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
    v47 = v13;
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
      v47 = v13;
    }
    else
    {
      v14 = v13 - BasePriority + (char)KiComputeNewPriority(Thread, 0LL);
      v47 = v14;
      if ( v14 >= 16 )
      {
        v47 = 15;
      }
      else if ( v14 <= 0 )
      {
        v47 = 1;
      }
    }
  }
  v15 = (struct _KDPC *)KeGetCurrentPrcb();
  if ( (char)v13 < Thread->BasePriority )
  {
    if ( Thread->AbOwnedEntryCount )
    {
      p_IoSelfBoostsEntry = &Thread->IoSelfBoostsEntry;
      if ( Thread->IoSelfBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
      {
        p_SystemArgument2 = (struct _SINGLE_LIST_ENTRY **)&v15[541].SystemArgument2;
        if ( v15 != (struct _KDPC *)-34672LL )
        {
          p_IoSelfBoostsEntry->Next = *p_SystemArgument2;
          *p_SystemArgument2 = p_IoSelfBoostsEntry;
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
  if ( v47 != Thread->Priority )
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
    v23 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    v24 = v47;
    Thread->QuantumTarget = v23;
    KiSetPriorityThread(Thread, v46, v24);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(&Queue->Lock, (__int64)Thread);
  else
    KiReleaseThreadLockSafe((__int64)Thread);
  KiReadyDeferredReadyList(CurrentPrcb, v46);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    goto LABEL_26;
  }
  v18 = CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
    v25 = KeGetCurrentPrcb();
    v49 = 0;
    v26 = v25->SchedulerAssist;
    if ( v26 )
    {
      if ( v25->NestingLevel <= 1u )
      {
        v36 = v26[6];
        v26[6] = v36 + 1;
        if ( v36 == -1 )
LABEL_85:
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v30 = v25->SchedulerAssist;
      if ( v30 )
      {
        if ( v25->NestingLevel <= 1u )
        {
          v37 = v30[6] - 1;
          v30[6] = v37;
          if ( !v37 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
      do
        KeYieldProcessorEx(&v49);
      while ( CurrentPrcb->PrcbLock );
      v31 = v25->SchedulerAssist;
      if ( v31 )
      {
        if ( v25->NestingLevel <= 1u )
        {
          v38 = v31[6];
          v31[6] = v38 + 1;
          if ( v38 == -1 )
            goto LABEL_85;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, v18, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    v18->WaitReason = 32;
    v18->WaitIrql = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v18);
    if ( !(unsigned __int8)KiSwapContext(v18, NextThread, CurrentIrql) )
      goto LABEL_24;
    if ( !KiIrqlFlags )
      goto LABEL_102;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_102;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_102;
    v39 = KeGetCurrentPrcb();
    v40 = v39->SchedulerAssist;
    v41 = (v40[5] & 0xFFFF0003) == 0;
    v40[5] &= 0xFFFF0003;
    if ( !v41 )
      goto LABEL_102;
    goto LABEL_101;
  }
  if ( (v18->MiscFlags & 0x40) == 0 )
    goto LABEL_24;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v39 = KeGetCurrentPrcb();
      v42 = v39->SchedulerAssist;
      v41 = (v42[5] & 0xFFFF0003) == 0;
      v42[5] &= 0xFFFF0003;
      if ( v41 )
LABEL_101:
        KiRemoveSystemWorkPriorityKick(v39);
    }
  }
LABEL_102:
  __writecr8(1uLL);
  v18->MiscFlags &= ~0x40u;
  KiDeliverApc(0LL, 0LL, 0LL);
LABEL_24:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v43 = KeGetCurrentPrcb();
      v44 = v43->SchedulerAssist;
      v45 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v41 = (v45 & v44[5]) == 0;
      v44[5] &= v45;
      if ( v41 )
        KiRemoveSystemWorkPriorityKick(v43);
    }
  }
  __writecr8(CurrentIrql);
LABEL_26:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, BasePriority, v13, (__int64)&v47);
  return v10;
}
