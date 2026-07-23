/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1402BF210
 * Callers:
 *     <none>
 * Callees:
 *     KiValidateCpuSetMasks @ 0x140202930 (KiValidateCpuSetMasks.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140245EC0 (ExpWorkerFactoryCheckCreate.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1402BFBF0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCreateThread @ 0x1402BFC88 (ExpWorkerFactoryCreateThread.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402E2740 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14030ED20 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ExSystemExceptionFilter @ 0x1407BEDE0 (ExSystemExceptionFilter.c)
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // r14
  ULONG v6; // eax
  __int64 v7; // rax
  NTSTATUS result; // eax
  NTSTATUS Thread; // r12d
  bool v10; // r15
  char v11; // r13
  unsigned __int64 *v12; // r14
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v15; // rdx
  __int64 v16; // rdx
  char *v17; // rsi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  char v21; // di
  __int64 Next; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int64 v25; // rbx
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  int *v30; // r14
  int v31; // ecx
  unsigned __int64 v32; // r15
  PKSPIN_LOCK v33; // rax
  PKSPIN_LOCK *v34; // r14
  _DWORD *v35; // rdi
  unsigned int v36; // eax
  PKSPIN_LOCK *v37; // rax
  unsigned __int64 OldIrql; // r12
  PVOID v39; // rcx
  int v40; // eax
  _DWORD *SchedulerAssist; // r9
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  bool v47; // zf
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r10
  _DWORD *v50; // r9
  int v51; // eax
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  PVOID Object; // [rsp+30h] [rbp-138h] BYREF
  PKSPIN_LOCK *v58; // [rsp+40h] [rbp-128h]
  size_t Size; // [rsp+48h] [rbp-120h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-118h] BYREF
  _DWORD *v61; // [rsp+68h] [rbp-100h]
  _OWORD v62[11]; // [rsp+70h] [rbp-F8h] BYREF
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+0h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v62, 0, sizeof(v62));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( WorkerFactoryInformationClass == WorkerFactoryCallbackType )
  {
LABEL_2:
    v6 = 4;
LABEL_3:
    LODWORD(Size) = v6;
    if ( WorkerFactoryInformationLength != v6 )
      return -1073741820;
    if ( WorkerFactoryInformationClass == WorkerFactoryCallbackType )
    {
      if ( PreviousMode )
      {
        if ( ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)WorkerFactoryInformation + 4 > 0x7FFFFFFF0000LL
          || (char *)WorkerFactoryInformation + 4 < WorkerFactoryInformation )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
LABEL_9:
      LODWORD(v62[1]) = *(_DWORD *)WorkerFactoryInformation;
    }
    else
    {
      switch ( WorkerFactoryInformationClass )
      {
        case WorkerFactoryIdleTimeout:
          if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_QWORD *)&v62[1] = *(_QWORD *)WorkerFactoryInformation;
          break;
        case WorkerFactoryBindingCount:
        case WorkerFactoryThreadMinimum:
        case WorkerFactoryThreadMaximum:
          if ( !PreviousMode )
            goto LABEL_9;
          v7 = (__int64)WorkerFactoryInformation;
          if ( (unsigned __int64)WorkerFactoryInformation >= 0x7FFFFFFF0000LL )
            v7 = 0x7FFFFFFF0000LL;
          LODWORD(v62[1]) = *(_DWORD *)v7;
          break;
        default:
          __fastfail(0x25u);
      }
    }
    Object = 0LL;
    result = ObReferenceObjectByHandle(WorkerFactoryHandle, 4u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
    if ( result >= 0 )
    {
      if ( WorkerFactoryInformationClass != WorkerFactoryAdjustThreadGoal )
      {
        Thread = 0;
        v10 = 0;
        v11 = 1;
        v58 = (PKSPIN_LOCK *)Object;
        v12 = (unsigned __int64 *)*((_QWORD *)Object + 2);
        LockHandle.LockQueue.Lock = v12;
        LockHandle.LockQueue.Next = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        LockHandle.OldIrql = CurrentIrql;
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        if ( v15 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v42 = v15[6];
            v15[6] = v42 + 1;
            if ( v42 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, v12);
        }
        else
        {
          v16 = _InterlockedExchange64((volatile __int64 *)v12, (__int64)&LockHandle);
          if ( v16 )
            KxWaitForLockOwnerShip((__int64)&LockHandle, (_QWORD *)v16);
        }
        if ( WorkerFactoryInformationClass != WorkerFactoryCallbackType )
        {
          v16 = 0x140000000uLL;
          switch ( WorkerFactoryInformationClass )
          {
            case WorkerFactoryIdleTimeout:
              v16 = *(_QWORD *)&v62[1];
              if ( *(__int64 *)&v62[1] >= 0 )
              {
                Thread = -1073741811;
                v17 = (char *)Object;
              }
              else
              {
                if ( *(__int64 *)&v62[1] > -10000000 )
                {
                  v16 = -10000000LL;
                  *(_QWORD *)&v62[1] = -10000000LL;
                }
                else if ( *(__int64 *)&v62[1] < -6000000000LL )
                {
                  v16 = -6000000000LL;
                  *(_QWORD *)&v62[1] = -6000000000LL;
                }
                v17 = (char *)Object;
                *((_QWORD *)Object + 14) = v16;
                *((_QWORD *)&v62[0] + 1) = -1LL;
                KeSetTimer2((__int64)(v17 + 328), v16, -v16, (__int64)v62);
              }
              goto LABEL_38;
            case WorkerFactoryBindingCount:
              v17 = (char *)Object;
              v26 = *((_DWORD *)Object + 77);
              LOBYTE(v16) = v62[1];
              if ( SLODWORD(v62[1]) < 0 )
              {
                if ( v26 > -LODWORD(v62[1]) )
                {
                  v27 = v26 + LODWORD(v62[1]);
                  *((_DWORD *)Object + 77) = v26 + LODWORD(v62[1]);
                }
                else
                {
                  *((_DWORD *)Object + 77) = 0;
                  v27 = 0;
                }
              }
              else
              {
                v27 = v26 + LODWORD(v62[1]);
                if ( v26 >= v26 + LODWORD(v62[1]) )
                  v27 = -1;
                *((_DWORD *)Object + 77) = v27;
              }
              if ( v26 )
              {
                if ( !v27 && (*((_DWORD *)v17 + 78) & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v17);
              }
              else if ( v27 && (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v17) )
              {
                ExpWorkerFactoryCheckCreate((PSLIST_ENTRY)v17, &LockHandle, 0);
                v11 = 0;
              }
              goto LABEL_38;
            case WorkerFactoryThreadMinimum:
              v34 = v58;
              v17 = (char *)Object;
              if ( *((_BYTE *)v58[2] + 33) )
              {
                Thread = 128;
              }
              else
              {
                v35 = (char *)Object + 280;
                v36 = v62[1];
                v10 = LODWORD(v62[1]) > *((_DWORD *)Object + 70);
                *((_DWORD *)Object + 70) = v62[1];
                if ( *((_DWORD *)v17 + 71) < v36 )
                  *((_DWORD *)v17 + 71) = v36;
                if ( v10 )
                {
                  v10 = 0;
                  if ( (*((_DWORD *)v17 + 78) & 0x200) != 0 )
                    ExpLeaveWorkerFactoryAwayMode(v17);
                  Size = (size_t)(v17 + 296);
                  v61 = v17 + 288;
                  if ( (unsigned int)(*((_DWORD *)v17 + 74) + *((_DWORD *)v17 + 72)) < *v35 )
                  {
                    v37 = (PKSPIN_LOCK *)(v17 + 304);
                    v58 = (PKSPIN_LOCK *)(v17 + 304);
                    while ( 1 )
                    {
                      ++*(_DWORD *)v37;
                      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                      OldIrql = LockHandle.OldIrql;
                      if ( KiIrqlFlags )
                      {
                        if ( (KiIrqlFlags & 1) != 0 )
                        {
                          v43 = KeGetCurrentIrql();
                          if ( v43 <= 0xFu && LockHandle.OldIrql <= 0xFu && v43 >= 2u )
                          {
                            v44 = KeGetCurrentPrcb();
                            v45 = v44->SchedulerAssist;
                            v46 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                            v47 = (v46 & v45[5]) == 0;
                            v45[5] &= v46;
                            if ( v47 )
                              KiRemoveSystemWorkPriorityKick(v44);
                            v17 = (char *)Object;
                          }
                        }
                      }
                      __writecr8(OldIrql);
                      Thread = ExpWorkerFactoryCreateThread(v17);
                      KeAcquireInStackQueuedSpinLock(v34[2], &LockHandle);
                      if ( Thread < 0 )
                        break;
                      v37 = v58;
                      if ( (unsigned int)(*(_DWORD *)Size + *v61) >= *v35 )
                        goto LABEL_38;
                    }
                    --*(_DWORD *)v58;
                  }
                }
              }
              goto LABEL_38;
            case WorkerFactoryThreadMaximum:
              v33 = v58[2];
              v17 = (char *)Object;
              if ( *((_BYTE *)v33 + 33) )
              {
                Thread = 128;
                goto LABEL_38;
              }
              v21 = 1;
              LODWORD(v16) = v62[1];
              if ( LODWORD(v62[1]) && (!*((_DWORD *)Object + 71) && *((_DWORD *)v33 + 6) || *(int *)(v33[1] + 4) > 0) )
                v10 = 1;
              *((_DWORD *)Object + 71) = v62[1];
              if ( (unsigned int)v16 < *((_DWORD *)v17 + 70) )
                *((_DWORD *)v17 + 70) = v16;
              break;
            default:
              __fastfail(0x25u);
          }
LABEL_39:
          if ( v10 )
          {
            v28 = *((_DWORD *)v17 + 72);
            LODWORD(v16) = v28 + *((_DWORD *)v17 + 74);
            v58 = (PKSPIN_LOCK *)(v17 + 16);
            if ( *(_BYTE *)(*((_QWORD *)v17 + 2) + 33LL) )
            {
              Thread = 128;
            }
            else
            {
              v29 = *((_DWORD *)v17 + 71);
              if ( v28 >= v29 )
              {
                if ( !v21 )
                  Thread = -1073741527;
              }
              else
              {
                v30 = (int *)(v17 + 304);
                v31 = *((_DWORD *)v17 + 76);
                if ( v31 || (unsigned int)v16 >= v29 )
                  goto LABEL_75;
                if ( (*((_DWORD *)v17 + 78) & 0x200) != 0 )
                {
                  ExpLeaveWorkerFactoryAwayMode(v17);
                  v31 = *v30;
                }
                *v30 = v31 + 1;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                v32 = LockHandle.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v48 = KeGetCurrentIrql();
                    if ( v48 <= 0xFu && LockHandle.OldIrql <= 0xFu && v48 >= 2u )
                    {
                      v49 = KeGetCurrentPrcb();
                      v50 = v49->SchedulerAssist;
                      v51 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                      v47 = (v51 & v50[5]) == 0;
                      v50[5] &= v51;
                      if ( v47 )
                        KiRemoveSystemWorkPriorityKick(v49);
                      v17 = (char *)Object;
                    }
                  }
                }
                __writecr8(v32);
                v11 = 0;
                Thread = ExpWorkerFactoryCreateThread(v17);
                if ( Thread < 0 )
                {
                  v11 = 1;
                  KeAcquireInStackQueuedSpinLock(*v58, &LockHandle);
                  --*v30;
                  if ( v21 )
LABEL_75:
                    Thread = 0;
                }
              }
            }
          }
          if ( !v11 )
            goto LABEL_47;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          }
          else
          {
            _m_prefetchw(&LockHandle);
            Next = (__int64)LockHandle.LockQueue.Next;
            if ( !LockHandle.LockQueue.Next )
            {
              if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                   0LL,
                                                   (signed __int64)&LockHandle) == &LockHandle )
                goto LABEL_44;
              Next = KxWaitForLockChainValid(&LockHandle, v16);
            }
            LockHandle.LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          }
LABEL_44:
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          if ( v24 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v52 = v24[6] - 1;
              v24[6] = v52;
              if ( !v52 )
                KiRemoveSystemWorkPriorityKick(v23);
            }
          }
          v25 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v53 = KeGetCurrentIrql();
              if ( v53 <= 0xFu && LockHandle.OldIrql <= 0xFu && v53 >= 2u )
              {
                v54 = KeGetCurrentPrcb();
                v55 = v54->SchedulerAssist;
                v56 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v47 = (v56 & v55[5]) == 0;
                v55[5] &= v56;
                if ( v47 )
                  KiRemoveSystemWorkPriorityKick(v54);
              }
            }
          }
          __writecr8(v25);
          v17 = (char *)Object;
LABEL_47:
          ObfDereferenceObjectWithTag(v17, 0x746C6644u);
          return Thread;
        }
        v17 = (char *)Object;
        if ( !LODWORD(v62[1]) )
        {
          v20 = *((_DWORD *)Object + 72);
          if ( v20 == *((_DWORD *)Object + 73) )
            Thread = -1073741823;
          else
            *((_DWORD *)Object + 72) = v20 + 1;
          goto LABEL_38;
        }
        if ( LODWORD(v62[1]) == 1 )
          goto LABEL_35;
        if ( LODWORD(v62[1]) != 2 )
        {
          if ( LODWORD(v62[1]) == 3 )
          {
            if ( *((_DWORD *)Object + 72) )
            {
              ExpRemoveCurrentThreadFromThreadHistory(Object);
              --*((_DWORD *)v17 + 72);
              --*((_DWORD *)v17 + 73);
              v10 = *((_DWORD *)v17 + 72) == 0;
            }
            else
            {
              Thread = -1073741823;
            }
          }
          else
          {
            Thread = -1073741811;
          }
          goto LABEL_38;
        }
        v18 = *((_DWORD *)Object + 72);
        if ( !v18 )
        {
          Thread = -1073741823;
          goto LABEL_38;
        }
        v19 = v18 - 1;
        *((_DWORD *)Object + 72) = v19;
        if ( !v19 )
LABEL_35:
          v10 = 1;
LABEL_38:
        v21 = 0;
        goto LABEL_39;
      }
      v39 = Object;
      v40 = v62[1];
      if ( !LODWORD(v62[1]) )
      {
        v40 = KeNumberProcessors_0;
        v39 = Object;
      }
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v40;
      ObfDereferenceObjectWithTag(v39, 0x746C6644u);
      return 0;
    }
  }
  else
  {
    switch ( WorkerFactoryInformationClass )
    {
      case WorkerFactoryIdleTimeout:
        v6 = 8;
        goto LABEL_3;
      case WorkerFactoryBindingCount:
      case WorkerFactoryThreadMinimum:
      case WorkerFactoryThreadMaximum:
      case WorkerFactoryAdjustThreadGoal:
      case WorkerFactoryThreadBasePriority:
      case WorkerFactoryTimeoutWaiters:
      case WorkerFactoryFlags:
      case WorkerFactoryThreadSoftMaximum:
        goto LABEL_2;
      case WorkerFactoryPaused:
        result = -1073741822;
        break;
      case WorkerFactoryStackInformation:
        v6 = 16;
        goto LABEL_3;
      case WorkerFactoryThreadCpuSets:
        if ( WorkerFactoryInformationLength >= 0xA0 )
          v6 = 160;
        else
          v6 = WorkerFactoryInformationLength + (WorkerFactoryInformationLength & 7);
        goto LABEL_3;
      default:
        result = -1073741821;
        break;
    }
  }
  return result;
}
