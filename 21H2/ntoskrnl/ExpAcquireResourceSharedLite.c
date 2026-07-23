/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x140356DB0
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402108A0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x1402F3310 (SeSecurityAttributePresent.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1403588F0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x140359570 (SepMandatoryIntegrityCheck.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 *     ExpExpandResourceOwnerTable @ 0x14023682C (ExpExpandResourceOwnerTable.c)
 *     KiAbThreadInsertList @ 0x14024652C (KiAbThreadInsertList.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     ExpApplyPriorityBoost @ 0x1402D3850 (ExpApplyPriorityBoost.c)
 *     ExpGetThreadResourceHint @ 0x140329250 (ExpGetThreadResourceHint.c)
 *     ExpWaitForResource @ 0x14034D120 (ExpWaitForResource.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 *     ExpFindCurrentThread @ 0x1403587A0 (ExpFindCurrentThread.c)
 *     IoBoostThreadIoPriority @ 0x140363380 (IoBoostThreadIoPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     IoBoostThreadOutstandingIo @ 0x14050AE0C (IoBoostThreadOutstandingIo.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405AAFBC (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405AB488 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2)
{
  __int64 CurrentThread; // r15
  bool v5; // r14
  volatile __int64 *v6; // rdi
  int v7; // r13d
  unsigned __int8 CurrentIrql; // r10
  __int64 v9; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v11; // rdx
  _QWORD *v12; // rdx
  unsigned __int8 v13; // si
  int v14; // eax
  __int64 Next; // rax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  unsigned __int64 OldIrql; // rdi
  __int16 v20; // ax
  int ThreadResourceHint; // eax
  int v22; // r8d
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rax
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  unsigned __int64 v29; // rdi
  unsigned int v30; // edi
  unsigned int v31; // edi
  __int64 v32; // rax
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  unsigned __int64 v35; // rsi
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  unsigned __int64 v41; // rsi
  struct _KTHREAD *v42; // r10
  int v43; // r8d
  unsigned int v44; // edx
  int v45; // ecx
  int v46; // edx
  __int16 v47; // dx
  int v48; // r9d
  int v49; // esi
  unsigned __int8 v50; // r10
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  _QWORD *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rax
  struct _KPRCB *v57; // rcx
  _DWORD *v58; // rdx
  unsigned __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rax
  _QWORD *v62; // rcx
  unsigned int v63; // edi
  unsigned int v64; // edi
  __int64 v65; // rax
  struct _KPRCB *v66; // rcx
  _DWORD *v67; // rdx
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // rbx
  _DWORD *SchedulerAssist; // r9
  int v71; // eax
  int v72; // eax
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r9
  _DWORD *v75; // r8
  int v76; // eax
  bool v77; // zf
  int v78; // eax
  unsigned __int8 v79; // al
  struct _KPRCB *v80; // r9
  _DWORD *v81; // r8
  int v82; // eax
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r9
  _DWORD *v85; // r8
  int v86; // eax
  int v87; // eax
  unsigned __int8 v88; // al
  struct _KPRCB *v89; // r10
  _DWORD *v90; // r9
  int v91; // eax
  _DWORD *v92; // r9
  int v93; // eax
  unsigned __int8 v94; // r13
  _DWORD *v95; // r9
  unsigned __int8 v96; // al
  struct _KPRCB *v97; // r10
  _DWORD *v98; // r9
  int v99; // eax
  int v100; // eax
  unsigned __int8 v101; // al
  struct _KPRCB *v102; // r9
  _DWORD *v103; // r8
  int v104; // eax
  int v105; // eax
  unsigned __int8 v106; // al
  struct _KPRCB *v107; // r9
  _DWORD *v108; // r8
  int v109; // eax
  int v110; // eax
  unsigned __int8 v111; // al
  struct _KPRCB *v112; // r9
  _DWORD *v113; // r8
  int v114; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-29h] BYREF
  __int128 v116; // [rsp+48h] [rbp-11h] BYREF
  __int64 v117; // [rsp+58h] [rbp-1h]
  __int128 v118; // [rsp+60h] [rbp+7h] BYREF
  __int128 v119; // [rsp+70h] [rbp+17h]
  __int128 v120; // [rsp+80h] [rbp+27h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct _KDPC *SystemArgument1; // [rsp+C0h] [rbp+67h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  CurrentThread = (__int64)KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x868Cu);
  v6 = (volatile __int64 *)(a1 + 96);
  v7 = 0;
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
      v71 = v11[6];
      v11[6] = v71 + 1;
      if ( v71 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v6);
  }
  else
  {
    v12 = (_QWORD *)_InterlockedExchange64(v6, (__int64)&LockHandle);
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
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
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
            v110 = v17[6] - 1;
            v17[6] = v110;
            if ( !v110 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v111 = KeGetCurrentIrql();
            if ( v111 <= 0xFu && LockHandle.OldIrql <= 0xFu && v111 >= 2u )
            {
              v112 = KeGetCurrentPrcb();
              v113 = v112->SchedulerAssist;
              v114 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
              v77 = (v114 & v113[5]) == 0;
              v113[5] &= v114;
              if ( v77 )
                KiRemoveSystemWorkPriorityKick(v112);
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
      if ( v20 && *(_QWORD *)(a1 + 48) == CurrentThread )
      {
        v30 = *(_DWORD *)(a1 + 56) + 8;
        *(_DWORD *)(a1 + 56) = v30;
        v31 = v30 >> 3;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          goto LABEL_33;
        }
        _m_prefetchw(&LockHandle);
        v32 = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
          {
LABEL_33:
            v33 = KeGetCurrentPrcb();
            v34 = v33->SchedulerAssist;
            if ( v34 )
            {
              if ( v33->NestingLevel <= 1u )
              {
                v72 = v34[6] - 1;
                v34[6] = v72;
                if ( !v72 )
                  KiRemoveSystemWorkPriorityKick(v33);
              }
            }
            v35 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v73 = KeGetCurrentIrql();
                if ( v73 <= 0xFu && LockHandle.OldIrql <= 0xFu && v73 >= 2u )
                {
                  v74 = KeGetCurrentPrcb();
                  v75 = v74->SchedulerAssist;
                  v76 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
                  v77 = (v76 & v75[5]) == 0;
                  v75[5] &= v76;
                  if ( v77 )
                    KiRemoveSystemWorkPriorityKick(v74);
                }
              }
            }
            __writecr8(v35);
            __incgsdword(0x8690u);
            __incgsdword(0x8664u);
            if ( v5 )
              PerfLogExecutiveResourceAcquire(65585LL, a1, v31, *(unsigned int *)(a1 + 68));
            return 1;
          }
          v32 = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v32 + 8), 1uLL);
        goto LABEL_33;
      }
      if ( v20 )
        break;
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      v23 = ExpFindCurrentThread(
              a1,
              CurrentThread,
              (unsigned int)&LockHandle,
              v22,
              *(_DWORD *)(a1 + 76) != 0,
              ThreadResourceHint);
      if ( v23 )
        goto LABEL_18;
    }
    v60 = *(_QWORD *)(a1 + 16);
    if ( v60 )
      break;
LABEL_107:
    ExpExpandResourceOwnerTable(a1, &LockHandle);
  }
  v61 = v60 + 16LL * *(unsigned int *)(v60 + 8);
  v23 = v60 + 16;
  while ( *(_QWORD *)v23 )
  {
    v23 += 16LL;
    if ( v23 == v61 )
      goto LABEL_107;
  }
  KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v23 - *(_DWORD *)(a1 + 16)) >> 4;
LABEL_18:
  if ( *(_QWORD *)v23 == CurrentThread )
  {
    v63 = *(_DWORD *)(v23 + 8) + 8;
    *(_DWORD *)(v23 + 8) = v63;
    v64 = v63 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v65 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_102;
        v65 = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v65 + 8), 1uLL);
    }
LABEL_102:
    v66 = KeGetCurrentPrcb();
    v67 = v66->SchedulerAssist;
    if ( v67 )
    {
      if ( v66->NestingLevel <= 1u )
      {
        v78 = v67[6] - 1;
        v67[6] = v78;
        if ( !v78 )
          KiRemoveSystemWorkPriorityKick(v66);
      }
    }
    v68 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v79 = KeGetCurrentIrql();
        if ( v79 <= 0xFu && LockHandle.OldIrql <= 0xFu && v79 >= 2u )
        {
          v80 = KeGetCurrentPrcb();
          v81 = v80->SchedulerAssist;
          v82 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v77 = (v82 & v81[5]) == 0;
          v81[5] &= v82;
          if ( v77 )
            KiRemoveSystemWorkPriorityKick(v80);
        }
      }
    }
    __writecr8(v68);
    __incgsdword(0x8698u);
    __incgsdword(0x8664u);
    if ( !v5 )
      return 1;
    PerfLogExecutiveResourceAcquire(65617LL, a1, v64, *(unsigned int *)(a1 + 68));
    return 1;
  }
  v24 = *(_DWORD *)(a1 + 64);
  if ( !v24 || *(char *)(a1 + 26) >= 0 && !*(_DWORD *)(a1 + 76) )
  {
    *(_WORD *)(a1 + 24) = 1;
    *(_DWORD *)(a1 + 64) = v24 + 1;
    v25 = *(_DWORD *)(v23 + 8) & 7;
    *(_QWORD *)v23 = CurrentThread;
    *(_DWORD *)(v23 + 8) = v25 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v26 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_25;
        v26 = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v26 + 8), 1uLL);
    }
LABEL_25:
    v27 = KeGetCurrentPrcb();
    v28 = v27->SchedulerAssist;
    if ( v28 )
    {
      if ( v27->NestingLevel <= 1u )
      {
        v105 = v28[6] - 1;
        v28[6] = v105;
        if ( !v105 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
    v29 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v106 = KeGetCurrentIrql();
        if ( v106 <= 0xFu && LockHandle.OldIrql <= 0xFu && v106 >= 2u )
        {
          v107 = KeGetCurrentPrcb();
          v108 = v107->SchedulerAssist;
          v109 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v77 = (v109 & v108[5]) == 0;
          v108[5] &= v109;
          if ( v77 )
            KiRemoveSystemWorkPriorityKick(v107);
        }
      }
    }
    __writecr8(v29);
    __incgsdword(0x8694u);
    __incgsdword(0x8664u);
    if ( !v5 )
      return 1;
LABEL_205:
    PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    v36 = *(_DWORD *)(v23 + 8);
    *(_QWORD *)v23 = CurrentThread;
    *(_DWORD *)(v23 + 8) = v36 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    *((_QWORD *)&v120 + 1) = &v120;
    *(_QWORD *)&v120 = &v120;
    v37 = *(_QWORD *)(a1 + 32);
    *((_QWORD *)&v118 + 1) = 0LL;
    *((_QWORD *)&v119 + 1) = 393217LL;
    *(_QWORD *)&v119 = CurrentThread;
    if ( v37 )
    {
      v62 = *(_QWORD **)(v37 + 8);
      if ( *v62 != v37 )
        __fastfail(3u);
      *((_QWORD *)&v118 + 1) = *(_QWORD *)(v37 + 8);
      *(_QWORD *)&v118 = v37;
      *v62 = &v118;
      *(_QWORD *)(v37 + 8) = &v118;
    }
    else
    {
      *((_QWORD *)&v118 + 1) = &v118;
      *(_QWORD *)&v118 = &v118;
    }
    *(_QWORD *)(a1 + 32) = &v118;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_43;
    }
    _m_prefetchw(&LockHandle);
    v38 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_43:
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        if ( v40 )
        {
          if ( v39->NestingLevel <= 1u )
          {
            v87 = v40[6] - 1;
            v40[6] = v87;
            if ( !v87 )
              KiRemoveSystemWorkPriorityKick(v39);
          }
        }
        v41 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v88 = KeGetCurrentIrql();
            if ( v88 <= 0xFu && LockHandle.OldIrql <= 0xFu && v88 >= 2u )
            {
              v89 = KeGetCurrentPrcb();
              v90 = v89->SchedulerAssist;
              v91 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
              v77 = (v91 & v90[5]) == 0;
              v90[5] &= v91;
              if ( v77 )
                KiRemoveSystemWorkPriorityKick(v89);
            }
          }
        }
        __writecr8(v41);
        __incgsdword(0x869Cu);
        if ( v5 )
          PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
        v42 = KeGetCurrentThread();
        v43 = 0;
        v44 = (*((_DWORD *)&v42[1].SwapListEntry + 2) >> 9) & 7;
        if ( (v42->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v44 = 0;
        }
        else if ( v44 >= 2 )
        {
          goto LABEL_49;
        }
        if ( v42 == KeGetCurrentThread() && LODWORD(v42[1].Timer.TimerListEntry.Flink) )
        {
LABEL_50:
          if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
            v43 = 4;
        }
        else
        {
LABEL_49:
          if ( v44 > 1 )
            goto LABEL_50;
        }
        v45 = v43 | 2;
        if ( (*(_WORD *)(a1 + 26) & 2) != 0 )
          v45 = v43;
        v46 = v45 | 0xFF00;
        if ( v42->Priority <= HIBYTE(*(unsigned __int16 *)(a1 + 26)) )
          v46 = v45;
        if ( v46 )
          ExpApplyPriorityBoost(a1, v46, (__int64)v42);
        ExpWaitForResource(
          (struct _LIST_ENTRY *)a1,
          (__int64)&v118,
          0x10244u,
          (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
        if ( (CurrentThread & 3) == 0 )
          v7 = *(unsigned __int8 *)(CurrentThread + 1032);
        v47 = *(_WORD *)(a1 + 26);
        v117 = 0LL;
        v116 = 0LL;
        if ( (v47 & 8) == 0 )
        {
          v48 = 0;
          if ( (v47 & 4) != 0
            && ((*(_DWORD *)(*(_QWORD *)(CurrentThread + 544) + 1124LL) & 0x100000) != 0
             || (*(_DWORD *)(CurrentThread + 1296) & 0xE00u) < 0x400) )
          {
            v48 = 4;
          }
          v49 = v48 | 2;
          if ( (v47 & 2) == 0 )
            v49 = v48;
          if ( v49 )
          {
            *((_QWORD *)&v116 + 1) = v6;
            *(_QWORD *)&v116 = 0LL;
            v50 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v50 <= 0xFu )
            {
              v92 = KeGetCurrentPrcb()->SchedulerAssist;
              v92[5] |= ((_DWORD)v9 << (v50 + 1)) & 4;
            }
            LOBYTE(v117) = v50;
            v51 = KeGetCurrentPrcb();
            v52 = v51->SchedulerAssist;
            if ( v52 )
            {
              if ( v51->NestingLevel <= 1u )
              {
                v93 = v52[6];
                v52[6] = v93 + 1;
                if ( v93 == -1 )
                  KiRemoveSystemWorkPriorityKick(v51);
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented(&v116, v6);
            }
            else
            {
              v53 = (_QWORD *)_InterlockedExchange64(v6, (__int64)&v116);
              if ( v53 )
                KxWaitForLockOwnerShip((__int64)&v116, v53);
            }
            v54 = ExpFindCurrentThread(a1, CurrentThread, (unsigned int)&v116, 0, 1, v7);
            v55 = v54;
            if ( (v49 & 4) != 0 )
            {
              if ( (*(_DWORD *)(v54 + 8) & 1) != 0 )
              {
                v49 &= ~4u;
              }
              else
              {
                PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
                *(_DWORD *)(v55 + 8) |= 1u;
              }
            }
            if ( (v49 & 2) != 0 )
            {
              if ( (*(_DWORD *)(v55 + 8) & 4) != 0 )
              {
                v49 &= ~2u;
              }
              else
              {
                if ( _InterlockedIncrement((volatile signed __int32 *)(CurrentThread + 1364)) == 1
                  && *(_BYTE *)(CurrentThread + 793) )
                {
                  v94 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v94 <= 0xFu )
                  {
                    v95 = KeGetCurrentPrcb()->SchedulerAssist;
                    v95[5] |= ((_DWORD)v9 << (v94 + 1)) & 4;
                  }
                  SystemArgument1 = (struct _KDPC *)KeGetCurrentPrcb();
                  if ( (unsigned int)KiAbThreadInsertList(
                                       CurrentThread,
                                       &SystemArgument1[541].DpcData,
                                       (_QWORD *)(CurrentThread + 808)) )
                    KiAbQueueAutoBoostDpc(SystemArgument1);
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v96 = KeGetCurrentIrql();
                      if ( v96 <= 0xFu && v94 <= 0xFu && v96 >= 2u )
                      {
                        v97 = KeGetCurrentPrcb();
                        v98 = v97->SchedulerAssist;
                        v99 = ~(unsigned __int16)(v9 << (v94 + 1));
                        v77 = (v99 & v98[5]) == 0;
                        v98[5] &= v99;
                        if ( v77 )
                          KiRemoveSystemWorkPriorityKick(v97);
                      }
                    }
                  }
                  __writecr8(v94);
                }
                *(_DWORD *)(v55 + 8) |= 4u;
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(&v116, retaddr);
              goto LABEL_81;
            }
            _m_prefetchw(&v116);
            v56 = v116;
            if ( !(_QWORD)v116 )
            {
              if ( (__int128 *)_InterlockedCompareExchange64(
                                 *((volatile signed __int64 **)&v116 + 1),
                                 0LL,
                                 (signed __int64)&v116) == &v116 )
              {
LABEL_81:
                v57 = KeGetCurrentPrcb();
                v58 = v57->SchedulerAssist;
                if ( v58 )
                {
                  if ( v57->NestingLevel <= 1u )
                  {
                    v100 = v58[6] - 1;
                    v58[6] = v100;
                    if ( !v100 )
                      KiRemoveSystemWorkPriorityKick(v57);
                  }
                }
                v59 = (unsigned __int8)v117;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v101 = KeGetCurrentIrql();
                    if ( v101 <= 0xFu && (unsigned __int8)v117 <= 0xFu && v101 >= 2u )
                    {
                      v102 = KeGetCurrentPrcb();
                      v103 = v102->SchedulerAssist;
                      v104 = ~(unsigned __int16)(v9 << ((unsigned __int8)v117 + 1));
                      v77 = (v104 & v103[5]) == 0;
                      v103[5] &= v104;
                      if ( v77 )
                        KiRemoveSystemWorkPriorityKick(v102);
                    }
                  }
                }
                __writecr8(v59);
                if ( v49 )
                {
                  if ( (v49 & 4) != 0 )
                    IoBoostThreadIoPriority(CurrentThread, 2LL);
                  if ( (v49 & 2) != 0 && *(_DWORD *)(CurrentThread + 1368) )
                    IoBoostThreadOutstandingIo(CurrentThread);
                }
                goto LABEL_89;
              }
              v56 = KxWaitForLockChainValid((__int64 *)&v116);
            }
            *(_QWORD *)&v116 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v56 + 8), 1uLL);
            goto LABEL_81;
          }
        }
LABEL_89:
        __incgsdword(0x8694u);
        __incgsdword(0x8664u);
        if ( !v5 )
          return 1;
        goto LABEL_205;
      }
      v38 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v38 + 8), 1uLL);
    goto LABEL_43;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v69 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v83 = KeGetCurrentIrql();
      if ( v83 <= 0xFu && LockHandle.OldIrql <= 0xFu && v83 >= 2u )
      {
        v84 = KeGetCurrentPrcb();
        v85 = v84->SchedulerAssist;
        v86 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
        v77 = (v86 & v85[5]) == 0;
        v85[5] &= v86;
        if ( v77 )
          KiRemoveSystemWorkPriorityKick(v84);
      }
    }
  }
  __writecr8(v69);
  __incgsdword(0x86A0u);
  return 0;
}
