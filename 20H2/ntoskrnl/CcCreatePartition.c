/*
 * XREFs of CcCreatePartition @ 0x1403C20C0
 * Callers:
 *     CcGetPartitionWithCreate @ 0x1403188C0 (CcGetPartitionWithCreate.c)
 *     CcInitializeCacheManager @ 0x140A3F638 (CcInitializeCacheManager.c)
 * Callees:
 *     CcInitializePartition @ 0x1403C2114 (CcInitializePartition.c)
 *     CcDeletePartition @ 0x1404EA0F0 (CcDeletePartition.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
