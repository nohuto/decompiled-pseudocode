/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x1402DC40C
 * Callers:
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KiCheckForEffectivePriorityChange @ 0x1402DC6D4 (KiCheckForEffectivePriorityChange.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140336610 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x140337AA4 (KiResortScbQueue.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14037B20C (KiMoveScbThreadsToNewReadylist.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KeSetSchedulingGroupRankBias(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  int v4; // r13d
  __int64 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rbp
  __int64 v10; // rbx
  struct _KPRCB *v11; // rdi
  _DWORD *v12; // rcx
  char v13; // cl
  char v14; // cl
  struct _KPRCB *v15; // rcx
  unsigned __int8 result; // al
  __int64 v17; // rdx
  _DWORD *v18; // r9
  _KTHREAD *CurrentThread; // rdi
  bool v20; // zf
  unsigned int v21; // eax
  char v22; // cl
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _KPRCB *v27; // rbx
  _DWORD *v28; // rcx
  _KTHREAD *NextThread; // rbx
  __int64 v30; // r8
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 *v35; // r9
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  _DWORD *v39; // rcx
  int v40; // eax
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  int v45; // eax
  int v46; // [rsp+70h] [rbp+8h] BYREF
  int v47; // [rsp+78h] [rbp+10h] BYREF
  __int64 v48; // [rsp+80h] [rbp+18h] BYREF
  __int64 v49; // [rsp+88h] [rbp+20h]

  v4 = (unsigned __int8)a2;
  v48 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v49 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  if ( KeMaximumProcessors )
  {
    while ( 1 )
    {
      v9 = KiProcessorBlock[v8];
      v10 = 424LL * v8 + a1 + 128;
      if ( v9 )
      {
        v11 = KeGetCurrentPrcb();
        v47 = 0;
        while ( 1 )
        {
          v12 = v11->SchedulerAssist;
          if ( v12 )
          {
            if ( v11->NestingLevel <= 1u )
            {
              v31 = v12[6];
              v12[6] = v31 + 1;
              if ( v31 == -1 )
                KiRemoveSystemWorkPriorityKick(v11);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
            break;
          v23 = v11->SchedulerAssist;
          if ( v23 )
          {
            if ( v11->NestingLevel <= 1u )
            {
              v32 = v23[6] - 1;
              v23[6] = v32;
              if ( !v32 )
                KiRemoveSystemWorkPriorityKick(v11);
            }
          }
          do
            KeYieldProcessorEx(&v47, a2, a3, (__int64)SchedulerAssist);
          while ( *(_QWORD *)(v9 + 48) );
        }
      }
      v13 = *(_BYTE *)(v10 + 112);
      a3 = *(unsigned int *)(v10 + 116);
      if ( (_BYTE)v4 )
        break;
      v21 = *(unsigned __int8 *)(v10 + 112);
      v22 = v13 & 0xF7;
      *(_BYTE *)(v10 + 112) = v22;
      a3 = (unsigned int)a3 - ((v21 >> 3) & 1);
      *(_DWORD *)(v10 + 116) = a3;
      if ( (_DWORD)a3 )
      {
        if ( (v22 & 1) == 0 )
          goto LABEL_9;
        a3 = 0LL;
        goto LABEL_47;
      }
      if ( v9 )
      {
        if ( (v22 & 1) == 0 )
          goto LABEL_28;
        v33 = 424LL * v8 + a1 + 128;
        do
        {
          v34 = *(_QWORD *)(v33 + 408);
          if ( !v34 )
            break;
          v33 = *(_QWORD *)(v33 + 408);
        }
        while ( !*(_DWORD *)(v34 + 116) );
        if ( *(_DWORD *)(v33 + 116) )
        {
          v35 = 0LL;
        }
        else
        {
          v35 = &v48;
          v33 = 0LL;
        }
        KiMoveScbThreadsToNewReadylist(v10, v33, 0LL, v35);
        v36 = *(_QWORD *)(v10 + 392);
        if ( (*(_BYTE *)(v10 + 400) & 1) != 0 )
        {
          if ( v36 )
          {
            v36 ^= v10 + 392;
            goto LABEL_57;
          }
LABEL_58:
          LOBYTE(a3) = 1;
          KiRemoveSchedulingGroupQueue(v9, v10, a3);
        }
        else
        {
LABEL_57:
          if ( !v36 )
            goto LABEL_58;
        }
LABEL_28:
        *(_BYTE *)(v10 + 112) &= ~4u;
LABEL_9:
        if ( v9 )
        {
          KiCheckForEffectivePriorityChange(v9, v10);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
          v15 = KeGetCurrentPrcb();
          a2 = (__int64)v15->SchedulerAssist;
          if ( a2 )
          {
            if ( v15->NestingLevel <= 1u )
            {
              v37 = *(_DWORD *)(a2 + 24) - 1;
              *(_DWORD *)(a2 + 24) = v37;
              if ( !v37 )
                KiRemoveSystemWorkPriorityKick(v15);
            }
          }
        }
      }
      if ( ++v8 >= KeMaximumProcessors )
      {
        LOBYTE(CurrentIrql) = v49;
        goto LABEL_13;
      }
    }
    v14 = v13 | 0xC;
    *(_DWORD *)(v10 + 116) = a3 + 1;
    *(_BYTE *)(v10 + 112) = v14;
    if ( (v14 & 1) == 0 )
      goto LABEL_9;
    LOBYTE(a3) = 1;
LABEL_47:
    KiResortScbQueue(v9, v10, a3);
    goto LABEL_9;
  }
LABEL_13:
  *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (4 * v4)) & 4;
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v48, a3, (__int64)SchedulerAssist);
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
      {
        LOBYTE(v17) = 2;
        return KiRequestSoftwareInterrupt(CurrentPrcb, v17);
      }
    }
  }
  else
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v27 = KeGetCurrentPrcb();
      v46 = 0;
      while ( 1 )
      {
        v28 = v27->SchedulerAssist;
        if ( v28 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v38 = v28[6];
            v28[6] = v38 + 1;
            if ( v38 == -1 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v39 = v27->SchedulerAssist;
        if ( v39 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v40 = v39[6] - 1;
            v39[6] = v40;
            if ( !v40 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        do
          KeYieldProcessorEx(&v46, v24, v25, v26);
        while ( CurrentPrcb->PrcbLock );
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
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v30) = CurrentIrql;
      v20 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v30) == 0;
    }
    else
    {
      v20 = (CurrentThread->MiscFlags & 0x40) == 0;
    }
    if ( !v20 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v20 = (v42[5] & 0xFFFF0003) == 0;
          v42[5] &= 0xFFFF0003;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL, v18);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v43 = KeGetCurrentPrcb();
      v44 = v43->SchedulerAssist;
      v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v20 = (v45 & v44[5]) == 0;
      v44[5] &= v45;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(v43);
    }
    result = CurrentIrql;
    __writecr8((unsigned __int8)CurrentIrql);
  }
  return result;
}
