/*
 * XREFs of MiUpdatePartitionLargePfnBitMap @ 0x1408DB8D8
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1408DAAD8 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1408DB3DC (MiHotAddPartitionMemory.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x1402745E0 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1402749A0 (MiLockDynamicMemoryExclusive.c)
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 */

__int64 __fastcall MiUpdatePartitionLargePfnBitMap(__int64 a1, _QWORD **a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v4; // esi
  _QWORD *v6; // rax
  _QWORD *i; // rdi
  _QWORD **v8; // rax
  __int64 v9; // r9
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+50h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  v14 = 0LL;
  v4 = 0;
  v15 = 0LL;
  v16 = 0LL;
  *(_QWORD *)&v13 = a1;
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
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
    MiActOnPartitionNodePages(v9, 3u, (__int16 **)&v13);
    if ( SDWORD1(v14) < 0 )
    {
      v4 = DWORD1(v14);
      break;
    }
  }
  MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  return v4;
}
