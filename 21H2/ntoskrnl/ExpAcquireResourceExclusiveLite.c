/*
 * XREFs of ExpAcquireResourceExclusiveLite @ 0x140357700
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140356BF0 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     KiAbThreadInsertList @ 0x14024652C (KiAbThreadInsertList.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     ExpApplyPriorityBoost @ 0x1402D3850 (ExpApplyPriorityBoost.c)
 *     ExpWaitForResource @ 0x14034D120 (ExpWaitForResource.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 *     ExpFindCurrentThread @ 0x1403587A0 (ExpFindCurrentThread.c)
 *     IoBoostThreadIoPriority @ 0x140363380 (IoBoostThreadIoPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405AAFBC (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405AB488 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceExclusiveLite(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  bool v5; // r12
  volatile __int64 *v6; // rdi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v9; // rdx
  _QWORD *v10; // rdx
  unsigned __int8 v11; // r14
  int v12; // eax
  __int64 Next; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  unsigned __int64 OldIrql; // rdi
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  unsigned __int64 v23; // rsi
  struct _KTHREAD *v24; // r10
  int v25; // r8d
  unsigned int v26; // edx
  int v27; // ecx
  int v28; // edx
  __int16 v29; // dx
  int v30; // r9d
  int v31; // r14d
  unsigned __int8 v32; // r10
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  _QWORD *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  unsigned __int64 v41; // rdi
  unsigned int v42; // edi
  unsigned int v43; // edi
  __int64 v44; // rax
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  unsigned __int64 v47; // rsi
  _DWORD *SchedulerAssist; // r9
  int v49; // eax
  int v50; // eax
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r9
  _DWORD *v53; // r8
  int v54; // eax
  bool v55; // zf
  int v56; // eax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r9
  _DWORD *v59; // r8
  int v60; // eax
  unsigned __int64 v61; // rbx
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r9
  _DWORD *v64; // r8
  int v65; // eax
  int v66; // eax
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // eax
  _DWORD *v71; // r9
  int v72; // eax
  unsigned __int8 v73; // cl
  _DWORD *v74; // r9
  unsigned __int8 v75; // r10
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r11
  _DWORD *v78; // r9
  int v79; // eax
  int v80; // eax
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r9
  _DWORD *v83; // r8
  int v84; // eax
  unsigned __int64 ExtensionTable; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-39h] BYREF
  __int128 v87; // [rsp+48h] [rbp-21h] BYREF
  __int64 v88; // [rsp+58h] [rbp-11h]
  __int64 v89; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v90; // [rsp+68h] [rbp-1h]
  struct _KTHREAD *v91; // [rsp+70h] [rbp+7h]
  __int64 v92; // [rsp+78h] [rbp+Fh]
  _QWORD v93[8]; // [rsp+80h] [rbp+17h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned __int8 v95; // [rsp+D0h] [rbp+67h]
  struct _KDPC *SystemArgument1; // [rsp+E0h] [rbp+77h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v90 = 0LL;
  BYTE3(v92) = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x8678u);
  v6 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
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
  v9 = CurrentPrcb->SchedulerAssist;
  if ( v9 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v49 = v9[6];
      v9[6] = v49 + 1;
      if ( v49 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v6);
  }
  else
  {
    v10 = (_QWORD *)_InterlockedExchange64(v6, (__int64)&LockHandle);
    if ( v10 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v10);
  }
  if ( !*(_DWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_WORD *)(a1 + 24) = 1;
    *(_WORD *)(a1 + 26) |= 0x80u;
    v11 = 1;
    v12 = *(_DWORD *)(a1 + 56) & 7;
    *(_DWORD *)(a1 + 64) = 1;
    *(_DWORD *)(a1 + 56) = v12 | 8;
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
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v50 = v15[6] - 1;
        v15[6] = v50;
        if ( !v50 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    OldIrql = LockHandle.OldIrql;
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
          v55 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(v52);
        }
      }
    }
    __writecr8(OldIrql);
    __incgsdword(0x867Cu);
    __incgsdword(0x8664u);
    if ( v5 )
      PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return v11;
  }
  if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v42 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v42;
    v43 = v42 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v44 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_73;
        v44 = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v44 + 8), 1uLL);
    }
LABEL_73:
    v45 = KeGetCurrentPrcb();
    v46 = v45->SchedulerAssist;
    if ( v46 )
    {
      if ( v45->NestingLevel <= 1u )
      {
        v56 = v46[6] - 1;
        v46[6] = v56;
        if ( !v56 )
          KiRemoveSystemWorkPriorityKick(v45);
      }
    }
    v47 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v57 = KeGetCurrentIrql();
        if ( v57 <= 0xFu && LockHandle.OldIrql <= 0xFu && v57 >= 2u )
        {
          v58 = KeGetCurrentPrcb();
          v59 = v58->SchedulerAssist;
          v60 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v55 = (v60 & v59[5]) == 0;
          v59[5] &= v60;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(v58);
        }
      }
    }
    __writecr8(v47);
    __incgsdword(0x8680u);
    __incgsdword(0x8664u);
    if ( v5 )
      PerfLogExecutiveResourceAcquire(65585LL, a1, v43, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    ++*(_DWORD *)(a1 + 76);
    v93[1] = v93;
    v93[0] = v93;
    v18 = *(_QWORD *)(a1 + 40);
    v89 = 0LL;
    v90 = 0LL;
    v92 = 393217LL;
    v91 = CurrentThread;
    if ( v18 )
    {
      v19 = *(_QWORD **)(v18 + 8);
      if ( *v19 != v18 )
        __fastfail(3u);
      v90 = *(__int64 **)(v18 + 8);
      v89 = v18;
      *v19 = &v89;
      *(_QWORD *)(v18 + 8) = &v89;
    }
    else
    {
      v90 = &v89;
      v89 = (__int64)&v89;
      *(_QWORD *)(a1 + 40) = &v89;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_24;
    }
    _m_prefetchw(&LockHandle);
    v20 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_24:
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        if ( v22 )
        {
          if ( v21->NestingLevel <= 1u )
          {
            v66 = v22[6] - 1;
            v22[6] = v66;
            if ( !v66 )
              KiRemoveSystemWorkPriorityKick(v21);
          }
        }
        v23 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v67 = KeGetCurrentIrql();
            if ( v67 <= 0xFu && LockHandle.OldIrql <= 0xFu && v67 >= 2u )
            {
              v68 = KeGetCurrentPrcb();
              v69 = v68->SchedulerAssist;
              v70 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v55 = (v70 & v69[5]) == 0;
              v69[5] &= v70;
              if ( v55 )
                KiRemoveSystemWorkPriorityKick(v68);
            }
          }
        }
        __writecr8(v23);
        __incgsdword(0x8684u);
        if ( v5 )
          PerfLogExecutiveResourceWait(65572LL, a1, 0LL);
        v24 = KeGetCurrentThread();
        v25 = 0;
        v26 = (*((_DWORD *)&v24[1].SwapListEntry + 2) >> 9) & 7;
        if ( (v24->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v26 = 0;
        }
        else if ( v26 >= 2 )
        {
          goto LABEL_30;
        }
        if ( v24 == KeGetCurrentThread() && LODWORD(v24[1].Timer.TimerListEntry.Flink) )
        {
LABEL_31:
          if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
            v25 = 4;
LABEL_33:
          v27 = v25 | 2;
          if ( (*(_WORD *)(a1 + 26) & 2) != 0 )
            v27 = v25;
          v28 = v27 | 0xFF00;
          if ( v24->Priority <= HIBYTE(*(unsigned __int16 *)(a1 + 26)) )
            v28 = v27;
          if ( v28 )
            ExpApplyPriorityBoost(a1, v28, (__int64)v24);
          ExpWaitForResource(
            (struct _LIST_ENTRY *)a1,
            (__int64)&v89,
            0x10224u,
            (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
          v29 = *(_WORD *)(a1 + 26);
          v88 = 0LL;
          v87 = 0LL;
          if ( (v29 & 8) != 0 )
            goto LABEL_67;
          v30 = 0;
          if ( (v29 & 4) != 0
            && ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
             || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0xE00u) < 0x400) )
          {
            v30 = 4;
          }
          v31 = v30 | 2;
          if ( (v29 & 2) == 0 )
            v31 = v30;
          if ( !v31 )
            goto LABEL_67;
          *((_QWORD *)&v87 + 1) = v6;
          *(_QWORD *)&v87 = 0LL;
          v32 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v32 <= 0xFu )
          {
            v71 = KeGetCurrentPrcb()->SchedulerAssist;
            v71[5] |= (-1 << (v32 + 1)) & 4;
          }
          LOBYTE(v88) = v32;
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          if ( v34 )
          {
            if ( v33->NestingLevel <= 1u )
            {
              v72 = v34[6];
              v34[6] = v72 + 1;
              if ( v72 == -1 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v87, v6);
          }
          else
          {
            v35 = (_QWORD *)_InterlockedExchange64(v6, (__int64)&v87);
            if ( v35 )
              KxWaitForLockOwnerShip((__int64)&v87, v35);
          }
          v36 = ExpFindCurrentThread(a1, (_DWORD)CurrentThread, (unsigned int)&v87, 0, 1, 0);
          v37 = v36;
          if ( (v31 & 4) != 0 )
          {
            if ( (*(_DWORD *)(v36 + 8) & 1) != 0 )
            {
              v31 &= ~4u;
            }
            else
            {
              PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
              *(_DWORD *)(v37 + 8) |= 1u;
            }
          }
          if ( (v31 & 2) != 0 )
          {
            if ( (*(_DWORD *)(v37 + 8) & 4) != 0 )
            {
              v31 &= ~2u;
            }
            else
            {
              if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry.Flink + 1) == 1
                && CurrentThread->AbWaitEntryCount )
              {
                v73 = KeGetCurrentIrql();
                v95 = v73;
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v73 <= 0xFu )
                {
                  v74 = KeGetCurrentPrcb()->SchedulerAssist;
                  v74[5] |= (-1 << (v73 + 1)) & 4;
                }
                SystemArgument1 = (struct _KDPC *)KeGetCurrentPrcb();
                if ( (unsigned int)KiAbThreadInsertList(
                                     (__int64)CurrentThread,
                                     &SystemArgument1[541].DpcData,
                                     &CurrentThread->PropagateBoostsEntry.Next) )
                  KiAbQueueAutoBoostDpc(SystemArgument1);
                v75 = v95;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v76 = KeGetCurrentIrql();
                    if ( v76 <= 0xFu && v95 <= 0xFu && v76 >= 2u )
                    {
                      v77 = KeGetCurrentPrcb();
                      v78 = v77->SchedulerAssist;
                      v79 = ~(unsigned __int16)(-1LL << (v95 + 1));
                      v55 = (v79 & v78[5]) == 0;
                      v78[5] &= v79;
                      if ( v55 )
                      {
                        KiRemoveSystemWorkPriorityKick(v77);
                        v75 = v95;
                      }
                    }
                  }
                }
                __writecr8(v75);
              }
              *(_DWORD *)(v37 + 8) |= 4u;
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v87, retaddr);
          }
          else
          {
            _m_prefetchw(&v87);
            v38 = v87;
            if ( !(_QWORD)v87 )
            {
              if ( (__int128 *)_InterlockedCompareExchange64(
                                 *((volatile signed __int64 **)&v87 + 1),
                                 0LL,
                                 (signed __int64)&v87) == &v87 )
                goto LABEL_60;
              v38 = KxWaitForLockChainValid((__int64 *)&v87);
            }
            *(_QWORD *)&v87 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v38 + 8), 1uLL);
          }
LABEL_60:
          v39 = KeGetCurrentPrcb();
          v40 = v39->SchedulerAssist;
          if ( v40 )
          {
            if ( v39->NestingLevel <= 1u )
            {
              v80 = v40[6] - 1;
              v40[6] = v80;
              if ( !v80 )
                KiRemoveSystemWorkPriorityKick(v39);
            }
          }
          v41 = (unsigned __int8)v88;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v81 = KeGetCurrentIrql();
              if ( v81 <= 0xFu && (unsigned __int8)v88 <= 0xFu && v81 >= 2u )
              {
                v82 = KeGetCurrentPrcb();
                v83 = v82->SchedulerAssist;
                v84 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v88 + 1));
                v55 = (v84 & v83[5]) == 0;
                v83[5] &= v84;
                if ( v55 )
                  KiRemoveSystemWorkPriorityKick(v82);
              }
            }
          }
          __writecr8(v41);
          if ( v31 )
          {
            if ( (v31 & 4) != 0 )
              IoBoostThreadIoPriority(CurrentThread, 2LL);
            if ( (v31 & 2) != 0 )
            {
              if ( LODWORD(CurrentThread[1].Timer.TimerListEntry.Blink) )
              {
                ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
                if ( ExtensionTable )
                {
                  (*(void (__fastcall **)(struct _KTHREAD *))(ExtensionTable + 16))(CurrentThread);
                  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                }
              }
            }
          }
LABEL_67:
          __incgsdword(0x867Cu);
          __incgsdword(0x8664u);
          if ( v5 )
            PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
          return 1;
        }
LABEL_30:
        if ( v26 <= 1 )
          goto LABEL_33;
        goto LABEL_31;
      }
      v20 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v20 + 8), 1uLL);
    goto LABEL_24;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v61 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v62 = KeGetCurrentIrql();
      if ( v62 <= 0xFu && LockHandle.OldIrql <= 0xFu && v62 >= 2u )
      {
        v63 = KeGetCurrentPrcb();
        v64 = v63->SchedulerAssist;
        v65 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v55 = (v65 & v64[5]) == 0;
        v64[5] &= v65;
        if ( v55 )
          KiRemoveSystemWorkPriorityKick(v63);
      }
    }
  }
  __writecr8(v61);
  __incgsdword(0x8688u);
  return 0;
}
