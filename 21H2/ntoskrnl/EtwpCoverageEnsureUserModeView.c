/*
 * XREFs of EtwpCoverageEnsureUserModeView @ 0x140771E04
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140771D78 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnmapViewOfSection @ 0x140687D60 (MiUnmapViewOfSection.c)
 *     MmMapViewOfSection @ 0x1406A1F20 (MmMapViewOfSection.c)
 */

__int64 __fastcall EtwpCoverageEnsureUserModeView(__int64 a1)
{
  _KPROCESS *Process; // rsi
  unsigned __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  char v6; // di
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+60h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+68h] [rbp-20h] BYREF
  unsigned __int64 v14; // [rsp+A0h] [rbp+18h] BYREF
  _KPROCESS *v15; // [rsp+A8h] [rbp+20h]

  v14 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v15 = Process;
  v2 = Process[1].AffinityPadding[4];
  if ( *(_QWORD *)(v2 + 1952) )
  {
    v11 = 0;
  }
  else
  {
    v13[0] = 0LL;
    v12 = 0LL;
    v11 = MmMapViewOfSection(*(_QWORD *)(a1 + 8), (__int64)Process, &v14, 0LL, 0, (__int64)v13, &v12, 1, 0, 2);
    if ( v11 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
      EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
      if ( !*(_QWORD *)(v2 + 1952) )
      {
        *(_QWORD *)(v2 + 1952) = v14;
        v14 = 0LL;
      }
      v4 = 0LL;
      v5 = (__int64 *)Process[1].AffinityPadding[10];
      if ( v5 )
        v4 = *v5;
      if ( v4 )
        *(_DWORD *)(v4 + 1116) = *(_DWORD *)(v2 + 1952);
      v11 = 0;
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      ExfTryToWakePushLock(&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  }
  if ( v14 )
    MiUnmapViewOfSection(Process, v14, 0, 0);
  return (unsigned int)v11;
}
