/*
 * XREFs of EtwpCoverageCheckCP @ 0x1409306B8
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x14075CDD8 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     TelemetryCoverageTableLocateInternal @ 0x140318DCC (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x140318E20 (EtwpCoverageValidateCP.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall EtwpCoverageCheckCP(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v6; // rbp
  int v7; // edx
  unsigned int *Internal; // rax
  int v9; // r11d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v14 = 0;
  if ( (unsigned int)EtwpCoverageValidateCP((__int64 *)a2, &v14) )
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
  }
  return v4;
}
