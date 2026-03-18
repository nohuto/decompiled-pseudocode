/*
 * XREFs of PsFreezeProcess @ 0x1406CF908
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14065E324 (PspChangeProcessExecutionState.c)
 *     DbgkpSuspendProcess @ 0x1408838D0 (DbgkpSuspendProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x1408BF954 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     PsGetProcessSessionIdEx @ 0x14030B480 (PsGetProcessSessionIdEx.c)
 *     KeForceResumeProcess @ 0x140358C74 (KeForceResumeProcess.c)
 *     KeFreezeProcess @ 0x140358E9C (KeFreezeProcess.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x140663550 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x1409313BC (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093720C (EtwTiLogSuspendResumeProcess.c)
 */

char __fastcall PsFreezeProcess(__int64 a1, char a2)
{
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
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
      ExfTryToWakePushLock(a1 + 1080);
    KeAbPostRelease(a1 + 1080);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
    if ( *(_QWORD *)(a1 + 1288) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      PsInvokeWin32Callout(22, a1, 1, (__int64)&ProcessSessionId);
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      LOBYTE(v9) = 1;
      EtwTraceFreezeThawProcess(a1, v9);
    }
    PsSetProcessTelemetryAppState((signed __int64 *)a1, 1);
  }
  return 1;
}
