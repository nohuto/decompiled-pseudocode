/*
 * XREFs of ExpAcquireResourceExclusiveLite @ 0x14034C9B0
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x14034BEA0 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     ExpApplyPriorityBoost @ 0x14022F000 (ExpApplyPriorityBoost.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402889FC (KiAbQueueAutoBoostDpc.c)
 *     ExGetExtensionTable @ 0x14029F2F8 (ExGetExtensionTable.c)
 *     KiAbThreadInsertList @ 0x1402C7CCC (KiAbThreadInsertList.c)
 *     ExpWaitForResource @ 0x1403423D0 (ExpWaitForResource.c)
 *     PsBoostThreadIoEx @ 0x14034D800 (PsBoostThreadIoEx.c)
 *     ExpFindCurrentThread @ 0x14034DA50 (ExpFindCurrentThread.c)
 *     IoBoostThreadIoPriority @ 0x140358630 (IoBoostThreadIoPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405AAD8C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405AB258 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceExclusiveLite(__int64 a1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  bool v6; // r12
  volatile __int64 *v7; // rdi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v10; // rdx
  __int64 *v11; // rdx
  unsigned __int8 v12; // r14
  int v13; // eax
  __int64 Next; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  unsigned __int64 OldIrql; // rdi
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  unsigned __int64 v24; // rsi
  struct _KTHREAD *v25; // r10
  int v26; // r8d
  unsigned int v27; // edx
  int v28; // ecx
  int v29; // edx
  __int16 v30; // dx
  int v31; // r9d
  int v32; // r14d
  unsigned __int8 v33; // r10
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  _QWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  _DWORD *v40; // r9
  __int64 v41; // rdi
  __int64 v42; // rax
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  unsigned __int64 v45; // rdi
  unsigned int v46; // edi
  unsigned int v47; // edi
  __int64 v48; // rax
  struct _KPRCB *v49; // rcx
  _DWORD *v50; // rdx
  unsigned __int64 v51; // rsi
  _DWORD *SchedulerAssist; // r9
  int v53; // eax
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  _DWORD *v57; // r8
  int v58; // eax
  bool v59; // zf
  int v60; // eax
  unsigned __int8 v61; // al
  struct _KPRCB *v62; // r9
  _DWORD *v63; // r8
  int v64; // eax
  unsigned __int64 v65; // rbx
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r9
  _DWORD *v68; // r8
  int v69; // eax
  int v70; // eax
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  _DWORD *v75; // r9
  int v76; // eax
  unsigned __int8 v77; // cl
  unsigned __int8 v78; // r10
  unsigned __int8 v79; // al
  struct _KPRCB *v80; // r11
  int v81; // eax
  int v82; // eax
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r9
  _DWORD *v85; // r8
  int v86; // eax
  unsigned __int64 ExtensionTable; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-39h] BYREF
  __int128 v89; // [rsp+48h] [rbp-21h] BYREF
  __int64 v90; // [rsp+58h] [rbp-11h]
  __int64 v91; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v92; // [rsp+68h] [rbp-1h]
  struct _KTHREAD *v93; // [rsp+70h] [rbp+7h]
  __int64 v94; // [rsp+78h] [rbp+Fh]
  _QWORD v95[8]; // [rsp+80h] [rbp+17h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned __int8 v97; // [rsp+D0h] [rbp+67h]
  struct _KDPC *SystemArgument1; // [rsp+E0h] [rbp+77h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v92 = 0LL;
  BYTE3(v94) = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x8678u);
  v7 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = CurrentPrcb->SchedulerAssist;
  if ( v10 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v53 = v10[6];
      v10[6] = v53 + 1;
      if ( v53 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v7);
  }
  else
  {
    v11 = (__int64 *)_InterlockedExchange64(v7, (__int64)&LockHandle);
    if ( v11 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v11);
  }
  if ( !*(_DWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_WORD *)(a1 + 24) = 1;
    *(_WORD *)(a1 + 26) |= 0x80u;
    v12 = 1;
    v13 = *(_DWORD *)(a1 + 56) & 7;
    *(_DWORD *)(a1 + 64) = 1;
    *(_DWORD *)(a1 + 56) = v13 | 8;
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
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle, (__int64)v11, a3, 0LL);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    }
LABEL_10:
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v54 = v16[6] - 1;
        v16[6] = v54;
        if ( !v54 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v55 = KeGetCurrentIrql();
        if ( v55 <= 0xFu && LockHandle.OldIrql <= 0xFu && v55 >= 2u )
        {
          v56 = KeGetCurrentPrcb();
          v57 = v56->SchedulerAssist;
          v58 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v59 = (v58 & v57[5]) == 0;
          v57[5] &= v58;
          if ( v59 )
            KiRemoveSystemWorkPriorityKick(v56);
        }
      }
    }
    __writecr8(OldIrql);
    __incgsdword(0x867Cu);
    __incgsdword(0x8664u);
    if ( v6 )
      PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return v12;
  }
  if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v46 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v46;
    v47 = v46 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v48 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_73;
        v48 = KxWaitForLockChainValid((__int64 *)&LockHandle, (__int64)v11, a3, 0LL);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v48 + 8), 1uLL);
    }
LABEL_73:
    v49 = KeGetCurrentPrcb();
    v50 = v49->SchedulerAssist;
    if ( v50 )
    {
      if ( v49->NestingLevel <= 1u )
      {
        v60 = v50[6] - 1;
        v50[6] = v60;
        if ( !v60 )
          KiRemoveSystemWorkPriorityKick(v49);
      }
    }
    v51 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v61 = KeGetCurrentIrql();
        if ( v61 <= 0xFu && LockHandle.OldIrql <= 0xFu && v61 >= 2u )
        {
          v62 = KeGetCurrentPrcb();
          v63 = v62->SchedulerAssist;
          v64 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v59 = (v64 & v63[5]) == 0;
          v63[5] &= v64;
          if ( v59 )
            KiRemoveSystemWorkPriorityKick(v62);
        }
      }
    }
    __writecr8(v51);
    __incgsdword(0x8680u);
    __incgsdword(0x8664u);
    if ( v6 )
      PerfLogExecutiveResourceAcquire(65585LL, a1, v47, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    ++*(_DWORD *)(a1 + 76);
    v95[1] = v95;
    v95[0] = v95;
    v19 = *(_QWORD *)(a1 + 40);
    v91 = 0LL;
    v92 = 0LL;
    v94 = 393217LL;
    v93 = CurrentThread;
    if ( v19 )
    {
      v20 = *(_QWORD **)(v19 + 8);
      if ( *v20 != v19 )
        __fastfail(3u);
      v92 = *(__int64 **)(v19 + 8);
      v11 = &v91;
      v91 = v19;
      *v20 = &v91;
      *(_QWORD *)(v19 + 8) = &v91;
    }
    else
    {
      v92 = &v91;
      v91 = (__int64)&v91;
      *(_QWORD *)(a1 + 40) = &v91;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_24;
    }
    _m_prefetchw(&LockHandle);
    v21 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_24:
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        if ( v23 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v70 = v23[6] - 1;
            v23[6] = v70;
            if ( !v70 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        v24 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v71 = KeGetCurrentIrql();
            if ( v71 <= 0xFu && LockHandle.OldIrql <= 0xFu && v71 >= 2u )
            {
              v72 = KeGetCurrentPrcb();
              v73 = v72->SchedulerAssist;
              v74 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v59 = (v74 & v73[5]) == 0;
              v73[5] &= v74;
              if ( v59 )
                KiRemoveSystemWorkPriorityKick(v72);
            }
          }
        }
        __writecr8(v24);
        __incgsdword(0x8684u);
        if ( v6 )
          PerfLogExecutiveResourceWait(65572LL, a1, 0LL);
        v25 = KeGetCurrentThread();
        v26 = 0;
        v27 = (*((_DWORD *)&v25[1].SwapListEntry + 2) >> 9) & 7;
        if ( (v25->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v27 = 0;
        }
        else if ( v27 >= 2 )
        {
          goto LABEL_30;
        }
        if ( v25 == KeGetCurrentThread() && LODWORD(v25[1].Timer.TimerListEntry.Flink) )
        {
LABEL_31:
          if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
            v26 = 4;
LABEL_33:
          v28 = v26 | 2;
          if ( (*(_WORD *)(a1 + 26) & 2) != 0 )
            v28 = v26;
          v29 = v28 | 0xFF00;
          if ( v25->Priority <= HIBYTE(*(unsigned __int16 *)(a1 + 26)) )
            v29 = v28;
          if ( v29 )
            ExpApplyPriorityBoost(a1, v29, (__int64)v25);
          ExpWaitForResource(
            (struct _LIST_ENTRY *)a1,
            (__int64)&v91,
            0x10224u,
            (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
          v30 = *(_WORD *)(a1 + 26);
          v90 = 0LL;
          v89 = 0LL;
          if ( (v30 & 8) != 0 )
            goto LABEL_67;
          v31 = 0;
          if ( (v30 & 4) != 0
            && ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
             || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0xE00u) < 0x400) )
          {
            v31 = 4;
          }
          v32 = v31 | 2;
          if ( (v30 & 2) == 0 )
            v32 = v31;
          if ( !v32 )
            goto LABEL_67;
          *((_QWORD *)&v89 + 1) = v7;
          *(_QWORD *)&v89 = 0LL;
          v33 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 <= 0xFu )
          {
            v75 = KeGetCurrentPrcb()->SchedulerAssist;
            v75[5] |= (-1 << (v33 + 1)) & 4;
          }
          LOBYTE(v90) = v33;
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          if ( v35 )
          {
            if ( v34->NestingLevel <= 1u )
            {
              v76 = v35[6];
              v35[6] = v76 + 1;
              if ( v76 == -1 )
                KiRemoveSystemWorkPriorityKick(v34);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v89, v7);
          }
          else
          {
            v36 = (_QWORD *)_InterlockedExchange64(v7, (__int64)&v89);
            if ( v36 )
              KxWaitForLockOwnerShip((__int64)&v89, v36);
          }
          v37 = ExpFindCurrentThread(a1, (_DWORD)CurrentThread, (unsigned int)&v89, 0, 1, 0);
          v41 = v37;
          if ( (v32 & 4) != 0 )
          {
            if ( (*(_DWORD *)(v37 + 8) & 1) != 0 )
            {
              v32 &= ~4u;
            }
            else
            {
              PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
              *(_DWORD *)(v41 + 8) |= 1u;
            }
          }
          if ( (v32 & 2) != 0 )
          {
            if ( (*(_DWORD *)(v41 + 8) & 4) != 0 )
            {
              v32 &= ~2u;
            }
            else
            {
              if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry.Flink + 1) == 1
                && CurrentThread->AbWaitEntryCount )
              {
                v77 = KeGetCurrentIrql();
                v97 = v77;
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v77 <= 0xFu )
                {
                  v40 = KeGetCurrentPrcb()->SchedulerAssist;
                  v40[5] |= (-1 << (v77 + 1)) & 4;
                }
                SystemArgument1 = (struct _KDPC *)KeGetCurrentPrcb();
                if ( (unsigned int)KiAbThreadInsertList(
                                     (__int64)CurrentThread,
                                     &SystemArgument1[541].DpcData,
                                     &CurrentThread->PropagateBoostsEntry.Next,
                                     (__int64)v40) )
                  KiAbQueueAutoBoostDpc(SystemArgument1);
                v78 = v97;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v79 = KeGetCurrentIrql();
                    if ( v79 <= 0xFu && v97 <= 0xFu && v79 >= 2u )
                    {
                      v80 = KeGetCurrentPrcb();
                      v38 = -1LL << (v97 + 1);
                      v40 = v80->SchedulerAssist;
                      v81 = ~(unsigned __int16)v38;
                      v59 = (v81 & v40[5]) == 0;
                      v39 = (unsigned int)v81 & v40[5];
                      v40[5] = v39;
                      if ( v59 )
                      {
                        KiRemoveSystemWorkPriorityKick(v80);
                        v78 = v97;
                      }
                    }
                  }
                }
                __writecr8(v78);
              }
              *(_DWORD *)(v41 + 8) |= 4u;
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v89, retaddr);
          }
          else
          {
            _m_prefetchw(&v89);
            v42 = v89;
            if ( !(_QWORD)v89 )
            {
              if ( (__int128 *)_InterlockedCompareExchange64(
                                 *((volatile signed __int64 **)&v89 + 1),
                                 0LL,
                                 (signed __int64)&v89) == &v89 )
                goto LABEL_60;
              v42 = KxWaitForLockChainValid((__int64 *)&v89, v38, v39, (__int64)v40);
            }
            *(_QWORD *)&v89 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v42 + 8), 1uLL);
          }
LABEL_60:
          v43 = KeGetCurrentPrcb();
          v44 = v43->SchedulerAssist;
          if ( v44 )
          {
            if ( v43->NestingLevel <= 1u )
            {
              v82 = v44[6] - 1;
              v44[6] = v82;
              if ( !v82 )
                KiRemoveSystemWorkPriorityKick(v43);
            }
          }
          v45 = (unsigned __int8)v90;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v83 = KeGetCurrentIrql();
              if ( v83 <= 0xFu && (unsigned __int8)v90 <= 0xFu && v83 >= 2u )
              {
                v84 = KeGetCurrentPrcb();
                v85 = v84->SchedulerAssist;
                v86 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v90 + 1));
                v59 = (v86 & v85[5]) == 0;
                v85[5] &= v86;
                if ( v59 )
                  KiRemoveSystemWorkPriorityKick(v84);
              }
            }
          }
          __writecr8(v45);
          if ( v32 )
          {
            if ( (v32 & 4) != 0 )
              IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
            if ( (v32 & 2) != 0 )
            {
              if ( LODWORD(CurrentThread[1].Timer.TimerListEntry.Blink) )
              {
                ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
                if ( ExtensionTable )
                {
                  (*(void (__fastcall **)(struct _KTHREAD *))(ExtensionTable + 16))(CurrentThread);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                }
              }
            }
          }
LABEL_67:
          __incgsdword(0x867Cu);
          __incgsdword(0x8664u);
          if ( v6 )
            PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
          return 1;
        }
LABEL_30:
        if ( v27 <= 1 )
          goto LABEL_33;
        goto LABEL_31;
      }
      v21 = KxWaitForLockChainValid((__int64 *)&LockHandle, (__int64)v11, a3, 0LL);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v21 + 8), 1uLL);
    goto LABEL_24;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v65 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v66 = KeGetCurrentIrql();
      if ( v66 <= 0xFu && LockHandle.OldIrql <= 0xFu && v66 >= 2u )
      {
        v67 = KeGetCurrentPrcb();
        v68 = v67->SchedulerAssist;
        v69 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v59 = (v69 & v68[5]) == 0;
        v68[5] &= v69;
        if ( v59 )
          KiRemoveSystemWorkPriorityKick(v67);
      }
    }
  }
  __writecr8(v65);
  __incgsdword(0x8688u);
  return 0;
}
