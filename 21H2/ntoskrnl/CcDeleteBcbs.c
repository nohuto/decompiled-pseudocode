/*
 * XREFs of CcDeleteBcbs @ 0x140250A10
 * Callers:
 *     CcSetFileSizesEx @ 0x1402D2970 (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x1402FEB2C (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDeallocateBcb @ 0x1402FFDB0 (CcDeallocateBcb.c)
 *     CcAdjustVacbLevelLockCount @ 0x140300404 (CcAdjustVacbLevelLockCount.c)
 *     CcDeductDirtyPages @ 0x14031DB3C (CcDeductDirtyPages.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDeleteBcbs(__int64 a1, char a2, char a3)
{
  __int64 result; // rax
  __int64 v5; // r15
  _QWORD *v6; // rdi
  _WORD *v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rbp
  struct _KEVENT *v11; // rcx
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  result = CcGetPartition(a1, a2, a3);
  v5 = result;
  v6 = *(_QWORD **)(a1 + 16);
  while ( v6 != (_QWORD *)(a1 + 16) )
  {
    v7 = v6 - 2;
    result = 765LL;
    v8 = v6;
    v6 = (_QWORD *)*v6;
    if ( *v7 == 765 )
    {
      if ( *((_DWORD *)v7 + 16) )
        KeBugCheckEx(0x34u, 0xD7DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v9 = (_QWORD *)v8[1];
      if ( (_QWORD *)v6[1] != v8 || (_QWORD *)*v9 != v8 )
        __fastfail(3u);
      *v9 = v6;
      v6[1] = v9;
      if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
        CcAdjustVacbLevelLockCount(a1, *((_QWORD *)v7 + 1), 0xFFFFFFFFLL);
      if ( *((_QWORD *)v7 + 23) )
      {
        v10 = *(_QWORD *)(*((_QWORD *)v7 + 7) + 8LL);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v7 + 7) + 16LL)) )
        {
          v11 = *(struct _KEVENT **)(v10 + 184);
          if ( v11 )
            KeSetEvent(v11, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v10 + 544));
        }
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
      if ( *((_BYTE *)v7 + 2) )
        CcDeductDirtyPages(a1, *((_DWORD *)v7 + 1) >> 12);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v17 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      result = CcDeallocateBcb(v7);
    }
  }
  return result;
}
