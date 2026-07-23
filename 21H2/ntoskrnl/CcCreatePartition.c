/*
 * XREFs of CcCreatePartition @ 0x1403C2D40
 * Callers:
 *     CcGetPartitionWithCreate @ 0x1402390C0 (CcGetPartitionWithCreate.c)
 *     CcInitializeCacheManager @ 0x140A3E1B8 (CcInitializeCacheManager.c)
 * Callees:
 *     CcInitializePartition @ 0x1403C2D94 (CcInitializePartition.c)
 *     CcDeletePartition @ 0x1404EBEC0 (CcDeletePartition.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void *CcCreatePartition()
{
  PVOID PoolWithTag; // rax
  void *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x440uLL, 0x72506343u);
  v1 = PoolWithTag;
  if ( PoolWithTag && !(unsigned __int8)CcInitializePartition(PoolWithTag) )
  {
    CcDeletePartition(v1);
    return 0LL;
  }
  return v1;
}
