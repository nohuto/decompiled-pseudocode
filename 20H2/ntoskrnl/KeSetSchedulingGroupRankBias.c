/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x14035E3E8
 * Callers:
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiCheckForEffectivePriorityChange @ 0x14035E6B0 (KiCheckForEffectivePriorityChange.c)
 *     KiRemoveSchedulingGroupQueue @ 0x14035EC30 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x14035EEF0 (KiResortScbQueue.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14037DCBC (KiMoveScbThreadsToNewReadylist.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
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
  __int64 v29; // r8
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rax
  _SINGLE_LIST_ENTRY *v34; // r9
  __int64 v35; // rax
  int v36; // eax
  int v37; // eax
  _DWORD *v38; // rcx
  int v39; // eax
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  struct _KPRCB *v42; // r9
  _DWORD *v43; // r8
  int v44; // eax
  int v45; // [rsp+70h] [rbp+8h] BYREF
  int v46; // [rsp+78h] [rbp+10h] BYREF
  _SINGLE_LIST_ENTRY v47; // [rsp+80h] [rbp+18h] BYREF
  __int64 v48; // [rsp+88h] [rbp+20h]

  v4 = (unsigned __int8)a2;
  v47.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v48 = CurrentIrql;
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
        v46 = 0;
        while ( 1 )
        {
          v12 = v11->SchedulerAssist;
          if ( v12 )
          {
            if ( v11->NestingLevel <= 1u )
            {
              v30 = v12[6];
              v12[6] = v30 + 1;
              if ( v30 == -1 )
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
              v31 = v21[6] - 1;
              v21[6] = v31;
              if ( !v31 )
                KiRemoveSystemWorkPriorityKick(v11);
            }
          }
          do
            KeYieldProcessorEx(&v46, a2, a3, (__int64)SchedulerAssist);
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
        v32 = 424LL * v8 + a1 + 128;
        do
        {
          v33 = *(_QWORD *)(v32 + 408);
          if ( !v33 )
            break;
          v32 = *(_QWORD *)(v32 + 408);
        }
        while ( !*(_DWORD *)(v33 + 116) );
        if ( *(_DWORD *)(v32 + 116) )
        {
          v34 = 0LL;
        }
        else
        {
          v34 = &v47;
          v32 = 0LL;
        }
        KiMoveScbThreadsToNewReadylist(v10, v32, 0LL, v34);
        v35 = *(_QWORD *)(v10 + 392);
        if ( (*(_BYTE *)(v10 + 400) & 1) != 0 )
        {
          if ( v35 )
          {
            v35 ^= v10 + 392;
            goto LABEL_57;
          }
LABEL_58:
          LOBYTE(a3) = 1;
          KiRemoveSchedulingGroupQueue(v9, v10, a3);
        }
        else
        {
LABEL_57:
          if ( !v35 )
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
              v36 = *(_DWORD *)(a2 + 24) - 1;
              *(_DWORD *)(a2 + 24) = v36;
              if ( !v36 )
                KiRemoveSystemWorkPriorityKick(v15);
            }
          }
        }
      }
      if ( ++v8 >= KeMaximumProcessors )
      {
        LOBYTE(CurrentIrql) = v48;
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
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v47);
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
      v45 = 0;
      while ( 1 )
      {
        v26 = v25->SchedulerAssist;
        if ( v26 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v37 = v26[6];
            v26[6] = v37 + 1;
            if ( v37 == -1 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v38 = v25->SchedulerAssist;
        if ( v38 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v39 = v38[6] - 1;
            v38[6] = v39;
            if ( !v39 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        do
          KeYieldProcessorEx(&v45, v22, v23, v24);
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
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v28);
      LOBYTE(v29) = CurrentIrql;
      v18 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v29) == 0;
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
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v18 = (v41[5] & 0xFFFF0003) == 0;
          v41[5] &= 0xFFFF0003;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v42 = KeGetCurrentPrcb();
      v43 = v42->SchedulerAssist;
      v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v18 = (v44 & v43[5]) == 0;
      v43[5] &= v44;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(v42);
    }
    result = CurrentIrql;
    __writecr8((unsigned __int8)CurrentIrql);
  }
  return result;
}
