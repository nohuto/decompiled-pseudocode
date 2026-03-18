/*
 * XREFs of CcAllocateInitializeVacbArray @ 0x14037ABF4
 * Callers:
 *     CcGetVirtualAddress @ 0x1402A4660 (CcGetVirtualAddress.c)
 *     CcInitializePartitionVacbs @ 0x1403C2AD8 (CcInitializePartitionVacbs.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

char *CcAllocateInitializeVacbArray()
{
  KIRQL v0; // al
  char *PoolWithTag; // rax
  char *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  KIRQL v6; // al

  v0 = KeAcquireQueuedSpinLock(4uLL);
  if ( (unsigned int)CcVacbArraysAllocated >= 0x500 )
  {
    KeReleaseQueuedSpinLock(4uLL, v0);
    return 0LL;
  }
  else
  {
    ++CcVacbArraysAllocated;
    KeReleaseQueuedSpinLock(4uLL, v0);
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20000uLL, 0x61566343u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x20000uLL);
      v3 = v2 + 48;
      v4 = 3276LL;
      do
      {
        *v3 = v2;
        v3 += 5;
        --v4;
      }
      while ( v4 );
    }
    else
    {
      v6 = KeAcquireQueuedSpinLock(4uLL);
      --CcVacbArraysAllocated;
      KeReleaseQueuedSpinLock(4uLL, v6);
    }
    return v2;
  }
}
