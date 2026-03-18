/*
 * XREFs of KiPristineTriageDumpAllocationWorker @ 0x1405794B0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void KiPristineTriageDumpAllocationWorker()
{
  PVOID PoolWithTag; // rax

  if ( (_DWORD)KiPristineTriageDumpSize )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)KiPristineTriageDumpSize, 0x7263624Bu);
    if ( PoolWithTag )
    {
      if ( _InterlockedCompareExchange64(&KiPristineTriageDump, (signed __int64)PoolWithTag, 0LL) )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
}
