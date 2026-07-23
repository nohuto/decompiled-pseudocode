/*
 * XREFs of NtSetInformationWorkerFactory @ 0x140202E10
 * Callers:
 *     <none>
 * Callees:
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140203B30 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCreateThread @ 0x140203BC8 (ExpWorkerFactoryCreateThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     KiValidateCpuSetMasks @ 0x140229680 (KiValidateCpuSetMasks.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14023CFB0 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402A7748 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402E7740 (ExpWorkerFactoryCheckCreate.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExSystemExceptionFilter @ 0x1407D5080 (ExSystemExceptionFilter.c)
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int32 v9; // r12d
  ULONG v10; // r14d
  NTSTATUS result; // eax
  __int64 v12; // rax
  NTSTATUS Thread; // esi
  PVOID v14; // rcx
  int v15; // eax
  PVOID v16; // r15
  unsigned __int64 *v17; // rdi
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v21; // rdx
  int v22; // eax
  char *v23; // rdi
  __int64 v24; // rdx
  unsigned int v25; // edx
  int v26; // ecx
  _DWORD *v27; // r12
  unsigned int v28; // eax
  bool v29; // r13
  _DWORD *v30; // r13
  _DWORD *v31; // r14
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  bool v37; // zf
  __int64 v38; // rax
  char v39; // r13
  unsigned int v40; // edx
  bool v41; // al
  unsigned int v42; // ecx
  unsigned int v43; // edx
  PKSPIN_LOCK *v44; // r14
  unsigned int v45; // eax
  int *v46; // rbx
  int v47; // ecx
  unsigned __int64 v48; // rsi
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  int v56; // eax
  unsigned __int64 v57; // rbx
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r9
  _DWORD *v60; // r8
  int v61; // eax
  char v62; // [rsp+34h] [rbp-134h]
  PVOID Object; // [rsp+38h] [rbp-130h] BYREF
  char v64; // [rsp+42h] [rbp-126h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-120h] BYREF
  _DWORD *v66; // [rsp+60h] [rbp-108h]
  _QWORD v67[23]; // [rsp+68h] [rbp-100h] BYREF
  void *retaddr; // [rsp+168h] [rbp+0h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_OWORD *)v67 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&v67[3], 0, 0xA0uLL);
  v9 = WorkerFactoryInformationClass - 2;
  switch ( WorkerFactoryInformationClass )
  {
    case WorkerFactoryIdleTimeout:
      v10 = 8;
      goto LABEL_9;
    case WorkerFactoryBindingCount:
    case WorkerFactoryThreadMinimum:
    case WorkerFactoryThreadMaximum:
    case WorkerFactoryAdjustThreadGoal:
    case WorkerFactoryCallbackType:
    case WorkerFactoryThreadBasePriority:
    case WorkerFactoryTimeoutWaiters:
    case WorkerFactoryFlags:
    case WorkerFactoryThreadSoftMaximum:
      v10 = 4;
      goto LABEL_9;
    case WorkerFactoryPaused:
      return -1073741822;
    case WorkerFactoryStackInformation:
      v10 = 16;
      goto LABEL_9;
    case WorkerFactoryThreadCpuSets:
      if ( WorkerFactoryInformationLength >= 0xA0 )
        v10 = 160;
      else
        v10 = WorkerFactoryInformationLength + (WorkerFactoryInformationLength & 7);
LABEL_9:
      if ( WorkerFactoryInformationLength == v10 )
      {
        switch ( WorkerFactoryInformationClass )
        {
          case WorkerFactoryIdleTimeout:
            if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v67[3] = *(_QWORD *)WorkerFactoryInformation;
            break;
          case WorkerFactoryBindingCount:
          case WorkerFactoryThreadMinimum:
          case WorkerFactoryThreadMaximum:
            if ( PreviousMode )
            {
              v12 = (__int64)WorkerFactoryInformation;
              if ( (unsigned __int64)WorkerFactoryInformation >= 0x7FFFFFFF0000LL )
                v12 = 0x7FFFFFFF0000LL;
              LODWORD(v67[3]) = *(_DWORD *)v12;
            }
            else
            {
              LODWORD(v67[3]) = *(_DWORD *)WorkerFactoryInformation;
            }
            break;
          default:
            __fastfail(0x25u);
        }
        Thread = 0;
        Object = 0LL;
        result = ObReferenceObjectByHandle(
                   WorkerFactoryHandle,
                   4u,
                   ExpWorkerFactoryObjectType,
                   PreviousMode,
                   &Object,
                   0LL);
        if ( result >= 0 )
        {
          if ( WorkerFactoryInformationClass == WorkerFactoryAdjustThreadGoal )
          {
            v14 = Object;
            v15 = v67[3];
            if ( !LODWORD(v67[3]) )
            {
              v15 = KeNumberProcessors_0;
              v14 = Object;
            }
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v15;
            ObfDereferenceObjectWithTag(v14, 0x746C6644u);
            result = 0;
          }
          else
          {
            v64 = 0;
            v62 = 1;
            v16 = Object;
            v17 = (unsigned __int64 *)*((_QWORD *)Object + 2);
            LockHandle.LockQueue.Lock = v17;
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
            v21 = CurrentPrcb->SchedulerAssist;
            if ( v21 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v22 = v21[6];
                v21[6] = v22 + 1;
                if ( v22 == -1 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented(&LockHandle, v17);
            }
            else if ( _InterlockedExchange64((volatile __int64 *)v17, (__int64)&LockHandle) )
            {
              KxWaitForLockOwnerShip(&LockHandle);
            }
            switch ( v9 )
            {
              case 0:
                if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
                {
                  Thread = 128;
                  v23 = (char *)Object;
                }
                else if ( v67[3] >= 0LL )
                {
                  Thread = -1073741811;
                  v23 = (char *)Object;
                }
                else
                {
                  v24 = -10000000LL;
                  if ( v67[3] <= -10000000LL )
                  {
                    v24 = v67[3];
                    if ( v67[3] < -6000000000LL )
                      v24 = -6000000000LL;
                  }
                  v67[3] = v24;
                  v23 = (char *)Object;
                  *((_QWORD *)Object + 14) = v24;
                  v67[1] = -1LL;
                  KeSetTimer2(v23 + 328, v24, -v24, v67);
                }
                goto LABEL_95;
              case 1:
                v23 = (char *)Object;
                v25 = *((_DWORD *)Object + 77);
                if ( SLODWORD(v67[3]) < 0 )
                {
                  if ( v25 <= -LODWORD(v67[3]) )
                  {
                    *((_DWORD *)Object + 77) = 0;
                    v26 = 0;
                  }
                  else
                  {
                    v26 = v25 + LODWORD(v67[3]);
                    *((_DWORD *)Object + 77) = v25 + LODWORD(v67[3]);
                  }
                }
                else
                {
                  v26 = -1;
                  if ( v25 < v25 + LODWORD(v67[3]) )
                    v26 = v25 + LODWORD(v67[3]);
                  *((_DWORD *)Object + 77) = v26;
                }
                if ( v25 )
                {
                  if ( !v26 && (*((_DWORD *)v23 + 78) & 0x200) != 0 )
                    ExpLeaveWorkerFactoryAwayMode(v23);
                }
                else if ( v26 && (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v23) )
                {
                  ExpWorkerFactoryCheckCreate(v23, &LockHandle);
                  v62 = 0;
                }
                goto LABEL_95;
              case 2:
                v23 = (char *)Object;
                if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
                {
                  Thread = 128;
                  goto LABEL_95;
                }
                v27 = (char *)Object + 280;
                v28 = v67[3];
                v29 = LODWORD(v67[3]) > *((_DWORD *)Object + 70);
                *((_DWORD *)Object + 70) = v67[3];
                if ( *((_DWORD *)v23 + 71) < v28 )
                  *((_DWORD *)v23 + 71) = v28;
                if ( !v29 )
                {
                  v41 = 0;
                  v39 = 0;
                  goto LABEL_96;
                }
                if ( (*((_DWORD *)v23 + 78) & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v23);
                v30 = v23 + 296;
                v66 = v23 + 288;
                if ( (unsigned int)(*((_DWORD *)v23 + 72) + *((_DWORD *)v23 + 74)) < *v27 )
                {
                  v31 = v23 + 304;
                  while ( 1 )
                  {
                    ++*v31;
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                    OldIrql = LockHandle.OldIrql;
                    if ( KiIrqlFlags )
                    {
                      if ( (KiIrqlFlags & 1) != 0 )
                      {
                        v33 = KeGetCurrentIrql();
                        if ( v33 <= 0xFu && LockHandle.OldIrql <= 0xFu && v33 >= 2u )
                        {
                          v34 = KeGetCurrentPrcb();
                          v35 = v34->SchedulerAssist;
                          v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                          v37 = (v36 & v35[5]) == 0;
                          v35[5] &= v36;
                          if ( v37 )
                            KiRemoveSystemWorkPriorityKick(v34);
                          v23 = (char *)Object;
                        }
                      }
                    }
                    __writecr8(OldIrql);
                    Thread = ExpWorkerFactoryCreateThread(v23);
                    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v16 + 2), &LockHandle);
                    if ( Thread < 0 )
                      break;
                    if ( (unsigned int)(*v66 + *v30) >= *v27 )
                      goto LABEL_95;
                  }
                  --*v31;
                }
                goto LABEL_95;
              case 3:
                v38 = *((_QWORD *)v16 + 2);
                v23 = (char *)Object;
                if ( *(_BYTE *)(v38 + 33) )
                {
                  Thread = 128;
LABEL_95:
                  v41 = 0;
                  v39 = 0;
                }
                else
                {
                  v39 = 1;
                  v40 = v67[3];
                  v41 = LODWORD(v67[3])
                     && (!*((_DWORD *)Object + 71) && *(_DWORD *)(v38 + 24) || *(int *)(*(_QWORD *)(v38 + 8) + 4LL) > 0);
                  *((_DWORD *)Object + 71) = v67[3];
                  if ( v40 < *((_DWORD *)v23 + 70) )
                    *((_DWORD *)v23 + 70) = v40;
                }
LABEL_96:
                if ( v41 )
                {
                  v42 = *((_DWORD *)v23 + 72);
                  v43 = v42 + *((_DWORD *)v23 + 74);
                  v44 = (PKSPIN_LOCK *)(v23 + 16);
                  if ( *(_BYTE *)(*((_QWORD *)v23 + 2) + 33LL) )
                  {
                    Thread = 128;
                  }
                  else
                  {
                    v45 = *((_DWORD *)v23 + 71);
                    if ( v42 < v45 )
                    {
                      v46 = (int *)(v23 + 304);
                      v47 = *((_DWORD *)v23 + 76);
                      if ( v47 || v43 >= v45 )
                        goto LABEL_116;
                      if ( (*((_DWORD *)v23 + 78) & 0x200) != 0 )
                      {
                        ExpLeaveWorkerFactoryAwayMode(v23);
                        v47 = *v46;
                      }
                      *v46 = v47 + 1;
                      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                      v48 = LockHandle.OldIrql;
                      if ( KiIrqlFlags )
                      {
                        if ( (KiIrqlFlags & 1) != 0 )
                        {
                          v49 = KeGetCurrentIrql();
                          if ( v49 <= 0xFu && LockHandle.OldIrql <= 0xFu && v49 >= 2u )
                          {
                            v50 = KeGetCurrentPrcb();
                            v51 = v50->SchedulerAssist;
                            v52 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                            v37 = (v52 & v51[5]) == 0;
                            v51[5] &= v52;
                            if ( v37 )
                              KiRemoveSystemWorkPriorityKick(v50);
                            v23 = (char *)Object;
                          }
                        }
                      }
                      __writecr8(v48);
                      v62 = 0;
                      Thread = ExpWorkerFactoryCreateThread(v23);
                      if ( Thread < 0 )
                      {
                        v62 = 1;
                        KeAcquireInStackQueuedSpinLock(*v44, &LockHandle);
                        --*v46;
                        if ( v39 )
LABEL_116:
                          Thread = 0;
                      }
                    }
                    else if ( !v39 )
                    {
                      Thread = -1073741527;
                    }
                  }
                }
                if ( !v62 )
                  goto LABEL_136;
                if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                {
                  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
                  goto LABEL_124;
                }
                _m_prefetchw(&LockHandle);
                Next = LockHandle.LockQueue.Next;
                if ( LockHandle.LockQueue.Next )
                  goto LABEL_123;
                if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                     (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                     0LL,
                                                     (signed __int64)&LockHandle) != &LockHandle )
                {
                  Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
LABEL_123:
                  LockHandle.LockQueue.Next = 0LL;
                  _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
                }
LABEL_124:
                v54 = KeGetCurrentPrcb();
                v55 = v54->SchedulerAssist;
                if ( v55 )
                {
                  if ( v54->NestingLevel <= 1u )
                  {
                    v56 = v55[6] - 1;
                    v55[6] = v56;
                    if ( !v56 )
                      KiRemoveSystemWorkPriorityKick(v54);
                  }
                }
                v57 = LockHandle.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v58 = KeGetCurrentIrql();
                    if ( v58 <= 0xFu && LockHandle.OldIrql <= 0xFu && v58 >= 2u )
                    {
                      v59 = KeGetCurrentPrcb();
                      v60 = v59->SchedulerAssist;
                      v61 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                      v37 = (v61 & v60[5]) == 0;
                      v60[5] &= v61;
                      if ( v37 )
                        KiRemoveSystemWorkPriorityKick(v59);
                    }
                  }
                }
                __writecr8(v57);
                v23 = (char *)Object;
LABEL_136:
                ObfDereferenceObjectWithTag(v23, 0x746C6644u);
                result = Thread;
                break;
              default:
                __fastfail(0x25u);
            }
          }
        }
      }
      else
      {
        result = -1073741820;
      }
      break;
    default:
      result = -1073741821;
      break;
  }
  return result;
}
