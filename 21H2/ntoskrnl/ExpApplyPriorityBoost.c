/*
 * XREFs of ExpApplyPriorityBoost @ 0x14022F000
 * Callers:
 *     ExpConvertExclusiveToSharedLite @ 0x1402B224C (ExpConvertExclusiveToSharedLite.c)
 *     ExpApplyPrewaitBoost @ 0x1402B73B0 (ExpApplyPrewaitBoost.c)
 *     ExpApplyRewaitBoost @ 0x1402D2E00 (ExpApplyRewaitBoost.c)
 *     ExpAcquireResourceSharedLite @ 0x14034C060 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14034C9B0 (ExpAcquireResourceExclusiveLite.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x14021BFC0 (ObpIncrPointerCount.c)
 *     PsGetBaseIoPriorityThread @ 0x14022C100 (PsGetBaseIoPriorityThread.c)
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     KeSetPriorityBoost @ 0x14022F6F0 (KeSetPriorityBoost.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14028748C (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402889FC (KiAbQueueAutoBoostDpc.c)
 *     ExGetExtensionTable @ 0x14029F2F8 (ExGetExtensionTable.c)
 *     KiAbThreadInsertList @ 0x1402C7CCC (KiAbThreadInsertList.c)
 *     ObDereferenceObjectDeferDelete @ 0x140343540 (ObDereferenceObjectDeferDelete.c)
 *     PsBoostThreadIoEx @ 0x14034D800 (PsBoostThreadIoEx.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     IoBoostThreadIoPriority @ 0x140358630 (IoBoostThreadIoPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140564D28 (ObpPushStackInfo.c)
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
  _QWORD *v17; // rdx
  int v18; // edx
  int v19; // eax
  ULONG_PTR v20; // rdi
  signed __int64 BugCheckParameter4; // rax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v26; // r10
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  _QWORD *v29; // rdx
  _KSPIN_LOCK_QUEUE *volatile v30; // rax
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  unsigned __int64 v33; // rbx
  __int64 v34; // rdi
  unsigned int v35; // r13d
  unsigned int i; // r14d
  int v37; // eax
  __int64 v38; // rsi
  int v39; // edx
  volatile signed __int64 *v40; // rax
  unsigned __int8 v41; // r10
  __int64 v42; // r8
  unsigned __int8 v43; // r10
  __int64 v44; // rax
  unsigned __int8 v45; // r14
  struct _KPRCB *v46; // rsi
  _DWORD *SchedulerAssist; // r9
  int v48; // eax
  _DWORD *v49; // r9
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  __int64 ExtensionTable; // rax
  _DWORD *v60; // r9
  int v61; // eax
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r11
  _DWORD *v64; // r9
  int v65; // eax
  __int64 v66; // rax
  _DWORD *v67; // r9
  int v68; // eax
  struct _KPRCB *v69; // r9
  _DWORD *v70; // r8
  int v71; // [rsp+30h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-30h] BYREF
  void *retaddr; // [rsp+88h] [rbp+20h]
  unsigned __int8 v74; // [rsp+90h] [rbp+28h]
  int v75; // [rsp+98h] [rbp+30h]
  int v76; // [rsp+A8h] [rbp+40h]

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
  v71 = v10;
  v12 = a2 & 2;
  v76 = (unsigned __int8)v11;
  v75 = v12;
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
      v48 = v16[6];
      v16[6] = v48 + 1;
      if ( v48 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v11 = v76;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 96);
  }
  else
  {
    v17 = (_QWORD *)_InterlockedExchange64(v9, (__int64)&LockHandle);
    if ( !v17 )
      goto LABEL_11;
    KxWaitForLockOwnerShip((__int64)&LockHandle, v17);
  }
  v11 = v76;
LABEL_11:
  if ( v11 )
    *(_WORD *)(a1 + 26) |= 4u;
  if ( v12 )
    *(_WORD *)(a1 + 26) |= 2u;
  if ( v10 )
  {
    v18 = *(char *)(a3 + 195);
    if ( v18 > *(unsigned __int8 *)(a1 + 27) )
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
    if ( v11
      && (v19 & 1) == 0
      && ((*(_DWORD *)(*(_QWORD *)(v20 + 544) + 1124LL) & 0x100000) != 0 || (*(_DWORD *)(v20 + 1296) & 0xE00u) < 0x400) )
    {
      v13 = 4;
      PsBoostThreadIoEx(v20, 0LL, 0LL, 0LL);
      *(_DWORD *)(a1 + 56) |= 1u;
    }
    if ( v12 && (*(_DWORD *)(a1 + 56) & 4) == 0 )
    {
      v13 |= 2u;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v20 + 1364)) == 1 && *(_BYTE *)(v20 + 793) )
      {
        v45 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v45 <= 0xFu )
        {
          v49 = KeGetCurrentPrcb()->SchedulerAssist;
          v49[5] |= (-1 << (v45 + 1)) & 4;
        }
        v46 = KeGetCurrentPrcb();
        if ( (unsigned int)KiAbThreadInsertList(v20, &v46->AbPropagateBoostsList, v20 + 808) )
          KiAbQueueAutoBoostDpc(v46);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v50 = KeGetCurrentIrql();
            if ( v50 <= 0xFu && v45 <= 0xFu && v50 >= 2u )
            {
              v51 = KeGetCurrentPrcb();
              v52 = v51->SchedulerAssist;
              v53 = ~(unsigned __int16)(-1LL << (v45 + 1));
              v4 = (v53 & v52[5]) == 0;
              v52[5] &= v53;
              if ( v4 )
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
        }
        __writecr8(v45);
        v9 = (volatile __int64 *)(a1 + 96);
      }
      *(_DWORD *)(a1 + 56) |= 4u;
    }
    if ( v10 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v20 + 195) )
      v13 |= 0xFF00u;
    if ( !v13 )
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
    v23 = KeGetCurrentPrcb();
    v24 = v23->SchedulerAssist;
    if ( v24 )
    {
      if ( v23->NestingLevel <= 1u )
      {
        v54 = v24[6] - 1;
        v24[6] = v54;
        if ( !v54 )
          KiRemoveSystemWorkPriorityKick(v23);
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
          v4 = (v58 & v57[5]) == 0;
          v57[5] &= v58;
          if ( v4 )
            KiRemoveSystemWorkPriorityKick(v56);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (v13 & 4) != 0 )
    {
      ++ExpResourceIoBoosted;
      IoBoostThreadIoPriority(v20, v7, 0LL);
    }
    if ( (v13 & 2) != 0 )
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
    if ( (v13 & 0xFF00) != 0 )
    {
      __incgsdword(0x86E8u);
      KeSetPriorityBoost(v20, *(unsigned __int8 *)(a1 + 27));
    }
    v13 = 0;
    ObDereferenceObjectDeferDelete((PVOID)v20);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v9;
    LockHandle.LockQueue.Next = 0LL;
    v26 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
    {
      v60 = KeGetCurrentPrcb()->SchedulerAssist;
      v60[5] |= (-1 << (v26 + 1)) & 4;
    }
    LockHandle.OldIrql = v26;
    v27 = KeGetCurrentPrcb();
    v28 = v27->SchedulerAssist;
    if ( v28 )
    {
      if ( v27->NestingLevel <= 1u )
      {
        v61 = v28[6];
        v28[6] = v61 + 1;
        if ( v61 == -1 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v9);
    }
    else
    {
      v29 = (_QWORD *)_InterlockedExchange64(v9, (__int64)&LockHandle);
      if ( v29 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v29);
    }
LABEL_55:
    v11 = v76;
  }
LABEL_56:
  if ( *(char *)(a1 + 26) >= 0 )
  {
    v34 = *(_QWORD *)(a1 + 16);
    if ( v34 )
    {
      v35 = *(_DWORD *)(v34 + 8);
      for ( i = 1; i < v35; ++i )
      {
        v37 = *(_DWORD *)(v34 + 24);
        v34 += 16LL;
        v38 = *(_QWORD *)v34;
        if ( (v37 & 2) != 0 )
        {
          v38 &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        else if ( (v38 & 3) != 0 )
        {
          goto LABEL_71;
        }
        if ( v38 )
        {
          LOBYTE(v39) = v37;
          if ( v11 && (v37 & 1) == 0 && (unsigned int)PsGetBaseIoPriorityThread(v38) < 2 )
          {
            v13 |= 4u;
            PsBoostThreadIoEx(v38, 0LL, 0LL, 0LL);
            *(_DWORD *)(v34 + 8) |= 1u;
            v39 = *(_DWORD *)(v34 + 8);
          }
          if ( v75 && (v39 & 4) == 0 )
          {
            v13 |= 2u;
            if ( _InterlockedIncrement((volatile signed __int32 *)(v38 + 1364)) == 1 )
              KeAbProcessEffectiveIoPriorityChange(v38, 0LL);
            *(_DWORD *)(v34 + 8) |= 4u;
          }
          if ( v71 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v38 + 195) )
            v13 |= 0xFF00u;
          if ( v13 )
          {
            v40 = (volatile signed __int64 *)(v38 - 48);
            if ( ObpTraceFlags )
            {
              ObpPushStackInfo(v38 - 48);
              v40 = (volatile signed __int64 *)(v38 - 48);
            }
            ObpIncrPointerCount(v40);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v41 = LockHandle.OldIrql;
            v74 = LockHandle.OldIrql;
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
                  v4 = (v65 & v64[5]) == 0;
                  v64[5] &= v65;
                  if ( v4 )
                  {
                    KiRemoveSystemWorkPriorityKick(v63);
                    v41 = v74;
                  }
                }
              }
            }
            __writecr8(v41);
            if ( (v13 & 4) != 0 )
            {
              ++ExpResourceIoBoostedShared;
              IoBoostThreadIoPriority(v38, v7, 0LL);
            }
            if ( (v13 & 2) != 0 )
            {
              if ( *(_DWORD *)(v38 + 1368) )
              {
                v66 = ExGetExtensionTable(IopIoRateExtensionHost);
                if ( v66 )
                {
                  (*(void (__fastcall **)(__int64))(v66 + 16))(v38);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                }
              }
            }
            if ( (v13 & 0xFF00) != 0 )
            {
              __incgsdword(0x86ECu);
              KeSetPriorityBoost(v38, *(unsigned __int8 *)(a1 + 27));
            }
            ObDereferenceObjectDeferDelete((PVOID)v38);
            v13 = 0;
            LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
            LockHandle.LockQueue.Next = 0LL;
            v43 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v43 <= 0xFu )
            {
              v67 = KeGetCurrentPrcb()->SchedulerAssist;
              v42 = (-1 << (v43 + 1)) & 4u | v67[5];
              v67[5] = v42;
            }
            LockHandle.OldIrql = v43;
            KxAcquireQueuedSpinLock(&LockHandle, a1 + 96, v42);
            v44 = *(_QWORD *)(a1 + 16);
            if ( !v44 || *(_DWORD *)(v44 + 8) != v35 )
              break;
          }
        }
LABEL_71:
        v11 = v76;
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
    v30 = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_60;
      v30 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v30->Lock, 1uLL);
  }
LABEL_60:
  v31 = KeGetCurrentPrcb();
  v32 = v31->SchedulerAssist;
  if ( v32 )
  {
    if ( v31->NestingLevel <= 1u )
    {
      v68 = v32[6] - 1;
      v32[6] = v68;
      if ( !v68 )
        KiRemoveSystemWorkPriorityKick(v31);
    }
  }
  result = (unsigned int)KiIrqlFlags;
  v33 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v69 = KeGetCurrentPrcb();
        v70 = v69->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v4 = ((unsigned int)result & v70[5]) == 0;
        v70[5] &= result;
        if ( v4 )
          result = KiRemoveSystemWorkPriorityKick(v69);
      }
    }
  }
  __writecr8(v33);
  return result;
}
