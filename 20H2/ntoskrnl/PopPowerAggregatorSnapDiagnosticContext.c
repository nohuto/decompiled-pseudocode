/*
 * XREFs of PopPowerAggregatorSnapDiagnosticContext @ 0x1408F1304
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x140574BC0 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
