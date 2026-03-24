/*
 * XREFs of CcDeleteBcbs @ 0x1402D2640
 * Callers:
 *     CcSetFileSizesEx @ 0x14022E120 (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x1402F3DDC (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcDeallocateBcb @ 0x1402F5060 (CcDeallocateBcb.c)
 *     CcAdjustVacbLevelLockCount @ 0x1402F56B4 (CcAdjustVacbLevelLockCount.c)
 *     CcDeductDirtyPages @ 0x140312DEC (CcDeductDirtyPages.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDeleteBcbs(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r15
  _QWORD *v4; // rdi
  _WORD *v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rbp
  struct _KEVENT *v9; // rcx
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  result = CcGetPartition(a1);
  v3 = result;
  v4 = *(_QWORD **)(a1 + 16);
  while ( v4 != (_QWORD *)(a1 + 16) )
  {
    v5 = v4 - 2;
    result = 765LL;
    v6 = v4;
    v4 = (_QWORD *)*v4;
    if ( *v5 == 765 )
    {
      if ( *((_DWORD *)v5 + 16) )
        KeBugCheckEx(0x34u, 0xD7DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v7 = (_QWORD *)v6[1];
      if ( (_QWORD *)v4[1] != v6 || (_QWORD *)*v7 != v6 )
        __fastfail(3u);
      *v7 = v4;
      v4[1] = v7;
      if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
        CcAdjustVacbLevelLockCount(a1, *((_QWORD *)v5 + 1), 0xFFFFFFFFLL);
      if ( *((_QWORD *)v5 + 23) )
      {
        v8 = *(_QWORD *)(*((_QWORD *)v5 + 7) + 8LL);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v5 + 7) + 16LL)) )
        {
          v9 = *(struct _KEVENT **)(v8 + 184);
          if ( v9 )
            KeSetEvent(v9, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v8 + 544));
        }
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 128), &LockHandle);
      if ( *((_BYTE *)v5 + 2) )
        CcDeductDirtyPages(a1, *((_DWORD *)v5 + 1) >> 12);
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
            v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v15 = (v14 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v14;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      result = CcDeallocateBcb(v5);
    }
  }
  return result;
}
