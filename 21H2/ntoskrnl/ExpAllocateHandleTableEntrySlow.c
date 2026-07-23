/*
 * XREFs of ExpAllocateHandleTableEntrySlow @ 0x140695888
 * Callers:
 *     ExpAllocateHandleTableEntry @ 0x1405E39A0 (ExpAllocateHandleTableEntry.c)
 *     ExDupHandleTable @ 0x140695BF0 (ExDupHandleTable.c)
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 * Callees:
 *     ExpAllocateMidLevelTable @ 0x140616ACC (ExpAllocateMidLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x140616B40 (ExpAllocateTablePagedPool.c)
 *     ExpInsertLowLevelTableIntoFreeList @ 0x1406959E4 (ExpInsertLowLevelTableIntoFreeList.c)
 *     ExpAllocateLowLevelTable @ 0x140695B14 (ExpAllocateLowLevelTable.c)
 *     ExpFreeTablePagedPool @ 0x1406F3C10 (ExpFreeTablePagedPool.c)
 */

char __fastcall ExpAllocateHandleTableEntrySlow(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v5; // rbx
  char v6; // al
  unsigned __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rsi
  __int64 LowLevelTable; // rax
  __int64 v11; // r9
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rsi
  unsigned __int64 TablePagedPool; // rsi
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v20 = 0LL;
  v5 = *a1;
  v6 = v2;
  v7 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
  v8 = v6 & 3;
  if ( !v8 )
  {
    v13 = ExpAllocateMidLevelTable((__int64)a1, &v20, *a1);
    if ( !v13 )
      return 0;
    v13[1] = *v13;
    *v13 = v7;
    _InterlockedExchange64((volatile __int64 *)a1 + 1, (unsigned __int64)v13 | 1);
    goto LABEL_9;
  }
  if ( v8 != 1 )
  {
    v14 = (unsigned int)v5 >> 19;
    if ( (unsigned int)v14 >= 0x80 )
      return 0;
    v15 = *(_QWORD *)(v7 + 8 * v14);
    v16 = (unsigned int)v14;
    if ( v15 )
    {
      LowLevelTable = ExpAllocateLowLevelTable(a1, *a1);
      v20 = LowLevelTable;
      if ( LowLevelTable )
      {
        *(_QWORD *)(v15 + 8 * ((v5 >> 10) & 0x1FF)) = LowLevelTable;
        goto LABEL_6;
      }
      return 0;
    }
    v19 = ExpAllocateMidLevelTable((__int64)a1, &v20, *a1);
    if ( !v19 )
      return 0;
    *(_QWORD *)(v7 + 8 * v16) = v19;
LABEL_9:
    LowLevelTable = v20;
    goto LABEL_6;
  }
  v9 = (unsigned int)v5 >> 10;
  if ( (unsigned int)v9 >= 0x200 )
  {
    TablePagedPool = (unsigned __int64)ExpAllocateTablePagedPool(*((_QWORD *)a1 + 2), 0x400uLL);
    if ( !TablePagedPool )
      return 0;
    v18 = ExpAllocateMidLevelTable((__int64)a1, &v20, v5);
    if ( !v18 )
    {
      ExpFreeTablePagedPool(*((_QWORD *)a1 + 2), TablePagedPool, 1024LL);
      return 0;
    }
    *(_QWORD *)TablePagedPool = v7;
    *(_QWORD *)(TablePagedPool + 8) = v18;
    _InterlockedExchange64((volatile __int64 *)a1 + 1, TablePagedPool | 2);
    goto LABEL_9;
  }
  LowLevelTable = ExpAllocateLowLevelTable(a1, (unsigned int)v5);
  v20 = LowLevelTable;
  if ( LowLevelTable )
  {
    *(_QWORD *)(v7 + 8 * v9) = LowLevelTable;
LABEL_6:
    LOBYTE(v11) = a2 != 0;
    ExpInsertLowLevelTableIntoFreeList(a1, LowLevelTable, a2, v11);
    return 1;
  }
  return 0;
}
