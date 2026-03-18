/*
 * XREFs of CcCreatePartition @ 0x1403D0F2C
 * Callers:
 *     CcGetPartitionWithCreate @ 0x14023EB0C (CcGetPartitionWithCreate.c)
 *     CcInitializeCacheManager @ 0x140AFC9DC (CcInitializeCacheManager.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     CcInitializePartition @ 0x1403D0FE0 (CcInitializePartition.c)
 *     CcDeletePartition @ 0x14053DAFC (CcDeletePartition.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void *CcCreatePartition()
{
  void *v0; // rbx
  const char *v1; // r9
  PVOID PoolWithTag; // rax

  v0 = 0LL;
  v1 = "ENABLED";
  if ( CcEnablePerVolumeLazyWriter != 1 )
    v1 = "DISABLED";
  DbgPrintEx(0x7Fu, 2u, "CcCreatePartition: Per-Volume Lazywriter is: %s\n\n", v1);
  if ( ExAllocatePoolWithTag((POOL_TYPE)1536, 288LL * (unsigned int)CcNumberNumaNodes, 0x754E6343u) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x540uLL, 0x72506343u);
    v0 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( !(unsigned __int8)CcInitializePartition(PoolWithTag) )
      {
        CcDeletePartition(v0);
        return 0LL;
      }
    }
  }
  return v0;
}
