/*
 * XREFs of ExpAcquireResourceExclusiveLite @ 0x140209B00
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140208FF0 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIoEx @ 0x14020A940 (PsBoostThreadIoEx.c)
 *     ExpWaitForResource @ 0x14020E440 (ExpWaitForResource.c)
 *     ExpFindCurrentThread @ 0x14022A0A0 (ExpFindCurrentThread.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     ExpApplyPriorityBoost @ 0x1402830C0 (ExpApplyPriorityBoost.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     IoBoostThreadIoPriority @ 0x1402D668C (IoBoostThreadIoPriority.c)
 *     KiAbQueueAutoBoostDpc @ 0x14032A93C (KiAbQueueAutoBoostDpc.c)
 *     ExGetExtensionTable @ 0x14032FE68 (ExGetExtensionTable.c)
 *     KiAbThreadInsertList @ 0x1403565EC (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405A58E0 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405A5DAC (PerfLogExecutiveResourceWait.c)
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
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  unsigned __int64 OldIrql; // rdi
  __int64 v19; // rax
  _QWORD *v20; // rcx
  _KSPIN_LOCK_QUEUE *volatile v21; // rax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  unsigned __int64 v24; // rsi
  struct _KTHREAD *v25; // r10
  int v26; // r8d
  unsigned int v27; // edx
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int16 v30; // dx
  int v31; // r9d
  int v32; // r14d
  unsigned __int8 v33; // r10
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  _DWORD *v39; // r9
  __int64 v40; // rdi
  __int64 v41; // rax
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  unsigned __int64 v44; // rdi
  unsigned int v45; // edi
  unsigned int v46; // edi
  _KSPIN_LOCK_QUEUE *volatile v47; // rax
  struct _KPRCB *v48; // rcx
  _DWORD *v49; // rdx
  unsigned __int64 v50; // rsi
  _DWORD *SchedulerAssist; // r9
  int v52; // eax
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  int v57; // eax
  bool v58; // zf
  int v59; // eax
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r9
  _DWORD *v62; // r8
  int v63; // eax
  unsigned __int64 v64; // rbx
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r9
  _DWORD *v67; // r8
  int v68; // eax
  int v69; // eax
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // eax
  _DWORD *v74; // r9
  int v75; // eax
  unsigned __int8 v76; // cl
  _DWORD *v77; // r9
  unsigned __int8 v78; // r10
  unsigned __int8 v79; // al
  struct _KPRCB *v80; // r11
  int v81; // eax
  int v82; // eax
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r9
  _DWORD *v85; // r8
  int v86; // eax
  __int64 ExtensionTable; // rax
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
  struct _KPRCB *SystemArgument1; // [rsp+E0h] [rbp+77h]

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
      v52 = v10[6];
      v10[6] = v52 + 1;
      if ( v52 == -1 )
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
      KxWaitForLockOwnerShip(&LockHandle);
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
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr, a3, 0LL);
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
        Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle, v11, a3, 0LL);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    }
LABEL_10:
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v53 = v16[6] - 1;
        v16[6] = v53;
        if ( !v53 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v54 = KeGetCurrentIrql();
        if ( v54 <= 0xFu && LockHandle.OldIrql <= 0xFu && v54 >= 2u )
        {
          v55 = KeGetCurrentPrcb();
          v56 = v55->SchedulerAssist;
          v57 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v58 = (v57 & v56[5]) == 0;
          v56[5] &= v57;
          if ( v58 )
            KiRemoveSystemWorkPriorityKick(v55);
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
    v45 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v45;
    v46 = v45 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr, a3, 0LL);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v47 = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_73;
        v47 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle, v11, a3, 0LL);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&v47->Lock, 1uLL);
    }
LABEL_73:
    v48 = KeGetCurrentPrcb();
    v49 = v48->SchedulerAssist;
    if ( v49 )
    {
      if ( v48->NestingLevel <= 1u )
      {
        v59 = v49[6] - 1;
        v49[6] = v59;
        if ( !v59 )
          KiRemoveSystemWorkPriorityKick(v48);
      }
    }
    v50 = LockHandle.OldIrql;
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
          v58 = (v63 & v62[5]) == 0;
          v62[5] &= v63;
          if ( v58 )
            KiRemoveSystemWorkPriorityKick(v61);
        }
      }
    }
    __writecr8(v50);
    __incgsdword(0x8680u);
    __incgsdword(0x8664u);
    if ( v6 )
      PerfLogExecutiveResourceAcquire(65585LL, a1, v46, *(unsigned int *)(a1 + 68));
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
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr, a3, 0LL);
      goto LABEL_24;
    }
    _m_prefetchw(&LockHandle);
    v21 = LockHandle.LockQueue.Next;
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
            v69 = v23[6] - 1;
            v23[6] = v69;
            if ( !v69 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        v24 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v70 = KeGetCurrentIrql();
            if ( v70 <= 0xFu && LockHandle.OldIrql <= 0xFu && v70 >= 2u )
            {
              v71 = KeGetCurrentPrcb();
              v72 = v71->SchedulerAssist;
              v73 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v58 = (v73 & v72[5]) == 0;
              v72[5] &= v73;
              if ( v58 )
                KiRemoveSystemWorkPriorityKick(v71);
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
          if ( (_DWORD)v29 )
            ExpApplyPriorityBoost(a1, v29, v25);
          ExpWaitForResource(a1, &v91, 66084LL, ExpApplyRewaitBoost);
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
            v74 = KeGetCurrentPrcb()->SchedulerAssist;
            v74[5] |= (-1 << (v33 + 1)) & 4;
          }
          LOBYTE(v90) = v33;
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          if ( v35 )
          {
            if ( v34->NestingLevel <= 1u )
            {
              v75 = v35[6];
              v35[6] = v75 + 1;
              if ( v75 == -1 )
                KiRemoveSystemWorkPriorityKick(v34);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v89, v7);
          }
          else if ( _InterlockedExchange64(v7, (__int64)&v89) )
          {
            KxWaitForLockOwnerShip(&v89);
          }
          v36 = ExpFindCurrentThread(a1, (_DWORD)CurrentThread, (unsigned int)&v89, 0, 1, 0);
          v40 = v36;
          if ( (v32 & 4) != 0 )
          {
            if ( (*(_DWORD *)(v36 + 8) & 1) != 0 )
            {
              v32 &= ~4u;
            }
            else
            {
              PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
              *(_DWORD *)(v40 + 8) |= 1u;
            }
          }
          if ( (v32 & 2) != 0 )
          {
            if ( (*(_DWORD *)(v40 + 8) & 4) != 0 )
            {
              v32 &= ~2u;
            }
            else
            {
              if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry.Flink + 1) == 1
                && CurrentThread->AbWaitEntryCount )
              {
                v76 = KeGetCurrentIrql();
                v97 = v76;
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v76 <= 0xFu )
                {
                  v77 = KeGetCurrentPrcb()->SchedulerAssist;
                  v77[5] |= (-1 << (v76 + 1)) & 4;
                }
                SystemArgument1 = KeGetCurrentPrcb();
                if ( (unsigned int)KiAbThreadInsertList(
                                     CurrentThread,
                                     &SystemArgument1->AbPropagateBoostsList,
                                     &CurrentThread->PropagateBoostsEntry) )
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
                      v37 = -1LL << (v97 + 1);
                      v39 = v80->SchedulerAssist;
                      v81 = ~(unsigned __int16)v37;
                      v58 = (v81 & v39[5]) == 0;
                      v38 = (unsigned int)v81 & v39[5];
                      v39[5] = v38;
                      if ( v58 )
                      {
                        KiRemoveSystemWorkPriorityKick(v80);
                        v78 = v97;
                      }
                    }
                  }
                }
                __writecr8(v78);
              }
              *(_DWORD *)(v40 + 8) |= 4u;
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v89, retaddr, v38, v39);
          }
          else
          {
            _m_prefetchw(&v89);
            v41 = v89;
            if ( !(_QWORD)v89 )
            {
              if ( (__int128 *)_InterlockedCompareExchange64(
                                 *((volatile signed __int64 **)&v89 + 1),
                                 0LL,
                                 (signed __int64)&v89) == &v89 )
                goto LABEL_60;
              v41 = KxWaitForLockChainValid(&v89, v37, v38, v39);
            }
            *(_QWORD *)&v89 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v41 + 8), 1uLL);
          }
LABEL_60:
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          if ( v43 )
          {
            if ( v42->NestingLevel <= 1u )
            {
              v82 = v43[6] - 1;
              v43[6] = v82;
              if ( !v82 )
                KiRemoveSystemWorkPriorityKick(v42);
            }
          }
          v44 = (unsigned __int8)v90;
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
                v58 = (v86 & v85[5]) == 0;
                v85[5] &= v86;
                if ( v58 )
                  KiRemoveSystemWorkPriorityKick(v84);
              }
            }
          }
          __writecr8(v44);
          if ( v32 )
          {
            if ( (v32 & 4) != 0 )
              IoBoostThreadIoPriority(CurrentThread, 2LL);
            if ( (v32 & 2) != 0 )
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
          if ( v6 )
            PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
          return 1;
        }
LABEL_30:
        if ( v27 <= 1 )
          goto LABEL_33;
        goto LABEL_31;
      }
      v21 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle, v11, a3, 0LL);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v21->Lock, 1uLL);
    goto LABEL_24;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v64 = LockHandle.OldIrql;
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
        v58 = (v68 & v67[5]) == 0;
        v67[5] &= v68;
        if ( v58 )
          KiRemoveSystemWorkPriorityKick(v66);
      }
    }
  }
  __writecr8(v64);
  __incgsdword(0x8688u);
  return 0;
}
