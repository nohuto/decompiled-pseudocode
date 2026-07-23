/*
 * XREFs of MiAddPartitionHugeRange @ 0x1405329D8
 * Callers:
 *     MiHotAddHugeRange @ 0x1408C6B18 (MiHotAddHugeRange.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x1402138C0 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x1402253FC (MiLockDynamicMemoryShared.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402D1E50 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x140321750 (RtlSetBitsEx.c)
 *     MiInsertHugeRangeInList @ 0x140533848 (MiInsertHugeRangeInList.c)
 */

__int64 __fastcall MiAddPartitionHugeRange(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v7; // r14
  unsigned int v8; // edx
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r15
  __int64 *v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // r8
  bool v20; // zf
  bool i; // zf
  unsigned __int64 *v22; // rdi
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  v7 = 0LL;
  v8 = 0;
  if ( *(_DWORD *)MmPhysicalMemoryBlock )
  {
    v9 = *(_QWORD *)(a2 + 24);
    do
    {
      v10 = *((_QWORD *)MmPhysicalMemoryBlock + 2 * v8 + 3);
      v11 = *((_QWORD *)MmPhysicalMemoryBlock + 2 * v8 + 2);
      if ( v10 )
      {
        if ( v9 >= v11 )
        {
          if ( v9 < v10 + v11 )
            break;
        }
        else if ( v9 + *(_QWORD *)(a2 + 32) > v11 )
        {
          break;
        }
      }
      ++v8;
    }
    while ( v8 < *(_DWORD *)MmPhysicalMemoryBlock );
  }
  MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  v12 = (*(_QWORD *)(a2 + 24) >> 18) & 0x3FFFFLL;
  v13 = *(_QWORD *)(a2 + 32) >> 18;
  v14 = 0x80200000C0000LL;
  KeAcquireInStackQueuedSpinLock(&qword_140C4E6C0, &LockHandle);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4128), &v23);
  v15 = v13 & 0x3FFFF;
  if ( v12 >= qword_140C4E6A0 )
    goto LABEL_13;
  if ( v15 > 1 )
  {
    if ( qword_140C4E6A0 - v12 < v15 )
      goto LABEL_13;
    v17 = (__int64 *)(qword_140C4E6A8 + 8 * (v12 >> 6));
    v18 = *v17;
    v19 = qword_140C4E6A8 + 8 * ((v12 + v15 - 1) >> 6);
    if ( v17 != (__int64 *)v19 )
    {
      for ( i = (v18 & (-1LL << v12)) == 0; i; i = *v17 == 0 )
      {
        if ( ++v17 == (__int64 *)v19 )
        {
          v20 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v12 + (unsigned __int8)v15 - 1)) & *v17) == 0;
          goto LABEL_22;
        }
      }
      goto LABEL_13;
    }
    v20 = (v18 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v15) << v12)) == 0;
LABEL_22:
    if ( !v20 )
    {
LABEL_13:
      KeReleaseInStackQueuedSpinLock(&v23);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 3221225496LL;
    }
  }
  else if ( v15 != 1 || _bittest64((const signed __int64 *)qword_140C4E6A8, v12) )
  {
    goto LABEL_13;
  }
  RtlSetBitsEx((__int64)&qword_140C4E6A0, v12, v15);
  memset64((void *)(qword_140C4E6B0 + 8 * v12), 0x80200000C0000uLL, v15);
  KeReleaseInStackQueuedSpinLock(&v23);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a3 == 3 )
    v14 = ((unsigned __int64)(*(_WORD *)a1 & 0x7FF) << 41) | 0xC0000;
  v22 = (unsigned __int64 *)(qword_140C4E6B0 + 8 * v12);
  if ( a3 == 3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4128), &v23);
  do
  {
    if ( a3 == 3 )
    {
      *v22 = v14;
      ++*(_QWORD *)(a1 + 424);
    }
    else
    {
      MiInsertHugeRangeInList(v12, a3 == 1, a1);
    }
    ++v22;
    ++v7;
    v12 ^= ((unsigned int)v12 ^ ((_DWORD)v12 + 1)) & 0x3FFFF;
  }
  while ( v7 < v15 );
  if ( a3 == 3 )
    KeReleaseInStackQueuedSpinLock(&v23);
  return 0LL;
}
