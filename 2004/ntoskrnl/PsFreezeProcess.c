/*
 * XREFs of PsFreezeProcess @ 0x1406F0C08
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14065A9AC (PspChangeProcessExecutionState.c)
 *     DbgkpSuspendProcess @ 0x140884BF0 (DbgkpSuspendProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C0CA4 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     KeForceResumeProcess @ 0x1402FCC94 (KeForceResumeProcess.c)
 *     KeFreezeProcess @ 0x1402FCEBC (KeFreezeProcess.c)
 *     PsGetProcessSessionIdEx @ 0x140347CD0 (PsGetProcessSessionIdEx.c)
 *     PsInvokeWin32Callout @ 0x140602AD0 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x14061DE30 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x14093266C (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409384AC (EtwTiLogSuspendResumeProcess.c)
 */

char __fastcall PsFreezeProcess(__int64 a1, char a2)
{
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdx
  int ProcessSessionId; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 1124) & 8) != 0 )
    return 0;
  v4 = KeFreezeProcess(a1, a2);
  if ( (*(_DWORD *)(a1 + 1124) & 8) != 0 )
  {
    KeForceResumeProcess(a1);
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  if ( !v4 && (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(0LL, CurrentThread, a1, 2LL);
  if ( a2 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
    *(_QWORD *)(a1 + 2224) = KiQueryUnbiasedInterruptTime();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1080));
    KeAbPostRelease(a1 + 1080);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( *(_QWORD *)(a1 + 1288) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      PsInvokeWin32Callout(22, a1, 1, (__int64)&ProcessSessionId);
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      LOBYTE(v6) = 1;
      EtwTraceFreezeThawProcess(a1, v6);
    }
    PsSetProcessTelemetryAppState((_QWORD *)a1, 1);
  }
  return 1;
}
