/*
 * XREFs of ExpApplyPriorityBoost @ 0x140343010
 * Callers:
 *     ExpConvertExclusiveToSharedLite @ 0x140239810 (ExpConvertExclusiveToSharedLite.c)
 *     ExpApplyRewaitBoost @ 0x14025C860 (ExpApplyRewaitBoost.c)
 *     ExpAcquireResourceExclusiveLite @ 0x1402AE9D0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpApplyPrewaitBoost @ 0x14033B6F0 (ExpApplyPrewaitBoost.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140229B04 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbQueueAutoBoostDpc @ 0x140229D30 (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x14024E928 (KiAbThreadInsertList.c)
 *     IoBoostThreadIoPriority @ 0x140280754 (IoBoostThreadIoPriority.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ObpIncrPointerCount @ 0x14030F6D0 (ObpIncrPointerCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     PsGetBaseIoPriorityThread @ 0x140343770 (PsGetBaseIoPriorityThread.c)
 *     KeSetPriorityBoost @ 0x1403438F0 (KeSetPriorityBoost.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 */

__int64 __fastcall ExpApplyPriorityBoost(__int64 a1, __int16 a2, struct _KTHREAD *a3)
{
  __int64 result; // rax
  bool v4; // zf
  _DWORD *SchedulerAssist; // r9
  int BaseIoPriorityThread; // r12d
  bool v10; // cc
  volatile __int64 *v11; // r8
  int v12; // r13d
  int v13; // esi
  int v14; // r15d
  int v15; // r14d
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v18; // rdx
  _QWORD *v19; // rdx
  unsigned __int16 v20; // ax
  __int16 v21; // dx
  __int16 v22; // ax
  int Priority; // r8d
  int v24; // eax
  __int64 v25; // rdi
  __int64 Next; // rax
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  unsigned __int64 OldIrql; // rsi
  _DWORD *v30; // r9
  volatile __int64 *v31; // r8
  unsigned __int8 v32; // r10
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  _QWORD *v35; // rdx
  __int64 v36; // rax
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  unsigned __int64 v39; // rbx
  __int64 v40; // rdi
  unsigned int v41; // r13d
  unsigned int i; // r14d
  int v43; // eax
  __int64 v44; // rsi
  int v45; // edx
  int v46; // eax
  unsigned __int8 v47; // r10
  __int16 v48; // ax
  __int64 v49; // rax
  unsigned __int8 v50; // r14
  struct _KDPC *v51; // rsi
  _DWORD *v52; // r9
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  _DWORD *v61; // r9
  int v62; // eax
  __int64 ExtensionTable; // rax
  int v64; // eax
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r11
  _DWORD *v67; // r9
  int v68; // eax
  __int64 v69; // rax
  int v70; // eax
  struct _KPRCB *v71; // r9
  _DWORD *v72; // r8
  int v73; // [rsp+20h] [rbp-38h]
  int v74; // [rsp+24h] [rbp-34h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-30h] BYREF
  void *retaddr; // [rsp+78h] [rbp+20h]
  unsigned __int8 v77; // [rsp+80h] [rbp+28h]
  int v78; // [rsp+98h] [rbp+40h]

  result = 0LL;
  v4 = (*(_BYTE *)(a1 + 26) & 8) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v4 )
    return result;
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(a3);
  v10 = BaseIoPriorityThread <= 2;
  if ( BaseIoPriorityThread < 2 )
  {
    if ( a3 == KeGetCurrentThread() )
      goto LABEL_4;
    v10 = BaseIoPriorityThread <= 2;
  }
  if ( v10 )
LABEL_4:
    BaseIoPriorityThread = 2;
  v11 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  v12 = a2 & 0xFF00;
  v13 = a2 & 4;
  v14 = a2 & 2;
  v74 = v12;
  v73 = v13;
  v15 = 0;
  v78 = 0;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    v11 = (volatile __int64 *)(a1 + 96);
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = CurrentPrcb->SchedulerAssist;
  if ( v18 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v53 = v18[6];
      v18[6] = v53 + 1;
      if ( v53 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v11 = (volatile __int64 *)(a1 + 96);
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v11);
  }
  else
  {
    v19 = (_QWORD *)_InterlockedExchange64(v11, (__int64)&LockHandle);
    if ( v19 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v19, (__int64)v11, (__int64)SchedulerAssist);
  }
  if ( v13 )
    *(_WORD *)(a1 + 26) |= 4u;
  v20 = *(_WORD *)(a1 + 26);
  v21 = HIBYTE(v20);
  if ( v14 )
  {
    v22 = v20 | 2;
    *(_WORD *)(a1 + 26) = v22;
    LOBYTE(v21) = HIBYTE(v22);
  }
  if ( v12 )
  {
    Priority = a3->Priority;
    if ( Priority > (unsigned __int8)v21 )
    {
      if ( (unsigned __int8)Priority >= 0xFu )
        LOBYTE(Priority) = 15;
      *(_BYTE *)(a1 + 27) = Priority;
    }
  }
  v24 = *(_DWORD *)(a1 + 56);
  v25 = *(_QWORD *)(a1 + 48);
  if ( (v24 & 2) != 0 )
  {
    v25 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v25 & 3) != 0 )
  {
    goto LABEL_53;
  }
  if ( v25 )
  {
    if ( v13
      && (v24 & 1) == 0
      && ((*(_DWORD *)(*(_QWORD *)(v25 + 544) + 1124LL) & 0x100000) != 0 || (*(_DWORD *)(v25 + 1376) & 0xE00u) < 0x400) )
    {
      v15 = 4;
      v78 = 4;
      PsBoostThreadIoEx(v25, 0, 0, 0LL);
      *(_DWORD *)(a1 + 56) |= 1u;
    }
    if ( v14 && (*(_DWORD *)(a1 + 56) & 4) == 0 )
    {
      v15 |= 2u;
      v78 = v15;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v25 + 1444)) == 1 && *(_BYTE *)(v25 + 793) )
      {
        v50 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v50 <= 0xFu )
        {
          v52 = KeGetCurrentPrcb()->SchedulerAssist;
          v52[5] |= (-1 << (v50 + 1)) & 4;
        }
        v51 = (struct _KDPC *)KeGetCurrentPrcb();
        if ( (unsigned int)KiAbThreadInsertList(v25, &v51[557].DpcData, (_QWORD *)(v25 + 808)) )
          KiAbQueueAutoBoostDpc(v51);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v54 = KeGetCurrentIrql();
            if ( v54 <= 0xFu && v50 <= 0xFu && v54 >= 2u )
            {
              v55 = KeGetCurrentPrcb();
              v56 = v55->SchedulerAssist;
              v57 = ~(unsigned __int16)(-1LL << (v50 + 1));
              v4 = (v57 & v56[5]) == 0;
              v56[5] &= v57;
              if ( v4 )
                KiRemoveSystemWorkPriorityKick(v55);
            }
          }
        }
        __writecr8(v50);
        v15 = v78;
      }
      *(_DWORD *)(a1 + 56) |= 4u;
    }
    if ( v12 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v25 + 195) )
    {
      v15 |= 0xFF00u;
      v78 = v15;
    }
    if ( v15 )
    {
      if ( ObpTraceFlags )
        ObpPushStackInfo(v25 - 48);
      ObpIncrPointerCount((volatile signed __int64 *)(v25 - 48));
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
            goto LABEL_40;
          Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      }
LABEL_40:
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      if ( v28 )
      {
        if ( v27->NestingLevel <= 1u )
        {
          v58 = v28[6] - 1;
          v28[6] = v58;
          if ( !v58 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
      OldIrql = LockHandle.OldIrql;
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
              KiRemoveSystemWorkPriorityKick(v60);
          }
        }
      }
      __writecr8(OldIrql);
      if ( (v15 & 4) != 0 )
      {
        ++ExpResourceIoBoosted;
        IoBoostThreadIoPriority((KSPIN_LOCK *)v25, BaseIoPriorityThread, 0);
      }
      if ( (v15 & 2) != 0 )
      {
        if ( *(_DWORD *)(v25 + 1448) )
        {
          ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
          if ( ExtensionTable )
          {
            (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(v25);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
          }
        }
      }
      if ( (v15 & 0xFF00) != 0 )
      {
        __incgsdword(0x8AE8u);
        KeSetPriorityBoost(v25, *(unsigned __int8 *)(a1 + 27));
      }
      v78 = 0;
      ObDereferenceObjectDeferDelete((PVOID)v25);
      v31 = (volatile __int64 *)(a1 + 96);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
      v32 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v32 <= 0xFu )
      {
        v30 = KeGetCurrentPrcb()->SchedulerAssist;
        v30[5] |= (-1 << (v32 + 1)) & 4;
        v31 = (volatile __int64 *)(a1 + 96);
      }
      LockHandle.OldIrql = v32;
      v33 = KeGetCurrentPrcb();
      v34 = v33->SchedulerAssist;
      if ( v34 )
      {
        if ( v33->NestingLevel <= 1u )
        {
          v64 = v34[6];
          v34[6] = v64 + 1;
          if ( v64 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(v33);
            v31 = (volatile __int64 *)(a1 + 96);
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v31);
      }
      else
      {
        v35 = (_QWORD *)_InterlockedExchange64(v31, (__int64)&LockHandle);
        if ( v35 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v35, (__int64)v31, (__int64)v30);
      }
    }
  }
LABEL_53:
  if ( *(char *)(a1 + 26) >= 0 )
  {
    v40 = *(_QWORD *)(a1 + 16);
    if ( v40 )
    {
      v41 = *(_DWORD *)(v40 + 8);
      for ( i = 1; i < v41; ++i )
      {
        v43 = *(_DWORD *)(v40 + 24);
        v40 += 16LL;
        v44 = *(_QWORD *)v40;
        if ( (v43 & 2) != 0 )
        {
          v44 &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        else if ( (v44 & 3) != 0 )
        {
          continue;
        }
        if ( v44 )
        {
          LOBYTE(v45) = v43;
          if ( v73 && (v43 & 1) == 0 && (unsigned int)PsGetBaseIoPriorityThread(v44) < 2 )
          {
            v78 |= 4u;
            PsBoostThreadIoEx(v44, 0, 0, 0LL);
            *(_DWORD *)(v40 + 8) |= 1u;
            v45 = *(_DWORD *)(v40 + 8);
          }
          if ( v14 && (v45 & 4) == 0 )
          {
            v78 |= 2u;
            if ( _InterlockedIncrement((volatile signed __int32 *)(v44 + 1444)) == 1 )
              KeAbProcessEffectiveIoPriorityChange(v44, 0);
            *(_DWORD *)(v40 + 8) |= 4u;
          }
          if ( v74 )
          {
            v46 = v78;
            if ( *(unsigned __int8 *)(a1 + 27) > *(char *)(v44 + 195) )
            {
              v46 = v78 | 0xFF00;
              v78 |= 0xFF00u;
            }
          }
          else
          {
            v46 = v78;
          }
          if ( v46 )
          {
            ObfReferenceObjectWithTag((PVOID)v44, 0x746C6644u);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v47 = LockHandle.OldIrql;
            v77 = LockHandle.OldIrql;
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
                  v4 = (v68 & v67[5]) == 0;
                  v67[5] &= v68;
                  if ( v4 )
                  {
                    KiRemoveSystemWorkPriorityKick(v66);
                    v47 = v77;
                  }
                }
              }
            }
            __writecr8(v47);
            v48 = v78;
            if ( (v78 & 4) != 0 )
            {
              ++ExpResourceIoBoostedShared;
              IoBoostThreadIoPriority((KSPIN_LOCK *)v44, BaseIoPriorityThread, 0);
              v48 = v78;
            }
            if ( (v48 & 2) != 0 && *(_DWORD *)(v44 + 1448) )
            {
              v69 = ExGetExtensionTable(IopIoRateExtensionHost);
              if ( v69 )
              {
                (*(void (__fastcall **)(__int64))(v69 + 16))(v44);
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
              }
              v48 = v78;
            }
            if ( (v48 & 0xFF00) != 0 )
            {
              __incgsdword(0x8AECu);
              KeSetPriorityBoost(v44, *(unsigned __int8 *)(a1 + 27));
            }
            ObDereferenceObjectDeferDelete((PVOID)v44);
            v78 = 0;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
            v49 = *(_QWORD *)(a1 + 16);
            if ( !v49 || *(_DWORD *)(v49 + 8) != v41 )
              break;
          }
        }
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
    v36 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_57;
      v36 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v36 + 8), 1uLL);
  }
LABEL_57:
  v37 = KeGetCurrentPrcb();
  v38 = v37->SchedulerAssist;
  if ( v38 )
  {
    if ( v37->NestingLevel <= 1u )
    {
      v70 = v38[6] - 1;
      v38[6] = v70;
      if ( !v70 )
        KiRemoveSystemWorkPriorityKick(v37);
    }
  }
  result = (unsigned int)KiIrqlFlags;
  v39 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v71 = KeGetCurrentPrcb();
        v72 = v71->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v4 = ((unsigned int)result & v72[5]) == 0;
        v72[5] &= result;
        if ( v4 )
          result = KiRemoveSystemWorkPriorityKick(v71);
      }
    }
  }
  __writecr8(v39);
  return result;
}
