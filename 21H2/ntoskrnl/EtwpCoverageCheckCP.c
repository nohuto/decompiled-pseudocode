/*
 * XREFs of EtwpCoverageCheckCP @ 0x1409E512C
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x1406D435C (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     TelemetryCoverageTableLocateInternal @ 0x14024F548 (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x14024F59C (EtwpCoverageValidateCP.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall EtwpCoverageCheckCP(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v6; // rbp
  int v7; // edx
  unsigned int *Internal; // rax
  int v9; // r11d
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0;
  if ( (unsigned int)EtwpCoverageValidateCP((__int64 *)a2, &v11) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    v6 = *(unsigned int **)(a1 + 16);
    v7 = *(_DWORD *)(a2 + 8);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    Internal = TelemetryCoverageTableLocateInternal(v6, v7);
    if ( *Internal == v9 )
    {
      v4 = 1;
      *(_DWORD *)(a2 + 12) = v6[6];
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v4;
}
