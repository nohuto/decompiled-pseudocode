/*
 * XREFs of AlpcpAllocateMessageFunction @ 0x1406F52E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ExCreateHandleEx @ 0x1405E83C0 (ExCreateHandleEx.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1408BF860 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AlpcpAllocateMessageFunction(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  char *PoolWithTag; // rax
  void *v4; // rbx
  __int64 v5; // rdi
  __int64 Handle; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return v4;
  v5 = (__int64)(PoolWithTag + 48);
  memset(PoolWithTag + 48, 0, 0x118uLL);
  Handle = ExCreateHandleEx(AlpcMessageTable, v5, 0, 0, 0LL);
  if ( Handle || (Handle = AlpcpAllocateMessageFromExtendedTables(v5)) != 0 )
  {
    *(_DWORD *)(v5 + 264) = Handle | 0x80000000;
    return v4;
  }
  ExFreePoolWithTag(v4, 0);
  return 0LL;
}
