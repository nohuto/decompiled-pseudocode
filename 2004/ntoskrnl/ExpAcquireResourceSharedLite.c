/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x1402091B0
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     SeSecurityAttributePresent @ 0x140296520 (SeSecurityAttributePresent.c)
 *     SepMandatoryIntegrityCheck @ 0x14029C910 (SepMandatoryIntegrityCheck.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1403243F0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140327860 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIoEx @ 0x14020A940 (PsBoostThreadIoEx.c)
 *     ExpWaitForResource @ 0x14020E440 (ExpWaitForResource.c)
 *     ExpGetThreadResourceHint @ 0x14022A080 (ExpGetThreadResourceHint.c)
 *     ExpFindCurrentThread @ 0x14022A0A0 (ExpFindCurrentThread.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     ExpApplyPriorityBoost @ 0x1402830C0 (ExpApplyPriorityBoost.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     IoBoostThreadIoPriority @ 0x1402D668C (IoBoostThreadIoPriority.c)
 *     KiAbQueueAutoBoostDpc @ 0x14032A93C (KiAbQueueAutoBoostDpc.c)
 *     ExpExpandResourceOwnerTable @ 0x14034417C (ExpExpandResourceOwnerTable.c)
 *     KiAbThreadInsertList @ 0x1403565EC (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     IoBoostThreadOutstandingIo @ 0x14050568C (IoBoostThreadOutstandingIo.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405A58E0 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405A5DAC (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2, __int64 a3, _DWORD *SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // r15
  bool v7; // r14
  volatile __int64 *v8; // rdi
  int SpareByte0; // r13d
  unsigned __int8 CurrentIrql; // r10
  __int64 v11; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v13; // rdx
  __int128 *v14; // rdx
  unsigned __int8 v15; // si
  int v16; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  unsigned __int64 OldIrql; // rdi
  __int16 v22; // ax
  int ThreadResourceHint; // eax
  int v24; // r8d
  int v25; // ecx
  int v26; // eax
  _KSPIN_LOCK_QUEUE *volatile v27; // rax
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  unsigned __int64 v30; // rdi
  unsigned int v31; // edi
  unsigned int v32; // edi
  _KSPIN_LOCK_QUEUE *volatile v33; // rax
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  unsigned __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // rax
  _KSPIN_LOCK_QUEUE *volatile v39; // rax
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  unsigned __int64 v42; // rsi
  struct _KTHREAD *v43; // r10
  int v44; // r8d
  unsigned int v45; // edx
  unsigned int v46; // ecx
  __int64 v47; // rdx
  __int16 v48; // dx
  int v49; // r9d
  int v50; // esi
  unsigned __int8 v51; // r10
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  _DWORD *v57; // r9
  __int64 v58; // rdi
  __int64 v59; // rax
  struct _KPRCB *v60; // rcx
  _DWORD *v61; // rdx
  unsigned __int64 v62; // rdi
  __int64 v63; // rdx
  __int128 *v64; // rax
  _QWORD *v65; // rcx
  unsigned int v66; // edi
  unsigned int v67; // edi
  _KSPIN_LOCK_QUEUE *volatile v68; // rax
  struct _KPRCB *v69; // rcx
  _DWORD *v70; // rdx
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // rbx
  int v73; // eax
  int v74; // eax
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r9
  _DWORD *v77; // r8
  int v78; // eax
  bool v79; // zf
  int v80; // eax
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r9
  _DWORD *v83; // r8
  int v84; // eax
  unsigned __int8 v85; // al
  struct _KPRCB *v86; // r9
  _DWORD *v87; // r8
  int v88; // eax
  int v89; // eax
  unsigned __int8 v90; // al
  struct _KPRCB *v91; // r10
  _DWORD *v92; // r9
  int v93; // eax
  _DWORD *v94; // r9
  int v95; // eax
  unsigned __int8 v96; // r13
  _DWORD *v97; // r9
  unsigned __int8 v98; // al
  struct _KPRCB *v99; // r10
  int v100; // eax
  int v101; // eax
  unsigned __int8 v102; // al
  struct _KPRCB *v103; // r9
  _DWORD *v104; // r8
  int v105; // eax
  int v106; // eax
  unsigned __int8 v107; // al
  struct _KPRCB *v108; // r9
  _DWORD *v109; // r8
  int v110; // eax
  int v111; // eax
  unsigned __int8 v112; // al
  struct _KPRCB *v113; // r9
  _DWORD *v114; // r8
  int v115; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-29h] BYREF
  __int128 v117; // [rsp+48h] [rbp-11h] BYREF
  __int64 v118; // [rsp+58h] [rbp-1h]
  __int128 v119; // [rsp+60h] [rbp+7h] BYREF
  __int128 v120; // [rsp+70h] [rbp+17h]
  __int128 v121; // [rsp+80h] [rbp+27h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct _KPRCB *SystemArgument1; // [rsp+C0h] [rbp+67h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x868Cu);
  v8 = (volatile __int64 *)(a1 + 96);
  SpareByte0 = 0;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = LOBYTE(LockHandle.LockQueue.Next) - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ((_DWORD)v11 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = CurrentPrcb->SchedulerAssist;
  if ( v13 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v73 = v13[6];
      v13[6] = v73 + 1;
      if ( v73 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v8);
  }
  else
  {
    v14 = (__int128 *)_InterlockedExchange64(v8, (__int64)&LockHandle);
    if ( v14 )
      KxWaitForLockOwnerShip(&LockHandle);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(a1 + 64) )
      {
        *(_WORD *)(a1 + 24) = 1;
        *(_DWORD *)(a1 + 64) = 1;
        v15 = 1;
        v16 = *(_DWORD *)(a1 + 56) & 7;
        *(_QWORD *)(a1 + 48) = CurrentThread;
        *(_DWORD *)(a1 + 56) = v16 | 8;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr, 1LL, SchedulerAssist);
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
              goto LABEL_10;
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle, v14, 1LL, SchedulerAssist);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
        }
LABEL_10:
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        if ( v19 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v111 = v19[6] - 1;
            v19[6] = v111;
            if ( !v111 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v112 = KeGetCurrentIrql();
            if ( v112 <= 0xFu && LockHandle.OldIrql <= 0xFu && v112 >= 2u )
            {
              v113 = KeGetCurrentPrcb();
              v114 = v113->SchedulerAssist;
              v115 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
              v79 = (v115 & v114[5]) == 0;
              v114[5] &= v115;
              if ( v79 )
                KiRemoveSystemWorkPriorityKick(v113);
            }
          }
        }
        __writecr8(OldIrql);
        __incgsdword(0x8694u);
        __incgsdword(0x8664u);
        if ( v7 )
          PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
        return v15;
      }
      v22 = *(_WORD *)(a1 + 26) & 0x80;
      if ( v22 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
      {
        v31 = *(_DWORD *)(a1 + 56) + 8;
        *(_DWORD *)(a1 + 56) = v31;
        v32 = v31 >> 3;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr, 1LL, SchedulerAssist);
          goto LABEL_33;
        }
        _m_prefetchw(&LockHandle);
        v33 = LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
          {
LABEL_33:
            v34 = KeGetCurrentPrcb();
            v35 = v34->SchedulerAssist;
            if ( v35 )
            {
              if ( v34->NestingLevel <= 1u )
              {
                v74 = v35[6] - 1;
                v35[6] = v74;
                if ( !v74 )
                  KiRemoveSystemWorkPriorityKick(v34);
              }
            }
            v36 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v75 = KeGetCurrentIrql();
                if ( v75 <= 0xFu && LockHandle.OldIrql <= 0xFu && v75 >= 2u )
                {
                  v76 = KeGetCurrentPrcb();
                  v77 = v76->SchedulerAssist;
                  v78 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
                  v79 = (v78 & v77[5]) == 0;
                  v77[5] &= v78;
                  if ( v79 )
                    KiRemoveSystemWorkPriorityKick(v76);
                }
              }
            }
            __writecr8(v36);
            __incgsdword(0x8690u);
            __incgsdword(0x8664u);
            if ( v7 )
              PerfLogExecutiveResourceAcquire(65585LL, a1, v32, *(unsigned int *)(a1 + 68));
            return 1;
          }
          v33 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle, v14, 1LL, SchedulerAssist);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)&v33->Lock, 1uLL);
        goto LABEL_33;
      }
      if ( v22 )
        break;
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread, v14, 1LL);
      v14 = (__int128 *)ExpFindCurrentThread(
                          a1,
                          (_DWORD)CurrentThread,
                          (unsigned int)&LockHandle,
                          v24,
                          *(_DWORD *)(a1 + 76) != 0,
                          ThreadResourceHint);
      if ( v14 )
        goto LABEL_18;
    }
    v63 = *(_QWORD *)(a1 + 16);
    if ( v63 )
      break;
LABEL_107:
    ExpExpandResourceOwnerTable(a1, &LockHandle, 1LL);
  }
  v64 = (__int128 *)(v63 + 16LL * *(unsigned int *)(v63 + 8));
  v14 = (__int128 *)(v63 + 16);
  while ( *(_QWORD *)v14 )
  {
    if ( ++v14 == v64 )
      goto LABEL_107;
  }
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(unsigned int)((_DWORD)v14 - *(_DWORD *)(a1 + 16)) >> 4;
LABEL_18:
  if ( *(struct _KTHREAD **)v14 == CurrentThread )
  {
    v66 = *((_DWORD *)v14 + 2) + 8;
    *((_DWORD *)v14 + 2) = v66;
    v67 = v66 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr, 1LL, SchedulerAssist);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v68 = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_102;
        v68 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle, v14, 1LL, SchedulerAssist);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&v68->Lock, 1uLL);
    }
LABEL_102:
    v69 = KeGetCurrentPrcb();
    v70 = v69->SchedulerAssist;
    if ( v70 )
    {
      if ( v69->NestingLevel <= 1u )
      {
        v80 = v70[6] - 1;
        v70[6] = v80;
        if ( !v80 )
          KiRemoveSystemWorkPriorityKick(v69);
      }
    }
    v71 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v81 = KeGetCurrentIrql();
        if ( v81 <= 0xFu && LockHandle.OldIrql <= 0xFu && v81 >= 2u )
        {
          v82 = KeGetCurrentPrcb();
          v83 = v82->SchedulerAssist;
          v84 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
          v79 = (v84 & v83[5]) == 0;
          v83[5] &= v84;
          if ( v79 )
            KiRemoveSystemWorkPriorityKick(v82);
        }
      }
    }
    __writecr8(v71);
    __incgsdword(0x8698u);
    __incgsdword(0x8664u);
    if ( !v7 )
      return 1;
    PerfLogExecutiveResourceAcquire(65617LL, a1, v67, *(unsigned int *)(a1 + 68));
    return 1;
  }
  v25 = *(_DWORD *)(a1 + 64);
  if ( !v25 || *(char *)(a1 + 26) >= 0 && !*(_DWORD *)(a1 + 76) )
  {
    *(_WORD *)(a1 + 24) = 1;
    *(_DWORD *)(a1 + 64) = v25 + 1;
    v26 = *((_DWORD *)v14 + 2) & 7;
    *(_QWORD *)v14 = CurrentThread;
    *((_DWORD *)v14 + 2) = v26 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr, 1LL, SchedulerAssist);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v27 = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_25;
        v27 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle, v14, 1LL, SchedulerAssist);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&v27->Lock, 1uLL);
    }
LABEL_25:
    v28 = KeGetCurrentPrcb();
    v29 = v28->SchedulerAssist;
    if ( v29 )
    {
      if ( v28->NestingLevel <= 1u )
      {
        v106 = v29[6] - 1;
        v29[6] = v106;
        if ( !v106 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
    v30 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v107 = KeGetCurrentIrql();
        if ( v107 <= 0xFu && LockHandle.OldIrql <= 0xFu && v107 >= 2u )
        {
          v108 = KeGetCurrentPrcb();
          v109 = v108->SchedulerAssist;
          v110 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
          v79 = (v110 & v109[5]) == 0;
          v109[5] &= v110;
          if ( v79 )
            KiRemoveSystemWorkPriorityKick(v108);
        }
      }
    }
    __writecr8(v30);
    __incgsdword(0x8694u);
    __incgsdword(0x8664u);
    if ( !v7 )
      return 1;
LABEL_204:
    PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    v37 = *((_DWORD *)v14 + 2);
    *(_QWORD *)v14 = CurrentThread;
    *((_DWORD *)v14 + 2) = v37 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    *((_QWORD *)&v121 + 1) = &v121;
    *(_QWORD *)&v121 = &v121;
    v38 = *(_QWORD *)(a1 + 32);
    *((_QWORD *)&v119 + 1) = 0LL;
    *((_QWORD *)&v120 + 1) = 393217LL;
    *(_QWORD *)&v120 = CurrentThread;
    if ( v38 )
    {
      v65 = *(_QWORD **)(v38 + 8);
      if ( *v65 != v38 )
        __fastfail(3u);
      *((_QWORD *)&v119 + 1) = *(_QWORD *)(v38 + 8);
      v14 = &v119;
      *(_QWORD *)&v119 = v38;
      *v65 = &v119;
      *(_QWORD *)(v38 + 8) = &v119;
    }
    else
    {
      *((_QWORD *)&v119 + 1) = &v119;
      *(_QWORD *)&v119 = &v119;
    }
    *(_QWORD *)(a1 + 32) = &v119;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr, 1LL, SchedulerAssist);
      goto LABEL_43;
    }
    _m_prefetchw(&LockHandle);
    v39 = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_43:
        v40 = KeGetCurrentPrcb();
        v41 = v40->SchedulerAssist;
        if ( v41 )
        {
          if ( v40->NestingLevel <= 1u )
          {
            v89 = v41[6] - 1;
            v41[6] = v89;
            if ( !v89 )
              KiRemoveSystemWorkPriorityKick(v40);
          }
        }
        v42 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v90 = KeGetCurrentIrql();
            if ( v90 <= 0xFu && LockHandle.OldIrql <= 0xFu && v90 >= 2u )
            {
              v91 = KeGetCurrentPrcb();
              v92 = v91->SchedulerAssist;
              v93 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
              v79 = (v93 & v92[5]) == 0;
              v92[5] &= v93;
              if ( v79 )
                KiRemoveSystemWorkPriorityKick(v91);
            }
          }
        }
        __writecr8(v42);
        __incgsdword(0x869Cu);
        if ( v7 )
          PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
        v43 = KeGetCurrentThread();
        v44 = 0;
        v45 = (*((_DWORD *)&v43[1].SwapListEntry + 2) >> 9) & 7;
        if ( (v43->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v45 = 0;
        }
        else if ( v45 >= 2 )
        {
          goto LABEL_49;
        }
        if ( v43 == KeGetCurrentThread() && LODWORD(v43[1].Timer.TimerListEntry.Flink) )
        {
LABEL_50:
          if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
            v44 = 4;
        }
        else
        {
LABEL_49:
          if ( v45 > 1 )
            goto LABEL_50;
        }
        v46 = v44 | 2;
        if ( (*(_WORD *)(a1 + 26) & 2) != 0 )
          v46 = v44;
        v47 = v46 | 0xFF00;
        if ( v43->Priority <= HIBYTE(*(unsigned __int16 *)(a1 + 26)) )
          v47 = v46;
        if ( (_DWORD)v47 )
          ExpApplyPriorityBoost(a1, v47, v43);
        ExpWaitForResource(a1, &v119, 66116LL, ExpApplyRewaitBoost);
        if ( ((unsigned __int8)CurrentThread & 3) == 0 )
          SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
        v48 = *(_WORD *)(a1 + 26);
        v118 = 0LL;
        v117 = 0LL;
        if ( (v48 & 8) == 0 )
        {
          v49 = 0;
          if ( (v48 & 4) != 0
            && ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
             || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0xE00u) < 0x400) )
          {
            v49 = 4;
          }
          v50 = v49 | 2;
          if ( (v48 & 2) == 0 )
            v50 = v49;
          if ( v50 )
          {
            *((_QWORD *)&v117 + 1) = v8;
            *(_QWORD *)&v117 = 0LL;
            v51 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v51 <= 0xFu )
            {
              v94 = KeGetCurrentPrcb()->SchedulerAssist;
              v94[5] |= ((_DWORD)v11 << (v51 + 1)) & 4;
            }
            LOBYTE(v118) = v51;
            v52 = KeGetCurrentPrcb();
            v53 = v52->SchedulerAssist;
            if ( v53 )
            {
              if ( v52->NestingLevel <= 1u )
              {
                v95 = v53[6];
                v53[6] = v95 + 1;
                if ( v95 == -1 )
                  KiRemoveSystemWorkPriorityKick(v52);
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented(&v117, v8);
            }
            else if ( _InterlockedExchange64(v8, (__int64)&v117) )
            {
              KxWaitForLockOwnerShip(&v117);
            }
            v54 = ExpFindCurrentThread(a1, (_DWORD)CurrentThread, (unsigned int)&v117, 0, 1, SpareByte0);
            v58 = v54;
            if ( (v50 & 4) != 0 )
            {
              if ( (*(_DWORD *)(v54 + 8) & 1) != 0 )
              {
                v50 &= ~4u;
              }
              else
              {
                PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
                *(_DWORD *)(v58 + 8) |= 1u;
              }
            }
            if ( (v50 & 2) != 0 )
            {
              if ( (*(_DWORD *)(v58 + 8) & 4) != 0 )
              {
                v50 &= ~2u;
              }
              else
              {
                if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry.Flink + 1) == 1
                  && CurrentThread->AbWaitEntryCount )
                {
                  v96 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v96 <= 0xFu )
                  {
                    v97 = KeGetCurrentPrcb()->SchedulerAssist;
                    v97[5] |= ((_DWORD)v11 << (v96 + 1)) & 4;
                  }
                  SystemArgument1 = KeGetCurrentPrcb();
                  if ( (unsigned int)KiAbThreadInsertList(
                                       CurrentThread,
                                       &SystemArgument1->AbPropagateBoostsList,
                                       &CurrentThread->PropagateBoostsEntry) )
                    KiAbQueueAutoBoostDpc(SystemArgument1);
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v98 = KeGetCurrentIrql();
                      if ( v98 <= 0xFu && v96 <= 0xFu && v98 >= 2u )
                      {
                        v99 = KeGetCurrentPrcb();
                        v55 = v11 << (v96 + 1);
                        v57 = v99->SchedulerAssist;
                        v100 = ~(unsigned __int16)v55;
                        v79 = (v100 & v57[5]) == 0;
                        v56 = (unsigned int)v100 & v57[5];
                        v57[5] = v56;
                        if ( v79 )
                          KiRemoveSystemWorkPriorityKick(v99);
                      }
                    }
                  }
                  __writecr8(v96);
                }
                *(_DWORD *)(v58 + 8) |= 4u;
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(&v117, retaddr, v56, v57);
              goto LABEL_81;
            }
            _m_prefetchw(&v117);
            v59 = v117;
            if ( !(_QWORD)v117 )
            {
              if ( (__int128 *)_InterlockedCompareExchange64(
                                 *((volatile signed __int64 **)&v117 + 1),
                                 0LL,
                                 (signed __int64)&v117) == &v117 )
              {
LABEL_81:
                v60 = KeGetCurrentPrcb();
                v61 = v60->SchedulerAssist;
                if ( v61 )
                {
                  if ( v60->NestingLevel <= 1u )
                  {
                    v101 = v61[6] - 1;
                    v61[6] = v101;
                    if ( !v101 )
                      KiRemoveSystemWorkPriorityKick(v60);
                  }
                }
                v62 = (unsigned __int8)v118;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v102 = KeGetCurrentIrql();
                    if ( v102 <= 0xFu && (unsigned __int8)v118 <= 0xFu && v102 >= 2u )
                    {
                      v103 = KeGetCurrentPrcb();
                      v104 = v103->SchedulerAssist;
                      v105 = ~(unsigned __int16)(v11 << ((unsigned __int8)v118 + 1));
                      v79 = (v105 & v104[5]) == 0;
                      v104[5] &= v105;
                      if ( v79 )
                        KiRemoveSystemWorkPriorityKick(v103);
                    }
                  }
                }
                __writecr8(v62);
                if ( v50 )
                {
                  if ( (v50 & 4) != 0 )
                    IoBoostThreadIoPriority(CurrentThread, 2LL);
                  if ( (v50 & 2) != 0 && LODWORD(CurrentThread[1].Timer.TimerListEntry.Blink) )
                    IoBoostThreadOutstandingIo(CurrentThread);
                }
                goto LABEL_89;
              }
              v59 = KxWaitForLockChainValid(&v117, v55, v56, v57);
            }
            *(_QWORD *)&v117 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v59 + 8), 1uLL);
            goto LABEL_81;
          }
        }
LABEL_89:
        __incgsdword(0x8694u);
        __incgsdword(0x8664u);
        if ( !v7 )
          return 1;
        goto LABEL_204;
      }
      v39 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle, v14, 1LL, SchedulerAssist);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v39->Lock, 1uLL);
    goto LABEL_43;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v72 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v85 = KeGetCurrentIrql();
      if ( v85 <= 0xFu && LockHandle.OldIrql <= 0xFu && v85 >= 2u )
      {
        v86 = KeGetCurrentPrcb();
        v87 = v86->SchedulerAssist;
        v88 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
        v79 = (v88 & v87[5]) == 0;
        v87[5] &= v88;
        if ( v79 )
          KiRemoveSystemWorkPriorityKick(v86);
      }
    }
  }
  __writecr8(v72);
  __incgsdword(0x86A0u);
  return 0;
}
