/*
 * XREFs of MiMarkHugePfnBad @ 0x1403EDD44
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x14052A460 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x140249BF0 (RtlAvlInsertNodeEx.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14026ADE8 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x14026B1A8 (MiLockDynamicMemoryExclusive.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402BF800 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiHugePfnPartition @ 0x1403EDC38 (MiHugePfnPartition.c)
 *     MiIsPageInHugePfn @ 0x1403EDC6C (MiIsPageInHugePfn.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiInsertHugeRangeInList @ 0x14052E138 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x14052E68C (MiUnlinkHugeRange.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiMarkHugePfnBad(unsigned __int64 a1, int a2)
{
  _QWORD *v2; // rsi
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v4; // ebp
  unsigned __int64 v5; // rdi
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 v9; // r13
  _QWORD *v11; // rdx
  PVOID PoolWithTag; // rax
  PVOID v13; // r15
  _QWORD *v14; // rax
  void *v15; // rsi
  bool v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  unsigned __int8 v22; // cl
  __int64 v23; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  PVOID P; // [rsp+90h] [rbp+8h]
  _QWORD *v27; // [rsp+A0h] [rbp+18h]
  __int64 v28; // [rsp+A8h] [rbp+20h]

  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = (a1 >> 18) & 0x3FFFF;
  P = 0LL;
  v28 = (__int64)CurrentThread;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E408, 0LL);
  v7 = (_QWORD *)(qword_140C4E470 + 8 * v5);
  while ( 1 )
  {
    v8 = MiHugePfnPartition(v7);
    v9 = v8;
    if ( !v8 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E408, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4E408);
      KeAbPostRelease((ULONG_PTR)&qword_140C4E408);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      return 3221226548LL;
    }
    MiLockDynamicMemoryExclusive(v8, (__int64)CurrentThread);
    if ( v9 == MiHugePfnPartition(v7) )
      break;
    MiUnlockDynamicMemoryExclusive(v9, (__int64)CurrentThread);
  }
  if ( (*(_DWORD *)(v9 + 4) & 1) != 0
    || (KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 4128), &LockHandle), !MiIsPageInHugePfn(a1)) )
  {
LABEL_15:
    v4 = -1073740748;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v11 = (_QWORD *)(qword_140C4E470 + 8 * v5);
    v27 = v11;
    if ( (*v11 & 0x10000000000LL) != 0 )
    {
      P = v2;
      v2 = *(_QWORD **)(v9 + 4896);
      while ( v2 )
      {
        v19 = v2[3] & 0x3FFFFLL;
        if ( v5 > v19 )
        {
          v2 = (_QWORD *)v2[1];
        }
        else
        {
          if ( v5 >= v19 )
            break;
          v2 = (_QWORD *)*v2;
        }
      }
      v4 = (*v11 & 0x1C0000LL) != 0x100000 ? 0x103 : 0;
      goto LABEL_42;
    }
    if ( v2 )
      break;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10000uLL, 0x7048694Du);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      goto LABEL_17;
    }
    memset(PoolWithTag, 0, 0x10000uLL);
    v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x7048694Du);
    v2 = v14;
    if ( !v14 )
    {
      v15 = v13;
      v4 = -1073741670;
      goto LABEL_18;
    }
    v14[3] = v5;
    v14[4] = v13;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 4128), &LockHandle);
    if ( !MiIsPageInHugePfn(a1) )
      goto LABEL_15;
  }
  v16 = 0;
  v17 = *(_QWORD **)(v9 + 4896);
  if ( !v17 )
    goto LABEL_34;
  while ( v5 < (v17[3] & 0x3FFFFuLL) )
  {
    v18 = (_QWORD *)*v17;
    if ( !*v17 )
      goto LABEL_34;
LABEL_32:
    v17 = v18;
  }
  v18 = (_QWORD *)v17[1];
  if ( v18 )
    goto LABEL_32;
  v16 = 1;
LABEL_34:
  RtlAvlInsertNodeEx((unsigned __int64 *)(v9 + 4896), (unsigned __int64)v17, v16, v2);
  v11 = v27;
  *v27 |= 0x10000000000uLL;
LABEL_42:
  v20 = v2[4];
  v21 = a1 & 0x3FFFF;
  if ( !_bittest64((const signed __int64 *)v20, v21) )
  {
    _bittestandset64((signed __int64 *)v20, v21);
    v20 = v2[4];
  }
  v22 = _bittest64((const signed __int64 *)(v20 + 0x8000), v21);
  if ( (a2 & 0x10000000) != 0 )
  {
    if ( !v22 )
      _bittestandset64((signed __int64 *)(v20 + 0x8000), v21);
  }
  else if ( v22 )
  {
    _bittestandreset64((signed __int64 *)(v20 + 0x8000), v21);
  }
  if ( (((*(_DWORD *)v11 & 0x1C0000) - 0x40000LL) & 0xFFFFFFFFFFFBFFFFuLL) == 0 )
  {
    v23 = MiHugePfnPartition(v11);
    MiUnlinkHugeRange(v23);
    MiInsertHugeRangeInList(v5, 160LL, 0LL);
  }
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_17:
  v15 = P;
LABEL_18:
  MiUnlockDynamicMemoryExclusive(v9, v28);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E408, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4E408);
  KeAbPostRelease((ULONG_PTR)&qword_140C4E408);
  KiLeaveGuardedRegionUnsafe(v28);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( v4 == -1073740748 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
  return v4;
}
