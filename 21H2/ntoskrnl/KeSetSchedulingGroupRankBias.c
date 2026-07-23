/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x140205628
 * Callers:
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x1402058F0 (KiCheckForEffectivePriorityChange.c)
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiRemoveSchedulingGroupQueue @ 0x14029CB8C (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x14029D27C (KiResortScbQueue.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14037DB9C (KiMoveScbThreadsToNewReadylist.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KeSetSchedulingGroupRankBias(__int64 a1, unsigned __int8 a2)
{
  int v2; // r13d
  __int64 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rbp
  __int64 v8; // rbx
  struct _KPRCB *v9; // rdi
  _DWORD *v10; // rcx
  char v11; // cl
  __int64 v12; // r8
  char v13; // cl
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  volatile unsigned __int8 result; // al
  __int64 v17; // rdx
  _KTHREAD *CurrentThread; // rdi
  bool v19; // zf
  unsigned int v20; // eax
  char v21; // cl
  int v22; // r8d
  _DWORD *v23; // rcx
  struct _KPRCB *v24; // rbx
  _DWORD *v25; // rcx
  _KTHREAD *NextThread; // rbx
  __int64 v27; // r8
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 *v33; // r9
  __int64 v34; // r8
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
  __int64 v47; // [rsp+80h] [rbp+18h] BYREF
  __int64 v48; // [rsp+88h] [rbp+20h]

  v2 = a2;
  v47 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v48 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  if ( KeMaximumProcessors )
  {
    while ( 1 )
    {
      v7 = KiProcessorBlock[v6];
      v8 = 424LL * v6 + a1 + 128;
      if ( v7 )
      {
        v9 = KeGetCurrentPrcb();
        v46 = 0;
        while ( 1 )
        {
          v10 = v9->SchedulerAssist;
          if ( v10 )
          {
            if ( v9->NestingLevel <= 1u )
            {
              v29 = v10[6];
              v10[6] = v29 + 1;
              if ( v29 == -1 )
                KiRemoveSystemWorkPriorityKick(v9);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
            break;
          v23 = v9->SchedulerAssist;
          if ( v23 )
          {
            if ( v9->NestingLevel <= 1u )
            {
              v30 = v23[6] - 1;
              v23[6] = v30;
              if ( !v30 )
                KiRemoveSystemWorkPriorityKick(v9);
            }
          }
          do
            KeYieldProcessorEx(&v46);
          while ( *(_QWORD *)(v7 + 48) );
        }
      }
      v11 = *(_BYTE *)(v8 + 112);
      v12 = *(unsigned int *)(v8 + 116);
      if ( (_BYTE)v2 )
        break;
      v20 = *(unsigned __int8 *)(v8 + 112);
      v21 = v11 & 0xF7;
      *(_BYTE *)(v8 + 112) = v21;
      v22 = v12 - ((v20 >> 3) & 1);
      *(_DWORD *)(v8 + 116) = v22;
      if ( v22 )
      {
        if ( (v21 & 1) == 0 )
          goto LABEL_9;
        v12 = 0LL;
        goto LABEL_47;
      }
      if ( v7 )
      {
        if ( (v21 & 1) == 0 )
          goto LABEL_28;
        v31 = 424LL * v6 + a1 + 128;
        do
        {
          v32 = *(_QWORD *)(v31 + 408);
          if ( !v32 )
            break;
          v31 = *(_QWORD *)(v31 + 408);
        }
        while ( !*(_DWORD *)(v32 + 116) );
        if ( *(_DWORD *)(v31 + 116) )
        {
          v33 = 0LL;
        }
        else
        {
          v33 = &v47;
          v31 = 0LL;
        }
        KiMoveScbThreadsToNewReadylist(v8, v31, 0LL, v33);
        v35 = *(_QWORD *)(v8 + 392);
        if ( (*(_BYTE *)(v8 + 400) & 1) != 0 )
        {
          if ( v35 )
          {
            v35 ^= v8 + 392;
            goto LABEL_57;
          }
LABEL_58:
          LOBYTE(v34) = 1;
          KiRemoveSchedulingGroupQueue(v7, v8, v34);
        }
        else
        {
LABEL_57:
          if ( !v35 )
            goto LABEL_58;
        }
LABEL_28:
        *(_BYTE *)(v8 + 112) &= ~4u;
LABEL_9:
        if ( v7 )
        {
          KiCheckForEffectivePriorityChange(v7, v8);
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          if ( v15 )
          {
            if ( v14->NestingLevel <= 1u )
            {
              v36 = v15[6] - 1;
              v15[6] = v36;
              if ( !v36 )
                KiRemoveSystemWorkPriorityKick(v14);
            }
          }
        }
      }
      if ( ++v6 >= KeMaximumProcessors )
      {
        LOBYTE(CurrentIrql) = v48;
        goto LABEL_13;
      }
    }
    v13 = v11 | 0xC;
    *(_DWORD *)(v8 + 116) = v12 + 1;
    *(_BYTE *)(v8 + 112) = v13;
    if ( (v13 & 1) == 0 )
      goto LABEL_9;
    LOBYTE(v12) = 1;
LABEL_47:
    KiResortScbQueue(v7, v8, v12);
    goto LABEL_9;
  }
LABEL_13:
  *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (4 * v2)) & 4;
  result = KiReadyDeferredReadyList(CurrentPrcb, &v47);
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
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v24 = KeGetCurrentPrcb();
      v45 = 0;
      while ( 1 )
      {
        v25 = v24->SchedulerAssist;
        if ( v25 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v37 = v25[6];
            v25[6] = v37 + 1;
            if ( v37 == -1 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v38 = v24->SchedulerAssist;
        if ( v38 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v39 = v38[6] - 1;
            v38[6] = v39;
            if ( !v39 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        do
          KeYieldProcessorEx(&v45);
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
      LOBYTE(v27) = CurrentIrql;
      v19 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v27) == 0;
    }
    else
    {
      v19 = (CurrentThread->MiscFlags & 0x40) == 0;
    }
    if ( !v19 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v19 = (v41[5] & 0xFFFF0003) == 0;
          v41[5] &= 0xFFFF0003;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v42 = KeGetCurrentPrcb();
      v43 = v42->SchedulerAssist;
      v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v19 = (v44 & v43[5]) == 0;
      v43[5] &= v44;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v42);
    }
    result = CurrentIrql;
    __writecr8((unsigned __int8)CurrentIrql);
  }
  return result;
}
