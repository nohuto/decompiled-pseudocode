/*
 * XREFs of KeBoostPriorityThread @ 0x140255110
 * Callers:
 *     ExpCreateWorkerThread @ 0x1406DCB98 (ExpCreateWorkerThread.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140345AA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     EtwTracePriority @ 0x14062E0D0 (EtwTracePriority.c)
 */

char __fastcall KeBoostPriorityThread(__int64 a1, int a2)
{
  void *v2; // rax
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  _KTHREAD *CurrentThread; // r15
  _DWORD *v8; // rcx
  int v9; // r13d
  int v10; // eax
  __int64 v11; // r8
  __int64 updated; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rdi
  char v15; // r14
  _KTHREAD *v16; // r14
  bool v17; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v19; // r9
  struct _KPRCB *v20; // rdi
  _DWORD *v21; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v23; // r8
  _DWORD *v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // eax
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  int v38; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v39; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v40[8]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v41; // [rsp+A0h] [rbp+40h]
  int v42; // [rsp+B8h] [rbp+58h] BYREF

  v2 = &KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v39 = 0LL;
    v41 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v42 = 0;
    CurrentThread = CurrentPrcb->CurrentThread;
    while ( 1 )
    {
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v25 = v8[6];
          v8[6] = v25 + 1;
          if ( v25 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v24 = CurrentPrcb->SchedulerAssist;
      if ( v24 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v26 = v24[6] - 1;
          v24[6] = v26;
          if ( !v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v42);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v9 = *(char *)(a1 + 195);
    if ( v9 < 16 && !*(_BYTE *)(a1 + 564) )
    {
      v10 = a2 + *(char *)(a1 + 563);
      if ( v10 > v9 )
      {
        v11 = (unsigned int)v10;
        if ( v10 >= 16 )
          v11 = 15LL;
        v41 = v11;
        if ( (_KTHREAD *)a1 != CurrentThread || CurrentPrcb->NestingLevel )
        {
          updated = *(_QWORD *)(a1 + 72);
        }
        else
        {
          _disable();
          updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, a1, 0LL);
          _enable();
          v11 = v41;
        }
        v13 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
        if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
        *(_QWORD *)(a1 + 32) = v13;
        KiSetPriorityThread(a1, &v39, v11);
      }
    }
    KiReleaseThreadLockSafe(a1);
    v14 = v39;
    v15 = 0;
    if ( v39 )
    {
      v39 = (_QWORD *)*v39;
      do
      {
        KiDeferredReadySingleThread(CurrentPrcb, v14 - 27, &v39);
        v14 = v39;
        ++v15;
        if ( v39 )
          v39 = (_QWORD *)*v39;
        if ( (v15 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
      }
      while ( v14 );
    }
    LOBYTE(v2) = KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentPrcb->NextThread )
      {
        LOBYTE(v2) = CurrentPrcb->DpcRoutineActive;
        if ( !(_BYTE)v2 )
        {
          if ( CurrentPrcb->NestingLevel )
          {
            LOBYTE(v2) = 1;
            CurrentPrcb->InterruptRequest = 1;
          }
          else
          {
            v40[0] = 5;
            *(_OWORD *)&v40[1] = 0LL;
            LOBYTE(v2) = HalpInterruptSendIpi(v40, 47LL);
          }
        }
      }
    }
    else
    {
      v16 = CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
        v20 = KeGetCurrentPrcb();
        v38 = 0;
        v21 = v20->SchedulerAssist;
        if ( v21 )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v27 = v21[6];
            v21[6] = v27 + 1;
            if ( v27 == -1 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          v28 = v20->SchedulerAssist;
          if ( v28 )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v29 = v28[6] - 1;
              v28[6] = v29;
              if ( !v29 )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
          do
            KeYieldProcessorEx(&v38);
          while ( CurrentPrcb->PrcbLock );
          v30 = v20->SchedulerAssist;
          if ( v30 )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v31 = v30[6];
              v30[6] = v31 + 1;
              if ( v31 == -1 )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        LOBYTE(v19) = 1;
        KiEndThreadCycleAccumulation(CurrentPrcb, v16, 0LL, v19);
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
          NextThread->ReadyTime = NextThread->ReadyTime
                                - NextThread->WaitBlock[2].SpareLong
                                + MEMORY[0xFFFFF78000000320];
        NextThread->WaitBlockFill6[68] = 2;
        v16->WaitReason = 32;
        v16->WaitIrql = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, v16);
        LOBYTE(v23) = CurrentIrql;
        v17 = (unsigned __int8)KiSwapContext(v16, NextThread, v23) == 0;
      }
      else
      {
        v17 = (v16->MiscFlags & 0x40) == 0;
      }
      if ( !v17 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v32 = KeGetCurrentPrcb();
            v33 = v32->SchedulerAssist;
            v17 = (v33[5] & 0xFFFF0003) == 0;
            v33[5] &= 0xFFFF0003;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
        __writecr8(1uLL);
        v16->MiscFlags &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      LOBYTE(v2) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    {
      LOBYTE(v2) = v41;
      if ( v41 )
        LOBYTE(v2) = EtwTracePriority(a1, 1328, v9, v41, 0LL);
    }
  }
  return (char)v2;
}
