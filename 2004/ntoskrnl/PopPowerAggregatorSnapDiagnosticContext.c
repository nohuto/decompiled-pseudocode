/*
 * XREFs of PopPowerAggregatorSnapDiagnosticContext @ 0x1408EB6F4
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x140571190 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
