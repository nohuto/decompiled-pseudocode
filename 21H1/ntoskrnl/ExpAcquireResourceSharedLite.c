/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x1402620D0
 * Callers:
 *     SepMandatoryIntegrityCheck @ 0x140209E00 (SepMandatoryIntegrityCheck.c)
 *     SeSecurityAttributePresent @ 0x140259CA0 (SeSecurityAttributePresent.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1402E9570 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402EDF30 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     ExpApplyPriorityBoost @ 0x1402468E0 (ExpApplyPriorityBoost.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 *     ExpWaitForResource @ 0x140267490 (ExpWaitForResource.c)
 *     ExpGetThreadResourceHint @ 0x1402830D0 (ExpGetThreadResourceHint.c)
 *     ExpFindCurrentThread @ 0x1402830F0 (ExpFindCurrentThread.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402DDB6C (KiAbQueueAutoBoostDpc.c)
 *     IoBoostThreadIoPriority @ 0x1402E33DC (IoBoostThreadIoPriority.c)
 *     ExpExpandResourceOwnerTable @ 0x140306378 (ExpExpandResourceOwnerTable.c)
 *     KiAbThreadInsertList @ 0x1403189FC (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     IoBoostThreadOutstandingIo @ 0x14050503C (IoBoostThreadOutstandingIo.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405A51F0 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405A56BC (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  bool v5; // r14
  volatile __int64 *v6; // rdi
  int SpareByte0; // r13d
  unsigned __int8 CurrentIrql; // r10
  __int64 v9; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v11; // rdx
  __int128 *v12; // rdx
  unsigned __int8 v13; // si
  int v14; // eax
  __int64 Next; // rax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  unsigned __int64 OldIrql; // rdi
  __int16 v20; // ax
  int ThreadResourceHint; // eax
  int v22; // r8d
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rax
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned int v29; // edi
  unsigned int v30; // edi
  __int64 v31; // rax
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  unsigned __int64 v34; // rsi
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  unsigned __int64 v40; // rsi
  struct _KTHREAD *v41; // r10
  int v42; // r8d
  unsigned int v43; // edx
  int v44; // ecx
  _DWORD *v45; // r9
  int v46; // edx
  __int16 v47; // dx
  int v48; // r9d
  int v49; // esi
  unsigned __int8 v50; // r10
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  _QWORD *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // rax
  struct _KPRCB *v58; // rcx
  _DWORD *v59; // rdx
  unsigned __int64 v60; // rdi
  __int64 v61; // rdx
  __int128 *v62; // rax
  _QWORD *v63; // rcx
  unsigned int v64; // edi
  unsigned int v65; // edi
  __int64 v66; // rax
  struct _KPRCB *v67; // rcx
  _DWORD *v68; // rdx
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rbx
  _DWORD *SchedulerAssist; // r9
  int v72; // eax
  int v73; // eax
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r9
  _DWORD *v76; // r8
  int v77; // eax
  bool v78; // zf
  int v79; // eax
  unsigned __int8 v80; // al
  struct _KPRCB *v81; // r9
  _DWORD *v82; // r8
  int v83; // eax
  unsigned __int8 v84; // al
  struct _KPRCB *v85; // r9
  _DWORD *v86; // r8
  int v87; // eax
  int v88; // eax
  unsigned __int8 v89; // al
  struct _KPRCB *v90; // r10
  _DWORD *v91; // r9
  int v92; // eax
  _DWORD *v93; // r9
  int v94; // eax
  unsigned __int8 v95; // r13
  _DWORD *v96; // r9
  unsigned __int8 v97; // al
  struct _KPRCB *v98; // r10
  _DWORD *v99; // r9
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
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct _KPRCB *SystemArgument1; // [rsp+C0h] [rbp+67h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x868Cu);
  v6 = (volatile __int64 *)(a1 + 96);
  SpareByte0 = 0;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = LOBYTE(LockHandle.LockQueue.Next) - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ((_DWORD)v9 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = CurrentPrcb->SchedulerAssist;
  if ( v11 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v72 = v11[6];
      v11[6] = v72 + 1;
      if ( v72 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v6);
  }
  else
  {
    v12 = (__int128 *)_InterlockedExchange64(v6, (__int64)&LockHandle);
    if ( v12 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v12);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(a1 + 64) )
      {
        *(_WORD *)(a1 + 24) = 1;
        *(_DWORD *)(a1 + 64) = 1;
        v13 = 1;
        v14 = *(_DWORD *)(a1 + 56) & 7;
        *(_QWORD *)(a1 + 48) = CurrentThread;
        *(_DWORD *)(a1 + 56) = v14 | 8;
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
            Next = KxWaitForLockChainValid(&LockHandle, (_BYTE)v12);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        }
LABEL_10:
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        if ( v17 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v111 = v17[6] - 1;
            v17[6] = v111;
            if ( !v111 )
              KiRemoveSystemWorkPriorityKick(v16);
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
              v115 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
              v78 = (v115 & v114[5]) == 0;
              v114[5] &= v115;
              if ( v78 )
                KiRemoveSystemWorkPriorityKick(v113);
            }
          }
        }
        __writecr8(OldIrql);
        __incgsdword(0x8694u);
        __incgsdword(0x8664u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
        return v13;
      }
      v20 = *(_WORD *)(a1 + 26) & 0x80;
      if ( v20 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
      {
        v29 = *(_DWORD *)(a1 + 56) + 8;
        *(_DWORD *)(a1 + 56) = v29;
        v30 = v29 >> 3;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          goto LABEL_33;
        }
        _m_prefetchw(&LockHandle);
        v31 = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
          {
LABEL_33:
            v32 = KeGetCurrentPrcb();
            v33 = v32->SchedulerAssist;
            if ( v33 )
            {
              if ( v32->NestingLevel <= 1u )
              {
                v73 = v33[6] - 1;
                v33[6] = v73;
                if ( !v73 )
                  KiRemoveSystemWorkPriorityKick(v32);
              }
            }
            v34 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v74 = KeGetCurrentIrql();
                if ( v74 <= 0xFu && LockHandle.OldIrql <= 0xFu && v74 >= 2u )
                {
                  v75 = KeGetCurrentPrcb();
                  v76 = v75->SchedulerAssist;
                  v77 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
                  v78 = (v77 & v76[5]) == 0;
                  v76[5] &= v77;
                  if ( v78 )
                    KiRemoveSystemWorkPriorityKick(v75);
                }
              }
            }
            __writecr8(v34);
            __incgsdword(0x8690u);
            __incgsdword(0x8664u);
            if ( v5 )
              PerfLogExecutiveResourceAcquire(65585LL, a1, v30, *(unsigned int *)(a1 + 68));
            return 1;
          }
          v31 = KxWaitForLockChainValid(&LockHandle, (_BYTE)v12);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v31 + 8), 1uLL);
        goto LABEL_33;
      }
      if ( v20 )
        break;
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread, v12, 1LL);
      v12 = (__int128 *)ExpFindCurrentThread(
                          a1,
                          (_DWORD)CurrentThread,
                          (unsigned int)&LockHandle,
                          v22,
                          *(_DWORD *)(a1 + 76) != 0,
                          ThreadResourceHint);
      if ( v12 )
        goto LABEL_18;
    }
    v61 = *(_QWORD *)(a1 + 16);
    if ( v61 )
      break;
LABEL_107:
    ExpExpandResourceOwnerTable(a1, &LockHandle, 1LL);
  }
  v62 = (__int128 *)(v61 + 16LL * *(unsigned int *)(v61 + 8));
  v12 = (__int128 *)(v61 + 16);
  while ( *(_QWORD *)v12 )
  {
    if ( ++v12 == v62 )
      goto LABEL_107;
  }
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(unsigned int)((_DWORD)v12 - *(_DWORD *)(a1 + 16)) >> 4;
LABEL_18:
  if ( *(struct _KTHREAD **)v12 == CurrentThread )
  {
    v64 = *((_DWORD *)v12 + 2) + 8;
    *((_DWORD *)v12 + 2) = v64;
    v65 = v64 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v66 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_102;
        v66 = KxWaitForLockChainValid(&LockHandle, (_BYTE)v12);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v66 + 8), 1uLL);
    }
LABEL_102:
    v67 = KeGetCurrentPrcb();
    v68 = v67->SchedulerAssist;
    if ( v68 )
    {
      if ( v67->NestingLevel <= 1u )
      {
        v79 = v68[6] - 1;
        v68[6] = v79;
        if ( !v79 )
          KiRemoveSystemWorkPriorityKick(v67);
      }
    }
    v69 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v80 = KeGetCurrentIrql();
        if ( v80 <= 0xFu && LockHandle.OldIrql <= 0xFu && v80 >= 2u )
        {
          v81 = KeGetCurrentPrcb();
          v82 = v81->SchedulerAssist;
          v83 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v78 = (v83 & v82[5]) == 0;
          v82[5] &= v83;
          if ( v78 )
            KiRemoveSystemWorkPriorityKick(v81);
        }
      }
    }
    __writecr8(v69);
    __incgsdword(0x8698u);
    __incgsdword(0x8664u);
    if ( !v5 )
      return 1;
    PerfLogExecutiveResourceAcquire(65617LL, a1, v65, *(unsigned int *)(a1 + 68));
    return 1;
  }
  v23 = *(_DWORD *)(a1 + 64);
  if ( !v23 || *(char *)(a1 + 26) >= 0 && !*(_DWORD *)(a1 + 76) )
  {
    *(_WORD *)(a1 + 24) = 1;
    *(_DWORD *)(a1 + 64) = v23 + 1;
    v24 = *((_DWORD *)v12 + 2) & 7;
    *(_QWORD *)v12 = CurrentThread;
    *((_DWORD *)v12 + 2) = v24 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v25 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_25;
        v25 = KxWaitForLockChainValid(&LockHandle, (_BYTE)v12);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v25 + 8), 1uLL);
    }
LABEL_25:
    v26 = KeGetCurrentPrcb();
    v27 = v26->SchedulerAssist;
    if ( v27 )
    {
      if ( v26->NestingLevel <= 1u )
      {
        v106 = v27[6] - 1;
        v27[6] = v106;
        if ( !v106 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    v28 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v107 = KeGetCurrentIrql();
        if ( v107 <= 0xFu && LockHandle.OldIrql <= 0xFu && v107 >= 2u )
        {
          v108 = KeGetCurrentPrcb();
          v109 = v108->SchedulerAssist;
          v110 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v78 = (v110 & v109[5]) == 0;
          v109[5] &= v110;
          if ( v78 )
            KiRemoveSystemWorkPriorityKick(v108);
        }
      }
    }
    __writecr8(v28);
    __incgsdword(0x8694u);
    __incgsdword(0x8664u);
    if ( !v5 )
      return 1;
LABEL_204:
    PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    v35 = *((_DWORD *)v12 + 2);
    *(_QWORD *)v12 = CurrentThread;
    *((_DWORD *)v12 + 2) = v35 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    *((_QWORD *)&v121 + 1) = &v121;
    *(_QWORD *)&v121 = &v121;
    v36 = *(_QWORD *)(a1 + 32);
    *((_QWORD *)&v119 + 1) = 0LL;
    *((_QWORD *)&v120 + 1) = 393217LL;
    *(_QWORD *)&v120 = CurrentThread;
    if ( v36 )
    {
      v63 = *(_QWORD **)(v36 + 8);
      if ( *v63 != v36 )
        __fastfail(3u);
      *((_QWORD *)&v119 + 1) = *(_QWORD *)(v36 + 8);
      v12 = &v119;
      *(_QWORD *)&v119 = v36;
      *v63 = &v119;
      *(_QWORD *)(v36 + 8) = &v119;
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
    v37 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_43:
        v38 = KeGetCurrentPrcb();
        v39 = v38->SchedulerAssist;
        if ( v39 )
        {
          if ( v38->NestingLevel <= 1u )
          {
            v88 = v39[6] - 1;
            v39[6] = v88;
            if ( !v88 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
        v40 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v89 = KeGetCurrentIrql();
            if ( v89 <= 0xFu && LockHandle.OldIrql <= 0xFu && v89 >= 2u )
            {
              v90 = KeGetCurrentPrcb();
              v91 = v90->SchedulerAssist;
              v92 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
              v78 = (v92 & v91[5]) == 0;
              v91[5] &= v92;
              if ( v78 )
                KiRemoveSystemWorkPriorityKick(v90);
            }
          }
        }
        __writecr8(v40);
        __incgsdword(0x869Cu);
        if ( v5 )
          PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
        v41 = KeGetCurrentThread();
        v42 = 0;
        v43 = (*((_DWORD *)&v41[1].SwapListEntry + 2) >> 9) & 7;
        if ( (v41->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v43 = 0;
        }
        else if ( v43 >= 2 )
        {
          goto LABEL_49;
        }
        if ( v41 == KeGetCurrentThread() && LODWORD(v41[1].Timer.TimerListEntry.Flink) )
        {
LABEL_50:
          if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
            v42 = 4;
        }
        else
        {
LABEL_49:
          if ( v43 > 1 )
            goto LABEL_50;
        }
        v44 = v42 | 2;
        if ( (*(_WORD *)(a1 + 26) & 2) != 0 )
          v44 = v42;
        v45 = (_DWORD *)HIBYTE(*(unsigned __int16 *)(a1 + 26));
        v46 = v44 | 0xFF00;
        if ( v41->Priority <= (int)v45 )
          v46 = v44;
        if ( v46 )
          ExpApplyPriorityBoost(a1, v46, (__int64)v41, v45);
        ExpWaitForResource(a1, &v119, 66116LL, ExpApplyRewaitBoost);
        if ( ((unsigned __int8)CurrentThread & 3) == 0 )
          SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
        v47 = *(_WORD *)(a1 + 26);
        v118 = 0LL;
        v117 = 0LL;
        if ( (v47 & 8) == 0 )
        {
          v48 = 0;
          if ( (v47 & 4) != 0
            && ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
             || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0xE00u) < 0x400) )
          {
            v48 = 4;
          }
          v49 = v48 | 2;
          if ( (v47 & 2) == 0 )
            v49 = v48;
          if ( v49 )
          {
            *((_QWORD *)&v117 + 1) = v6;
            *(_QWORD *)&v117 = 0LL;
            v50 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v50 <= 0xFu )
            {
              v93 = KeGetCurrentPrcb()->SchedulerAssist;
              v93[5] |= ((_DWORD)v9 << (v50 + 1)) & 4;
            }
            LOBYTE(v118) = v50;
            v51 = KeGetCurrentPrcb();
            v52 = v51->SchedulerAssist;
            if ( v52 )
            {
              if ( v51->NestingLevel <= 1u )
              {
                v94 = v52[6];
                v52[6] = v94 + 1;
                if ( v94 == -1 )
                  KiRemoveSystemWorkPriorityKick(v51);
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented(&v117, v6);
            }
            else
            {
              v53 = (_QWORD *)_InterlockedExchange64(v6, (__int64)&v117);
              if ( v53 )
                KxWaitForLockOwnerShip((__int64)&v117, v53);
            }
            v54 = ExpFindCurrentThread(a1, (_DWORD)CurrentThread, (unsigned int)&v117, 0, 1, SpareByte0);
            v56 = v54;
            if ( (v49 & 4) != 0 )
            {
              if ( (*(_DWORD *)(v54 + 8) & 1) != 0 )
              {
                v49 &= ~4u;
              }
              else
              {
                PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
                *(_DWORD *)(v56 + 8) |= 1u;
              }
            }
            if ( (v49 & 2) != 0 )
            {
              if ( (*(_DWORD *)(v56 + 8) & 4) != 0 )
              {
                v49 &= ~2u;
              }
              else
              {
                if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry.Flink + 1) == 1
                  && CurrentThread->AbWaitEntryCount )
                {
                  v95 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v95 <= 0xFu )
                  {
                    v96 = KeGetCurrentPrcb()->SchedulerAssist;
                    v96[5] |= ((_DWORD)v9 << (v95 + 1)) & 4;
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
                      v97 = KeGetCurrentIrql();
                      if ( v97 <= 0xFu && v95 <= 0xFu && v97 >= 2u )
                      {
                        v98 = KeGetCurrentPrcb();
                        v55 = v9 << (v95 + 1);
                        v99 = v98->SchedulerAssist;
                        v100 = ~(unsigned __int16)v55;
                        v78 = (v100 & v99[5]) == 0;
                        v99[5] &= v100;
                        if ( v78 )
                          KiRemoveSystemWorkPriorityKick(v98);
                      }
                    }
                  }
                  __writecr8(v95);
                }
                *(_DWORD *)(v56 + 8) |= 4u;
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(&v117, retaddr);
              goto LABEL_81;
            }
            _m_prefetchw(&v117);
            v57 = v117;
            if ( !(_QWORD)v117 )
            {
              if ( (__int128 *)_InterlockedCompareExchange64(
                                 *((volatile signed __int64 **)&v117 + 1),
                                 0LL,
                                 (signed __int64)&v117) == &v117 )
              {
LABEL_81:
                v58 = KeGetCurrentPrcb();
                v59 = v58->SchedulerAssist;
                if ( v59 )
                {
                  if ( v58->NestingLevel <= 1u )
                  {
                    v101 = v59[6] - 1;
                    v59[6] = v101;
                    if ( !v101 )
                      KiRemoveSystemWorkPriorityKick(v58);
                  }
                }
                v60 = (unsigned __int8)v118;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v102 = KeGetCurrentIrql();
                    if ( v102 <= 0xFu && (unsigned __int8)v118 <= 0xFu && v102 >= 2u )
                    {
                      v103 = KeGetCurrentPrcb();
                      v104 = v103->SchedulerAssist;
                      v105 = ~(unsigned __int16)(v9 << ((unsigned __int8)v118 + 1));
                      v78 = (v105 & v104[5]) == 0;
                      v104[5] &= v105;
                      if ( v78 )
                        KiRemoveSystemWorkPriorityKick(v103);
                    }
                  }
                }
                __writecr8(v60);
                if ( v49 )
                {
                  if ( (v49 & 4) != 0 )
                    IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
                  if ( (v49 & 2) != 0 && LODWORD(CurrentThread[1].Timer.TimerListEntry.Blink) )
                    IoBoostThreadOutstandingIo(CurrentThread);
                }
                goto LABEL_89;
              }
              v57 = KxWaitForLockChainValid(&v117, v55);
            }
            *(_QWORD *)&v117 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v57 + 8), 1uLL);
            goto LABEL_81;
          }
        }
LABEL_89:
        __incgsdword(0x8694u);
        __incgsdword(0x8664u);
        if ( !v5 )
          return 1;
        goto LABEL_204;
      }
      v37 = KxWaitForLockChainValid(&LockHandle, (_BYTE)v12);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v37 + 8), 1uLL);
    goto LABEL_43;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v70 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v84 = KeGetCurrentIrql();
      if ( v84 <= 0xFu && LockHandle.OldIrql <= 0xFu && v84 >= 2u )
      {
        v85 = KeGetCurrentPrcb();
        v86 = v85->SchedulerAssist;
        v87 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
        v78 = (v87 & v86[5]) == 0;
        v86[5] &= v87;
        if ( v78 )
          KiRemoveSystemWorkPriorityKick(v85);
      }
    }
  }
  __writecr8(v70);
  __incgsdword(0x86A0u);
  return 0;
}
