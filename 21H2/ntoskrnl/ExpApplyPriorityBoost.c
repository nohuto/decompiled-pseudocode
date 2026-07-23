/*
 * XREFs of ExpApplyPriorityBoost @ 0x1402D3850
 * Callers:
 *     ExpConvertExclusiveToSharedLite @ 0x1402303FC (ExpConvertExclusiveToSharedLite.c)
 *     ExpApplyPrewaitBoost @ 0x140235590 (ExpApplyPrewaitBoost.c)
 *     ExpApplyRewaitBoost @ 0x140251380 (ExpApplyRewaitBoost.c)
 *     ExpAcquireResourceSharedLite @ 0x140356DB0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140357700 (ExpAcquireResourceExclusiveLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14020462C (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     KiAbThreadInsertList @ 0x14024652C (KiAbThreadInsertList.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ObpIncrPointerCount @ 0x1402C08C0 (ObpIncrPointerCount.c)
 *     PsGetBaseIoPriorityThread @ 0x1402D0980 (PsGetBaseIoPriorityThread.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     KeSetPriorityBoost @ 0x1402D3F40 (KeSetPriorityBoost.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     IoBoostThreadIoPriority @ 0x140363380 (IoBoostThreadIoPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
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
  __int64 Next; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v26; // r10
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  _QWORD *v29; // rdx
  __int64 v30; // rax
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
  _DWORD *v43; // r9
  unsigned __int8 v44; // r10
  __int64 v45; // rax
  unsigned __int8 v46; // r14
  struct _KDPC *v47; // rsi
  _DWORD *SchedulerAssist; // r9
  int v49; // eax
  _DWORD *v50; // r9
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  int v55; // eax
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r10
  _DWORD *v58; // r9
  int v59; // eax
  unsigned __int64 ExtensionTable; // rax
  _DWORD *v61; // r9
  int v62; // eax
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r11
  _DWORD *v65; // r9
  int v66; // eax
  unsigned __int64 v67; // rax
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
      v49 = v16[6];
      v16[6] = v49 + 1;
      if ( v49 == -1 )
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
        v46 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v46 <= 0xFu )
        {
          v50 = KeGetCurrentPrcb()->SchedulerAssist;
          v50[5] |= (-1 << (v46 + 1)) & 4;
        }
        v47 = (struct _KDPC *)KeGetCurrentPrcb();
        if ( (unsigned int)KiAbThreadInsertList(v20, &v47[541].DpcData, (_QWORD *)(v20 + 808)) )
          KiAbQueueAutoBoostDpc(v47);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v51 = KeGetCurrentIrql();
            if ( v51 <= 0xFu && v46 <= 0xFu && v51 >= 2u )
            {
              v52 = KeGetCurrentPrcb();
              v53 = v52->SchedulerAssist;
              v54 = ~(unsigned __int16)(-1LL << (v46 + 1));
              v4 = (v54 & v53[5]) == 0;
              v53[5] &= v54;
              if ( v4 )
                KiRemoveSystemWorkPriorityKick(v52);
            }
          }
        }
        __writecr8(v46);
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
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_42;
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
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
        v55 = v24[6] - 1;
        v24[6] = v55;
        if ( !v55 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v56 = KeGetCurrentIrql();
        if ( v56 <= 0xFu && LockHandle.OldIrql <= 0xFu && v56 >= 2u )
        {
          v57 = KeGetCurrentPrcb();
          v58 = v57->SchedulerAssist;
          v59 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v4 = (v59 & v58[5]) == 0;
          v58[5] &= v59;
          if ( v4 )
            KiRemoveSystemWorkPriorityKick(v57);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (v13 & 4) != 0 )
    {
      ++ExpResourceIoBoosted;
      IoBoostThreadIoPriority(v20, v7);
    }
    if ( (v13 & 2) != 0 )
    {
      if ( *(_DWORD *)(v20 + 1368) )
      {
        ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
        if ( ExtensionTable )
        {
          (*(void (__fastcall **)(ULONG_PTR))(ExtensionTable + 16))(v20);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
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
      v61 = KeGetCurrentPrcb()->SchedulerAssist;
      v61[5] |= (-1 << (v26 + 1)) & 4;
    }
    LockHandle.OldIrql = v26;
    v27 = KeGetCurrentPrcb();
    v28 = v27->SchedulerAssist;
    if ( v28 )
    {
      if ( v27->NestingLevel <= 1u )
      {
        v62 = v28[6];
        v28[6] = v62 + 1;
        if ( v62 == -1 )
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
              KeAbProcessEffectiveIoPriorityChange(v38, 0);
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
                v63 = KeGetCurrentIrql();
                if ( v63 <= 0xFu && LockHandle.OldIrql <= 0xFu && v63 >= 2u )
                {
                  v64 = KeGetCurrentPrcb();
                  v65 = v64->SchedulerAssist;
                  v66 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v4 = (v66 & v65[5]) == 0;
                  v65[5] &= v66;
                  if ( v4 )
                  {
                    KiRemoveSystemWorkPriorityKick(v64);
                    v41 = v74;
                  }
                }
              }
            }
            __writecr8(v41);
            if ( (v13 & 4) != 0 )
            {
              ++ExpResourceIoBoostedShared;
              IoBoostThreadIoPriority(v38, v7);
            }
            if ( (v13 & 2) != 0 )
            {
              if ( *(_DWORD *)(v38 + 1368) )
              {
                v67 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
                if ( v67 )
                {
                  (*(void (__fastcall **)(__int64))(v67 + 16))(v38);
                  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
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
            v44 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v44 <= 0xFu )
            {
              v43 = KeGetCurrentPrcb()->SchedulerAssist;
              v42 = (-1 << (v44 + 1)) & 4u | v43[5];
              v43[5] = v42;
            }
            LockHandle.OldIrql = v44;
            KxAcquireQueuedSpinLock(&LockHandle, a1 + 96, v42, v43);
            v45 = *(_QWORD *)(a1 + 16);
            if ( !v45 || *(_DWORD *)(v45 + 8) != v35 )
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
    v30 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_60;
      v30 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v30 + 8), 1uLL);
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
