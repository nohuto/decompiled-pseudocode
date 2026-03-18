/*
 * XREFs of EtwpCoverageFlushWorkItemCallback @ 0x1406E7DC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     EtwpCoverageFlushPending @ 0x1406E7E90 (EtwpCoverageFlushPending.c)
 *     EtwpCoverageReset @ 0x1409E52D0 (EtwpCoverageReset.c)
 */

char __fastcall EtwpCoverageFlushWorkItemCallback(_DWORD *a1)
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
    ExfTryToWakePushLock(&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
