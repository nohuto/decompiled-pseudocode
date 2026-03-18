/*
 * XREFs of ExpAcquireResourceExclusiveLite @ 0x140222A80
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140221F70 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExpWaitForResource @ 0x140217F70 (ExpWaitForResource.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIoEx @ 0x140223950 (PsBoostThreadIoEx.c)
 *     ExpFindCurrentThread @ 0x140223BA0 (ExpFindCurrentThread.c)
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
 *     ExpApplyPriorityBoost @ 0x140291140 (ExpApplyPriorityBoost.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     IoBoostThreadIoPriority @ 0x1402EB1D4 (IoBoostThreadIoPriority.c)
 *     KiAbThreadInsertList @ 0x140326E40 (KiAbThreadInsertList.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035F69C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405A9380 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405A984C (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceExclusiveLite(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  bool v5; // r12
  volatile __int64 *v6; // rdi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v9; // rdx
  unsigned __int8 v10; // r14
  int v11; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  unsigned __int64 OldIrql; // rdi
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _KSPIN_LOCK_QUEUE *volatile v19; // rax
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  unsigned __int64 v22; // rsi
  struct _KTHREAD *v23; // r10
  int v24; // r8d
  unsigned int v25; // edx
  unsigned int v26; // ecx
  __int64 v27; // rdx
  __int16 v28; // dx
  int v29; // r9d
  int v30; // r14d
  unsigned __int8 v31; // r10
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  unsigned __int64 v39; // rdi
  unsigned int v40; // edi
  unsigned int v41; // edi
  _KSPIN_LOCK_QUEUE *volatile v42; // rax
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  unsigned __int64 v45; // rsi
  _DWORD *SchedulerAssist; // r9
  int v47; // eax
  int v48; // eax
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  int v52; // eax
  bool v53; // zf
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  _DWORD *v57; // r8
  int v58; // eax
  unsigned __int64 v59; // rbx
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r9
  _DWORD *v62; // r8
  int v63; // eax
  int v64; // eax
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r10
  _DWORD *v67; // r9
  int v68; // eax
  _DWORD *v69; // r9
  int v70; // eax
  unsigned __int8 v71; // cl
  _DWORD *v72; // r9
  unsigned __int8 v73; // r10
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r11
  _DWORD *v76; // r9
  int v77; // eax
  int v78; // eax
  unsigned __int8 v79; // al
  struct _KPRCB *v80; // r9
  _DWORD *v81; // r8
  int v82; // eax
  __int64 ExtensionTable; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-39h] BYREF
  __int128 v85; // [rsp+48h] [rbp-21h] BYREF
  __int64 v86; // [rsp+58h] [rbp-11h]
  __int64 v87; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v88; // [rsp+68h] [rbp-1h]
  struct _KTHREAD *v89; // [rsp+70h] [rbp+7h]
  __int64 v90; // [rsp+78h] [rbp+Fh]
  _QWORD v91[8]; // [rsp+80h] [rbp+17h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned __int8 v93; // [rsp+D0h] [rbp+67h]
  struct _KPRCB *SystemArgument1; // [rsp+E0h] [rbp+77h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v88 = 0LL;
  BYTE3(v90) = 0;
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
      v47 = v9[6];
      v9[6] = v47 + 1;
      if ( v47 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v6);
  }
  else if ( _InterlockedExchange64(v6, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  if ( !*(_DWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_WORD *)(a1 + 24) = 1;
    *(_WORD *)(a1 + 26) |= 0x80u;
    v10 = 1;
    v11 = *(_DWORD *)(a1 + 56) & 7;
    *(_DWORD *)(a1 + 64) = 1;
    *(_DWORD *)(a1 + 56) = v11 | 8;
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
    v13 = KeGetCurrentPrcb();
    v14 = v13->SchedulerAssist;
    if ( v14 )
    {
      if ( v13->NestingLevel <= 1u )
      {
        v48 = v14[6] - 1;
        v14[6] = v48;
        if ( !v48 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
    OldIrql = LockHandle.OldIrql;
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
          v53 = (v52 & v51[5]) == 0;
          v51[5] &= v52;
          if ( v53 )
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
    }
    __writecr8(OldIrql);
    __incgsdword(0x867Cu);
    __incgsdword(0x8664u);
    if ( v5 )
      PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return v10;
  }
  if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v40 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v40;
    v41 = v40 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v42 = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_73;
        v42 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&v42->Lock, 1uLL);
    }
LABEL_73:
    v43 = KeGetCurrentPrcb();
    v44 = v43->SchedulerAssist;
    if ( v44 )
    {
      if ( v43->NestingLevel <= 1u )
      {
        v54 = v44[6] - 1;
        v44[6] = v54;
        if ( !v54 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
    v45 = LockHandle.OldIrql;
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
          v53 = (v58 & v57[5]) == 0;
          v57[5] &= v58;
          if ( v53 )
            KiRemoveSystemWorkPriorityKick(v56);
        }
      }
    }
    __writecr8(v45);
    __incgsdword(0x8680u);
    __incgsdword(0x8664u);
    if ( v5 )
      PerfLogExecutiveResourceAcquire(65585LL, a1, v41, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    ++*(_DWORD *)(a1 + 76);
    v91[1] = v91;
    v91[0] = v91;
    v17 = *(_QWORD *)(a1 + 40);
    v87 = 0LL;
    v88 = 0LL;
    v90 = 393217LL;
    v89 = CurrentThread;
    if ( v17 )
    {
      v18 = *(_QWORD **)(v17 + 8);
      if ( *v18 != v17 )
        __fastfail(3u);
      v88 = *(__int64 **)(v17 + 8);
      v87 = v17;
      *v18 = &v87;
      *(_QWORD *)(v17 + 8) = &v87;
    }
    else
    {
      v88 = &v87;
      v87 = (__int64)&v87;
      *(_QWORD *)(a1 + 40) = &v87;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_24;
    }
    _m_prefetchw(&LockHandle);
    v19 = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_24:
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        if ( v21 )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v64 = v21[6] - 1;
            v21[6] = v64;
            if ( !v64 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        v22 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v65 = KeGetCurrentIrql();
            if ( v65 <= 0xFu && LockHandle.OldIrql <= 0xFu && v65 >= 2u )
            {
              v66 = KeGetCurrentPrcb();
              v67 = v66->SchedulerAssist;
              v68 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v53 = (v68 & v67[5]) == 0;
              v67[5] &= v68;
              if ( v53 )
                KiRemoveSystemWorkPriorityKick(v66);
            }
          }
        }
        __writecr8(v22);
        __incgsdword(0x8684u);
        if ( v5 )
          PerfLogExecutiveResourceWait(65572LL, a1, 0LL);
        v23 = KeGetCurrentThread();
        v24 = 0;
        v25 = (*((_DWORD *)&v23[1].SwapListEntry + 2) >> 9) & 7;
        if ( (v23->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v25 = 0;
        }
        else if ( v25 >= 2 )
        {
          goto LABEL_30;
        }
        if ( v23 == KeGetCurrentThread() && LODWORD(v23[1].Timer.TimerListEntry.Flink) )
        {
LABEL_31:
          if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
            v24 = 4;
LABEL_33:
          v26 = v24 | 2;
          if ( (*(_WORD *)(a1 + 26) & 2) != 0 )
            v26 = v24;
          v27 = v26 | 0xFF00;
          if ( v23->Priority <= HIBYTE(*(unsigned __int16 *)(a1 + 26)) )
            v27 = v26;
          if ( (_DWORD)v27 )
            ExpApplyPriorityBoost(a1, v27, v23);
          ExpWaitForResource(
            (struct _LIST_ENTRY *)a1,
            (__int64)&v87,
            0x10224u,
            (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
          v28 = *(_WORD *)(a1 + 26);
          v86 = 0LL;
          v85 = 0LL;
          if ( (v28 & 8) != 0 )
            goto LABEL_67;
          v29 = 0;
          if ( (v28 & 4) != 0
            && ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
             || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0xE00u) < 0x400) )
          {
            v29 = 4;
          }
          v30 = v29 | 2;
          if ( (v28 & 2) == 0 )
            v30 = v29;
          if ( !v30 )
            goto LABEL_67;
          *((_QWORD *)&v85 + 1) = v6;
          *(_QWORD *)&v85 = 0LL;
          v31 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 <= 0xFu )
          {
            v69 = KeGetCurrentPrcb()->SchedulerAssist;
            v69[5] |= (-1 << (v31 + 1)) & 4;
          }
          LOBYTE(v86) = v31;
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          if ( v33 )
          {
            if ( v32->NestingLevel <= 1u )
            {
              v70 = v33[6];
              v33[6] = v70 + 1;
              if ( v70 == -1 )
                KiRemoveSystemWorkPriorityKick(v32);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v85, v6);
          }
          else if ( _InterlockedExchange64(v6, (__int64)&v85) )
          {
            KxWaitForLockOwnerShip(&v85);
          }
          v34 = ExpFindCurrentThread(a1, (_DWORD)CurrentThread, (unsigned int)&v85, 0, 1, 0);
          v35 = v34;
          if ( (v30 & 4) != 0 )
          {
            if ( (*(_DWORD *)(v34 + 8) & 1) != 0 )
            {
              v30 &= ~4u;
            }
            else
            {
              PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
              *(_DWORD *)(v35 + 8) |= 1u;
            }
          }
          if ( (v30 & 2) != 0 )
          {
            if ( (*(_DWORD *)(v35 + 8) & 4) != 0 )
            {
              v30 &= ~2u;
            }
            else
            {
              if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry.Flink + 1) == 1
                && CurrentThread->AbWaitEntryCount )
              {
                v71 = KeGetCurrentIrql();
                v93 = v71;
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v71 <= 0xFu )
                {
                  v72 = KeGetCurrentPrcb()->SchedulerAssist;
                  v72[5] |= (-1 << (v71 + 1)) & 4;
                }
                SystemArgument1 = KeGetCurrentPrcb();
                if ( (unsigned int)KiAbThreadInsertList(
                                     CurrentThread,
                                     &SystemArgument1->AbPropagateBoostsList,
                                     &CurrentThread->PropagateBoostsEntry) )
                  KiAbQueueAutoBoostDpc(SystemArgument1);
                v73 = v93;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v74 = KeGetCurrentIrql();
                    if ( v74 <= 0xFu && v93 <= 0xFu && v74 >= 2u )
                    {
                      v75 = KeGetCurrentPrcb();
                      v76 = v75->SchedulerAssist;
                      v77 = ~(unsigned __int16)(-1LL << (v93 + 1));
                      v53 = (v77 & v76[5]) == 0;
                      v76[5] &= v77;
                      if ( v53 )
                      {
                        KiRemoveSystemWorkPriorityKick(v75);
                        v73 = v93;
                      }
                    }
                  }
                }
                __writecr8(v73);
              }
              *(_DWORD *)(v35 + 8) |= 4u;
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v85, retaddr);
          }
          else
          {
            _m_prefetchw(&v85);
            v36 = v85;
            if ( !(_QWORD)v85 )
            {
              if ( (__int128 *)_InterlockedCompareExchange64(
                                 *((volatile signed __int64 **)&v85 + 1),
                                 0LL,
                                 (signed __int64)&v85) == &v85 )
                goto LABEL_60;
              v36 = KxWaitForLockChainValid(&v85);
            }
            *(_QWORD *)&v85 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v36 + 8), 1uLL);
          }
LABEL_60:
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          if ( v38 )
          {
            if ( v37->NestingLevel <= 1u )
            {
              v78 = v38[6] - 1;
              v38[6] = v78;
              if ( !v78 )
                KiRemoveSystemWorkPriorityKick(v37);
            }
          }
          v39 = (unsigned __int8)v86;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v79 = KeGetCurrentIrql();
              if ( v79 <= 0xFu && (unsigned __int8)v86 <= 0xFu && v79 >= 2u )
              {
                v80 = KeGetCurrentPrcb();
                v81 = v80->SchedulerAssist;
                v82 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v86 + 1));
                v53 = (v82 & v81[5]) == 0;
                v81[5] &= v82;
                if ( v53 )
                  KiRemoveSystemWorkPriorityKick(v80);
              }
            }
          }
          __writecr8(v39);
          if ( v30 )
          {
            if ( (v30 & 4) != 0 )
              IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
            if ( (v30 & 2) != 0 )
            {
              if ( LODWORD(CurrentThread[1].Timer.TimerListEntry.Blink) )
              {
                ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
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
          if ( v5 )
            PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
          return 1;
        }
LABEL_30:
        if ( v25 <= 1 )
          goto LABEL_33;
        goto LABEL_31;
      }
      v19 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v19->Lock, 1uLL);
    goto LABEL_24;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v59 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v60 = KeGetCurrentIrql();
      if ( v60 <= 0xFu && LockHandle.OldIrql <= 0xFu && v60 >= 2u )
      {
        v61 = KeGetCurrentPrcb();
        v62 = v61->SchedulerAssist;
        v63 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v53 = (v63 & v62[5]) == 0;
        v62[5] &= v63;
        if ( v53 )
          KiRemoveSystemWorkPriorityKick(v61);
      }
    }
  }
  __writecr8(v59);
  __incgsdword(0x8688u);
  return 0;
}
