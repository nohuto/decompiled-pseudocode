/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x140348C48
 * Callers:
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1402F14D0 (KiRemoveSchedulingGroupQueue.c)
 *     KiCheckForEffectivePriorityChange @ 0x140348F10 (KiCheckForEffectivePriorityChange.c)
 *     KiResortScbQueue @ 0x14034E834 (KiResortScbQueue.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14037BF8C (KiMoveScbThreadsToNewReadylist.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
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
  ULONG_PTR CurrentThread; // rdi
  bool v18; // zf
  unsigned int v19; // eax
  char v20; // cl
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KPRCB *v25; // rbx
  _DWORD *v26; // rcx
  _KTHREAD *NextThread; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  _QWORD **v35; // r9
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
  _QWORD *v48; // [rsp+80h] [rbp+18h] BYREF
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
          v21 = v11->SchedulerAssist;
          if ( v21 )
          {
            if ( v11->NestingLevel <= 1u )
            {
              v32 = v21[6] - 1;
              v21[6] = v32;
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
      v19 = *(unsigned __int8 *)(v10 + 112);
      v20 = v13 & 0xF7;
      *(_BYTE *)(v10 + 112) = v20;
      a3 = (unsigned int)a3 - ((v19 >> 3) & 1);
      *(_DWORD *)(v10 + 116) = a3;
      if ( (_DWORD)a3 )
      {
        if ( (v20 & 1) == 0 )
          goto LABEL_9;
        a3 = 0LL;
        goto LABEL_47;
      }
      if ( v9 )
      {
        if ( (v20 & 1) == 0 )
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
          KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)v9, v10, 1);
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
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v25 = KeGetCurrentPrcb();
      v46 = 0;
      while ( 1 )
      {
        v26 = v25->SchedulerAssist;
        if ( v26 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v38 = v26[6];
            v26[6] = v38 + 1;
            if ( v38 == -1 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v39 = v25->SchedulerAssist;
        if ( v39 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v40 = v39[6] - 1;
            v39[6] = v40;
            if ( !v40 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        do
          KeYieldProcessorEx(&v46, v22, v23, v24);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v28 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v28 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v28, v29);
      LOBYTE(v30) = CurrentIrql;
      v18 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v30) == 0;
    }
    else
    {
      v18 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v18 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v18 = (v42[5] & 0xFFFF0003) == 0;
          v42[5] &= 0xFFFF0003;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v43 = KeGetCurrentPrcb();
      v44 = v43->SchedulerAssist;
      v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v18 = (v45 & v44[5]) == 0;
      v44[5] &= v45;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(v43);
    }
    result = CurrentIrql;
    __writecr8((unsigned __int8)CurrentIrql);
  }
  return result;
}
