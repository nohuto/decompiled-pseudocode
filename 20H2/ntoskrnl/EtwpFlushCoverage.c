/*
 * XREFs of EtwpFlushCoverage @ 0x140770200
 * Callers:
 *     EtwShutdown @ 0x1407700F0 (EtwShutdown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     EtwpCoverageFlushPending @ 0x1406E1FC0 (EtwpCoverageFlushPending.c)
 */

_QWORD *EtwpFlushCoverage()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *v3; // r9
  char v4; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( EtwpCoverageContext )
    EtwpCoverageFlushPending((int **)EtwpCoverageContext, v1, v2, v3);
  EtwpCoverageLockOwner = 0LL;
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
