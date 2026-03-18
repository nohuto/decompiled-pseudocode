/*
 * XREFs of KiReadyOutSwappedThreads @ 0x140244A20
 * Callers:
 *     KiInSwapProcesses @ 0x1402445C8 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x140244780 (KiOutSwapProcesses.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiReadyThread @ 0x140244C00 (KiReadyThread.c)
 *     KiEnterDeferredReadyState @ 0x140244D40 (KiEnterDeferredReadyState.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x1405A23B0 (EtwTraceReadyThread.c)
 */

char __fastcall KiReadyOutSwappedThreads(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rsi
  struct _KPRCB *v8; // r15
  volatile signed __int32 *v9; // rbx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  int v13; // eax
  _KTHREAD *CurrentThread; // rbx
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KPRCB *v20; // rsi
  _DWORD *v21; // rcx
  _KTHREAD *NextThread; // rsi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // eax
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  bool v34; // zf
  _DWORD *v35; // rdx
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v39; // [rsp+50h] [rbp+8h] BYREF
  int v40; // [rsp+58h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (unsigned __int8)a2;
  v7 = a1;
  do
  {
    v8 = KeGetCurrentPrcb();
    v9 = (volatile signed __int32 *)(v7 - 27);
    v7 = (_QWORD *)*v7;
    v40 = 0;
    SchedulerAssist = v8->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v23 = SchedulerAssist[6];
        SchedulerAssist[6] = v23 + 1;
        if ( v23 == -1 )
LABEL_28:
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
    while ( _interlockedbittestandset64(v9 + 16, 0LL) )
    {
      v15 = v8->SchedulerAssist;
      if ( v15 )
      {
        if ( v8->NestingLevel <= 1u )
        {
          v24 = v15[6] - 1;
          v15[6] = v24;
          if ( !v24 )
            KiRemoveSystemWorkPriorityKick(v8);
        }
      }
      do
        KeYieldProcessorEx(&v40, a2, a3, a4);
      while ( *((_QWORD *)v9 + 8) );
      v16 = v8->SchedulerAssist;
      if ( v16 )
      {
        if ( v8->NestingLevel <= 1u )
        {
          v25 = v16[6];
          v16[6] = v25 + 1;
          if ( v25 == -1 )
            goto LABEL_28;
        }
      }
    }
    KiEnterDeferredReadyState(v9);
    *((_QWORD *)v9 + 8) = 0LL;
    v11 = KeGetCurrentPrcb();
    v12 = v11->SchedulerAssist;
    if ( v12 )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v26 = v12[6] - 1;
        v12[6] = v26;
        if ( !v26 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v9, *((unsigned __int8 *)v9 + 566), *((unsigned __int8 *)v9 + 567), 0LL);
    LOBYTE(v13) = KiReadyThread(CurrentPrcb, v9);
  }
  while ( v7 != a1 );
  if ( (unsigned __int8)v6 < 2u )
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v20 = KeGetCurrentPrcb();
      v39 = 0;
      v21 = v20->SchedulerAssist;
      if ( v21 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v27 = v21[6];
          v21[6] = v27 + 1;
          if ( v27 == -1 )
LABEL_40:
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
          KeYieldProcessorEx(&v39, v17, v18, v19);
        while ( CurrentPrcb->PrcbLock );
        v30 = v20->SchedulerAssist;
        if ( v30 )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v31 = v30[6];
            v30[6] = v31 + 1;
            if ( v31 == -1 )
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
      CurrentThread->WaitIrql = v6;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, (unsigned __int8)v6) )
        goto LABEL_11;
      if ( !KiIrqlFlags )
        goto LABEL_59;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_59;
      if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
        goto LABEL_59;
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      v34 = (v33[5] & 0xFFFF0003) == 0;
      v33[5] &= 0xFFFF0003;
      if ( !v34 )
        goto LABEL_59;
    }
    else
    {
      if ( (CurrentThread->MiscFlags & 0x40) == 0 )
        goto LABEL_11;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
        || (v32 = KeGetCurrentPrcb(),
            v35 = v32->SchedulerAssist,
            v34 = (v35[5] & 0xFFFF0003) == 0,
            v35[5] &= 0xFFFF0003,
            !v34) )
      {
LABEL_59:
        __writecr8(1uLL);
        CurrentThread->MiscFlags &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
LABEL_11:
        LOBYTE(v13) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(v13) = KeGetCurrentIrql() - 2;
            if ( (unsigned __int8)v13 <= 0xDu )
            {
              v36 = KeGetCurrentPrcb();
              v37 = v36->SchedulerAssist;
              v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v34 = (v13 & v37[5]) == 0;
              v37[5] &= v13;
              if ( v34 )
                LOBYTE(v13) = KiRemoveSystemWorkPriorityKick(v36);
            }
          }
        }
        __writecr8(v6);
        return v13;
      }
    }
    KiRemoveSystemWorkPriorityKick(v32);
    goto LABEL_59;
  }
  if ( CurrentPrcb->NextThread )
  {
    LOBYTE(v13) = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)v13 )
    {
      LOBYTE(a2) = 2;
      LOBYTE(v13) = KiRequestSoftwareInterrupt(CurrentPrcb, a2);
    }
  }
  return v13;
}
