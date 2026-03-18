/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x140222130
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140223CF0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x140224970 (SepMandatoryIntegrityCheck.c)
 *     SeSecurityAttributePresent @ 0x14022AF30 (SeSecurityAttributePresent.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402F6CB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 * Callees:
 *     ExpWaitForResource @ 0x140217F70 (ExpWaitForResource.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIoEx @ 0x140223950 (PsBoostThreadIoEx.c)
 *     ExpFindCurrentThread @ 0x140223BA0 (ExpFindCurrentThread.c)
 *     ExpApplyPriorityBoost @ 0x140291140 (ExpApplyPriorityBoost.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     ExpGetThreadResourceHint @ 0x1402A1C50 (ExpGetThreadResourceHint.c)
 *     IoBoostThreadIoPriority @ 0x1402EB1D4 (IoBoostThreadIoPriority.c)
 *     ExpExpandResourceOwnerTable @ 0x1403152A0 (ExpExpandResourceOwnerTable.c)
 *     KiAbThreadInsertList @ 0x140326E40 (KiAbThreadInsertList.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035F69C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     IoBoostThreadOutstandingIo @ 0x14050909C (IoBoostThreadOutstandingIo.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405A9380 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405A984C (PerfLogExecutiveResourceWait.c)
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
  __int64 v12; // rdx
  unsigned __int8 v13; // si
  int v14; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  unsigned __int64 OldIrql; // rdi
  __int16 v20; // ax
  int ThreadResourceHint; // eax
  int v22; // r8d
  int v23; // ecx
  int v24; // eax
  _KSPIN_LOCK_QUEUE *volatile v25; // rax
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned int v29; // edi
  unsigned int v30; // edi
  _KSPIN_LOCK_QUEUE *volatile v31; // rax
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  unsigned __int64 v34; // rsi
  int v35; // eax
  __int64 v36; // rax
  _KSPIN_LOCK_QUEUE *volatile v37; // rax
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  unsigned __int64 v40; // rsi
  struct _KTHREAD *v41; // r10
  int v42; // r8d
  unsigned int v43; // edx
  unsigned int v44; // ecx
  __int64 v45; // rdx
  __int16 v46; // dx
  int v47; // r9d
  int v48; // esi
  unsigned __int8 v49; // r10
  struct _KPRCB *v50; // rcx
  _DWORD *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  struct _KPRCB *v55; // rcx
  _DWORD *v56; // rdx
  unsigned __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rax
  _QWORD *v60; // rcx
  unsigned int v61; // edi
  unsigned int v62; // edi
  _KSPIN_LOCK_QUEUE *volatile v63; // rax
  struct _KPRCB *v64; // rcx
  _DWORD *v65; // rdx
  unsigned __int64 v66; // rsi
  unsigned __int64 v67; // rbx
  _DWORD *SchedulerAssist; // r9
  int v69; // eax
  int v70; // eax
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r9
  _DWORD *v73; // r8
  int v74; // eax
  bool v75; // zf
  int v76; // eax
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r9
  _DWORD *v79; // r8
  int v80; // eax
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r9
  _DWORD *v83; // r8
  int v84; // eax
  int v85; // eax
  unsigned __int8 v86; // al
  struct _KPRCB *v87; // r10
  _DWORD *v88; // r9
  int v89; // eax
  _DWORD *v90; // r9
  int v91; // eax
  unsigned __int8 v92; // r13
  _DWORD *v93; // r9
  unsigned __int8 v94; // al
  struct _KPRCB *v95; // r10
  _DWORD *v96; // r9
  int v97; // eax
  int v98; // eax
  unsigned __int8 v99; // al
  struct _KPRCB *v100; // r9
  _DWORD *v101; // r8
  int v102; // eax
  int v103; // eax
  unsigned __int8 v104; // al
  struct _KPRCB *v105; // r9
  _DWORD *v106; // r8
  int v107; // eax
  int v108; // eax
  unsigned __int8 v109; // al
  struct _KPRCB *v110; // r9
  _DWORD *v111; // r8
  int v112; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-29h] BYREF
  __int128 v114; // [rsp+48h] [rbp-11h] BYREF
  __int64 v115; // [rsp+58h] [rbp-1h]
  __int128 v116; // [rsp+60h] [rbp+7h] BYREF
  __int128 v117; // [rsp+70h] [rbp+17h]
  __int128 v118; // [rsp+80h] [rbp+27h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct _KPRCB *SystemArgument1; // [rsp+C0h] [rbp+67h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
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
      v69 = v11[6];
      v11[6] = v69 + 1;
      if ( v69 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v6);
  }
  else
  {
    v12 = _InterlockedExchange64(v6, (__int64)&LockHandle);
    if ( v12 )
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
          Next = LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_10;
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
        }
LABEL_10:
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        if ( v17 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v108 = v17[6] - 1;
            v17[6] = v108;
            if ( !v108 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v109 = KeGetCurrentIrql();
            if ( v109 <= 0xFu && LockHandle.OldIrql <= 0xFu && v109 >= 2u )
            {
              v110 = KeGetCurrentPrcb();
              v111 = v110->SchedulerAssist;
              v112 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
              v75 = (v112 & v111[5]) == 0;
              v111[5] &= v112;
              if ( v75 )
                KiRemoveSystemWorkPriorityKick(v110);
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
        v31 = LockHandle.LockQueue.Next;
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
                v70 = v33[6] - 1;
                v33[6] = v70;
                if ( !v70 )
                  KiRemoveSystemWorkPriorityKick(v32);
              }
            }
            v34 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v71 = KeGetCurrentIrql();
                if ( v71 <= 0xFu && LockHandle.OldIrql <= 0xFu && v71 >= 2u )
                {
                  v72 = KeGetCurrentPrcb();
                  v73 = v72->SchedulerAssist;
                  v74 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
                  v75 = (v74 & v73[5]) == 0;
                  v73[5] &= v74;
                  if ( v75 )
                    KiRemoveSystemWorkPriorityKick(v72);
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
          v31 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)&v31->Lock, 1uLL);
        goto LABEL_33;
      }
      if ( v20 )
        break;
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread, v12, 1LL);
      v12 = ExpFindCurrentThread(
              a1,
              (_DWORD)CurrentThread,
              (unsigned int)&LockHandle,
              v22,
              *(_DWORD *)(a1 + 76) != 0,
              ThreadResourceHint);
      if ( v12 )
        goto LABEL_18;
    }
    v58 = *(_QWORD *)(a1 + 16);
    if ( v58 )
      break;
LABEL_107:
    ExpExpandResourceOwnerTable(a1, &LockHandle, 1LL);
  }
  v59 = v58 + 16LL * *(unsigned int *)(v58 + 8);
  v12 = v58 + 16;
  while ( *(_QWORD *)v12 )
  {
    v12 += 16LL;
    if ( v12 == v59 )
      goto LABEL_107;
  }
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(unsigned int)(v12 - *(_DWORD *)(a1 + 16)) >> 4;
LABEL_18:
  if ( *(struct _KTHREAD **)v12 == CurrentThread )
  {
    v61 = *(_DWORD *)(v12 + 8) + 8;
    *(_DWORD *)(v12 + 8) = v61;
    v62 = v61 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v63 = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_102;
        v63 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&v63->Lock, 1uLL);
    }
LABEL_102:
    v64 = KeGetCurrentPrcb();
    v65 = v64->SchedulerAssist;
    if ( v65 )
    {
      if ( v64->NestingLevel <= 1u )
      {
        v76 = v65[6] - 1;
        v65[6] = v76;
        if ( !v76 )
          KiRemoveSystemWorkPriorityKick(v64);
      }
    }
    v66 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v77 = KeGetCurrentIrql();
        if ( v77 <= 0xFu && LockHandle.OldIrql <= 0xFu && v77 >= 2u )
        {
          v78 = KeGetCurrentPrcb();
          v79 = v78->SchedulerAssist;
          v80 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v75 = (v80 & v79[5]) == 0;
          v79[5] &= v80;
          if ( v75 )
            KiRemoveSystemWorkPriorityKick(v78);
        }
      }
    }
    __writecr8(v66);
    __incgsdword(0x8698u);
    __incgsdword(0x8664u);
    if ( !v5 )
      return 1;
    PerfLogExecutiveResourceAcquire(65617LL, a1, v62, *(unsigned int *)(a1 + 68));
    return 1;
  }
  v23 = *(_DWORD *)(a1 + 64);
  if ( !v23 || *(char *)(a1 + 26) >= 0 && !*(_DWORD *)(a1 + 76) )
  {
    *(_WORD *)(a1 + 24) = 1;
    *(_DWORD *)(a1 + 64) = v23 + 1;
    v24 = *(_DWORD *)(v12 + 8) & 7;
    *(_QWORD *)v12 = CurrentThread;
    *(_DWORD *)(v12 + 8) = v24 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v25 = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_25;
        v25 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&v25->Lock, 1uLL);
    }
LABEL_25:
    v26 = KeGetCurrentPrcb();
    v27 = v26->SchedulerAssist;
    if ( v27 )
    {
      if ( v26->NestingLevel <= 1u )
      {
        v103 = v27[6] - 1;
        v27[6] = v103;
        if ( !v103 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    v28 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v104 = KeGetCurrentIrql();
        if ( v104 <= 0xFu && LockHandle.OldIrql <= 0xFu && v104 >= 2u )
        {
          v105 = KeGetCurrentPrcb();
          v106 = v105->SchedulerAssist;
          v107 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v75 = (v107 & v106[5]) == 0;
          v106[5] &= v107;
          if ( v75 )
            KiRemoveSystemWorkPriorityKick(v105);
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
    v35 = *(_DWORD *)(v12 + 8);
    *(_QWORD *)v12 = CurrentThread;
    *(_DWORD *)(v12 + 8) = v35 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    *((_QWORD *)&v118 + 1) = &v118;
    *(_QWORD *)&v118 = &v118;
    v36 = *(_QWORD *)(a1 + 32);
    *((_QWORD *)&v116 + 1) = 0LL;
    *((_QWORD *)&v117 + 1) = 393217LL;
    *(_QWORD *)&v117 = CurrentThread;
    if ( v36 )
    {
      v60 = *(_QWORD **)(v36 + 8);
      if ( *v60 != v36 )
        __fastfail(3u);
      *((_QWORD *)&v116 + 1) = *(_QWORD *)(v36 + 8);
      *(_QWORD *)&v116 = v36;
      *v60 = &v116;
      *(_QWORD *)(v36 + 8) = &v116;
    }
    else
    {
      *((_QWORD *)&v116 + 1) = &v116;
      *(_QWORD *)&v116 = &v116;
    }
    *(_QWORD *)(a1 + 32) = &v116;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_43;
    }
    _m_prefetchw(&LockHandle);
    v37 = LockHandle.LockQueue.Next;
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
            v85 = v39[6] - 1;
            v39[6] = v85;
            if ( !v85 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
        v40 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v86 = KeGetCurrentIrql();
            if ( v86 <= 0xFu && LockHandle.OldIrql <= 0xFu && v86 >= 2u )
            {
              v87 = KeGetCurrentPrcb();
              v88 = v87->SchedulerAssist;
              v89 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
              v75 = (v89 & v88[5]) == 0;
              v88[5] &= v89;
              if ( v75 )
                KiRemoveSystemWorkPriorityKick(v87);
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
        v45 = v44 | 0xFF00;
        if ( v41->Priority <= HIBYTE(*(unsigned __int16 *)(a1 + 26)) )
          v45 = v44;
        if ( (_DWORD)v45 )
          ExpApplyPriorityBoost(a1, v45, v41);
        ExpWaitForResource(
          (struct _LIST_ENTRY *)a1,
          (__int64)&v116,
          0x10244u,
          (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
        if ( ((unsigned __int8)CurrentThread & 3) == 0 )
          SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
        v46 = *(_WORD *)(a1 + 26);
        v115 = 0LL;
        v114 = 0LL;
        if ( (v46 & 8) == 0 )
        {
          v47 = 0;
          if ( (v46 & 4) != 0
            && ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
             || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0xE00u) < 0x400) )
          {
            v47 = 4;
          }
          v48 = v47 | 2;
          if ( (v46 & 2) == 0 )
            v48 = v47;
          if ( v48 )
          {
            *((_QWORD *)&v114 + 1) = v6;
            *(_QWORD *)&v114 = 0LL;
            v49 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 <= 0xFu )
            {
              v90 = KeGetCurrentPrcb()->SchedulerAssist;
              v90[5] |= ((_DWORD)v9 << (v49 + 1)) & 4;
            }
            LOBYTE(v115) = v49;
            v50 = KeGetCurrentPrcb();
            v51 = v50->SchedulerAssist;
            if ( v51 )
            {
              if ( v50->NestingLevel <= 1u )
              {
                v91 = v51[6];
                v51[6] = v91 + 1;
                if ( v91 == -1 )
                  KiRemoveSystemWorkPriorityKick(v50);
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented(&v114, v6);
            }
            else if ( _InterlockedExchange64(v6, (__int64)&v114) )
            {
              KxWaitForLockOwnerShip(&v114);
            }
            v52 = ExpFindCurrentThread(a1, (_DWORD)CurrentThread, (unsigned int)&v114, 0, 1, SpareByte0);
            v53 = v52;
            if ( (v48 & 4) != 0 )
            {
              if ( (*(_DWORD *)(v52 + 8) & 1) != 0 )
              {
                v48 &= ~4u;
              }
              else
              {
                PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
                *(_DWORD *)(v53 + 8) |= 1u;
              }
            }
            if ( (v48 & 2) != 0 )
            {
              if ( (*(_DWORD *)(v53 + 8) & 4) != 0 )
              {
                v48 &= ~2u;
              }
              else
              {
                if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry.Flink + 1) == 1
                  && CurrentThread->AbWaitEntryCount )
                {
                  v92 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v92 <= 0xFu )
                  {
                    v93 = KeGetCurrentPrcb()->SchedulerAssist;
                    v93[5] |= ((_DWORD)v9 << (v92 + 1)) & 4;
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
                      v94 = KeGetCurrentIrql();
                      if ( v94 <= 0xFu && v92 <= 0xFu && v94 >= 2u )
                      {
                        v95 = KeGetCurrentPrcb();
                        v96 = v95->SchedulerAssist;
                        v97 = ~(unsigned __int16)(v9 << (v92 + 1));
                        v75 = (v97 & v96[5]) == 0;
                        v96[5] &= v97;
                        if ( v75 )
                          KiRemoveSystemWorkPriorityKick(v95);
                      }
                    }
                  }
                  __writecr8(v92);
                }
                *(_DWORD *)(v53 + 8) |= 4u;
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(&v114, retaddr);
              goto LABEL_81;
            }
            _m_prefetchw(&v114);
            v54 = v114;
            if ( !(_QWORD)v114 )
            {
              if ( (__int128 *)_InterlockedCompareExchange64(
                                 *((volatile signed __int64 **)&v114 + 1),
                                 0LL,
                                 (signed __int64)&v114) == &v114 )
              {
LABEL_81:
                v55 = KeGetCurrentPrcb();
                v56 = v55->SchedulerAssist;
                if ( v56 )
                {
                  if ( v55->NestingLevel <= 1u )
                  {
                    v98 = v56[6] - 1;
                    v56[6] = v98;
                    if ( !v98 )
                      KiRemoveSystemWorkPriorityKick(v55);
                  }
                }
                v57 = (unsigned __int8)v115;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v99 = KeGetCurrentIrql();
                    if ( v99 <= 0xFu && (unsigned __int8)v115 <= 0xFu && v99 >= 2u )
                    {
                      v100 = KeGetCurrentPrcb();
                      v101 = v100->SchedulerAssist;
                      v102 = ~(unsigned __int16)(v9 << ((unsigned __int8)v115 + 1));
                      v75 = (v102 & v101[5]) == 0;
                      v101[5] &= v102;
                      if ( v75 )
                        KiRemoveSystemWorkPriorityKick(v100);
                    }
                  }
                }
                __writecr8(v57);
                if ( v48 )
                {
                  if ( (v48 & 4) != 0 )
                    IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
                  if ( (v48 & 2) != 0 && LODWORD(CurrentThread[1].Timer.TimerListEntry.Blink) )
                    IoBoostThreadOutstandingIo(CurrentThread);
                }
                goto LABEL_89;
              }
              v54 = KxWaitForLockChainValid(&v114);
            }
            *(_QWORD *)&v114 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v54 + 8), 1uLL);
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
      v37 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v37->Lock, 1uLL);
    goto LABEL_43;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v67 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v81 = KeGetCurrentIrql();
      if ( v81 <= 0xFu && LockHandle.OldIrql <= 0xFu && v81 >= 2u )
      {
        v82 = KeGetCurrentPrcb();
        v83 = v82->SchedulerAssist;
        v84 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
        v75 = (v84 & v83[5]) == 0;
        v83[5] &= v84;
        if ( v75 )
          KiRemoveSystemWorkPriorityKick(v82);
      }
    }
  }
  __writecr8(v67);
  __incgsdword(0x86A0u);
  return 0;
}
