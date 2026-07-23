/*
 * XREFs of ExpAllocateHandleTable @ 0x14069577C
 * Callers:
 *     ExCreateHandleTable @ 0x140622DE8 (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x140695BF0 (ExDupHandleTable.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140323160 (PsReturnProcessPagedPoolQuota.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpInsertLowLevelTableIntoFreeList @ 0x1406959E4 (ExpInsertLowLevelTableIntoFreeList.c)
 *     ExpAllocateLowLevelTable @ 0x140695B14 (ExpAllocateLowLevelTable.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140695BB0 (PsChargeProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall ExpAllocateHandleTable(struct _KPROCESS *a1, char a2)
{
  SIZE_T v4; // rbp
  _QWORD *PoolWithTag; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 LowLevelTable; // rax
  __int64 v9; // r9
  __int64 v10; // rbp
  _QWORD *result; // rax

  v4 = (unsigned int)((ExpFreeListCount + 1) << 6);
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, v4, 0x6274624Fu);
  if ( !PoolWithTag )
    return 0LL;
  if ( a1 && (int)PsChargeProcessPagedPoolQuota(a1, 128LL) < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6274624Fu);
    return 0LL;
  }
  memset(PoolWithTag, 0, v4);
  PoolWithTag[2] = a1;
  v6 = (unsigned int)ExpFreeListCount;
  *((_DWORD *)PoolWithTag + 10) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  if ( (_DWORD)v6 )
  {
    v7 = PoolWithTag + 8;
    do
    {
      *v7 = 0LL;
      v7 += 8;
      --v6;
    }
    while ( v6 );
  }
  LowLevelTable = ExpAllocateLowLevelTable(PoolWithTag, 0LL);
  v10 = LowLevelTable;
  if ( !LowLevelTable )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6274624Fu);
    if ( a1 )
      PsReturnProcessPagedPoolQuota(a1, 128LL);
    return 0LL;
  }
  LOBYTE(v9) = a2;
  ExpInsertLowLevelTableIntoFreeList(PoolWithTag, LowLevelTable, PoolWithTag + 8, v9);
  PoolWithTag[1] = v10;
  if ( a1 )
    *((_BYTE *)PoolWithTag + 44) |= 0x10u;
  PoolWithTag[7] = 0LL;
  result = PoolWithTag;
  PoolWithTag[6] = 0LL;
  return result;
}
