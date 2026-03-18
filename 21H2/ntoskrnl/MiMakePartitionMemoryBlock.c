/*
 * XREFs of MiMakePartitionMemoryBlock @ 0x140981F58
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x1405BDB0C (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1405BE81C (MiInsertPartitionPages.c)
 *     MiPartitionDeleteMemoryNode @ 0x1405BF2A0 (MiPartitionDeleteMemoryNode.c)
 *     MiGetPhysicalMemoryRanges @ 0x1408525D8 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x14023FD0C (MiDereferencePageRunsEx.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1405BCBC4 (MiActOnPartitionNodePages.c)
 *     MiUpdatePartitionMemory @ 0x1405BFED0 (MiUpdatePartitionMemory.c)
 *     MiCreateNodeLists @ 0x14081DC70 (MiCreateNodeLists.c)
 *     MiConvertInitialMemoryBlock @ 0x14081E03C (MiConvertInitialMemoryBlock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiMakePartitionMemoryBlock(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *i; // rbx
  _QWORD **v4; // rax
  __int64 v5; // r10
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  __int16 *v8; // r14
  int v9; // ebx
  unsigned int v10; // edi
  _DWORD *Pool; // rax
  void *v12; // rsi
  _QWORD *k; // rbx
  _QWORD *j; // rax
  _QWORD **v15; // rax
  __int64 v16; // r10
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // [rsp+28h] [rbp-59h] BYREF
  __int128 v20; // [rsp+30h] [rbp-51h]
  __int64 v21; // [rsp+40h] [rbp-41h]
  __int16 *v22[8]; // [rsp+48h] [rbp-39h] BYREF
  __int16 *v23[8]; // [rsp+88h] [rbp+7h] BYREF

  v19 = 0LL;
  v21 = 0LL;
  memset(v23, 0, sizeof(v23));
  memset(v22, 0, sizeof(v22));
  v2 = *(_QWORD **)(a1 + 24);
  i = 0LL;
  while ( v2 )
  {
    i = v2;
    v2 = (_QWORD *)*v2;
  }
  while ( i )
  {
    v4 = (_QWORD **)i[1];
    v5 = (__int64)i;
    v6 = i;
    if ( v4 )
    {
      v7 = *v4;
      for ( i = (_QWORD *)i[1]; v7; v7 = (_QWORD *)*v7 )
        i = v7;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v6 )
          break;
        v6 = i;
      }
    }
    MiActOnPartitionNodePages(v5, 7uLL, 0LL, v22);
  }
  v8 = v22[6];
  v9 = (int)v22[5];
  v10 = 1;
  v20 = 0LL;
  if ( v22[6] )
  {
    if ( v22[5] > (__int16 *)0x7FFFFFFFFFFFFFFLL )
      goto LABEL_33;
    Pool = MiAllocatePool(64, 16 * ((__int64)v22[5] + 1), 0x6C4D6D4Du);
    v12 = Pool;
    if ( !Pool )
      goto LABEL_33;
    v23[7] = (__int16 *)Pool;
    *Pool = v9;
    k = 0LL;
    *((_QWORD *)Pool + 1) = v8;
    for ( j = *(_QWORD **)(a1 + 24); j; j = (_QWORD *)*j )
      k = j;
    while ( k )
    {
      v15 = (_QWORD **)k[1];
      v16 = (__int64)k;
      v17 = k;
      if ( v15 )
      {
        v18 = *v15;
        for ( k = (_QWORD *)k[1]; v18; v18 = (_QWORD *)*v18 )
          k = v18;
      }
      else
      {
        while ( 1 )
        {
          k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !k || (_QWORD *)*k == v17 )
            break;
          v17 = k;
        }
      }
      MiActOnPartitionNodePages(v16, 8uLL, 0LL, v23);
    }
    *(_QWORD *)&v20 = MiConvertInitialMemoryBlock(a1, (__int64)v12);
    ExFreePoolWithTag(v12, 0);
    if ( !(_QWORD)v20 )
      goto LABEL_33;
    *((_QWORD *)&v20 + 1) = MiCreateNodeLists(a1, v20);
    if ( !*((_QWORD *)&v20 + 1) )
    {
      MiDereferencePageRunsEx(v20, 0);
      *(_QWORD *)&v20 = 0LL;
LABEL_33:
      v10 = 0;
    }
  }
  MiUpdatePartitionMemory(a1, (__int64)&v19, v10);
}
