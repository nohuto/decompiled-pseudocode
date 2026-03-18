/*
 * XREFs of MiMarkHugePfnBad @ 0x1403ECC84
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x140529E10 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x1402A2C20 (RtlAvlInsertNodeEx.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1402D4788 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1402D4B48 (MiLockDynamicMemoryExclusive.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402DAA90 (KeReleaseInStackQueuedSpinLock.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiHugePfnPartition @ 0x1403ECB78 (MiHugePfnPartition.c)
 *     MiIsPageInHugePfn @ 0x1403ECBAC (MiIsPageInHugePfn.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiInsertHugeRangeInList @ 0x14052DAE8 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x14052E03C (MiUnlinkHugeRange.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v14; // rdx
  PVOID PoolWithTag; // rax
  PVOID v16; // r15
  _QWORD *v17; // rax
  void *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // r12
  unsigned __int8 v28; // cl
  __int64 v29; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  PVOID P; // [rsp+90h] [rbp+8h]
  _QWORD *v33; // [rsp+A0h] [rbp+18h]
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = (a1 >> 18) & 0x3FFFF;
  P = 0LL;
  v34 = (__int64)CurrentThread;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E548, 0LL);
  v7 = (_QWORD *)(qword_140C4E5B0 + 8 * v5);
  while ( 1 )
  {
    v8 = MiHugePfnPartition(v7);
    v9 = v8;
    if ( !v8 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E548, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4E548);
      KeAbPostRelease((ULONG_PTR)&qword_140C4E548);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v10, v11, v12);
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
    v14 = (_QWORD *)(qword_140C4E5B0 + 8 * v5);
    v33 = v14;
    if ( (*v14 & 0x10000000000LL) != 0 )
    {
      P = v2;
      v2 = *(_QWORD **)(v9 + 4896);
      while ( v2 )
      {
        v25 = v2[3] & 0x3FFFFLL;
        if ( v5 > v25 )
        {
          v2 = (_QWORD *)v2[1];
        }
        else
        {
          if ( v5 >= v25 )
            break;
          v2 = (_QWORD *)*v2;
        }
      }
      v4 = (*v14 & 0x1C0000LL) != 0x100000 ? 0x103 : 0;
      goto LABEL_42;
    }
    if ( v2 )
      break;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10000uLL, 0x7048694Du);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      goto LABEL_17;
    }
    memset(PoolWithTag, 0, 0x10000uLL);
    v17 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x7048694Du);
    v2 = v17;
    if ( !v17 )
    {
      v18 = v16;
      v4 = -1073741670;
      goto LABEL_18;
    }
    v17[3] = v5;
    v17[4] = v16;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 4128), &LockHandle);
    if ( !MiIsPageInHugePfn(a1) )
      goto LABEL_15;
  }
  v22 = 0;
  v23 = *(_QWORD **)(v9 + 4896);
  if ( !v23 )
    goto LABEL_34;
  while ( v5 < (v23[3] & 0x3FFFFuLL) )
  {
    v24 = (_QWORD *)*v23;
    if ( !*v23 )
      goto LABEL_34;
LABEL_32:
    v23 = v24;
  }
  v24 = (_QWORD *)v23[1];
  if ( v24 )
    goto LABEL_32;
  v22 = 1;
LABEL_34:
  RtlAvlInsertNodeEx((unsigned __int64 *)(v9 + 4896), (unsigned __int64)v23, v22, v2);
  v14 = v33;
  *v33 |= 0x10000000000uLL;
LABEL_42:
  v26 = v2[4];
  v27 = a1 & 0x3FFFF;
  if ( !_bittest64((const signed __int64 *)v26, v27) )
  {
    _bittestandset64((signed __int64 *)v26, v27);
    v26 = v2[4];
  }
  v28 = _bittest64((const signed __int64 *)(v26 + 0x8000), v27);
  if ( (a2 & 0x10000000) != 0 )
  {
    if ( !v28 )
      _bittestandset64((signed __int64 *)(v26 + 0x8000), v27);
  }
  else if ( v28 )
  {
    _bittestandreset64((signed __int64 *)(v26 + 0x8000), v27);
  }
  if ( (((*(_DWORD *)v14 & 0x1C0000) - 0x40000LL) & 0xFFFFFFFFFFFBFFFFuLL) == 0 )
  {
    v29 = MiHugePfnPartition(v14);
    MiUnlinkHugeRange(v29);
    MiInsertHugeRangeInList(v5, 160LL, 0LL);
  }
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_17:
  v18 = P;
LABEL_18:
  MiUnlockDynamicMemoryExclusive(v9, v34);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E548, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4E548);
  KeAbPostRelease((ULONG_PTR)&qword_140C4E548);
  KiLeaveGuardedRegionUnsafe(v34, v19, v20, v21);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v4 == -1073740748 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
  return v4;
}
