/*
 * XREFs of CcCanIWriteStreamEx @ 0x1403134D0
 * Callers:
 *     CcCopyWriteWontFlush @ 0x14022BF00 (CcCopyWriteWontFlush.c)
 *     CcNotifyOfMappedWrite @ 0x14022D68C (CcNotifyOfMappedWrite.c)
 *     CcForceWriteThrough @ 0x1402CC9DC (CcForceWriteThrough.c)
 *     CcShouldLazyWriteCacheMap @ 0x1402F6014 (CcShouldLazyWriteCacheMap.c)
 *     CcScheduleReadAheadEx @ 0x1402F8E00 (CcScheduleReadAheadEx.c)
 *     CcCanIWrite @ 0x1403131D0 (CcCanIWrite.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 *     CcPostDeferredWrites @ 0x1404EA2F0 (CcPostDeferredWrites.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     MmEnoughMemoryForWrite @ 0x140274618 (MmEnoughMemoryForWrite.c)
 *     MiSufficientAvailablePages @ 0x140275470 (MiSufficientAvailablePages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     CcIsFileObjectDirectMapped @ 0x1402C14B4 (CcIsFileObjectDirectMapped.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
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
  unsigned __int64 *v11; // r8
  __int64 v12; // rbx
  char v13; // cl
  __int64 v14; // r12
  volatile __int64 *v15; // rsi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v18; // rdx
  __int64 Next; // rax
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  unsigned __int64 OldIrql; // rbx
  __int64 v23; // rbx
  bool v24; // r14
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v28; // rcx
  unsigned int v29; // edx
  bool v30; // r12
  unsigned __int16 **v31; // r8
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  bool IsFileObjectDirectMapped; // al
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  bool v40; // zf
  int v41; // eax
  unsigned __int64 v42; // rsi
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  unsigned __int16 *v47; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-40h] BYREF
  __int128 v49; // [rsp+40h] [rbp-28h]
  __int64 v50; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+A8h] [rbp+40h]
  __int64 v53; // [rsp+B8h] [rbp+50h]
  bool v54; // [rsp+C0h] [rbp+58h]
  bool v55; // [rsp+C8h] [rbp+60h]

  v53 = a2;
  v7 = 0;
  v8 = 0;
  v9 = a2;
  LOBYTE(a2) = 0;
  v54 = 0;
  v11 = a1;
  v12 = ((a4 & 0xFFF) != 0) + (a4 >> 12);
  v50 = 0LL;
  v49 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a6 )
    *a6 = 0;
  if ( a3 > 0x1000000 )
    a3 = 0x1000000;
  v13 = a5;
  v14 = (a3 >> 12) + ((a3 & 0xFFF) != 0);
  if ( (a5 & 8) == 0 )
  {
    v15 = (volatile __int64 *)(v11 + 16);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = v11 + 16;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      v11 = a1;
      v9 = v53;
    }
    LockHandle.OldIrql = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v33 = v18[6];
        v18[6] = v33 + 1;
        if ( v33 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v11 = a1;
          v9 = v53;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v15);
    }
    else
    {
      a2 = _InterlockedExchange64(v15, (__int64)&LockHandle);
      if ( !a2 )
      {
LABEL_10:
        v13 = a5;
        LOBYTE(a2) = 0;
        v7 = 0;
        goto LABEL_11;
      }
      KxWaitForLockOwnerShip((__int64)&LockHandle, (_QWORD *)a2);
    }
    v9 = v53;
    v11 = a1;
    goto LABEL_10;
  }
LABEL_11:
  if ( v11[80] + v14 + v12 >= v11[83] )
  {
    v55 = 1;
    if ( v9 )
    {
      IsFileObjectDirectMapped = CcIsFileObjectDirectMapped(v9, v13 | 1);
      v11 = a1;
      a2 = IsFileObjectDirectMapped;
      v54 = IsFileObjectDirectMapped;
      v7 = 0;
      v55 = !IsFileObjectDirectMapped;
    }
  }
  else
  {
    v55 = 0;
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
            a2 = v54;
            if ( v11[80] + v14 + v12 >= v11[83] * (unsigned int)CcAzure_SoftThrottleLargeWriteAtPct / 0x64 )
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
      v11 = a1;
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
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle, a2, (__int64)v11, v9);
        v11 = a1;
        v7 = 0;
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    }
LABEL_19:
    v20 = KeGetCurrentPrcb();
    v21 = v20->SchedulerAssist;
    if ( v21 )
    {
      if ( v20->NestingLevel <= 1u )
      {
        v35 = v21[6] - 1;
        v21[6] = v35;
        if ( !v35 )
        {
          KiRemoveSystemWorkPriorityKick(v20);
          v11 = a1;
          v7 = 0;
        }
      }
    }
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v36 = KeGetCurrentIrql();
        if ( v36 <= 0xFu && LockHandle.OldIrql <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v40 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v40 )
            KiRemoveSystemWorkPriorityKick(v37);
          v11 = a1;
          v7 = 0;
        }
      }
    }
    __writecr8(OldIrql);
    LOBYTE(a2) = v54;
  }
  v23 = 0LL;
  if ( (_BYTE)a2 || !v53 )
  {
    v24 = v55;
  }
  else
  {
    v24 = v55;
    if ( (a5 & 0xA) == 0 && (*(_BYTE *)(*(_QWORD *)(v53 + 24) + 4LL) & 4) == 0 && !v55 )
    {
LABEL_27:
      v25 = qword_140C52940;
      v8 = 0;
      v26 = 450LL;
      if ( (_BYTE)dword_140CFB19C )
        v26 = 0x4000LL;
      if ( qword_140C52940 < v26 )
      {
        v31 = (unsigned __int16 **)&unk_140C51DE8;
        while ( 1 )
        {
          v47 = *v31;
          if ( dword_140C4DEFC )
            break;
LABEL_96:
          ++v31;
          v7 = 0;
          if ( (__int64)v31 > (__int64)&qword_140C51DF0 )
          {
            if ( qword_140C52AC0 < (unsigned __int64)(qword_140C52B30 + 800) )
              v8 = (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0x50uLL) != 0;
            return v8 != 0;
          }
        }
        while ( 1 )
        {
          v25 += *v47;
          if ( v25 >= v26 )
            break;
          ++v7;
          v47 += 8;
          if ( v7 >= dword_140C4DEFC )
            goto LABEL_96;
        }
      }
      v8 = 1;
      return v8 != 0;
    }
    if ( (a5 & 8) == 0 )
    {
      KeAcquireInStackQueuedSpinLock(v11 + 16, &LockHandle);
      v7 = 0;
    }
    v23 = *(_QWORD *)(v53 + 40);
    if ( v23 )
    {
      v28 = *(_QWORD *)(v23 + 8);
      if ( v28 )
      {
        v29 = *(_DWORD *)(v28 + 264);
        v30 = v29 && (v41 = *(_DWORD *)(v28 + 112)) != 0 && (int)v14 + v41 > v29;
        if ( *(_QWORD *)(*(_QWORD *)(v28 + 504) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages
          && (a5 & 4) == 0 )
        {
          v24 = 0;
        }
      }
      else
      {
        v30 = 0;
      }
      v8 = MmEnoughMemoryForWrite(v23);
      v7 = 0;
    }
    else
    {
      v30 = 0;
    }
    if ( (a5 & 8) == 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v42 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v43 = KeGetCurrentIrql();
          if ( v43 <= 0xFu && LockHandle.OldIrql <= 0xFu && v43 >= 2u )
          {
            v44 = KeGetCurrentPrcb();
            v45 = v44->SchedulerAssist;
            v46 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v40 = (v46 & v45[5]) == 0;
            v45[5] &= v46;
            if ( v40 )
              KiRemoveSystemWorkPriorityKick(v44);
          }
        }
      }
      __writecr8(v42);
      v7 = 0;
    }
    if ( v30 )
      return 0;
  }
  if ( v24 )
    return 0;
  if ( !v23 )
    goto LABEL_27;
  return v8 != 0;
}
