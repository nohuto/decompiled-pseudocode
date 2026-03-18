/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x140207F60
 * Callers:
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x140208284 (KiCheckForEffectivePriorityChange.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140210CE4 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x140210D6C (KiResortScbQueue.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x140291A94 (KiMoveScbThreadsToNewReadylist.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KeSetSchedulingGroupRankBias(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r10
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // r15
  char v7; // r13
  __int64 v8; // r14
  __int64 v9; // rbx
  struct _KPRCB *v10; // rsi
  _DWORD *v11; // rcx
  char v12; // cl
  __int64 v13; // r8
  char v14; // cl
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  _QWORD **v17; // rbx
  char v18; // si
  volatile unsigned __int8 result; // al
  _KTHREAD *CurrentThread; // rsi
  bool v21; // zf
  _DWORD *SchedulerAssist; // r9
  unsigned int v23; // eax
  char v24; // cl
  int v25; // r8d
  _DWORD *v26; // rcx
  __int64 v27; // r9
  struct _KPRCB *v28; // rbx
  _DWORD *v29; // rcx
  _KTHREAD *NextThread; // rbx
  __int64 v31; // r8
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  _QWORD **v36; // r9
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // eax
  int v40; // eax
  _DWORD *v41; // rcx
  int v42; // eax
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  _DWORD v48[10]; // [rsp+20h] [rbp-28h] BYREF
  int v49; // [rsp+90h] [rbp+48h] BYREF
  int v50; // [rsp+98h] [rbp+50h] BYREF
  _QWORD *v51; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v52; // [rsp+A8h] [rbp+60h]

  LOBYTE(v50) = a2;
  v51 = 0LL;
  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v52 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0LL;
  if ( KeMaximumProcessors )
  {
    v7 = v50;
    while ( 1 )
    {
      v8 = KiProcessorBlock[v6];
      v9 = 424LL * (unsigned int)v6 + a1 + 128;
      if ( v8 )
      {
        v10 = KeGetCurrentPrcb();
        v49 = 0;
        while ( 1 )
        {
          v11 = v10->SchedulerAssist;
          if ( v11 )
          {
            if ( v10->NestingLevel <= 1u )
            {
              v32 = v11[6];
              v11[6] = v32 + 1;
              if ( v32 == -1 )
                KiRemoveSystemWorkPriorityKick(v10);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
            break;
          v26 = v10->SchedulerAssist;
          if ( v26 )
          {
            if ( v10->NestingLevel <= 1u )
            {
              v33 = v26[6] - 1;
              v26[6] = v33;
              if ( !v33 )
                KiRemoveSystemWorkPriorityKick(v10);
            }
          }
          do
            KeYieldProcessorEx(&v49);
          while ( *(_QWORD *)(v8 + 48) );
        }
      }
      v12 = *(_BYTE *)(v9 + 112);
      v13 = *(unsigned int *)(v9 + 116);
      if ( v7 )
        break;
      v23 = *(unsigned __int8 *)(v9 + 112);
      v24 = v12 & 0xF7;
      *(_BYTE *)(v9 + 112) = v24;
      v25 = v13 - ((v23 >> 3) & 1);
      *(_DWORD *)(v9 + 116) = v25;
      if ( v25 )
      {
        if ( (v24 & 1) != 0 )
        {
          v13 = 0LL;
LABEL_50:
          KiResortScbQueue(v8, v9, v13);
        }
LABEL_10:
        if ( v8 )
          goto LABEL_11;
        goto LABEL_12;
      }
      if ( v8 )
      {
        if ( (v24 & 1) == 0 )
        {
LABEL_29:
          *(_BYTE *)(v9 + 112) &= ~4u;
LABEL_11:
          KiCheckForEffectivePriorityChange(v8, v9);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
          v15 = KeGetCurrentPrcb();
          v16 = v15->SchedulerAssist;
          if ( v16 )
          {
            if ( v15->NestingLevel <= 1u )
            {
              v39 = v16[6] - 1;
              v16[6] = v39;
              if ( !v39 )
                KiRemoveSystemWorkPriorityKick(v15);
            }
          }
          goto LABEL_12;
        }
        v34 = 424LL * (unsigned int)v6 + a1 + 128;
        do
        {
          v35 = *(_QWORD *)(v34 + 408);
          if ( !v35 )
            break;
          v34 = *(_QWORD *)(v34 + 408);
        }
        while ( !*(_DWORD *)(v35 + 116) );
        if ( *(_DWORD *)(v34 + 116) )
        {
          v36 = 0LL;
        }
        else
        {
          v36 = &v51;
          v34 = 0LL;
        }
        KiMoveScbThreadsToNewReadylist(v9, v34, 0LL, v36);
        v38 = *(_QWORD *)(v9 + 392);
        if ( (*(_BYTE *)(v9 + 400) & 1) != 0 )
        {
          if ( v38 )
          {
            v38 ^= v9 + 392;
            goto LABEL_60;
          }
        }
        else
        {
LABEL_60:
          if ( v38 )
            goto LABEL_29;
        }
        LOBYTE(v37) = 1;
        KiRemoveSchedulingGroupQueue(v8, v9, v37);
        goto LABEL_29;
      }
LABEL_12:
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= KeMaximumProcessors )
      {
        LOBYTE(CurrentIrql) = v52;
        v2 = v50;
        goto LABEL_14;
      }
    }
    v14 = v12 | 0xC;
    *(_DWORD *)(v9 + 116) = v13 + 1;
    *(_BYTE *)(v9 + 112) = v14;
    if ( (v14 & 1) != 0 )
    {
      LOBYTE(v13) = 1;
      goto LABEL_50;
    }
    goto LABEL_10;
  }
LABEL_14:
  v17 = (_QWORD **)v51;
  v18 = 0;
  *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (4 * v2)) & 4;
  if ( v17 )
  {
    v51 = *v17;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, v17 - 27, &v51);
      v17 = (_QWORD **)v51;
      ++v18;
      if ( v51 )
        v51 = (_QWORD *)*v51;
      if ( (v18 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
    }
    while ( v17 );
  }
  result = KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
  if ( (unsigned __int8)CurrentIrql >= 2u )
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
          v48[0] = 5;
          *(_OWORD *)&v48[1] = 0LL;
          return HalpInterruptSendIpi(v48, 47LL);
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
      v28 = KeGetCurrentPrcb();
      v50 = 0;
      while ( 1 )
      {
        v29 = v28->SchedulerAssist;
        if ( v29 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v40 = v29[6];
            v29[6] = v40 + 1;
            if ( v40 == -1 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v41 = v28->SchedulerAssist;
        if ( v41 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v42 = v41[6] - 1;
            v41[6] = v42;
            if ( !v42 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        do
          KeYieldProcessorEx(&v50);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      LOBYTE(v27) = 1;
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL, v27);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v31) = CurrentIrql;
      v21 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v31) == 0;
    }
    else
    {
      v21 = (CurrentThread->MiscFlags & 0x40) == 0;
    }
    if ( !v21 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v43 = KeGetCurrentPrcb();
          v44 = v43->SchedulerAssist;
          v21 = (v44[5] & 0xFFFF0003) == 0;
          v44[5] &= 0xFFFF0003;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v43);
        }
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v45 = KeGetCurrentPrcb();
      v46 = v45->SchedulerAssist;
      v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v21 = (v47 & v46[5]) == 0;
      v46[5] &= v47;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(v45);
    }
    result = CurrentIrql;
    __writecr8((unsigned __int8)CurrentIrql);
  }
  return result;
}
