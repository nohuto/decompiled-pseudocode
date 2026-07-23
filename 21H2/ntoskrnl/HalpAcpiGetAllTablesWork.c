/*
 * XREFs of HalpAcpiGetAllTablesWork @ 0x1403BB664
 * Callers:
 *     HalpAcpiGetAllTables @ 0x1403BB62C (HalpAcpiGetAllTables.c)
 * Callees:
 *     HalpAcpiGetTableWork @ 0x1402163C0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiCheckAndMapTable @ 0x140216898 (HalpAcpiCheckAndMapTable.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     HalpAcpiCacheTable @ 0x1403BB830 (HalpAcpiCacheTable.c)
 *     HalpAcpiCopyBiosTable @ 0x1403BB898 (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiAllocateMemory @ 0x1403BB978 (HalpAcpiAllocateMemory.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall HalpAcpiGetAllTablesWork(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int *TableWork; // rax
  unsigned int *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int *v7; // r8
  unsigned __int64 v8; // rdx
  unsigned int *v9; // r14
  __int64 v10; // r12
  __int64 *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  void *v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // esi
  int v18; // r12d
  int v19; // ecx
  _DWORD *Memory; // rax
  _DWORD *v21; // rbx
  __int64 i; // rcx
  int v23; // eax
  __int64 v24; // rax
  unsigned int *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int NumberOfBytes; // [rsp+70h] [rbp+8h] BYREF
  int NumberOfBytes_4; // [rsp+74h] [rbp+Ch]

  NumberOfBytes_4 = HIDWORD(a1);
  v1 = 0;
  NumberOfBytes = 0;
  if ( !HalpAcpiTablePointers )
  {
    TableWork = (unsigned int *)HalpAcpiGetTableWork(0LL, 0x54445358u, 0LL, 0LL);
    v4 = TableWork;
    if ( TableWork )
    {
      v5 = TableWork[1];
      v6 = 36LL;
      v7 = 0LL;
      if ( (unsigned int)v5 < 0x24 )
        v6 = (unsigned int)v5;
      v8 = (unsigned __int64)(v5 - v6) >> 3;
    }
    else
    {
      v25 = (unsigned int *)HalpAcpiGetTableWork(0LL, 0x54445352u, 0LL, 0LL);
      v7 = v25;
      if ( !v25 )
        return HalpAcpiTablePointers;
      v26 = v25[1];
      v27 = 36LL;
      if ( (unsigned int)v26 < 0x24 )
        v27 = (unsigned int)v26;
      v8 = (unsigned __int64)(v26 - v27) >> 2;
    }
    if ( (_DWORD)v8 )
    {
      v9 = v7 + 9;
      v10 = (unsigned int)v8;
      v11 = (__int64 *)(v4 + 9);
      do
      {
        if ( v4 )
          v12 = *v11;
        else
          v12 = *v9;
        v13 = HalpAcpiCheckAndMapTable(0LL, v12, 0x24u, 0, 0LL, 0LL, 1, &NumberOfBytes);
        v14 = (void *)v13;
        if ( v13 )
        {
          v15 = HalpAcpiCopyBiosTable(0LL, v13, v12);
          MmUnmapIoSpace(v14, NumberOfBytes);
          if ( v15 )
            HalpAcpiCacheTable(0LL, v15);
        }
        ++v9;
        ++v11;
        --v10;
      }
      while ( v10 );
    }
    v16 = HalpAcpiTableCacheList;
    v17 = 0;
    v18 = 1064961;
    while ( (__int64 *)v16 != &HalpAcpiTableCacheList )
    {
      v19 = *(_DWORD *)(v16 + 24);
      if ( ((unsigned int)(v19 - 1413763908) > 0x14 || !_bittest(&v18, v19 - 1413763908)) && v19 != 1396916550 )
        ++v17;
      v16 = *(_QWORD *)v16;
    }
    Memory = (_DWORD *)HalpAcpiAllocateMemory(0LL, (unsigned int)(8 * v17 + 8), v7);
    v21 = Memory;
    if ( Memory )
    {
      memset(Memory, 0, (unsigned int)(8 * v17 + 8));
      *v21 = v17;
      for ( i = HalpAcpiTableCacheList; (__int64 *)i != &HalpAcpiTableCacheList; i = *(_QWORD *)i )
      {
        v23 = *(_DWORD *)(i + 24);
        if ( ((unsigned int)(v23 - 1413763908) > 0x14 || !_bittest(&v18, v23 - 1413763908)) && v23 != 1396916550 )
        {
          v24 = v1++;
          *(_QWORD *)&v21[2 * v24 + 2] = i + 24;
        }
      }
      HalpAcpiTablePointers = (__int64)v21;
    }
  }
  return HalpAcpiTablePointers;
}
