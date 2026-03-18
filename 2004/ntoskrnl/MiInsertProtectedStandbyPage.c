/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x140278FC0
 * Callers:
 *     MiInsertAndUnlockStandbyPages @ 0x140234630 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiMakeTransitionPte @ 0x140234290 (MiMakeTransitionPte.c)
 *     MiPfnReferenceCountIsZero @ 0x140234560 (MiPfnReferenceCountIsZero.c)
 *     MiInsertNumaStandbyPage @ 0x1402793E0 (MiInsertNumaStandbyPage.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     MiUpdateAvailableEvents @ 0x1403B2A94 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // r15
  char v7; // r8
  __int64 v8; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v11; // r12
  int v12; // eax
  __int64 result; // rax
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  struct _KEVENT *v18; // rbx
  unsigned __int64 v19; // rdi
  char v20; // al
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // r10
  __int64 v24; // r8
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  signed __int32 v27[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = *(_QWORD *)(a2 + 40);
  v5 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 3);
  if ( (v4 & 0x2000000000000LL) != 0 || byte_140C51E5E && _bittest64((const signed __int64 *)qword_140C52388, v6 >> 9) )
    return MiPfnReferenceCountIsZero(a2, v6);
  if ( !a1 )
    return MiPfnReferenceCountIsZero(a2, v6);
  v7 = *(_BYTE *)(a2 + 35);
  if ( (v7 & 0x10) != 0 )
    return MiPfnReferenceCountIsZero(a2, v6);
  if ( (v7 & 0x40) != 0 )
    return MiPfnReferenceCountIsZero(a2, v6);
  v8 = *(_QWORD *)(qword_140C4E448 + 8 * ((v4 >> 39) & 0x3FF));
  if ( *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) != v8 || (v7 & 7u) >= 5 )
    return MiPfnReferenceCountIsZero(a2, v6);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 2664);
  LockHandle.LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  v11 = (a1 + 0x58000000000LL) / 48;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v12 = SchedulerAssist[6];
      SchedulerAssist[6] = v12 + 1;
      if ( v12 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v8 + 2664);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)(v8 + 2664), (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  if ( (*(_BYTE *)(a1 + 35) & 8) == 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return MiPfnReferenceCountIsZero(a2, v6);
  }
  *(_BYTE *)(a2 + 35) |= 8u;
  v14 = MI_PFN_IS_PROTO(a2);
  v15 = 4352LL;
  if ( !v14 )
    v15 = 5056LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v15 + v8));
  memset(&v29, 0, sizeof(v29));
  v16 = _InterlockedIncrement64((volatile signed __int64 *)(v8 + 7104));
  if ( v16 <= 0x420 )
  {
    switch ( v16 )
    {
      case 0xA0uLL:
        v17 = 4968LL;
LABEL_30:
        v29.LockQueue.Next = 0LL;
        v29.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 4928);
        v18 = (struct _KEVENT *)(v8 + v17);
        KxAcquireQueuedSpinLock(&v29);
        KeSetEvent(v18, 0, 0);
        ++v18[1].Header.LockNV;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v29);
        break;
      case 0x420uLL:
        v17 = 5000LL;
        goto LABEL_30;
      case 0x22uLL:
        v17 = 4936LL;
        goto LABEL_30;
    }
  }
  v19 = v16 - 1;
  if ( v19 == *(_QWORD *)(v8 + 5168) || v19 == *(_QWORD *)(v8 + 5176) )
    MiUpdateAvailableEvents(v8);
  _InterlockedOr(v27, 0);
  v20 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  *(_BYTE *)(a2 + 34) = v20 & 0xF8 | 2;
  v21 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DD40 && (v21 & 0x10) == 0 )
    v21 &= ~qword_140C4DD40;
  v22 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v23 = 0xFFFFFFF000000000uLL;
  *(_QWORD *)a2 ^= (v11 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
  v24 = v6 & 0xFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) = v22 | *(_QWORD *)(a2 + 24) & 0xFFFFFFF000000000uLL;
  if ( ((v21 >> 12) & 0xFFFFFFFFFLL) == v11 )
    *(_QWORD *)(a1 + 16) = MiMakeTransitionPte(v6, 4);
  else
    *(_QWORD *)(48 * v22 - 0x58000000000LL) = v24 | *(_QWORD *)(48 * v22 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
  *(_QWORD *)(a1 + 40) = v24 | v23 & *(_QWORD *)(a1 + 40);
  MiInsertNumaStandbyPage(a2);
  ++*(_QWORD *)(v8 + 2632);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&LockHandle);
    result = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                 0LL,
                 (signed __int64)&LockHandle);
      if ( (struct _KLOCK_QUEUE_HANDLE *)result == &LockHandle )
        goto LABEL_46;
      result = KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
    goto LABEL_46;
  }
  result = KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_46:
  v25 = KeGetCurrentPrcb();
  v26 = v25->SchedulerAssist;
  if ( v26 && v25->NestingLevel <= 1u )
  {
    result = (unsigned int)(v26[6] - 1);
    v26[6] = result;
    if ( !(_DWORD)result )
      return KiRemoveSystemWorkPriorityKick(v25);
  }
  return result;
}
