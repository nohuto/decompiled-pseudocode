/*
 * XREFs of KeSetUserAffinityThread @ 0x14020E9E8
 * Callers:
 *     ExpWorkerThread @ 0x14033CBF0 (ExpWorkerThread.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x14083ECE0 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiSetAffinityThread @ 0x14020EC24 (KiSetAffinityThread.c)
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     KiExtendProcessAffinity @ 0x14057B33C (KiExtendProcessAffinity.c)
 */

char __fastcall KeSetUserAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _QWORD *v7; // rdi
  char v8; // si
  char result; // al
  _KTHREAD *CurrentThread; // rsi
  bool v11; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // r9
  struct _KPRCB *v14; // rdi
  _DWORD *v15; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v17; // r8
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  _DWORD v26[8]; // [rsp+20h] [rbp-20h] BYREF
  int v27; // [rsp+80h] [rbp+40h] BYREF
  _QWORD *v28; // [rsp+90h] [rbp+50h] BYREF

  v2 = *(_QWORD *)(a1 + 544);
  v28 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  if ( !(unsigned int)KeIsSubsetAffinityEx(a2, v2 + 80) )
    KiExtendProcessAffinity(v2, a2);
  if ( (unsigned int)KeIsEmptyAffinityEx(a2) )
    a2 = v2 + 80;
  KiSetAffinityThread(a1, &v28, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  v7 = v28;
  v8 = 0;
  if ( v28 )
  {
    v28 = (_QWORD *)*v28;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, v7 - 27, &v28);
      v7 = v28;
      ++v8;
      if ( v28 )
        v28 = (_QWORD *)*v28;
      if ( (v8 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
    }
    while ( v7 );
  }
  result = KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          v26[0] = 5;
          *(_OWORD *)&v26[1] = 0LL;
          return HalpInterruptSendIpi(v26, 47LL);
        }
      }
    }
  }
  else
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v14 = KeGetCurrentPrcb();
      v27 = 0;
      while ( 1 )
      {
        v15 = v14->SchedulerAssist;
        if ( v15 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v19 = v15[6];
            v15[6] = v19 + 1;
            if ( v19 == -1 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v18 = v14->SchedulerAssist;
        if ( v18 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v20 = v18[6] - 1;
            v18[6] = v20;
            if ( !v20 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        do
          KeYieldProcessorEx(&v27);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      LOBYTE(v13) = 1;
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL, v13);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v17) = CurrentIrql;
      v11 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v17) == 0;
    }
    else
    {
      v11 = (CurrentThread->MiscFlags & 0x40) == 0;
    }
    if ( !v11 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v11 = (v22[5] & 0xFFFF0003) == 0;
          v22[5] &= 0xFFFF0003;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v25 & v24[5]) == 0;
      v24[5] &= v25;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(v23);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
