/*
 * XREFs of NtSetInformationWorkerFactory @ 0x14035BF90
 * Callers:
 *     <none>
 * Callees:
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140206148 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14028C9B0 (ExpWorkerFactoryCheckCreate.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     KiValidateCpuSetMasks @ 0x1402F803C (KiValidateCpuSetMasks.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14031D120 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x14035C970 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCreateThread @ 0x14035CA08 (ExpWorkerFactoryCreateThread.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     ExSystemExceptionFilter @ 0x1407D0AE0 (ExSystemExceptionFilter.c)
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
  _QWORD *v16; // rdx
  char *v17; // rsi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  char v21; // di
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int64 v25; // rbx
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // eax
  int *v31; // r14
  int v32; // ecx
  unsigned __int64 v33; // r15
  PKSPIN_LOCK v34; // rax
  unsigned int v35; // edx
  __int64 v36; // rdx
  PKSPIN_LOCK *v37; // r14
  _DWORD *v38; // rdi
  unsigned int v39; // eax
  PKSPIN_LOCK *v40; // rax
  unsigned __int64 OldIrql; // r12
  PVOID v42; // rcx
  int v43; // eax
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  bool v50; // zf
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  int v55; // eax
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r9
  _DWORD *v58; // r8
  int v59; // eax
  PVOID Object; // [rsp+30h] [rbp-138h] BYREF
  PKSPIN_LOCK *v61; // [rsp+40h] [rbp-128h]
  size_t Size; // [rsp+48h] [rbp-120h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-118h] BYREF
  _DWORD *v64; // [rsp+68h] [rbp-100h]
  _OWORD v65[11]; // [rsp+70h] [rbp-F8h] BYREF
  void *retaddr; // [rsp+168h] [rbp+0h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v65, 0, sizeof(v65));
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
      LODWORD(v65[1]) = *(_DWORD *)WorkerFactoryInformation;
    }
    else
    {
      switch ( WorkerFactoryInformationClass )
      {
        case WorkerFactoryIdleTimeout:
          if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_QWORD *)&v65[1] = *(_QWORD *)WorkerFactoryInformation;
          break;
        case WorkerFactoryBindingCount:
        case WorkerFactoryThreadMinimum:
        case WorkerFactoryThreadMaximum:
          if ( !PreviousMode )
            goto LABEL_9;
          v7 = (__int64)WorkerFactoryInformation;
          if ( (unsigned __int64)WorkerFactoryInformation >= 0x7FFFFFFF0000LL )
            v7 = 0x7FFFFFFF0000LL;
          LODWORD(v65[1]) = *(_DWORD *)v7;
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
        v61 = (PKSPIN_LOCK *)Object;
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
            v45 = v15[6];
            v15[6] = v45 + 1;
            if ( v45 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, v12);
        }
        else
        {
          v16 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v12, (__int64)&LockHandle);
          if ( v16 )
            KxWaitForLockOwnerShip((__int64)&LockHandle, v16);
        }
        if ( WorkerFactoryInformationClass != WorkerFactoryCallbackType )
        {
          switch ( WorkerFactoryInformationClass )
          {
            case WorkerFactoryIdleTimeout:
              v36 = *(_QWORD *)&v65[1];
              if ( *(__int64 *)&v65[1] >= 0 )
              {
                Thread = -1073741811;
                v17 = (char *)Object;
              }
              else
              {
                if ( *(__int64 *)&v65[1] > -10000000 )
                {
                  v36 = -10000000LL;
                  *(_QWORD *)&v65[1] = -10000000LL;
                }
                else if ( *(__int64 *)&v65[1] < -6000000000LL )
                {
                  v36 = -6000000000LL;
                  *(_QWORD *)&v65[1] = -6000000000LL;
                }
                v17 = (char *)Object;
                *((_QWORD *)Object + 14) = v36;
                *((_QWORD *)&v65[0] + 1) = -1LL;
                KeSetTimer2((__int64)(v17 + 328), v36, -v36, (__int64)v65);
              }
              goto LABEL_38;
            case WorkerFactoryBindingCount:
              v17 = (char *)Object;
              v26 = *((_DWORD *)Object + 77);
              if ( SLODWORD(v65[1]) < 0 )
              {
                if ( v26 > -LODWORD(v65[1]) )
                {
                  v27 = v26 + LODWORD(v65[1]);
                  *((_DWORD *)Object + 77) = v26 + LODWORD(v65[1]);
                }
                else
                {
                  *((_DWORD *)Object + 77) = 0;
                  v27 = 0;
                }
              }
              else
              {
                v27 = v26 + LODWORD(v65[1]);
                if ( v26 >= v26 + LODWORD(v65[1]) )
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
                ExpWorkerFactoryCheckCreate(v17, &LockHandle, 0);
                v11 = 0;
              }
              goto LABEL_38;
            case WorkerFactoryThreadMinimum:
              v37 = v61;
              v17 = (char *)Object;
              if ( *((_BYTE *)v61[2] + 33) )
              {
                Thread = 128;
              }
              else
              {
                v38 = (char *)Object + 280;
                v39 = v65[1];
                v10 = LODWORD(v65[1]) > *((_DWORD *)Object + 70);
                *((_DWORD *)Object + 70) = v65[1];
                if ( *((_DWORD *)v17 + 71) < v39 )
                  *((_DWORD *)v17 + 71) = v39;
                if ( v10 )
                {
                  v10 = 0;
                  if ( (*((_DWORD *)v17 + 78) & 0x200) != 0 )
                    ExpLeaveWorkerFactoryAwayMode(v17);
                  Size = (size_t)(v17 + 296);
                  v64 = v17 + 288;
                  if ( (unsigned int)(*((_DWORD *)v17 + 74) + *((_DWORD *)v17 + 72)) < *v38 )
                  {
                    v40 = (PKSPIN_LOCK *)(v17 + 304);
                    v61 = (PKSPIN_LOCK *)(v17 + 304);
                    while ( 1 )
                    {
                      ++*(_DWORD *)v40;
                      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                      OldIrql = LockHandle.OldIrql;
                      if ( KiIrqlFlags )
                      {
                        if ( (KiIrqlFlags & 1) != 0 )
                        {
                          v46 = KeGetCurrentIrql();
                          if ( v46 <= 0xFu && LockHandle.OldIrql <= 0xFu && v46 >= 2u )
                          {
                            v47 = KeGetCurrentPrcb();
                            v48 = v47->SchedulerAssist;
                            v49 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                            v50 = (v49 & v48[5]) == 0;
                            v48[5] &= v49;
                            if ( v50 )
                              KiRemoveSystemWorkPriorityKick(v47);
                            v17 = (char *)Object;
                          }
                        }
                      }
                      __writecr8(OldIrql);
                      Thread = ExpWorkerFactoryCreateThread(v17);
                      KeAcquireInStackQueuedSpinLock(v37[2], &LockHandle);
                      if ( Thread < 0 )
                        break;
                      v40 = v61;
                      if ( (unsigned int)(*(_DWORD *)Size + *v64) >= *v38 )
                        goto LABEL_38;
                    }
                    --*(_DWORD *)v61;
                  }
                }
              }
              goto LABEL_38;
            case WorkerFactoryThreadMaximum:
              v34 = v61[2];
              v17 = (char *)Object;
              if ( *((_BYTE *)v34 + 33) )
              {
                Thread = 128;
                goto LABEL_38;
              }
              v21 = 1;
              v35 = v65[1];
              if ( LODWORD(v65[1]) && (!*((_DWORD *)Object + 71) && *((_DWORD *)v34 + 6) || *(int *)(v34[1] + 4) > 0) )
                v10 = 1;
              *((_DWORD *)Object + 71) = v65[1];
              if ( v35 < *((_DWORD *)v17 + 70) )
                *((_DWORD *)v17 + 70) = v35;
              break;
            default:
              __fastfail(0x25u);
          }
LABEL_39:
          if ( v10 )
          {
            v28 = *((_DWORD *)v17 + 72);
            v29 = v28 + *((_DWORD *)v17 + 74);
            v61 = (PKSPIN_LOCK *)(v17 + 16);
            if ( *(_BYTE *)(*((_QWORD *)v17 + 2) + 33LL) )
            {
              Thread = 128;
            }
            else
            {
              v30 = *((_DWORD *)v17 + 71);
              if ( v28 >= v30 )
              {
                if ( !v21 )
                  Thread = -1073741527;
              }
              else
              {
                v31 = (int *)(v17 + 304);
                v32 = *((_DWORD *)v17 + 76);
                if ( v32 || v29 >= v30 )
                  goto LABEL_75;
                if ( (*((_DWORD *)v17 + 78) & 0x200) != 0 )
                {
                  ExpLeaveWorkerFactoryAwayMode(v17);
                  v32 = *v31;
                }
                *v31 = v32 + 1;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                v33 = LockHandle.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v51 = KeGetCurrentIrql();
                    if ( v51 <= 0xFu && LockHandle.OldIrql <= 0xFu && v51 >= 2u )
                    {
                      v52 = KeGetCurrentPrcb();
                      v53 = v52->SchedulerAssist;
                      v54 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                      v50 = (v54 & v53[5]) == 0;
                      v53[5] &= v54;
                      if ( v50 )
                        KiRemoveSystemWorkPriorityKick(v52);
                      v17 = (char *)Object;
                    }
                  }
                }
                __writecr8(v33);
                v11 = 0;
                Thread = ExpWorkerFactoryCreateThread(v17);
                if ( Thread < 0 )
                {
                  v11 = 1;
                  KeAcquireInStackQueuedSpinLock(*v61, &LockHandle);
                  --*v31;
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
            Next = LockHandle.LockQueue.Next;
            if ( !LockHandle.LockQueue.Next )
            {
              if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                   0LL,
                                                   (signed __int64)&LockHandle) == &LockHandle )
                goto LABEL_44;
              Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
            }
            LockHandle.LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
          }
LABEL_44:
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          if ( v24 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v55 = v24[6] - 1;
              v24[6] = v55;
              if ( !v55 )
                KiRemoveSystemWorkPriorityKick(v23);
            }
          }
          v25 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v56 = KeGetCurrentIrql();
              if ( v56 <= 0xFu && LockHandle.OldIrql <= 0xFu && v56 >= 2u )
              {
                v57 = KeGetCurrentPrcb();
                v58 = v57->SchedulerAssist;
                v59 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v50 = (v59 & v58[5]) == 0;
                v58[5] &= v59;
                if ( v50 )
                  KiRemoveSystemWorkPriorityKick(v57);
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
        if ( !LODWORD(v65[1]) )
        {
          v20 = *((_DWORD *)Object + 72);
          if ( v20 == *((_DWORD *)Object + 73) )
            Thread = -1073741823;
          else
            *((_DWORD *)Object + 72) = v20 + 1;
          goto LABEL_38;
        }
        if ( LODWORD(v65[1]) == 1 )
          goto LABEL_35;
        if ( LODWORD(v65[1]) != 2 )
        {
          if ( LODWORD(v65[1]) == 3 )
          {
            if ( *((_DWORD *)Object + 72) )
            {
              ExpRemoveCurrentThreadFromThreadHistory((__int64)Object);
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
      v42 = Object;
      v43 = v65[1];
      if ( !LODWORD(v65[1]) )
      {
        v43 = KeNumberProcessors_0;
        v42 = Object;
      }
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v43;
      ObfDereferenceObjectWithTag(v42, 0x746C6644u);
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
