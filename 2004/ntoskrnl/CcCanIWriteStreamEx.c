/*
 * XREFs of CcCanIWriteStreamEx @ 0x1402C1270
 * Callers:
 *     CcCopyWriteWontFlush @ 0x140222020 (CcCopyWriteWontFlush.c)
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     CcNotifyOfMappedWrite @ 0x1402BF88C (CcNotifyOfMappedWrite.c)
 *     CcCanIWrite @ 0x1402C0F70 (CcCanIWrite.c)
 *     CcShouldLazyWriteCacheMap @ 0x1402C63DC (CcShouldLazyWriteCacheMap.c)
 *     CcScheduleReadAheadEx @ 0x1402C8600 (CcScheduleReadAheadEx.c)
 *     CcForceWriteThrough @ 0x14035A9BC (CcForceWriteThrough.c)
 *     CcPostDeferredWrites @ 0x1404E51D0 (CcPostDeferredWrites.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSufficientAvailablePages @ 0x1402488D0 (MiSufficientAvailablePages.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     MmEnoughMemoryForWrite @ 0x1402C4E58 (MmEnoughMemoryForWrite.c)
 *     CcIsFileObjectDirectMapped @ 0x14034F114 (CcIsFileObjectDirectMapped.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 */

bool __fastcall CcCanIWriteStreamEx(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        _BYTE *a6)
{
  unsigned int v7; // r10d
  char v8; // di
  __int64 v9; // r9
  unsigned __int64 *v11; // r8
  __int64 v12; // rbx
  int v13; // ecx
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
  bool v29; // r12
  unsigned __int16 **v30; // r8
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  unsigned __int8 IsFileObjectDirectMapped; // al
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  int v37; // eax
  bool v38; // zf
  int v39; // eax
  unsigned __int64 v40; // rsi
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r9
  _DWORD *v43; // r8
  int v44; // eax
  unsigned __int16 *v45; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-40h] BYREF
  __int128 v47; // [rsp+40h] [rbp-28h]
  __int64 v48; // [rsp+50h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+40h]
  __int64 v51; // [rsp+B8h] [rbp+50h]
  unsigned __int8 v52; // [rsp+C0h] [rbp+58h]
  bool v53; // [rsp+C8h] [rbp+60h]

  v51 = a2;
  v7 = 0;
  v8 = 0;
  v9 = a2;
  LOBYTE(a2) = 0;
  v52 = 0;
  v11 = a1;
  v12 = ((a4 & 0xFFF) != 0) + (a4 >> 12);
  v48 = 0LL;
  v47 = 0LL;
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
      v9 = v51;
    }
    LockHandle.OldIrql = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v32 = v18[6];
        v18[6] = v32 + 1;
        if ( v32 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v11 = a1;
          v9 = v51;
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
      KxWaitForLockOwnerShip((__int64)&LockHandle, (_QWORD *)a2, (__int64)v11, v9);
    }
    v9 = v51;
    v11 = a1;
    goto LABEL_10;
  }
LABEL_11:
  if ( v11[80] + v14 + v12 >= v11[83] )
  {
    v53 = 1;
    if ( v9 )
    {
      IsFileObjectDirectMapped = CcIsFileObjectDirectMapped(v9, v13 | 1u);
      v11 = a1;
      a2 = IsFileObjectDirectMapped;
      v52 = IsFileObjectDirectMapped;
      v7 = 0;
      v53 = IsFileObjectDirectMapped == 0;
    }
  }
  else
  {
    v53 = 0;
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
            a2 = v52;
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
        v34 = v21[6] - 1;
        v21[6] = v34;
        if ( !v34 )
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
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && LockHandle.OldIrql <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v9 = (__int64)v36->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v38 = (v37 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v37;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick(v36);
          v11 = a1;
          v7 = 0;
        }
      }
    }
    __writecr8(OldIrql);
    a2 = v52;
  }
  v23 = 0LL;
  if ( (_BYTE)a2 || !v51 )
  {
    v24 = v53;
  }
  else
  {
    v24 = v53;
    if ( (a5 & 0xA) == 0 && (*(_BYTE *)(*(_QWORD *)(v51 + 24) + 4LL) & 4) == 0 && !v53 )
    {
LABEL_27:
      v25 = qword_140C52740;
      v8 = 0;
      v26 = 450LL;
      if ( (_BYTE)dword_140CFB19C )
        v26 = 0x4000LL;
      if ( qword_140C52740 < v26 )
      {
        v30 = (unsigned __int16 **)&unk_140C51BE8;
        while ( 1 )
        {
          v45 = *v30;
          if ( dword_140C4DCFC )
            break;
LABEL_96:
          ++v30;
          v7 = 0;
          if ( (__int64)v30 > (__int64)&qword_140C51BF0 )
          {
            if ( qword_140C528C0 < (unsigned __int64)(qword_140C52930 + 800) )
              v8 = (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0x50uLL) != 0;
            return v8 != 0;
          }
        }
        while ( 1 )
        {
          v25 += *v45;
          if ( v25 >= v26 )
            break;
          ++v7;
          v45 += 8;
          if ( v7 >= dword_140C4DCFC )
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
    v23 = *(_QWORD *)(v51 + 40);
    if ( v23 )
    {
      v28 = *(_QWORD *)(v23 + 8);
      if ( v28 )
      {
        a2 = *(unsigned int *)(v28 + 264);
        v29 = (_DWORD)a2 && (v39 = *(_DWORD *)(v28 + 112)) != 0 && (int)v14 + v39 > (unsigned int)a2;
        if ( *(_QWORD *)(*(_QWORD *)(v28 + 504) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages
          && (a5 & 4) == 0 )
        {
          v24 = 0;
        }
      }
      else
      {
        v29 = 0;
      }
      v8 = MmEnoughMemoryForWrite(v23, a2, v11, v9);
      v7 = 0;
    }
    else
    {
      v29 = 0;
    }
    if ( (a5 & 8) == 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v40 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v41 = KeGetCurrentIrql();
          if ( v41 <= 0xFu && LockHandle.OldIrql <= 0xFu && v41 >= 2u )
          {
            v42 = KeGetCurrentPrcb();
            v43 = v42->SchedulerAssist;
            v44 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v38 = (v44 & v43[5]) == 0;
            v43[5] &= v44;
            if ( v38 )
              KiRemoveSystemWorkPriorityKick(v42);
          }
        }
      }
      __writecr8(v40);
      v7 = 0;
    }
    if ( v29 )
      return 0;
  }
  if ( v24 )
    return 0;
  if ( !v23 )
    goto LABEL_27;
  return v8 != 0;
}
