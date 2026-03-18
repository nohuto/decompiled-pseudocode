/*
 * XREFs of EtwpCoverageFlushWorkItemCallback @ 0x1406E1EF0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     EtwpCoverageFlushPending @ 0x1406E1FC0 (EtwpCoverageFlushPending.c)
 *     EtwpCoverageReset @ 0x140937AA4 (EtwpCoverageReset.c)
 */

_QWORD *__fastcall EtwpCoverageFlushWorkItemCallback(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di

  *(_DWORD *)(EtwpCoverageNonPagedContext + 12) = 0;
  if ( (a1[9] & 1) != 0 )
    EtwpCoverageReset(a1, 4LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(*(_QWORD *)a1 + 16LL) >= a1[7] )
    EtwpCoverageFlushPending(a1);
  EtwpCoverageLockOwner = 0LL;
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
