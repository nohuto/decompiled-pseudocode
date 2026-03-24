/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x14034C060
 * Callers:
 *     SeSecurityAttributePresent @ 0x14024EAC0 (SeSecurityAttributePresent.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140292930 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14034DBA0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x14034E820 (SepMandatoryIntegrityCheck.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     ExpApplyPriorityBoost @ 0x14022F000 (ExpApplyPriorityBoost.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402889FC (KiAbQueueAutoBoostDpc.c)
 *     ExpExpandResourceOwnerTable @ 0x1402B861C (ExpExpandResourceOwnerTable.c)
 *     KiAbThreadInsertList @ 0x1402C7CCC (KiAbThreadInsertList.c)
 *     ExpGetThreadResourceHint @ 0x14031E500 (ExpGetThreadResourceHint.c)
 *     ExpWaitForResource @ 0x1403423D0 (ExpWaitForResource.c)
 *     PsBoostThreadIoEx @ 0x14034D800 (PsBoostThreadIoEx.c)
 *     ExpFindCurrentThread @ 0x14034DA50 (ExpFindCurrentThread.c)
 *     IoBoostThreadIoPriority @ 0x140358630 (IoBoostThreadIoPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     IoBoostThreadOutstandingIo @ 0x14050ABCC (IoBoostThreadOutstandingIo.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405AAD8C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405AB258 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 CurrentThread; // r15
  bool v7; // r14
  volatile __int64 *v8; // rdi
  int v9; // r13d
  unsigned __int8 CurrentIrql; // r10
  __int64 v11; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v13; // rdx
  __int128 *v14; // rdx
  unsigned __int8 v15; // si
  int v16; // eax
  __int64 Next; // rax
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  unsigned __int64 OldIrql; // rdi
  __int16 v22; // ax
  int ThreadResourceHint; // eax
  int v24; // r8d
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rax
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  unsigned __int64 v30; // rdi
  unsigned int v31; // edi
  unsigned int v32; // edi
  __int64 v33; // rax
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  unsigned __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  unsigned __int64 v42; // rsi
  struct _KTHREAD *v43; // r10
  int v44; // r8d
  unsigned int v45; // edx
  int v46; // ecx
  int v47; // edx
  __int16 v48; // dx
  int v49; // r9d
  int v50; // esi
  unsigned __int8 v51; // r10
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  _QWORD *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  _DWORD *v58; // r9
  __int64 v59; // rdi
  __int64 v60; // rax
  struct _KPRCB *v61; // rcx
  _DWORD *v62; // rdx
  unsigned __int64 v63; // rdi
  __int64 v64; // rdx
  __int128 *v65; // rax
  _QWORD *v66; // rcx
  unsigned int v67; // edi
  unsigned int v68; // edi
  __int64 v69; // rax
  struct _KPRCB *v70; // rcx
  _DWORD *v71; // rdx
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rbx
  int v74; // eax
  int v75; // eax
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r9
  _DWORD *v78; // r8
  int v79; // eax
  bool v80; // zf
  int v81; // eax
  unsigned __int8 v82; // al
  struct _KPRCB *v83; // r9
  _DWORD *v84; // r8
  int v85; // eax
  unsigned __int8 v86; // al
  struct _KPRCB *v87; // r9
  _DWORD *v88; // r8
  int v89; // eax
  int v90; // eax
  unsigned __int8 v91; // al
  struct _KPRCB *v92; // r10
  _DWORD *v93; // r9
  int v94; // eax
  _DWORD *v95; // r9
  int v96; // eax
  unsigned __int8 v97; // r13
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
  struct _KDPC *SystemArgument1; // [rsp+C0h] [rbp+67h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  CurrentThread = (__int64)KeGetCurrentThread();
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x868Cu);
  v8 = (volatile __int64 *)(a1 + 96);
  v9 = 0;
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
      v74 = v13[6];
      v13[6] = v74 + 1;
      if ( v74 == -1 )
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
      KxWaitForLockOwnerShip((__int64)&LockHandle, v14);
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
              goto LABEL_10;
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle, (__int64)v14, 1LL, (__int64)SchedulerAssist);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
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
              v80 = (v115 & v114[5]) == 0;
              v114[5] &= v115;
              if ( v80 )
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
      if ( v22 && *(_QWORD *)(a1 + 48) == CurrentThread )
      {
        v31 = *(_DWORD *)(a1 + 56) + 8;
        *(_DWORD *)(a1 + 56) = v31;
        v32 = v31 >> 3;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          goto LABEL_33;
        }
        _m_prefetchw(&LockHandle);
        v33 = (__int64)LockHandle.LockQueue.Next;
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
                v75 = v35[6] - 1;
                v35[6] = v75;
                if ( !v75 )
                  KiRemoveSystemWorkPriorityKick(v34);
              }
            }
            v36 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v76 = KeGetCurrentIrql();
                if ( v76 <= 0xFu && LockHandle.OldIrql <= 0xFu && v76 >= 2u )
                {
                  v77 = KeGetCurrentPrcb();
                  v78 = v77->SchedulerAssist;
                  v79 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
                  v80 = (v79 & v78[5]) == 0;
                  v78[5] &= v79;
                  if ( v80 )
                    KiRemoveSystemWorkPriorityKick(v77);
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
          v33 = KxWaitForLockChainValid((__int64 *)&LockHandle, (__int64)v14, 1LL, (__int64)SchedulerAssist);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v33 + 8), 1uLL);
        goto LABEL_33;
      }
      if ( v22 )
        break;
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      v14 = (__int128 *)ExpFindCurrentThread(
                          a1,
                          CurrentThread,
                          (unsigned int)&LockHandle,
                          v24,
                          *(_DWORD *)(a1 + 76) != 0,
                          ThreadResourceHint);
      if ( v14 )
        goto LABEL_18;
    }
    v64 = *(_QWORD *)(a1 + 16);
    if ( v64 )
      break;
LABEL_107:
    ExpExpandResourceOwnerTable(a1, &LockHandle);
  }
  v65 = (__int128 *)(v64 + 16LL * *(unsigned int *)(v64 + 8));
  v14 = (__int128 *)(v64 + 16);
  while ( *(_QWORD *)v14 )
  {
    if ( ++v14 == v65 )
      goto LABEL_107;
  }
  KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)((_DWORD)v14 - *(_DWORD *)(a1 + 16)) >> 4;
LABEL_18:
  if ( *(_QWORD *)v14 == CurrentThread )
  {
    v67 = *((_DWORD *)v14 + 2) + 8;
    *((_DWORD *)v14 + 2) = v67;
    v68 = v67 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v69 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_102;
        v69 = KxWaitForLockChainValid((__int64 *)&LockHandle, (__int64)v14, 1LL, (__int64)SchedulerAssist);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v69 + 8), 1uLL);
    }
LABEL_102:
    v70 = KeGetCurrentPrcb();
    v71 = v70->SchedulerAssist;
    if ( v71 )
    {
      if ( v70->NestingLevel <= 1u )
      {
        v81 = v71[6] - 1;
        v71[6] = v81;
        if ( !v81 )
          KiRemoveSystemWorkPriorityKick(v70);
      }
    }
    v72 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v82 = KeGetCurrentIrql();
        if ( v82 <= 0xFu && LockHandle.OldIrql <= 0xFu && v82 >= 2u )
        {
          v83 = KeGetCurrentPrcb();
          v84 = v83->SchedulerAssist;
          v85 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
          v80 = (v85 & v84[5]) == 0;
          v84[5] &= v85;
          if ( v80 )
            KiRemoveSystemWorkPriorityKick(v83);
        }
      }
    }
    __writecr8(v72);
    __incgsdword(0x8698u);
    __incgsdword(0x8664u);
    if ( !v7 )
      return 1;
    PerfLogExecutiveResourceAcquire(65617LL, a1, v68, *(unsigned int *)(a1 + 68));
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
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v27 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_25;
        v27 = KxWaitForLockChainValid((__int64 *)&LockHandle, (__int64)v14, 1LL, (__int64)SchedulerAssist);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v27 + 8), 1uLL);
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
          v80 = (v110 & v109[5]) == 0;
          v109[5] &= v110;
          if ( v80 )
            KiRemoveSystemWorkPriorityKick(v108);
        }
      }
    }
    __writecr8(v30);
    __incgsdword(0x8694u);
    __incgsdword(0x8664u);
    if ( !v7 )
      return 1;
LABEL_205:
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
      v66 = *(_QWORD **)(v38 + 8);
      if ( *v66 != v38 )
        __fastfail(3u);
      *((_QWORD *)&v119 + 1) = *(_QWORD *)(v38 + 8);
      v14 = &v119;
      *(_QWORD *)&v119 = v38;
      *v66 = &v119;
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
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_43;
    }
    _m_prefetchw(&LockHandle);
    v39 = (__int64)LockHandle.LockQueue.Next;
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
            v90 = v41[6] - 1;
            v41[6] = v90;
            if ( !v90 )
              KiRemoveSystemWorkPriorityKick(v40);
          }
        }
        v42 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v91 = KeGetCurrentIrql();
            if ( v91 <= 0xFu && LockHandle.OldIrql <= 0xFu && v91 >= 2u )
            {
              v92 = KeGetCurrentPrcb();
              v93 = v92->SchedulerAssist;
              v94 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
              v80 = (v94 & v93[5]) == 0;
              v93[5] &= v94;
              if ( v80 )
                KiRemoveSystemWorkPriorityKick(v92);
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
        if ( v47 )
          ExpApplyPriorityBoost(a1, v47, (__int64)v43);
        ExpWaitForResource(
          (struct _LIST_ENTRY *)a1,
          (__int64)&v119,
          0x10244u,
          (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
        if ( (CurrentThread & 3) == 0 )
          v9 = *(unsigned __int8 *)(CurrentThread + 1032);
        v48 = *(_WORD *)(a1 + 26);
        v118 = 0LL;
        v117 = 0LL;
        if ( (v48 & 8) == 0 )
        {
          v49 = 0;
          if ( (v48 & 4) != 0
            && ((*(_DWORD *)(*(_QWORD *)(CurrentThread + 544) + 1124LL) & 0x100000) != 0
             || (*(_DWORD *)(CurrentThread + 1296) & 0xE00u) < 0x400) )
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
              v95 = KeGetCurrentPrcb()->SchedulerAssist;
              v95[5] |= ((_DWORD)v11 << (v51 + 1)) & 4;
            }
            LOBYTE(v118) = v51;
            v52 = KeGetCurrentPrcb();
            v53 = v52->SchedulerAssist;
            if ( v53 )
            {
              if ( v52->NestingLevel <= 1u )
              {
                v96 = v53[6];
                v53[6] = v96 + 1;
                if ( v96 == -1 )
                  KiRemoveSystemWorkPriorityKick(v52);
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented(&v117, v8);
            }
            else
            {
              v54 = (_QWORD *)_InterlockedExchange64(v8, (__int64)&v117);
              if ( v54 )
                KxWaitForLockOwnerShip((__int64)&v117, v54);
            }
            v55 = ExpFindCurrentThread(a1, CurrentThread, (unsigned int)&v117, 0, 1, v9);
            v59 = v55;
            if ( (v50 & 4) != 0 )
            {
              if ( (*(_DWORD *)(v55 + 8) & 1) != 0 )
              {
                v50 &= ~4u;
              }
              else
              {
                PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
                *(_DWORD *)(v59 + 8) |= 1u;
              }
            }
            if ( (v50 & 2) != 0 )
            {
              if ( (*(_DWORD *)(v59 + 8) & 4) != 0 )
              {
                v50 &= ~2u;
              }
              else
              {
                if ( _InterlockedIncrement((volatile signed __int32 *)(CurrentThread + 1364)) == 1
                  && *(_BYTE *)(CurrentThread + 793) )
                {
                  v97 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v97 <= 0xFu )
                  {
                    v58 = KeGetCurrentPrcb()->SchedulerAssist;
                    v58[5] |= ((_DWORD)v11 << (v97 + 1)) & 4;
                  }
                  SystemArgument1 = (struct _KDPC *)KeGetCurrentPrcb();
                  if ( (unsigned int)KiAbThreadInsertList(
                                       CurrentThread,
                                       &SystemArgument1[541].DpcData,
                                       (_QWORD *)(CurrentThread + 808),
                                       (__int64)v58) )
                    KiAbQueueAutoBoostDpc(SystemArgument1);
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v98 = KeGetCurrentIrql();
                      if ( v98 <= 0xFu && v97 <= 0xFu && v98 >= 2u )
                      {
                        v99 = KeGetCurrentPrcb();
                        v56 = v11 << (v97 + 1);
                        v58 = v99->SchedulerAssist;
                        v100 = ~(unsigned __int16)v56;
                        v80 = (v100 & v58[5]) == 0;
                        v57 = (unsigned int)v100 & v58[5];
                        v58[5] = v57;
                        if ( v80 )
                          KiRemoveSystemWorkPriorityKick(v99);
                      }
                    }
                  }
                  __writecr8(v97);
                }
                *(_DWORD *)(v59 + 8) |= 4u;
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(&v117, retaddr);
              goto LABEL_81;
            }
            _m_prefetchw(&v117);
            v60 = v117;
            if ( !(_QWORD)v117 )
            {
              if ( (__int128 *)_InterlockedCompareExchange64(
                                 *((volatile signed __int64 **)&v117 + 1),
                                 0LL,
                                 (signed __int64)&v117) == &v117 )
              {
LABEL_81:
                v61 = KeGetCurrentPrcb();
                v62 = v61->SchedulerAssist;
                if ( v62 )
                {
                  if ( v61->NestingLevel <= 1u )
                  {
                    v101 = v62[6] - 1;
                    v62[6] = v101;
                    if ( !v101 )
                      KiRemoveSystemWorkPriorityKick(v61);
                  }
                }
                v63 = (unsigned __int8)v118;
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
                      v80 = (v105 & v104[5]) == 0;
                      v104[5] &= v105;
                      if ( v80 )
                        KiRemoveSystemWorkPriorityKick(v103);
                    }
                  }
                }
                __writecr8(v63);
                if ( v50 )
                {
                  if ( (v50 & 4) != 0 )
                    IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
                  if ( (v50 & 2) != 0 && *(_DWORD *)(CurrentThread + 1368) )
                    IoBoostThreadOutstandingIo(CurrentThread);
                }
                goto LABEL_89;
              }
              v60 = KxWaitForLockChainValid((__int64 *)&v117, v56, v57, (__int64)v58);
            }
            *(_QWORD *)&v117 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v60 + 8), 1uLL);
            goto LABEL_81;
          }
        }
LABEL_89:
        __incgsdword(0x8694u);
        __incgsdword(0x8664u);
        if ( !v7 )
          return 1;
        goto LABEL_205;
      }
      v39 = KxWaitForLockChainValid((__int64 *)&LockHandle, (__int64)v14, 1LL, (__int64)SchedulerAssist);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v39 + 8), 1uLL);
    goto LABEL_43;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v73 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v86 = KeGetCurrentIrql();
      if ( v86 <= 0xFu && LockHandle.OldIrql <= 0xFu && v86 >= 2u )
      {
        v87 = KeGetCurrentPrcb();
        v88 = v87->SchedulerAssist;
        v89 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
        v80 = (v89 & v88[5]) == 0;
        v88[5] &= v89;
        if ( v80 )
          KiRemoveSystemWorkPriorityKick(v87);
      }
    }
  }
  __writecr8(v73);
  __incgsdword(0x86A0u);
  return 0;
}
