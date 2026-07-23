/*
 * XREFs of MiMakePartitionMemoryBlock @ 0x1408DB6E0
 * Callers:
 *     MiDeletePartitionResources @ 0x140561B58 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x140562780 (MiInsertPartitionPages.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076F928 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x140241A18 (MiDereferencePageRunsEx.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 *     MiUpdatePartitionMemory @ 0x1405636B4 (MiUpdatePartitionMemory.c)
 *     MiCreateNodeLists @ 0x14079D02C (MiCreateNodeLists.c)
 *     MiConvertInitialMemoryBlock @ 0x1407CB8F4 (MiConvertInitialMemoryBlock.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiMakePartitionMemoryBlock(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *i; // rbx
  _QWORD **v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // r14
  unsigned int v9; // edi
  int v10; // ebx
  _DWORD *Pool; // rax
  void *v12; // rsi
  _QWORD *k; // rbx
  _QWORD *j; // rax
  _QWORD **v15; // rax
  __int64 v16; // r9
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // [rsp+28h] [rbp-49h] BYREF
  __int128 v20; // [rsp+30h] [rbp-41h]
  __int64 v21; // [rsp+40h] [rbp-31h]
  _OWORD v22[2]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v23; // [rsp+68h] [rbp-9h]
  __int64 v24; // [rsp+78h] [rbp+7h]
  _OWORD v25[3]; // [rsp+80h] [rbp+Fh] BYREF
  _DWORD *v26; // [rsp+B0h] [rbp+3Fh]

  v19 = 0LL;
  v21 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  v2 = *(_QWORD **)(a1 + 24);
  i = 0LL;
  memset(v25, 0, sizeof(v25));
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
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
    MiActOnPartitionNodePages(v5, 5u, (__int16 **)v22);
  }
  v8 = *((_QWORD *)&v23 + 1);
  v9 = 1;
  v20 = 0LL;
  if ( *((_QWORD *)&v23 + 1) )
  {
    v10 = v23;
    if ( (unsigned __int64)v23 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_33;
    Pool = MiAllocatePool(64, 16 * (v23 + 1), 0x6C4D6D4Du);
    v12 = Pool;
    if ( !Pool )
      goto LABEL_33;
    *Pool = v10;
    k = 0LL;
    v26 = Pool;
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
      MiActOnPartitionNodePages(v16, 6u, (__int16 **)v25);
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
      v9 = 0;
    }
  }
  MiUpdatePartitionMemory(a1, (__int64)&v19, v9);
}
