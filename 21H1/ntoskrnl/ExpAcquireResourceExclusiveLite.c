/*
 * XREFs of ExpAcquireResourceExclusiveLite @ 0x140262A20
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140261F10 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     ExpApplyPriorityBoost @ 0x1402468E0 (ExpApplyPriorityBoost.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 *     ExpWaitForResource @ 0x140267490 (ExpWaitForResource.c)
 *     ExpFindCurrentThread @ 0x1402830F0 (ExpFindCurrentThread.c)
 *     ExGetExtensionTable @ 0x1402D3FE8 (ExGetExtensionTable.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402DDB6C (KiAbQueueAutoBoostDpc.c)
 *     IoBoostThreadIoPriority @ 0x1402E33DC (IoBoostThreadIoPriority.c)
 *     KiAbThreadInsertList @ 0x1403189FC (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405A51F0 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405A56BC (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceExclusiveLite(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  bool v5; // r12
  volatile __int64 *v6; // rdi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v9; // rdx
  __int64 *v10; // rdx
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
  _DWORD *v28; // r9
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
  __int64 v39; // rdi
  __int64 v40; // rax
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  unsigned __int64 v43; // rdi
  unsigned int v44; // edi
  unsigned int v45; // edi
  __int64 v46; // rax
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  unsigned __int64 v49; // rsi
  _DWORD *SchedulerAssist; // r9
  int v51; // eax
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  bool v57; // zf
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r9
  _DWORD *v61; // r8
  int v62; // eax
  unsigned __int64 v63; // rbx
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  _DWORD *v66; // r8
  int v67; // eax
  int v68; // eax
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  _DWORD *v73; // r9
  int v74; // eax
  unsigned __int8 v75; // cl
  _DWORD *v76; // r9
  unsigned __int8 v77; // r10
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r11
  _DWORD *v80; // r9
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
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned __int8 v97; // [rsp+D0h] [rbp+67h]
  struct _KPRCB *SystemArgument1; // [rsp+E0h] [rbp+77h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v92 = 0LL;
  BYTE3(v94) = 0;
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
      v51 = v9[6];
      v9[6] = v51 + 1;
      if ( v51 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v6);
  }
  else
  {
    v10 = (__int64 *)_InterlockedExchange64(v6, (__int64)&LockHandle);
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
        Next = KxWaitForLockChainValid(&LockHandle, (_BYTE)v10);
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
        v52 = v15[6] - 1;
        v15[6] = v52;
        if ( !v52 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v53 = KeGetCurrentIrql();
        if ( v53 <= 0xFu && LockHandle.OldIrql <= 0xFu && v53 >= 2u )
        {
          v54 = KeGetCurrentPrcb();
          v55 = v54->SchedulerAssist;
          v56 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v57 = (v56 & v55[5]) == 0;
          v55[5] &= v56;
          if ( v57 )
            KiRemoveSystemWorkPriorityKick(v54);
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
    v44 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v44;
    v45 = v44 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v46 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_73;
        v46 = KxWaitForLockChainValid(&LockHandle, (_BYTE)v10);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v46 + 8), 1uLL);
    }
LABEL_73:
    v47 = KeGetCurrentPrcb();
    v48 = v47->SchedulerAssist;
    if ( v48 )
    {
      if ( v47->NestingLevel <= 1u )
      {
        v58 = v48[6] - 1;
        v48[6] = v58;
        if ( !v58 )
          KiRemoveSystemWorkPriorityKick(v47);
      }
    }
    v49 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v59 = KeGetCurrentIrql();
        if ( v59 <= 0xFu && LockHandle.OldIrql <= 0xFu && v59 >= 2u )
        {
          v60 = KeGetCurrentPrcb();
          v61 = v60->SchedulerAssist;
          v62 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v57 = (v62 & v61[5]) == 0;
          v61[5] &= v62;
          if ( v57 )
            KiRemoveSystemWorkPriorityKick(v60);
        }
      }
    }
    __writecr8(v49);
    __incgsdword(0x8680u);
    __incgsdword(0x8664u);
    if ( v5 )
      PerfLogExecutiveResourceAcquire(65585LL, a1, v45, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    ++*(_DWORD *)(a1 + 76);
    v95[1] = v95;
    v95[0] = v95;
    v18 = *(_QWORD *)(a1 + 40);
    v91 = 0LL;
    v92 = 0LL;
    v94 = 393217LL;
    v93 = CurrentThread;
    if ( v18 )
    {
      v19 = *(_QWORD **)(v18 + 8);
      if ( *v19 != v18 )
        __fastfail(3u);
      v92 = *(__int64 **)(v18 + 8);
      v10 = &v91;
      v91 = v18;
      *v19 = &v91;
      *(_QWORD *)(v18 + 8) = &v91;
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
            v68 = v22[6] - 1;
            v22[6] = v68;
            if ( !v68 )
              KiRemoveSystemWorkPriorityKick(v21);
          }
        }
        v23 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v69 = KeGetCurrentIrql();
            if ( v69 <= 0xFu && LockHandle.OldIrql <= 0xFu && v69 >= 2u )
            {
              v70 = KeGetCurrentPrcb();
              v71 = v70->SchedulerAssist;
              v72 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v57 = (v72 & v71[5]) == 0;
              v71[5] &= v72;
              if ( v57 )
                KiRemoveSystemWorkPriorityKick(v70);
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
          v28 = (_DWORD *)HIBYTE(*(unsigned __int16 *)(a1 + 26));
          v29 = v27 | 0xFF00;
          if ( v24->Priority <= (int)v28 )
            v29 = v27;
          if ( v29 )
            ExpApplyPriorityBoost(a1, v29, (__int64)v24, v28);
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
          *((_QWORD *)&v89 + 1) = v6;
          *(_QWORD *)&v89 = 0LL;
          v33 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 <= 0xFu )
          {
            v73 = KeGetCurrentPrcb()->SchedulerAssist;
            v73[5] |= (-1 << (v33 + 1)) & 4;
          }
          LOBYTE(v90) = v33;
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          if ( v35 )
          {
            if ( v34->NestingLevel <= 1u )
            {
              v74 = v35[6];
              v35[6] = v74 + 1;
              if ( v74 == -1 )
                KiRemoveSystemWorkPriorityKick(v34);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v89, v6);
          }
          else
          {
            v36 = (_QWORD *)_InterlockedExchange64(v6, (__int64)&v89);
            if ( v36 )
              KxWaitForLockOwnerShip((__int64)&v89, v36);
          }
          v37 = ExpFindCurrentThread(a1, (_DWORD)CurrentThread, (unsigned int)&v89, 0, 1, 0);
          v39 = v37;
          if ( (v32 & 4) != 0 )
          {
            if ( (*(_DWORD *)(v37 + 8) & 1) != 0 )
            {
              v32 &= ~4u;
            }
            else
            {
              PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
              *(_DWORD *)(v39 + 8) |= 1u;
            }
          }
          if ( (v32 & 2) != 0 )
          {
            if ( (*(_DWORD *)(v39 + 8) & 4) != 0 )
            {
              v32 &= ~2u;
            }
            else
            {
              if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry.Flink + 1) == 1
                && CurrentThread->AbWaitEntryCount )
              {
                v75 = KeGetCurrentIrql();
                v97 = v75;
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v75 <= 0xFu )
                {
                  v76 = KeGetCurrentPrcb()->SchedulerAssist;
                  v76[5] |= (-1 << (v75 + 1)) & 4;
                }
                SystemArgument1 = KeGetCurrentPrcb();
                if ( (unsigned int)KiAbThreadInsertList(
                                     CurrentThread,
                                     &SystemArgument1->AbPropagateBoostsList,
                                     &CurrentThread->PropagateBoostsEntry) )
                  KiAbQueueAutoBoostDpc(SystemArgument1);
                v77 = v97;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v78 = KeGetCurrentIrql();
                    if ( v78 <= 0xFu && v97 <= 0xFu && v78 >= 2u )
                    {
                      v79 = KeGetCurrentPrcb();
                      v38 = -1LL << (v97 + 1);
                      v80 = v79->SchedulerAssist;
                      v81 = ~(unsigned __int16)v38;
                      v57 = (v81 & v80[5]) == 0;
                      v80[5] &= v81;
                      if ( v57 )
                      {
                        KiRemoveSystemWorkPriorityKick(v79);
                        v77 = v97;
                      }
                    }
                  }
                }
                __writecr8(v77);
              }
              *(_DWORD *)(v39 + 8) |= 4u;
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v89, retaddr);
          }
          else
          {
            _m_prefetchw(&v89);
            v40 = v89;
            if ( !(_QWORD)v89 )
            {
              if ( (__int128 *)_InterlockedCompareExchange64(
                                 *((volatile signed __int64 **)&v89 + 1),
                                 0LL,
                                 (signed __int64)&v89) == &v89 )
                goto LABEL_60;
              v40 = KxWaitForLockChainValid(&v89, v38);
            }
            *(_QWORD *)&v89 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v40 + 8), 1uLL);
          }
LABEL_60:
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          if ( v42 )
          {
            if ( v41->NestingLevel <= 1u )
            {
              v82 = v42[6] - 1;
              v42[6] = v82;
              if ( !v82 )
                KiRemoveSystemWorkPriorityKick(v41);
            }
          }
          v43 = (unsigned __int8)v90;
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
                v57 = (v86 & v85[5]) == 0;
                v85[5] &= v86;
                if ( v57 )
                  KiRemoveSystemWorkPriorityKick(v84);
              }
            }
          }
          __writecr8(v43);
          if ( v32 )
          {
            if ( (v32 & 4) != 0 )
              IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
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
          if ( v5 )
            PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
          return 1;
        }
LABEL_30:
        if ( v26 <= 1 )
          goto LABEL_33;
        goto LABEL_31;
      }
      v20 = KxWaitForLockChainValid(&LockHandle, (_BYTE)v10);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v20 + 8), 1uLL);
    goto LABEL_24;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v63 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v64 = KeGetCurrentIrql();
      if ( v64 <= 0xFu && LockHandle.OldIrql <= 0xFu && v64 >= 2u )
      {
        v65 = KeGetCurrentPrcb();
        v66 = v65->SchedulerAssist;
        v67 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v57 = (v67 & v66[5]) == 0;
        v66[5] &= v67;
        if ( v57 )
          KiRemoveSystemWorkPriorityKick(v65);
      }
    }
  }
  __writecr8(v63);
  __incgsdword(0x8688u);
  return 0;
}
