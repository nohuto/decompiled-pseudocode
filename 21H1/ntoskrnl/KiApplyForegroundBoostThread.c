/*
 * XREFs of KiApplyForegroundBoostThread @ 0x140335F0C
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x1403355DC (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x140335D50 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiSelectReadyThreadEx @ 0x140269EC0 (KiSelectReadyThreadEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14026D220 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x14026D280 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x14026D370 (KiAcquireThreadStateLock.c)
 *     KiSendSoftwareInterrupt @ 0x140302858 (KiSendSoftwareInterrupt.c)
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 *     KiReleaseThreadStateLock @ 0x140336300 (KiReleaseThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140337BD0 (KiPrepareReadyThreadForRescheduling.c)
 *     KiInsertDeferredReadyList @ 0x140337C30 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140337C60 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSetSchedulerAssistPriority @ 0x14051AE54 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiApplyForegroundBoostThread(__int64 a1, __int64 a2)
{
  char v3; // si
  char v5; // al
  unsigned __int64 Number; // rcx
  struct _KPRCB *v7; // rbx
  char v9; // dl
  int v10; // r13d
  __int64 v11; // rcx
  int *v12; // rax
  int v13; // edx
  int v14; // eax
  _DWORD *v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  _KTHREAD *v19; // rsi
  char v20; // cl
  _BYTE *v21; // rax
  __int64 v22; // rdx
  bool v23; // zf
  bool v24; // al
  _KTHREAD **p_NextThread; // r12
  _KTHREAD *NextThread; // r14
  bool v27; // cc
  __int64 ready; // rax
  _KTHREAD *v29; // rsi
  char Priority; // cl
  _BYTE *SchedulerAssist; // rax
  __int64 v32; // rdx
  bool v33; // zf
  bool IsThreadRankNonZero; // al
  int v35; // esi
  int v36; // r15d
  volatile signed __int32 *v37; // [rsp+20h] [rbp-10h] BYREF
  char v38; // [rsp+80h] [rbp+50h]
  struct _KPRCB *v39; // [rsp+88h] [rbp+58h] BYREF

  v39 = 0LL;
  v37 = 0LL;
  v3 = 0;
  v5 = KiAcquireThreadStateLock(a1, (__int64)&v39, &v37);
  if ( ((unsigned __int8)(v5 - 1) <= 2u || v5 == 7) && *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) == 2 )
  {
    if ( *(_BYTE *)(a1 + 564) )
      goto LABEL_13;
    if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
      goto LABEL_13;
    Number = (unsigned int)*(char *)(a1 + 195);
    if ( *(char *)(a1 + 195) <= 0 )
      goto LABEL_13;
    v9 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
    if ( v9 >= 16 )
      v9 = 15;
    if ( v9 <= *(char *)(a1 + 195) )
    {
LABEL_13:
      v7 = v39;
      goto LABEL_14;
    }
    v10 = 0;
    v35 = v9;
    v36 = *(char *)(a1 + 195);
    v38 = 0;
    *(_BYTE *)(a1 + 564) = (v9 - *(_BYTE *)(a1 + 195)) & 0xF;
    switch ( v5 )
    {
      case 1:
        v7 = v39;
        KiRemoveThreadFromAnyReadyQueue(v39, v37, a1, (unsigned int)Number);
        KiUpdateThreadPriority(0LL, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v35, 0);
        KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v35, a2);
        goto LABEL_17;
      case 2:
        v7 = v39;
        p_NextThread = &v39->NextThread;
        NextThread = v39->NextThread;
        KiUpdateThreadPriority((__int64)v39, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v9, NextThread == 0LL);
        v27 = v35 <= v36;
        if ( v35 < v36 )
        {
          if ( !NextThread )
          {
            v7 = v39;
            if ( *(_BYTE *)(a1 + 388) == 2 )
            {
              ready = KiSelectReadyThreadEx(v39, (_KTHREAD *)a1, 0);
              v29 = (_KTHREAD *)ready;
              if ( !ready )
                goto LABEL_17;
              if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
              {
                IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v7);
                Priority = 1;
                if ( !IsThreadRankNonZero )
                  Priority = v29->Priority;
              }
              else
              {
                Priority = *(_BYTE *)(ready + 195);
              }
              *v7->PriorityState = Priority;
              SchedulerAssist = v7->SchedulerAssist;
              if ( SchedulerAssist )
              {
                v32 = (unsigned int)KiVpThreadSystemWorkPriority;
                if ( v29 != v7->IdleThread )
                  v32 = (unsigned int)Priority;
                KiSetSchedulerAssistPriority(v7->SchedulerAssist, v32, 0LL);
                SchedulerAssist = v7->SchedulerAssist;
              }
              v33 = v29 == v7->IdleThread;
              *p_NextThread = v29;
              if ( SchedulerAssist )
                SchedulerAssist[16] = v33;
              if ( v29->WaitBlockFill6[68] == 1 )
                v29->ReadyTime = v29->ReadyTime - v29->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
              v29->WaitBlockFill6[68] = 3;
              v38 = 1;
              goto LABEL_48;
            }
            if ( v39->ReadySummary >> (v35 + 1) )
              *(_BYTE *)(a1 + 112) |= 0x10u;
            goto LABEL_17;
          }
          v27 = v35 <= v36;
        }
        if ( v27 )
          goto LABEL_17;
        if ( NextThread )
          goto LABEL_17;
        v7 = v39;
        if ( *(_BYTE *)(a1 + 388) != 2 )
          goto LABEL_17;
        break;
      case 3:
        v7 = v39;
        KiUpdateThreadPriority((__int64)v39, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v9, 1);
        if ( v35 < v36 )
        {
          v18 = KiSelectReadyThreadEx(v7, (_KTHREAD *)a1, 0);
          v19 = (_KTHREAD *)v18;
          if ( v18 )
          {
            if ( (*(_BYTE *)(v18 + 2) & 4) != 0 )
            {
              v24 = KiIsThreadRankNonZero(v18, v7);
              v20 = 1;
              if ( !v24 )
                v20 = v19->Priority;
            }
            else
            {
              v20 = *(_BYTE *)(v18 + 195);
            }
            *v7->PriorityState = v20;
            v21 = v7->SchedulerAssist;
            if ( v21 )
            {
              v22 = (unsigned int)KiVpThreadSystemWorkPriority;
              if ( v19 != v7->IdleThread )
                v22 = (unsigned int)v20;
              KiSetSchedulerAssistPriority(v7->SchedulerAssist, v22, 0LL);
              v21 = v7->SchedulerAssist;
            }
            v23 = v19 == v7->IdleThread;
            v7->NextThread = v19;
            if ( v21 )
              v21[16] = v23;
            if ( v19->WaitBlockFill6[68] == 1 )
              v19->ReadyTime = v19->ReadyTime - v19->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v19->WaitBlockFill6[68] = 3;
            KiInsertDeferredReadyList(a2, a1);
            goto LABEL_48;
          }
LABEL_17:
          KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
          KiReleaseThreadStateLock(v11, v7, v37);
          if ( v38 )
          {
            v7 = v39;
            Number = v39->Number;
            if ( KeGetPcr()->Prcb.Number != (_DWORD)Number )
              KiSendSoftwareInterrupt();
          }
          if ( v10 <= 0 )
            goto LABEL_21;
          Number = (unsigned __int64)KeGetCurrentPrcb();
          if ( (KiVelocityFlags & 2) != 0 )
          {
            v7 = v39;
            v12 = (int *)v39->SchedulerAssist;
            if ( !v12 || !*(_QWORD *)(Number + 33976) || (struct _KPRCB *)Number == v39 || v10 < 8 )
              goto LABEL_21;
            v13 = *v12;
            v14 = *v12 & 0x40000;
            if ( (v13 & 0x100000) != 0 || v14 && (unsigned __int8)v13 < v10 )
            {
              v23 = HvlpVirtualProcessorsIdentityMapped == 0;
              v15 = *(_DWORD **)(Number + 33976);
              v7 = v39;
              v15[3] = 2;
              v16 = v7->Number;
              if ( v23 )
                LODWORD(v16) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)v16 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v16] << 6);
              v15[2] = v16;
              v17 = v16;
              Number = 1073742018LL;
              __writemsr(0x400000C2u, v17);
              goto LABEL_21;
            }
          }
          v7 = v39;
LABEL_21:
          v3 = 1;
LABEL_14:
          if ( v3 )
            return v3;
          goto LABEL_4;
        }
        break;
      default:
        KiUpdateThreadPriority(0LL, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v9, 0);
LABEL_48:
        v7 = v39;
        goto LABEL_17;
    }
    v10 = v35;
    goto LABEL_17;
  }
  v7 = v39;
LABEL_4:
  KiReleaseThreadStateLock(Number, v7, v37);
  return v3;
}
