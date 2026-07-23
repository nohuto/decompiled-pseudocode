/*
 * XREFs of KiSetPriorityThread @ 0x1402D4AF0
 * Callers:
 *     KiAbThreadUnboostCpuPriority @ 0x1402119C0 (KiAbThreadUnboostCpuPriority.c)
 *     KiSetPriorityBoost @ 0x14023B2B0 (KiSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x14027A3D0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x140293860 (KeBoostPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14029AC94 (KeSetPriorityAndQuantumProcess.c)
 *     PsImpersonateContainerOfThread @ 0x1402C0590 (PsImpersonateContainerOfThread.c)
 *     KeSetPriorityBoost @ 0x1402D3F40 (KeSetPriorityBoost.c)
 *     KeClearSystemPriority @ 0x1402D4800 (KeClearSystemPriority.c)
 *     KeRemovePriQueue @ 0x1402E6A20 (KeRemovePriQueue.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1402E71B0 (KiTryUnwaitThreadWithPriority.c)
 *     KiAbApplyWakeupBoost @ 0x1402FC6CC (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402FCAD4 (KiAbSetMinimumThreadPriority.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E808 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x140520F00 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140211D5C (KiSendSoftwareInterrupt.c)
 *     KiReleaseThreadStateLock @ 0x14029B7D0 (KiReleaseThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14029B830 (KiPrepareReadyThreadForRescheduling.c)
 *     KiInsertDeferredReadyList @ 0x14029B890 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14029B8C0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSelectReadyThreadEx @ 0x1402D4710 (KiSelectReadyThreadEx.c)
 *     KiComputePriorityFloor @ 0x1402D5610 (KiComputePriorityFloor.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402D5640 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x1402D56A0 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x1402D5790 (KiAcquireThreadStateLock.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiSetPriorityThread(_KTHREAD *a1, __int64 a2, unsigned __int8 a3)
{
  int v3; // edi
  int v6; // ebp
  char v7; // al
  __int64 v8; // r9
  signed int Priority; // r15d
  char v10; // r14
  struct _KPRCB *v11; // rsi
  _KTHREAD *NextThread; // r12
  _KTHREAD **p_NextThread; // r13
  bool v14; // cc
  __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *v18; // rcx
  __int64 v19; // rax
  _KTHREAD *v20; // rbp
  char v21; // cl
  _BYTE *v22; // rax
  __int64 v23; // rdx
  bool v24; // zf
  char v25; // al
  __int64 ready; // rax
  _KTHREAD *v27; // rbp
  char v28; // cl
  char IsThreadRankNonZero; // al
  _BYTE *SchedulerAssist; // rax
  __int64 v31; // rdx
  bool v32; // zf
  _DWORD *v33; // r8
  struct _KPRCB *v34; // rax
  __int64 Number; // rcx
  struct _KPRCB *v36; // [rsp+60h] [rbp+8h] BYREF
  volatile signed __int64 *v37; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v6 = (char)KiComputePriorityFloor(a1, a3);
  if ( a1->Priority == v6 )
    return 0;
  v7 = KiAcquireThreadStateLock(a1, &v36, &v37);
  Priority = a1->Priority;
  v10 = 0;
  if ( v7 != 2 )
  {
    if ( v7 == 1 )
    {
      v11 = v36;
      KiRemoveThreadFromAnyReadyQueue((__int64)v36, (__int64)v37, (__int64)a1, Priority);
      KiUpdateThreadPriority(0LL, a1, (unsigned int)v6, 0LL);
      KiPrepareReadyThreadForRescheduling((__int64)a1, v6, a2);
    }
    else if ( v7 == 3 )
    {
      v11 = v36;
      LOBYTE(v8) = 1;
      KiUpdateThreadPriority(v36, a1, (unsigned int)v6, v8);
      if ( v6 < Priority )
      {
        ready = KiSelectReadyThreadEx(v11, a1, 0);
        v27 = (_KTHREAD *)ready;
        if ( ready )
        {
          if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
          {
            IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v11);
            v28 = 1;
            if ( !IsThreadRankNonZero )
              v28 = v27->Priority;
          }
          else
          {
            v28 = *(_BYTE *)(ready + 195);
          }
          *v11->PriorityState = v28;
          SchedulerAssist = v11->SchedulerAssist;
          if ( SchedulerAssist )
          {
            v31 = (unsigned int)KiVpThreadSystemWorkPriority;
            if ( v27 != v11->IdleThread )
              v31 = (unsigned int)v28;
            KiSetSchedulerAssistPriority(v11->SchedulerAssist, v31, 0LL);
            SchedulerAssist = v11->SchedulerAssist;
          }
          v32 = v27 == v11->IdleThread;
          v11->NextThread = v27;
          if ( SchedulerAssist )
            SchedulerAssist[16] = v32;
          if ( v27->WaitBlockFill6[68] == 1 )
            v27->ReadyTime = v27->ReadyTime - v27->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
          v27->WaitBlockFill6[68] = 3;
          KiInsertDeferredReadyList(a2, (__int64)a1);
          v11 = v36;
        }
      }
      else
      {
        v3 = v6;
      }
    }
    else
    {
      KiUpdateThreadPriority(0LL, a1, (unsigned int)v6, 0LL);
      v11 = v36;
    }
    goto LABEL_9;
  }
  v11 = v36;
  NextThread = v36->NextThread;
  p_NextThread = &v36->NextThread;
  LOBYTE(v8) = NextThread == 0LL;
  KiUpdateThreadPriority(v36, a1, (unsigned int)v6, v8);
  v14 = v6 <= Priority;
  if ( v6 >= Priority )
    goto LABEL_4;
  if ( NextThread )
  {
    v14 = v6 <= Priority;
LABEL_4:
    if ( v14 || NextThread )
      goto LABEL_9;
    if ( a1->WaitBlockFill6[68] == 2 )
      v3 = v6;
    goto LABEL_8;
  }
  v11 = v36;
  if ( a1->WaitBlockFill6[68] != 2 )
  {
    if ( v36->ReadySummary >> (v6 + 1) )
      a1->WaitRegister.Flags |= 0x10u;
    goto LABEL_9;
  }
  v19 = KiSelectReadyThreadEx(v36, a1, 0);
  v20 = (_KTHREAD *)v19;
  if ( v19 )
  {
    if ( (*(_BYTE *)(v19 + 2) & 4) != 0 )
    {
      v25 = KiIsThreadRankNonZero(v19, v11);
      v21 = 1;
      if ( !v25 )
        v21 = v20->Priority;
    }
    else
    {
      v21 = *(_BYTE *)(v19 + 195);
    }
    *v11->PriorityState = v21;
    v22 = v11->SchedulerAssist;
    if ( v22 )
    {
      v23 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( v20 != v11->IdleThread )
        v23 = (unsigned int)v21;
      KiSetSchedulerAssistPriority(v11->SchedulerAssist, v23, 0LL);
      v22 = v11->SchedulerAssist;
    }
    v24 = v20 == v11->IdleThread;
    *p_NextThread = v20;
    if ( v22 )
      v22[16] = v24;
    if ( v20->WaitBlockFill6[68] == 1 )
      v20->ReadyTime = v20->ReadyTime - v20->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    v20->WaitBlockFill6[68] = 3;
    v10 = 1;
LABEL_8:
    v11 = v36;
  }
LABEL_9:
  KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  KiReleaseThreadStateLock(v15, (__int64)v11, v37);
  if ( v10 && KeGetPcr()->Prcb.Number != v36->Number )
    KiSendSoftwareInterrupt();
  if ( v3 > 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (KiVelocityFlags & 2) != 0 )
    {
      v18 = v36->SchedulerAssist;
      if ( v18 )
      {
        if ( CurrentPrcb->SchedulerAssist
          && CurrentPrcb != v36
          && v3 >= 8
          && ((*v18 & 0x100000) != 0 || (*v18 & 0x40000) != 0 && (unsigned __int8)*v18 < v3) )
        {
          v24 = HvlpVirtualProcessorsIdentityMapped == 0;
          v33 = CurrentPrcb->SchedulerAssist;
          v34 = v36;
          v33[3] = 2;
          Number = v34->Number;
          if ( v24 )
            LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
          v33[2] = Number;
          __writemsr(0x400000C2u, (unsigned int)Number);
        }
      }
    }
  }
  return 1;
}
