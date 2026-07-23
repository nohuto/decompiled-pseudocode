/*
 * XREFs of MiGetPhysicalMemoryRanges @ 0x14076F928
 * Callers:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14076F8C0 (MmGetPhysicalMemoryRangesEx2.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x1402138C0 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x1402253FC (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1402745E0 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1402749A0 (MiLockDynamicMemoryExclusive.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x14037EB10 (MiDereferencePageRuns.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiGetFileOnlyRanges @ 0x14052E554 (MiGetFileOnlyRanges.c)
 *     MiMakePartitionMemoryBlock @ 0x1408DB6E0 (MiMakePartitionMemoryBlock.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiGetPhysicalMemoryRanges(ULONG_PTR *a1, char a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // rsi
  int v8; // edi
  unsigned int *v9; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // rbp
  char *v12; // r15
  _QWORD *Pool; // rax
  _QWORD *v14; // r13
  _QWORD *v15; // rdi
  __int64 *v16; // rdx
  __int64 v17; // rax
  ULONG_PTR v19; // rax
  char *FileOnlyRanges; // rax
  size_t v21; // rsi
  char v22; // [rsp+68h] [rbp+10h]
  __int64 v23; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v22 = 0;
  v8 = a2 & 1;
  if ( (a2 & 1) != 0 || a1 != &MiSystemPartition )
  {
    v22 = 1;
    MiLockDynamicMemoryShared((__int64)a1, (__int64)CurrentThread);
    if ( a1 != &MiSystemPartition )
    {
      while ( a1[866] && !a1[12] )
      {
        MiUnlockDynamicMemoryShared((__int64)a1, (__int64)CurrentThread);
        MiLockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
        v19 = a1[866];
        if ( v19 )
        {
          if ( !a1[12] )
          {
            MiMakePartitionMemoryBlock(a1);
            v19 = a1[866];
          }
          if ( v19 && !a1[12] )
          {
            MiUnlockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
            return 0LL;
          }
        }
        MiUnlockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
        MiLockDynamicMemoryShared((__int64)a1, (__int64)CurrentThread);
      }
    }
  }
  v9 = (unsigned int *)MiReferencePageRuns((__int64)a1, 0, a3, a4);
  v10 = (__int64)v9;
  if ( v9 )
    v11 = *v9 & (unsigned __int64)-(__int64)(a1[866] != 0);
  else
    v11 = 0LL;
  v23 = 0LL;
  v12 = 0LL;
  if ( v8 )
  {
    FileOnlyRanges = MiGetFileOnlyRanges((__int16 *)a1, a2, &v23);
    v5 = v23;
    v12 = FileOnlyRanges;
  }
  Pool = MiAllocatePool(64, 16 * (v5 + v11 + 1), 0x68506D4Du);
  v14 = Pool;
  if ( Pool )
  {
    v15 = Pool;
    if ( v11 )
    {
      v16 = (__int64 *)(v10 + 24);
      do
      {
        *v15 = *(v16 - 1) << 12;
        v17 = *v16;
        v16 += 2;
        v15[1] = v17 << 12;
        v15 += 2;
        --v11;
      }
      while ( v11 );
    }
    if ( v5 )
    {
      v21 = 16 * v5;
      memmove(v15, v12, v21);
      v15 = (_QWORD *)((char *)v15 + v21);
    }
    *v15 = 0LL;
    v15[1] = 0LL;
  }
  if ( v22 )
    MiUnlockDynamicMemoryShared((__int64)a1, (__int64)CurrentThread);
  if ( v10 )
    MiDereferencePageRuns(v10);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return v14;
}
