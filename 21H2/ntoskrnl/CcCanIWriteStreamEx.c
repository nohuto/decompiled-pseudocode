/*
 * XREFs of CcCanIWriteStreamEx @ 0x14031E220
 * Callers:
 *     CcForceWriteThrough @ 0x14024B03C (CcForceWriteThrough.c)
 *     CcCopyWriteWontFlush @ 0x1402D0780 (CcCopyWriteWontFlush.c)
 *     CcNotifyOfMappedWrite @ 0x1402D1EDC (CcNotifyOfMappedWrite.c)
 *     CcShouldLazyWriteCacheMap @ 0x140300D64 (CcShouldLazyWriteCacheMap.c)
 *     CcScheduleReadAheadEx @ 0x140303B50 (CcScheduleReadAheadEx.c)
 *     CcCanIWrite @ 0x14031DF20 (CcCanIWrite.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 *     CcPostDeferredWrites @ 0x1404EA530 (CcPostDeferredWrites.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     CcIsFileObjectDirectMapped @ 0x14023F954 (CcIsFileObjectDirectMapped.c)
 *     MmEnoughMemoryForWrite @ 0x1402625B8 (MmEnoughMemoryForWrite.c)
 *     MiSufficientAvailablePages @ 0x140263410 (MiSufficientAvailablePages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

bool __fastcall CcCanIWriteStreamEx(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        _BYTE *a6)
{
  unsigned int v7; // r10d
  char v8; // di
  __int64 v9; // r9
  bool v10; // dl
  unsigned __int64 *v12; // r8
  __int64 v13; // rbx
  char v14; // cl
  __int64 v15; // r12
  volatile __int64 *v16; // rsi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v19; // rdx
  _QWORD *v20; // rdx
  __int64 Next; // rax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  unsigned __int64 OldIrql; // rbx
  __int64 v25; // rbx
  bool v26; // r14
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v30; // rcx
  unsigned int v31; // edx
  bool v32; // r12
  unsigned __int16 **v33; // r8
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  bool IsFileObjectDirectMapped; // al
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  bool v42; // zf
  int v43; // eax
  unsigned __int64 v44; // rsi
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  unsigned __int16 *v49; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-40h] BYREF
  __int128 v51; // [rsp+40h] [rbp-28h]
  __int64 v52; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+A8h] [rbp+40h]
  bool v56; // [rsp+C0h] [rbp+58h]
  bool v57; // [rsp+C8h] [rbp+60h]

  v7 = 0;
  v8 = 0;
  v9 = a2;
  v10 = 0;
  v56 = 0;
  v12 = a1;
  v13 = ((a4 & 0xFFF) != 0) + (a4 >> 12);
  v52 = 0LL;
  v51 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a6 )
    *a6 = 0;
  if ( a3 > 0x1000000 )
    a3 = 0x1000000;
  v14 = a5;
  v15 = (a3 >> 12) + ((a3 & 0xFFF) != 0);
  if ( (a5 & 8) == 0 )
  {
    v16 = (volatile __int64 *)(v12 + 16);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = v12 + 16;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      v12 = a1;
      v9 = a2;
    }
    LockHandle.OldIrql = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    v19 = CurrentPrcb->SchedulerAssist;
    if ( v19 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v35 = v19[6];
        v19[6] = v35 + 1;
        if ( v35 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v12 = a1;
          v9 = a2;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v16);
    }
    else
    {
      v20 = (_QWORD *)_InterlockedExchange64(v16, (__int64)&LockHandle);
      if ( !v20 )
      {
LABEL_10:
        v14 = a5;
        v10 = 0;
        v7 = 0;
        goto LABEL_11;
      }
      KxWaitForLockOwnerShip((__int64)&LockHandle, v20);
    }
    v9 = a2;
    v12 = a1;
    goto LABEL_10;
  }
LABEL_11:
  if ( v12[80] + v15 + v13 >= v12[83] )
  {
    v57 = 1;
    if ( v9 )
    {
      IsFileObjectDirectMapped = CcIsFileObjectDirectMapped(v9, v14 | 1);
      v12 = a1;
      v10 = IsFileObjectDirectMapped;
      v56 = IsFileObjectDirectMapped;
      v7 = 0;
      v57 = !IsFileObjectDirectMapped;
    }
  }
  else
  {
    v57 = 0;
  }
  if ( a6 )
  {
    if ( CcAzure_SoftThrottleLargeWriteAtPct )
    {
      if ( CcAzure_LargeWriteSize )
      {
        if ( a3 )
        {
          if ( a3 >= CcAzure_LargeWriteSize )
          {
            v10 = v56;
            if ( v12[80] + v15 + v13 >= v12[83] * (unsigned int)CcAzure_SoftThrottleLargeWriteAtPct / 0x64 )
              *a6 = 1;
          }
        }
      }
    }
  }
  if ( (a5 & 8) == 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      v12 = a1;
      v7 = 0;
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
          goto LABEL_19;
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
        v12 = a1;
        v7 = 0;
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    }
LABEL_19:
    v22 = KeGetCurrentPrcb();
    v23 = v22->SchedulerAssist;
    if ( v23 )
    {
      if ( v22->NestingLevel <= 1u )
      {
        v37 = v23[6] - 1;
        v23[6] = v37;
        if ( !v37 )
        {
          KiRemoveSystemWorkPriorityKick(v22);
          v12 = a1;
          v7 = 0;
        }
      }
    }
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && LockHandle.OldIrql <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = v39->SchedulerAssist;
          v41 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v42 = (v41 & v40[5]) == 0;
          v40[5] &= v41;
          if ( v42 )
            KiRemoveSystemWorkPriorityKick(v39);
          v12 = a1;
          v7 = 0;
        }
      }
    }
    __writecr8(OldIrql);
    v10 = v56;
  }
  v25 = 0LL;
  if ( v10 || !a2 )
  {
    v26 = v57;
  }
  else
  {
    v26 = v57;
    if ( (a5 & 0xA) == 0 && (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 4LL) & 4) == 0 && !v57 )
    {
LABEL_27:
      v27 = qword_140C52980;
      v8 = 0;
      v28 = 450LL;
      if ( (_BYTE)dword_140CFB19C )
        v28 = 0x4000LL;
      if ( qword_140C52980 < v28 )
      {
        v33 = (unsigned __int16 **)&unk_140C51E28;
        while ( 1 )
        {
          v49 = *v33;
          if ( dword_140C4DF3C )
            break;
LABEL_96:
          ++v33;
          v7 = 0;
          if ( (__int64)v33 > (__int64)&qword_140C51E30 )
          {
            if ( qword_140C52B00 < (unsigned __int64)(qword_140C52B70 + 800) )
              v8 = (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0x50uLL) != 0;
            return v8 != 0;
          }
        }
        while ( 1 )
        {
          v27 += *v49;
          if ( v27 >= v28 )
            break;
          ++v7;
          v49 += 8;
          if ( v7 >= dword_140C4DF3C )
            goto LABEL_96;
        }
      }
      v8 = 1;
      return v8 != 0;
    }
    if ( (a5 & 8) == 0 )
    {
      KeAcquireInStackQueuedSpinLock(v12 + 16, &LockHandle);
      v7 = 0;
    }
    v25 = *(_QWORD *)(a2 + 40);
    if ( v25 )
    {
      v30 = *(_QWORD *)(v25 + 8);
      if ( v30 )
      {
        v31 = *(_DWORD *)(v30 + 264);
        v32 = v31 && (v43 = *(_DWORD *)(v30 + 112)) != 0 && (int)v15 + v43 > v31;
        if ( *(_QWORD *)(*(_QWORD *)(v30 + 504) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages
          && (a5 & 4) == 0 )
        {
          v26 = 0;
        }
      }
      else
      {
        v32 = 0;
      }
      v8 = MmEnoughMemoryForWrite(v25);
      v7 = 0;
    }
    else
    {
      v32 = 0;
    }
    if ( (a5 & 8) == 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v44 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v45 = KeGetCurrentIrql();
          if ( v45 <= 0xFu && LockHandle.OldIrql <= 0xFu && v45 >= 2u )
          {
            v46 = KeGetCurrentPrcb();
            v47 = v46->SchedulerAssist;
            v48 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v42 = (v48 & v47[5]) == 0;
            v47[5] &= v48;
            if ( v42 )
              KiRemoveSystemWorkPriorityKick(v46);
          }
        }
      }
      __writecr8(v44);
      v7 = 0;
    }
    if ( v32 )
      return 0;
  }
  if ( v26 )
    return 0;
  if ( !v25 )
    goto LABEL_27;
  return v8 != 0;
}
