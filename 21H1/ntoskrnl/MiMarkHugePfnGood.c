/*
 * XREFs of MiMarkHugePfnGood @ 0x1403ED038
 * Callers:
 *     MiUnlinkBadPages @ 0x1405295D8 (MiUnlinkBadPages.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1402D4788 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1402D4B48 (MiLockDynamicMemoryExclusive.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402DAA90 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlAreBitsClearEx @ 0x1402F54A0 (RtlAreBitsClearEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiHugePfnPartition @ 0x1403ECB78 (MiHugePfnPartition.c)
 *     MiIsPageInHugePfn @ 0x1403ECBAC (MiIsPageInHugePfn.c)
 *     MiInsertHugeRangeInList @ 0x14052DAE8 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x14052E03C (MiUnlinkHugeRange.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMarkHugePfnGood(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v4; // ebp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  unsigned __int64 v16; // rax
  signed __int64 *v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 v23; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v23 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( KeGetCurrentIrql() > 1u )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = (a1 >> 18) & 0x3FFFF;
  v6 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E548, 0LL);
  v7 = MiHugePfnPartition((_QWORD *)(qword_140C4E5B0 + 8 * v5));
  v8 = v7;
  if ( !v7 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E548, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4E548);
    KeAbPostRelease((ULONG_PTR)&qword_140C4E548);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v9, v10, v11);
    return 3221226548LL;
  }
  MiLockDynamicMemoryExclusive(v7, (__int64)CurrentThread);
  if ( (*(_DWORD *)(v8 + 4) & 1) != 0 )
  {
    MiUnlockDynamicMemoryExclusive(v8, (__int64)CurrentThread);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E548, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4E548);
    KeAbPostRelease((ULONG_PTR)&qword_140C4E548);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
    return 3221226548LL;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 4128), &LockHandle);
  if ( MiIsPageInHugePfn(a1) )
  {
    v15 = qword_140C4E5B0;
    if ( (*(_QWORD *)(qword_140C4E5B0 + 8 * v5) & 0x10000000000LL) != 0 )
    {
      v6 = *(_QWORD *)(v8 + 4896);
      while ( v6 )
      {
        v16 = *(_QWORD *)(v6 + 24) & 0x3FFFFLL;
        if ( v5 > v16 )
        {
          v6 = *(_QWORD *)(v6 + 8);
        }
        else
        {
          if ( v5 >= v16 )
            break;
          v6 = *(_QWORD *)v6;
        }
      }
      v17 = *(signed __int64 **)(v6 + 32);
      v18 = a1 & 0x3FFFF;
      *((_QWORD *)&v23 + 1) = v17;
      *(_QWORD *)&v23 = 0x40000LL;
      if ( _bittest64(v17, v18) )
      {
        _bittestandreset64(v17, v18);
        if ( RtlAreBitsClearEx((__int64)&v23, 0LL, 0x40000uLL) )
        {
          if ( (*(_DWORD *)(v15 + 8 * v5) & 0x1C0000) == 0x100000LL )
            MiUnlinkHugeRange(v8);
          RtlAvlRemoveNode((unsigned __int64 *)(v8 + 4896), (unsigned __int64 *)v6);
          *(_QWORD *)(v15 + 8 * v5) &= ~0x10000000000uLL;
          MiInsertHugeRangeInList(v5, 130LL, 0LL);
          goto LABEL_29;
        }
        v19 = *(_QWORD *)(v6 + 32);
        if ( _bittest64((const signed __int64 *)(v19 + 0x8000), v18) )
          _bittestandreset64((signed __int64 *)(v19 + 0x8000), v18);
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E548, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4E548);
  KeAbPostRelease((ULONG_PTR)&qword_140C4E548);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v20, v21, v22);
  if ( v6 )
  {
    ExFreePoolWithTag(*(PVOID *)(v6 + 32), 0);
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  return v4;
}
