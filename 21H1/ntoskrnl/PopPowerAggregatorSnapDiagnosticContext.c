/*
 * XREFs of PopPowerAggregatorSnapDiagnosticContext @ 0x1408EA474
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x140570B40 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopPowerAggregatorSnapDiagnosticContext(_QWORD *a1)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  *a1 = 0LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1368uLL, 0x67696450u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, &PopPowerAggregatorContext, 0x1368uLL);
    *a1 = v3;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
