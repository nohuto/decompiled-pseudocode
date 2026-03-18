/*
 * XREFs of CcUnpinFileDataEx @ 0x14028A370
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x140289260 (CcAcquireByteRangeForWrite.c)
 *     CcGetDirtyPagesHelper @ 0x140289D20 (CcGetDirtyPagesHelper.c)
 *     CcReleaseByteRangeFromWrite @ 0x14028A258 (CcReleaseByteRangeFromWrite.c)
 *     CcMapDataForOverwrite @ 0x14029C154 (CcMapDataForOverwrite.c)
 *     CcZeroDataInCache @ 0x14029C34C (CcZeroDataInCache.c)
 *     CcPinFileData @ 0x14032AD00 (CcPinFileData.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 *     CcUnpinData @ 0x1406FE6A0 (CcUnpinData.c)
 *     CcMapData @ 0x1407BDE60 (CcMapData.c)
 *     CcUnpinDataForThread @ 0x14090BB90 (CcUnpinDataForThread.c)
 * Callees:
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1402368F4 (CcInsertIntoCleanSharedCacheMapList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     CcDeallocateBcb @ 0x14028A78C (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14028AD10 (CcDeductDirtyPages.c)
 *     CcAdjustVacbLevelLockCount @ 0x14028D878 (CcAdjustVacbLevelLockCount.c)
 *     ExpAcquireFastMutexContended @ 0x14029EF4C (ExpAcquireFastMutexContended.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpReleaseFastMutexContended @ 0x140359548 (ExpReleaseFastMutexContended.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

LONG __fastcall CcUnpinFileDataEx(char *P, char a2, int a3)
{
  ULONG_PTR v3; // rdi
  LONG result; // eax
  __int64 v7; // rdi
  struct _KEVENT *v8; // rcx
  __int64 v9; // r15
  struct _KTHREAD *CurrentThread; // r13
  volatile signed __int32 *v11; // r14
  __int64 v12; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v14; // rcx
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // r12
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  unsigned __int32 v21; // eax
  struct _KEVENT *v22; // rcx
  unsigned int v23; // edi
  unsigned int v24; // eax
  unsigned __int64 OldIrql; // rdi
  char **v26; // rdx
  PVOID *v27; // rcx
  __int64 v28; // rdi
  struct _KEVENT *v29; // rcx
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  int v37; // eax
  _DWORD *v38; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  result = 765;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_WORD *)P != 765 )
  {
    v7 = *((_QWORD *)P + 1);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)P + 4) )
    {
      v8 = *(struct _KEVENT **)(v7 + 184);
      if ( v8 )
        result = KeSetEvent(v8, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 544));
    }
    return result;
  }
  v9 = *((_QWORD *)P + 22);
  v40 = *(_QWORD *)(v9 + 528);
  if ( (*(_DWORD *)(v9 + 152) & 0x200) == 0 || a3 == 1 )
    a2 = 1;
  CurrentThread = KeGetCurrentThread();
  v11 = (volatile signed __int32 *)(v9 + 280);
  v12 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v9 + 280, CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v14, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v14);
    _enable();
    v12 = (__int64)(&CurrentThread[1].Process + 12 * v14);
    if ( (unsigned __int64)v11 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v12 + 8) = SessionId;
    *(_QWORD *)v12 = (unsigned __int64)v11 & 0x7FFFFFFFFFFFFFFCLL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v11, 0) )
    ExpAcquireFastMutexContended(v9 + 280, v12);
  if ( v12 )
    *(_BYTE *)(v12 + 18) = 1;
  *(_QWORD *)(v9 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v9 + 328) = CurrentIrql;
  if ( (unsigned int)v3 > 1 )
  {
    if ( (_DWORD)v3 != 2 )
      KeBugCheckEx(0x34u, 0x20498uLL, v3, 0LL, 0LL);
    if ( P[2] )
    {
      v23 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      *((_QWORD *)P + 6) = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v40 + 704), &LockHandle);
      CcDeductDirtyPages(v9, v23);
      v24 = *(_DWORD *)(v40 + 912) - v23;
      if ( *(_DWORD *)(v40 + 912) <= v23 )
        v24 = 0;
      *(_DWORD *)(v40 + 912) = v24;
      if ( !*(_DWORD *)(v9 + 112) && *(_DWORD *)(v9 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v9);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v30 = KeGetCurrentIrql();
          if ( v30 <= 0xFu && LockHandle.OldIrql <= 0xFu && v30 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v34 = (v33 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v33;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    v18 = *((_DWORD *)P + 16);
  }
  else
  {
    v17 = *((_DWORD *)P + 16);
    if ( !v17 )
      KeBugCheckEx(0x34u, 0x461uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v18 = v17 - 1;
    *((_DWORD *)P + 16) = v18;
  }
  if ( v18 )
  {
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    v20 = *(unsigned __int8 *)(v9 + 328);
    *(_QWORD *)(v9 + 288) = 0LL;
    v21 = _InterlockedCompareExchange(v11, 1, 0);
    if ( !v21 )
      goto LABEL_27;
LABEL_43:
    ExpReleaseFastMutexContended(v9 + 280, v21);
LABEL_27:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
          v38 = v36->SchedulerAssist;
          v34 = (v37 & v38[5]) == 0;
          v38[5] &= v37;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
    }
    __writecr8(v20);
    return KeAbPostRelease(v9 + 280);
  }
  if ( P[2] )
  {
    if ( *((_QWORD *)P + 23) )
    {
      v19 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v22 = *(struct _KEVENT **)(v19 + 184);
        if ( v22 )
          KeSetEvent(v22, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v19 + 544));
      }
      *((_QWORD *)P + 23) = 0LL;
      *((_QWORD *)P + 7) = 0LL;
    }
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    v20 = *(unsigned __int8 *)(v9 + 328);
    *(_QWORD *)(v9 + 288) = 0LL;
    v21 = _InterlockedCompareExchange(v11, 1, 0);
    if ( !v21 )
      goto LABEL_27;
    goto LABEL_43;
  }
  ExAcquirePushLockExclusiveEx(v9 + 104, 0LL);
  v26 = (char **)*((_QWORD *)P + 2);
  v27 = (PVOID *)*((_QWORD *)P + 3);
  if ( v26[1] != P + 16 || *v27 != P + 16 )
    __fastfail(3u);
  *v27 = v26;
  v26[1] = (char *)v27;
  if ( *(__int64 *)(v9 + 32) > 0x2000000 && (*(_DWORD *)(v9 + 152) & 0x200) != 0 )
    CcAdjustVacbLevelLockCount(v9, *((_QWORD *)P + 1), 0xFFFFFFFFLL);
  ExReleasePushLockEx(v9 + 104, 0LL);
  if ( *((_QWORD *)P + 23) )
  {
    v28 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
    {
      v29 = *(struct _KEVENT **)(v28 + 184);
      if ( v29 )
        KeSetEvent(v29, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v28 + 544));
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v9 + 280));
  return CcDeallocateBcb(P);
}
