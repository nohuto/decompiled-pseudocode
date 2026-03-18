/*
 * XREFs of ExpApplyPriorityBoost @ 0x140291140
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x140222130 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140222A80 (ExpAcquireResourceExclusiveLite.c)
 *     ExpApplyPrewaitBoost @ 0x140314650 (ExpApplyPrewaitBoost.c)
 *     ExpApplyRewaitBoost @ 0x140330D90 (ExpApplyRewaitBoost.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1403645CC (ExpConvertExclusiveToSharedLite.c)
 * Callees:
 *     PsGetBaseIoPriorityThread @ 0x14020AC30 (PsGetBaseIoPriorityThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIoEx @ 0x140223950 (PsBoostThreadIoEx.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
 *     ObpIncrPointerCount @ 0x14027E460 (ObpIncrPointerCount.c)
 *     KeSetPriorityBoost @ 0x140291830 (KeSetPriorityBoost.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     IoBoostThreadIoPriority @ 0x1402EB1D4 (IoBoostThreadIoPriority.c)
 *     KiAbThreadInsertList @ 0x140326E40 (KiAbThreadInsertList.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14035D3EC (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035F69C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
 */

__int64 __fastcall ExpApplyPriorityBoost(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax
  bool v4; // zf
  unsigned int v7; // r12d
  bool v8; // cc
  volatile __int64 *v9; // r14
  int v10; // r13d
  int v11; // r8d
  int v12; // esi
  int v13; // r15d
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v16; // rdx
  int v17; // edx
  int v18; // eax
  ULONG_PTR v19; // rdi
  signed __int64 BugCheckParameter4; // rax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v25; // r10
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  _KSPIN_LOCK_QUEUE *volatile v28; // rax
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  unsigned __int64 v31; // rbx
  __int64 v32; // rdi
  unsigned int v33; // r13d
  unsigned int i; // r14d
  int v35; // eax
  __int64 v36; // rsi
  int v37; // edx
  volatile signed __int64 *v38; // rax
  unsigned __int8 v39; // r10
  unsigned __int8 v40; // r10
  __int64 v41; // rax
  unsigned __int8 v42; // r14
  struct _KPRCB *v43; // rsi
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  _DWORD *v46; // r9
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  int v51; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // eax
  unsigned __int64 ExtensionTable; // rax
  _DWORD *v57; // r9
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r11
  _DWORD *v61; // r9
  int v62; // eax
  unsigned __int64 v63; // rax
  _DWORD *v64; // r9
  int v65; // eax
  struct _KPRCB *v66; // r9
  _DWORD *v67; // r8
  int v68; // [rsp+30h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-30h] BYREF
  void *retaddr; // [rsp+88h] [rbp+20h]
  unsigned __int8 v71; // [rsp+90h] [rbp+28h]
  int v72; // [rsp+98h] [rbp+30h]
  int v73; // [rsp+A8h] [rbp+40h]

  result = 0LL;
  v4 = (*(_BYTE *)(a1 + 26) & 8) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v4 )
    return result;
  v7 = (*(_DWORD *)(a3 + 1296) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 544) + 1124LL) & 0x100000) != 0 )
    v7 = 0;
  v8 = v7 <= 2;
  if ( v7 < 2 )
  {
    if ( (struct _KTHREAD *)a3 == KeGetCurrentThread() && *(_DWORD *)(a3 + 1360) )
    {
      v7 = 2;
      v8 = 1;
    }
    else
    {
      v8 = v7 <= 2;
    }
  }
  if ( v8 )
    v7 = 2;
  LockHandle.LockQueue.Next = 0LL;
  v9 = (volatile __int64 *)(a1 + 96);
  v10 = a2 & 0xFF00;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  v11 = a2 & 4;
  v68 = v10;
  v12 = a2 & 2;
  v73 = (unsigned __int8)v11;
  v72 = v12;
  v13 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = CurrentPrcb->SchedulerAssist;
  if ( v16 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v45 = v16[6];
      v16[6] = v45 + 1;
      if ( v45 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v11 = v73;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 96);
  }
  else
  {
    if ( !_InterlockedExchange64(v9, (__int64)&LockHandle) )
      goto LABEL_11;
    KxWaitForLockOwnerShip(&LockHandle);
  }
  v11 = v73;
LABEL_11:
  if ( v11 )
    *(_WORD *)(a1 + 26) |= 4u;
  if ( v12 )
    *(_WORD *)(a1 + 26) |= 2u;
  if ( v10 )
  {
    v17 = *(char *)(a3 + 195);
    if ( v17 > *(unsigned __int8 *)(a1 + 27) )
    {
      if ( (unsigned __int8)v17 >= 0xFu )
        LOBYTE(v17) = 15;
      *(_BYTE *)(a1 + 27) = v17;
    }
  }
  v18 = *(_DWORD *)(a1 + 56);
  v19 = *(_QWORD *)(a1 + 48);
  if ( (v18 & 2) != 0 )
  {
    v19 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v19 & 3) != 0 )
  {
    goto LABEL_56;
  }
  if ( v19 )
  {
    if ( v11
      && (v18 & 1) == 0
      && ((*(_DWORD *)(*(_QWORD *)(v19 + 544) + 1124LL) & 0x100000) != 0 || (*(_DWORD *)(v19 + 1296) & 0xE00u) < 0x400) )
    {
      v13 = 4;
      PsBoostThreadIoEx(v19, 0, 0, 0LL);
      *(_DWORD *)(a1 + 56) |= 1u;
    }
    if ( v12 && (*(_DWORD *)(a1 + 56) & 4) == 0 )
    {
      v13 |= 2u;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v19 + 1364)) == 1 && *(_BYTE *)(v19 + 793) )
      {
        v42 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v42 <= 0xFu )
        {
          v46 = KeGetCurrentPrcb()->SchedulerAssist;
          v46[5] |= (-1 << (v42 + 1)) & 4;
        }
        v43 = KeGetCurrentPrcb();
        if ( (unsigned int)KiAbThreadInsertList(v19, &v43->AbPropagateBoostsList, v19 + 808) )
          KiAbQueueAutoBoostDpc(v43);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v47 = KeGetCurrentIrql();
            if ( v47 <= 0xFu && v42 <= 0xFu && v47 >= 2u )
            {
              v48 = KeGetCurrentPrcb();
              v49 = v48->SchedulerAssist;
              v50 = ~(unsigned __int16)(-1LL << (v42 + 1));
              v4 = (v50 & v49[5]) == 0;
              v49[5] &= v50;
              if ( v4 )
                KiRemoveSystemWorkPriorityKick(v48);
            }
          }
        }
        __writecr8(v42);
        v9 = (volatile __int64 *)(a1 + 96);
      }
      *(_DWORD *)(a1 + 56) |= 4u;
    }
    if ( v10 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v19 + 195) )
      v13 |= 0xFF00u;
    if ( !v13 )
      goto LABEL_55;
    if ( ObpTraceFlags )
      ObpPushStackInfo(v19 - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v19 - 48));
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, v19, 0x10uLL, BugCheckParameter4);
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
          goto LABEL_42;
        Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    }
LABEL_42:
    v22 = KeGetCurrentPrcb();
    v23 = v22->SchedulerAssist;
    if ( v23 )
    {
      if ( v22->NestingLevel <= 1u )
      {
        v51 = v23[6] - 1;
        v23[6] = v51;
        if ( !v51 )
          KiRemoveSystemWorkPriorityKick(v22);
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
          v54 = v53->SchedulerAssist;
          v55 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v4 = (v55 & v54[5]) == 0;
          v54[5] &= v55;
          if ( v4 )
            KiRemoveSystemWorkPriorityKick(v53);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (v13 & 4) != 0 )
    {
      ++ExpResourceIoBoosted;
      IoBoostThreadIoPriority(v19, v7, 0LL);
    }
    if ( (v13 & 2) != 0 )
    {
      if ( *(_DWORD *)(v19 + 1368) )
      {
        ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
        if ( ExtensionTable )
        {
          (*(void (__fastcall **)(ULONG_PTR))(ExtensionTable + 16))(v19);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
        }
      }
    }
    if ( (v13 & 0xFF00) != 0 )
    {
      __incgsdword(0x86E8u);
      KeSetPriorityBoost(v19, *(unsigned __int8 *)(a1 + 27));
    }
    v13 = 0;
    ObDereferenceObjectDeferDelete((PVOID)v19);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v9;
    LockHandle.LockQueue.Next = 0LL;
    v25 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
    {
      v57 = KeGetCurrentPrcb()->SchedulerAssist;
      v57[5] |= (-1 << (v25 + 1)) & 4;
    }
    LockHandle.OldIrql = v25;
    v26 = KeGetCurrentPrcb();
    v27 = v26->SchedulerAssist;
    if ( v27 )
    {
      if ( v26->NestingLevel <= 1u )
      {
        v58 = v27[6];
        v27[6] = v58 + 1;
        if ( v58 == -1 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v9);
    }
    else if ( _InterlockedExchange64(v9, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
LABEL_55:
    v11 = v73;
  }
LABEL_56:
  if ( *(char *)(a1 + 26) >= 0 )
  {
    v32 = *(_QWORD *)(a1 + 16);
    if ( v32 )
    {
      v33 = *(_DWORD *)(v32 + 8);
      for ( i = 1; i < v33; ++i )
      {
        v35 = *(_DWORD *)(v32 + 24);
        v32 += 16LL;
        v36 = *(_QWORD *)v32;
        if ( (v35 & 2) != 0 )
        {
          v36 &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        else if ( (v36 & 3) != 0 )
        {
          goto LABEL_71;
        }
        if ( v36 )
        {
          LOBYTE(v37) = v35;
          if ( v11 && (v35 & 1) == 0 && (unsigned int)PsGetBaseIoPriorityThread(v36) < 2 )
          {
            v13 |= 4u;
            PsBoostThreadIoEx(v36, 0, 0, 0LL);
            *(_DWORD *)(v32 + 8) |= 1u;
            v37 = *(_DWORD *)(v32 + 8);
          }
          if ( v72 && (v37 & 4) == 0 )
          {
            v13 |= 2u;
            if ( _InterlockedIncrement((volatile signed __int32 *)(v36 + 1364)) == 1 )
              KeAbProcessEffectiveIoPriorityChange(v36, 0LL);
            *(_DWORD *)(v32 + 8) |= 4u;
          }
          if ( v68 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v36 + 195) )
            v13 |= 0xFF00u;
          if ( v13 )
          {
            v38 = (volatile signed __int64 *)(v36 - 48);
            if ( ObpTraceFlags )
            {
              ObpPushStackInfo(v36 - 48);
              v38 = (volatile signed __int64 *)(v36 - 48);
            }
            ObpIncrPointerCount(v38);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v39 = LockHandle.OldIrql;
            v71 = LockHandle.OldIrql;
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
                  v4 = (v62 & v61[5]) == 0;
                  v61[5] &= v62;
                  if ( v4 )
                  {
                    KiRemoveSystemWorkPriorityKick(v60);
                    v39 = v71;
                  }
                }
              }
            }
            __writecr8(v39);
            if ( (v13 & 4) != 0 )
            {
              ++ExpResourceIoBoostedShared;
              IoBoostThreadIoPriority(v36, v7, 0LL);
            }
            if ( (v13 & 2) != 0 )
            {
              if ( *(_DWORD *)(v36 + 1368) )
              {
                v63 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
                if ( v63 )
                {
                  (*(void (__fastcall **)(__int64))(v63 + 16))(v36);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                }
              }
            }
            if ( (v13 & 0xFF00) != 0 )
            {
              __incgsdword(0x86ECu);
              KeSetPriorityBoost(v36, *(unsigned __int8 *)(a1 + 27));
            }
            ObDereferenceObjectDeferDelete((PVOID)v36);
            v13 = 0;
            LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
            LockHandle.LockQueue.Next = 0LL;
            v40 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v40 <= 0xFu )
            {
              v64 = KeGetCurrentPrcb()->SchedulerAssist;
              v64[5] |= (-1 << (v40 + 1)) & 4;
            }
            LockHandle.OldIrql = v40;
            KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 96));
            v41 = *(_QWORD *)(a1 + 16);
            if ( !v41 || *(_DWORD *)(v41 + 8) != v33 )
              break;
          }
        }
LABEL_71:
        v11 = v73;
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
    v28 = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_60;
      v28 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v28->Lock, 1uLL);
  }
LABEL_60:
  v29 = KeGetCurrentPrcb();
  v30 = v29->SchedulerAssist;
  if ( v30 )
  {
    if ( v29->NestingLevel <= 1u )
    {
      v65 = v30[6] - 1;
      v30[6] = v65;
      if ( !v65 )
        KiRemoveSystemWorkPriorityKick(v29);
    }
  }
  result = (unsigned int)KiIrqlFlags;
  v31 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v66 = KeGetCurrentPrcb();
        v67 = v66->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v4 = ((unsigned int)result & v67[5]) == 0;
        v67[5] &= result;
        if ( v4 )
          result = KiRemoveSystemWorkPriorityKick(v66);
      }
    }
  }
  __writecr8(v31);
  return result;
}
