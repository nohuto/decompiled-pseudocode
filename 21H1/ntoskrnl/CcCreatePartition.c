/*
 * XREFs of CcCreatePartition @ 0x1403BD8B8
 * Callers:
 *     CcGetPartitionWithCreate @ 0x14030A8F0 (CcGetPartitionWithCreate.c)
 *     CcInitializeCacheManager @ 0x140A397E8 (CcInitializeCacheManager.c)
 * Callees:
 *     CcInitializePartition @ 0x1403BD90C (CcInitializePartition.c)
 *     CcDeletePartition @ 0x1404E65B0 (CcDeletePartition.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
