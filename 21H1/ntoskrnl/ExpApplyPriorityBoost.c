/*
 * XREFs of ExpApplyPriorityBoost @ 0x1402468E0
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x1402620D0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140262A20 (ExpAcquireResourceExclusiveLite.c)
 *     ExpConvertExclusiveToSharedLite @ 0x140303A8C (ExpConvertExclusiveToSharedLite.c)
 *     ExpApplyPrewaitBoost @ 0x140305750 (ExpApplyPrewaitBoost.c)
 *     ExpApplyRewaitBoost @ 0x1403225F0 (ExpApplyRewaitBoost.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     KeSetPriorityBoost @ 0x140245760 (KeSetPriorityBoost.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 *     ObpIncrPointerCount @ 0x14026B720 (ObpIncrPointerCount.c)
 *     PsGetBaseIoPriorityThread @ 0x14027B270 (PsGetBaseIoPriorityThread.c)
 *     ExGetExtensionTable @ 0x1402D3FE8 (ExGetExtensionTable.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1402DB7B0 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402DDB6C (KiAbQueueAutoBoostDpc.c)
 *     IoBoostThreadIoPriority @ 0x1402E33DC (IoBoostThreadIoPriority.c)
 *     KiAbThreadInsertList @ 0x1403189FC (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 */

__int64 __fastcall ExpApplyPriorityBoost(__int64 a1, __int16 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 result; // rax
  bool v5; // zf
  unsigned int v8; // r12d
  bool v9; // cc
  volatile __int64 *v10; // r14
  int v11; // r13d
  __int64 v12; // r8
  int v13; // esi
  int v14; // r15d
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  ULONG_PTR v20; // rdi
  signed __int64 BugCheckParameter4; // rax
  __int64 Next; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v26; // r10
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  __int64 v29; // rax
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  unsigned __int64 v32; // rbx
  __int64 v33; // rdi
  unsigned int v34; // r13d
  unsigned int i; // r14d
  unsigned int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // r8
  _DWORD *v40; // r9
  unsigned __int8 v41; // r10
  unsigned __int8 v42; // r10
  __int64 v43; // rax
  unsigned __int8 v44; // r14
  struct _KPRCB *v45; // rsi
  int v46; // eax
  _DWORD *v47; // r9
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r10
  int v50; // eax
  int v51; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  int v54; // eax
  __int64 ExtensionTable; // rax
  _DWORD *v56; // r9
  int v57; // eax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r11
  int v60; // eax
  __int64 v61; // rax
  _DWORD *v62; // r9
  int v63; // eax
  struct _KPRCB *v64; // r9
  _DWORD *v65; // r8
  int v66; // [rsp+30h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+20h]
  unsigned __int8 v69; // [rsp+90h] [rbp+28h]
  int v70; // [rsp+98h] [rbp+30h]
  unsigned int v71; // [rsp+A8h] [rbp+40h]

  result = 0LL;
  v5 = (*(_BYTE *)(a1 + 26) & 8) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v5 )
    return result;
  v8 = (*(_DWORD *)(a3 + 1296) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 544) + 1124LL) & 0x100000) != 0 )
    v8 = 0;
  v9 = v8 <= 2;
  if ( v8 < 2 )
  {
    if ( (struct _KTHREAD *)a3 == KeGetCurrentThread() && *(_DWORD *)(a3 + 1360) )
    {
      v8 = 2;
      v9 = 1;
    }
    else
    {
      v9 = v8 <= 2;
    }
  }
  if ( v9 )
    v8 = 2;
  LockHandle.LockQueue.Next = 0LL;
  v10 = (volatile __int64 *)(a1 + 96);
  v11 = a2 & 0xFF00;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  v12 = a2 & 4;
  v66 = v11;
  v13 = a2 & 2;
  v71 = a2 & 4;
  v70 = v13;
  v14 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    v12 = a2 & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = CurrentPrcb->SchedulerAssist;
  if ( v17 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v46 = v17[6];
      v17[6] = v46 + 1;
      if ( v46 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v12 = v71;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 96);
  }
  else
  {
    v18 = _InterlockedExchange64(v10, (__int64)&LockHandle);
    if ( !v18 )
      goto LABEL_11;
    KxWaitForLockOwnerShip((__int64)&LockHandle, (_QWORD *)v18);
  }
  v12 = v71;
LABEL_11:
  if ( (_DWORD)v12 )
    *(_WORD *)(a1 + 26) |= 4u;
  if ( v13 )
    *(_WORD *)(a1 + 26) |= 2u;
  if ( v11 )
  {
    LODWORD(v18) = *(char *)(a3 + 195);
    if ( (int)v18 > *(unsigned __int8 *)(a1 + 27) )
    {
      if ( (unsigned __int8)v18 >= 0xFu )
        LOBYTE(v18) = 15;
      *(_BYTE *)(a1 + 27) = v18;
    }
  }
  v19 = *(_DWORD *)(a1 + 56);
  v20 = *(_QWORD *)(a1 + 48);
  if ( (v19 & 2) != 0 )
  {
    v20 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v20 & 3) != 0 )
  {
    goto LABEL_56;
  }
  if ( v20 )
  {
    if ( (_DWORD)v12 )
    {
      if ( (v19 & 1) == 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v20 + 544) + 1124LL) & 0x100000) != 0
          || (LODWORD(v18) = *(_DWORD *)(v20 + 1296) & 0xE00, (unsigned int)v18 < 0x400) )
        {
          v14 = 4;
          PsBoostThreadIoEx(v20, 0LL, 0LL, 0LL);
          *(_DWORD *)(a1 + 56) |= 1u;
        }
      }
    }
    if ( v13 && (*(_DWORD *)(a1 + 56) & 4) == 0 )
    {
      v14 |= 2u;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v20 + 1364)) == 1 && *(_BYTE *)(v20 + 793) )
      {
        v44 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v44 <= 0xFu )
        {
          v47 = KeGetCurrentPrcb()->SchedulerAssist;
          v47[5] |= (-1 << (v44 + 1)) & 4;
        }
        v45 = KeGetCurrentPrcb();
        if ( (unsigned int)KiAbThreadInsertList(v20, &v45->AbPropagateBoostsList, v20 + 808) )
          KiAbQueueAutoBoostDpc(v45);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v48 = KeGetCurrentIrql();
            if ( v48 <= 0xFu && v44 <= 0xFu && v48 >= 2u )
            {
              v49 = KeGetCurrentPrcb();
              v18 = -1LL << (v44 + 1);
              SchedulerAssist = v49->SchedulerAssist;
              v50 = ~(unsigned __int16)v18;
              v5 = (v50 & SchedulerAssist[5]) == 0;
              v12 = (unsigned int)v50 & SchedulerAssist[5];
              SchedulerAssist[5] = v12;
              if ( v5 )
                KiRemoveSystemWorkPriorityKick(v49);
            }
          }
        }
        __writecr8(v44);
        v10 = (volatile __int64 *)(a1 + 96);
      }
      *(_DWORD *)(a1 + 56) |= 4u;
    }
    if ( v11 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v20 + 195) )
      v14 |= 0xFF00u;
    if ( !v14 )
      goto LABEL_55;
    if ( ObpTraceFlags )
      ObpPushStackInfo(v20 - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v20 - 48));
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, v20, 0x10uLL, BugCheckParameter4);
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
          goto LABEL_42;
        Next = KxWaitForLockChainValid(&LockHandle, v18);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    }
LABEL_42:
    v23 = KeGetCurrentPrcb();
    v24 = v23->SchedulerAssist;
    if ( v24 )
    {
      if ( v23->NestingLevel <= 1u )
      {
        v51 = v24[6] - 1;
        v24[6] = v51;
        if ( !v51 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v52 = KeGetCurrentIrql();
        if ( v52 <= 0xFu && LockHandle.OldIrql <= 0xFu && v52 >= 2u )
        {
          v53 = KeGetCurrentPrcb();
          SchedulerAssist = v53->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v5 = (v54 & SchedulerAssist[5]) == 0;
          v12 = (unsigned int)v54 & SchedulerAssist[5];
          SchedulerAssist[5] = v12;
          if ( v5 )
            KiRemoveSystemWorkPriorityKick(v53);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (v14 & 4) != 0 )
    {
      ++ExpResourceIoBoosted;
      IoBoostThreadIoPriority(v20, v8, 0LL);
    }
    if ( (v14 & 2) != 0 )
    {
      if ( *(_DWORD *)(v20 + 1368) )
      {
        ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
        if ( ExtensionTable )
        {
          (*(void (__fastcall **)(ULONG_PTR))(ExtensionTable + 16))(v20);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
        }
      }
    }
    if ( (v14 & 0xFF00) != 0 )
    {
      __incgsdword(0x86E8u);
      KeSetPriorityBoost(v20, *(unsigned __int8 *)(a1 + 27), v12, SchedulerAssist);
    }
    v14 = 0;
    ObDereferenceObjectDeferDelete((PVOID)v20);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v10;
    LockHandle.LockQueue.Next = 0LL;
    v26 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
    {
      v56 = KeGetCurrentPrcb()->SchedulerAssist;
      v56[5] |= (-1 << (v26 + 1)) & 4;
    }
    LockHandle.OldIrql = v26;
    v27 = KeGetCurrentPrcb();
    v28 = v27->SchedulerAssist;
    if ( v28 )
    {
      if ( v27->NestingLevel <= 1u )
      {
        v57 = v28[6];
        v28[6] = v57 + 1;
        if ( v57 == -1 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v10);
    }
    else
    {
      v18 = _InterlockedExchange64(v10, (__int64)&LockHandle);
      if ( v18 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, (_QWORD *)v18);
    }
LABEL_55:
    LODWORD(v12) = v71;
  }
LABEL_56:
  if ( *(char *)(a1 + 26) >= 0 )
  {
    v33 = *(_QWORD *)(a1 + 16);
    if ( v33 )
    {
      v34 = *(_DWORD *)(v33 + 8);
      for ( i = 1; i < v34; ++i )
      {
        v36 = *(_DWORD *)(v33 + 24);
        v33 += 16LL;
        v37 = *(_QWORD *)v33;
        if ( (v36 & 2) != 0 )
        {
          v37 &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        else if ( (v37 & 3) != 0 )
        {
          goto LABEL_71;
        }
        if ( v37 )
        {
          v18 = v36;
          if ( (_DWORD)v12 && (v36 & 1) == 0 && (unsigned int)PsGetBaseIoPriorityThread(v37, v36) < 2 )
          {
            v14 |= 4u;
            PsBoostThreadIoEx(v37, 0LL, 0LL, 0LL);
            *(_DWORD *)(v33 + 8) |= 1u;
            v18 = *(unsigned int *)(v33 + 8);
          }
          if ( v70 && (v18 & 4) == 0 )
          {
            v14 |= 2u;
            if ( _InterlockedIncrement((volatile signed __int32 *)(v37 + 1364)) == 1 )
              KeAbProcessEffectiveIoPriorityChange(v37, 0LL);
            *(_DWORD *)(v33 + 8) |= 4u;
          }
          if ( v66 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v37 + 195) )
            v14 |= 0xFF00u;
          if ( v14 )
          {
            v38 = v37 - 48;
            if ( ObpTraceFlags )
            {
              ObpPushStackInfo(v37 - 48);
              v38 = v37 - 48;
            }
            ObpIncrPointerCount(v38, v18);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v41 = LockHandle.OldIrql;
            v69 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v58 = KeGetCurrentIrql();
                if ( v58 <= 0xFu && LockHandle.OldIrql <= 0xFu && v58 >= 2u )
                {
                  v59 = KeGetCurrentPrcb();
                  v40 = v59->SchedulerAssist;
                  v60 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v5 = (v60 & v40[5]) == 0;
                  v39 = (unsigned int)v60 & v40[5];
                  v40[5] = v39;
                  if ( v5 )
                  {
                    KiRemoveSystemWorkPriorityKick(v59);
                    v41 = v69;
                  }
                }
              }
            }
            __writecr8(v41);
            if ( (v14 & 4) != 0 )
            {
              ++ExpResourceIoBoostedShared;
              IoBoostThreadIoPriority(v37, v8, 0LL);
            }
            if ( (v14 & 2) != 0 )
            {
              if ( *(_DWORD *)(v37 + 1368) )
              {
                v61 = ExGetExtensionTable(IopIoRateExtensionHost);
                if ( v61 )
                {
                  (*(void (__fastcall **)(__int64))(v61 + 16))(v37);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                }
              }
            }
            if ( (v14 & 0xFF00) != 0 )
            {
              __incgsdword(0x86ECu);
              KeSetPriorityBoost(v37, *(unsigned __int8 *)(a1 + 27), v39, v40);
            }
            ObDereferenceObjectDeferDelete((PVOID)v37);
            v14 = 0;
            LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
            LockHandle.LockQueue.Next = 0LL;
            v42 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v42 <= 0xFu )
            {
              v62 = KeGetCurrentPrcb()->SchedulerAssist;
              v62[5] |= (-1 << (v42 + 1)) & 4;
            }
            LockHandle.OldIrql = v42;
            KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 96));
            v43 = *(_QWORD *)(a1 + 16);
            if ( !v43 || *(_DWORD *)(v43 + 8) != v34 )
              break;
          }
        }
LABEL_71:
        LODWORD(v12) = v71;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    v29 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_60;
      v29 = KxWaitForLockChainValid(&LockHandle, v18);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v29 + 8), 1uLL);
  }
LABEL_60:
  v30 = KeGetCurrentPrcb();
  v31 = v30->SchedulerAssist;
  if ( v31 )
  {
    if ( v30->NestingLevel <= 1u )
    {
      v63 = v31[6] - 1;
      v31[6] = v63;
      if ( !v63 )
        KiRemoveSystemWorkPriorityKick(v30);
    }
  }
  result = (unsigned int)KiIrqlFlags;
  v32 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v64 = KeGetCurrentPrcb();
        v65 = v64->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v5 = ((unsigned int)result & v65[5]) == 0;
        v65[5] &= result;
        if ( v5 )
          result = KiRemoveSystemWorkPriorityKick(v64);
      }
    }
  }
  __writecr8(v32);
  return result;
}
