/*
 * XREFs of EtwpCoverageEnsureUserModeView @ 0x140771C44
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140771BB8 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     MmMapViewOfSection @ 0x140612470 (MmMapViewOfSection.c)
 *     MiUnmapViewOfSection @ 0x14061E0F0 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall EtwpCoverageEnsureUserModeView(__int64 a1)
{
  _KPROCESS *Process; // rsi
  unsigned __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  char v6; // di
  int v8; // [rsp+50h] [rbp-38h]
  __int64 v9; // [rsp+60h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+68h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+A0h] [rbp+18h] BYREF
  _KPROCESS *v12; // [rsp+A8h] [rbp+20h]

  v11 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = Process;
  v2 = Process[1].AffinityPadding[4];
  if ( *(_QWORD *)(v2 + 1952) )
  {
    v8 = 0;
  }
  else
  {
    v10[0] = 0LL;
    v9 = 0LL;
    v8 = MmMapViewOfSection(*(_QWORD *)(a1 + 8), (__int64)Process, &v11, 0LL, 0, (__int64)v10, &v9, 1, 0, 2);
    if ( v8 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
      EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
      if ( !*(_QWORD *)(v2 + 1952) )
      {
        *(_QWORD *)(v2 + 1952) = v11;
        v11 = 0LL;
      }
      v4 = 0LL;
      v5 = (__int64 *)Process[1].AffinityPadding[10];
      if ( v5 )
        v4 = *v5;
      if ( v4 )
        *(_DWORD *)(v4 + 1116) = *(_DWORD *)(v2 + 1952);
      v8 = 0;
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      ExfTryToWakePushLock(&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v11 )
    MiUnmapViewOfSection(Process, v11, 0, 0LL);
  return (unsigned int)v8;
}
