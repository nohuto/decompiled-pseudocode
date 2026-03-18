/*
 * XREFs of MiMarkHugePfnGood @ 0x1403F2560
 * Callers:
 *     MiUnlinkBadPages @ 0x14052D5F8 (MiUnlinkBadPages.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     RtlAreBitsClearEx @ 0x14021F040 (RtlAreBitsClearEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1402636E0 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140263AA0 (MiLockDynamicMemoryExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402950F0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     MiHugePfnPartition @ 0x1403F20A0 (MiHugePfnPartition.c)
 *     MiIsPageInHugePfn @ 0x1403F20D4 (MiIsPageInHugePfn.c)
 *     MiInsertHugeRangeInList @ 0x140531B08 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x14053205C (MiUnlinkHugeRange.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMarkHugePfnGood(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v4; // ebp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  signed __int64 *v11; // rax
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v14 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( KeGetCurrentIrql() > 1u )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = (a1 >> 18) & 0x3FFFF;
  v6 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E488, 0LL);
  v7 = MiHugePfnPartition((_QWORD *)(qword_140C4E4F0 + 8 * v5));
  v8 = v7;
  if ( !v7 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E488, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4E488);
    KeAbPostRelease((ULONG_PTR)&qword_140C4E488);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 3221226548LL;
  }
  MiLockDynamicMemoryExclusive(v7, (__int64)CurrentThread);
  if ( (*(_DWORD *)(v8 + 4) & 1) != 0 )
  {
    MiUnlockDynamicMemoryExclusive(v8, (__int64)CurrentThread);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E488, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4E488);
    KeAbPostRelease((ULONG_PTR)&qword_140C4E488);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
    return 3221226548LL;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 4128), &LockHandle);
  if ( MiIsPageInHugePfn(a1) )
  {
    v9 = qword_140C4E4F0;
    if ( (*(_QWORD *)(qword_140C4E4F0 + 8 * v5) & 0x10000000000LL) != 0 )
    {
      v6 = *(_QWORD *)(v8 + 4896);
      while ( v6 )
      {
        v10 = *(_QWORD *)(v6 + 24) & 0x3FFFFLL;
        if ( v5 > v10 )
        {
          v6 = *(_QWORD *)(v6 + 8);
        }
        else
        {
          if ( v5 >= v10 )
            break;
          v6 = *(_QWORD *)v6;
        }
      }
      v11 = *(signed __int64 **)(v6 + 32);
      v12 = a1 & 0x3FFFF;
      *((_QWORD *)&v14 + 1) = v11;
      *(_QWORD *)&v14 = 0x40000LL;
      if ( _bittest64(v11, v12) )
      {
        _bittestandreset64(v11, v12);
        if ( RtlAreBitsClearEx((__int64)&v14, 0LL, 0x40000uLL) )
        {
          if ( (*(_DWORD *)(v9 + 8 * v5) & 0x1C0000) == 0x100000LL )
            MiUnlinkHugeRange(v8);
          RtlAvlRemoveNode((unsigned __int64 *)(v8 + 4896), (unsigned __int64 *)v6);
          *(_QWORD *)(v9 + 8 * v5) &= ~0x10000000000uLL;
          MiInsertHugeRangeInList(v5, 130LL, 0LL);
          goto LABEL_29;
        }
        v13 = *(_QWORD *)(v6 + 32);
        if ( _bittest64((const signed __int64 *)(v13 + 0x8000), v12) )
          _bittestandreset64((signed __int64 *)(v13 + 0x8000), v12);
      }
      v6 = 0LL;
    }
  }
  else
  {
    v4 = -1073740748;
  }
LABEL_29:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  MiUnlockDynamicMemoryExclusive(v8, (__int64)CurrentThread);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E488, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4E488);
  KeAbPostRelease((ULONG_PTR)&qword_140C4E488);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v6 )
  {
    ExFreePoolWithTag(*(PVOID *)(v6 + 32), 0);
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  return v4;
}
