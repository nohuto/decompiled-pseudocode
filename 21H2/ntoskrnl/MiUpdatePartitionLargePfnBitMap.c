/*
 * XREFs of MiUpdatePartitionLargePfnBitMap @ 0x140982150
 * Callers:
 *     MiInsertPartitionPages @ 0x1405BE81C (MiInsertPartitionPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1409811F0 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x140981BB0 (MiHotAddPartitionMemory.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x14036071C (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140360A00 (MiLockDynamicMemoryExclusive.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1405BCBC4 (MiActOnPartitionNodePages.c)
 */

__int64 __fastcall MiUpdatePartitionLargePfnBitMap(__int16 *a1, _QWORD **a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v6; // rax
  _QWORD *i; // rdi
  _QWORD **v8; // rax
  __int64 v9; // r10
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  __int16 *v13[8]; // [rsp+20h] [rbp-48h] BYREF

  memset(v13, 0, sizeof(v13));
  v13[0] = a1;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  MiLockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
  v6 = *a2;
  i = 0LL;
  while ( v6 )
  {
    i = v6;
    v6 = (_QWORD *)*v6;
  }
  while ( i )
  {
    v8 = (_QWORD **)i[1];
    v9 = (__int64)i;
    v10 = i;
    if ( v8 )
    {
      v11 = *v8;
      for ( i = (_QWORD *)i[1]; v11; v11 = (_QWORD *)*v11 )
        i = v11;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v10 )
          break;
        v10 = i;
      }
    }
    MiActOnPartitionNodePages(v9, 5uLL, 0LL, v13);
    if ( SLODWORD(v13[3]) < 0 )
    {
      v4 = (unsigned int)v13[3];
      break;
    }
  }
  MiUnlockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
  return v4;
}
