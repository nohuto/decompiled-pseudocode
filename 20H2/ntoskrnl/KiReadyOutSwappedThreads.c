/*
 * XREFs of KiReadyOutSwappedThreads @ 0x14028D410
 * Callers:
 *     KiOutSwapProcesses @ 0x1402DD750 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x14030A250 (KiInSwapProcesses.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiReadyThread @ 0x14028D5F0 (KiReadyThread.c)
 *     KiEnterDeferredReadyState @ 0x14028D730 (KiEnterDeferredReadyState.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x1405A6540 (EtwTraceReadyThread.c)
 */

char __fastcall KiReadyOutSwappedThreads(_QWORD *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v4; // rbp
  _QWORD *v5; // rsi
  struct _KPRCB *v6; // r15
  volatile signed __int32 *v7; // rbx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  _KTHREAD *CurrentThread; // rbx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  struct _KPRCB *v16; // rsi
  _DWORD *v17; // rcx
  _KTHREAD *NextThread; // rsi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  bool v30; // zf
  _DWORD *v31; // rdx
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v35; // [rsp+50h] [rbp+8h] BYREF
  int v36; // [rsp+58h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = a2;
  v5 = a1;
  do
  {
    v6 = KeGetCurrentPrcb();
    v7 = (volatile signed __int32 *)(v5 - 27);
    v5 = (_QWORD *)*v5;
    v36 = 0;
    SchedulerAssist = v6->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v19 = SchedulerAssist[6];
        SchedulerAssist[6] = v19 + 1;
        if ( v19 == -1 )
LABEL_28:
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
    while ( _interlockedbittestandset64(v7 + 16, 0LL) )
    {
      v14 = v6->SchedulerAssist;
      if ( v14 )
      {
        if ( v6->NestingLevel <= 1u )
        {
          v20 = v14[6] - 1;
          v14[6] = v20;
          if ( !v20 )
            KiRemoveSystemWorkPriorityKick(v6);
        }
      }
      do
        KeYieldProcessorEx(&v36);
      while ( *((_QWORD *)v7 + 8) );
      v15 = v6->SchedulerAssist;
      if ( v15 )
      {
        if ( v6->NestingLevel <= 1u )
        {
          v21 = v15[6];
          v15[6] = v21 + 1;
          if ( v21 == -1 )
            goto LABEL_28;
        }
      }
    }
    KiEnterDeferredReadyState(v7);
    *((_QWORD *)v7 + 8) = 0LL;
    v9 = KeGetCurrentPrcb();
    v10 = v9->SchedulerAssist;
    if ( v10 )
    {
      if ( v9->NestingLevel <= 1u )
      {
        v22 = v10[6] - 1;
        v10[6] = v22;
        if ( !v22 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v7, *((unsigned __int8 *)v7 + 566), *((unsigned __int8 *)v7 + 567), 0LL);
    LOBYTE(v11) = KiReadyThread(CurrentPrcb, v7);
  }
  while ( v5 != a1 );
  if ( (unsigned __int8)v4 < 2u )
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v16 = KeGetCurrentPrcb();
      v35 = 0;
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v23 = v17[6];
          v17[6] = v23 + 1;
          if ( v23 == -1 )
LABEL_40:
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        v24 = v16->SchedulerAssist;
        if ( v24 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v25 = v24[6] - 1;
            v24[6] = v25;
            if ( !v25 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        do
          KeYieldProcessorEx(&v35);
        while ( CurrentPrcb->PrcbLock );
        v26 = v16->SchedulerAssist;
        if ( v26 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v27 = v26[6];
            v26[6] = v27 + 1;
            if ( v27 == -1 )
              goto LABEL_40;
          }
        }
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = v4;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, (unsigned __int8)v4) )
        goto LABEL_11;
      if ( !KiIrqlFlags )
        goto LABEL_59;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_59;
      if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
        goto LABEL_59;
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      v30 = (v29[5] & 0xFFFF0003) == 0;
      v29[5] &= 0xFFFF0003;
      if ( !v30 )
        goto LABEL_59;
    }
    else
    {
      if ( (CurrentThread->MiscFlags & 0x40) == 0 )
        goto LABEL_11;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
        || (v28 = KeGetCurrentPrcb(),
            v31 = v28->SchedulerAssist,
            v30 = (v31[5] & 0xFFFF0003) == 0,
            v31[5] &= 0xFFFF0003,
            !v30) )
      {
LABEL_59:
        __writecr8(1uLL);
        CurrentThread->MiscFlags &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
LABEL_11:
        LOBYTE(v11) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(v11) = KeGetCurrentIrql() - 2;
            if ( (unsigned __int8)v11 <= 0xDu )
            {
              v32 = KeGetCurrentPrcb();
              v33 = v32->SchedulerAssist;
              v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
              v30 = (v11 & v33[5]) == 0;
              v33[5] &= v11;
              if ( v30 )
                LOBYTE(v11) = KiRemoveSystemWorkPriorityKick(v32);
            }
          }
        }
        __writecr8(v4);
        return v11;
      }
    }
    KiRemoveSystemWorkPriorityKick(v28);
    goto LABEL_59;
  }
  if ( CurrentPrcb->NextThread )
  {
    LOBYTE(v11) = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)v11 )
    {
      LOBYTE(v12) = 2;
      LOBYTE(v11) = KiRequestSoftwareInterrupt(CurrentPrcb, v12);
    }
  }
  return v11;
}
