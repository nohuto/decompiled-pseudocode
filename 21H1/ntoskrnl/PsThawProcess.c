/*
 * XREFs of PsThawProcess @ 0x1406CF790
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14065E324 (PspChangeProcessExecutionState.c)
 *     DbgkpSendApiMessage @ 0x140882D44 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140882E30 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x140883768 (DbgkpResumeProcess.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeThawProcess @ 0x14030B2A0 (KeThawProcess.c)
 *     PsGetProcessSessionIdEx @ 0x14030B480 (PsGetProcessSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x140663550 (PsSetProcessTelemetryAppState.c)
 *     PspWow64GetSharedInformation @ 0x1406F9DB4 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x1406F9DCC (PsWow64GetProcessNtdllType.c)
 *     VslUpdateFreezeTimeBias @ 0x14088C150 (VslUpdateFreezeTimeBias.c)
 *     EtwTraceFreezeThawProcess @ 0x1409313BC (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093720C (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsThawProcess(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int ProcessNtdllType; // eax
  __int64 SharedInformation; // rax
  __int64 result; // rax
  int v12; // ebx
  int ProcessSessionId; // [rsp+70h] [rbp+18h] BYREF
  struct _KTHREAD *v14; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v14 = CurrentThread;
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 1288) && (*(_DWORD *)(a1 + 1124) & 8) == 0 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      PsInvokeWin32Callout(23, a1, 1, (__int64)&ProcessSessionId);
    }
    v5 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
    if ( *(_QWORD *)(a1 + 2224) )
    {
      v5 = KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 2224);
      *(_QWORD *)(a1 + 2224) = 0LL;
      *(_QWORD *)(a1 + 2320) += v5;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1080);
    KeAbPostRelease(a1 + 1080);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
    if ( (*(_BYTE *)(a1 + 992) & 1) != 0 )
    {
      VslUpdateFreezeTimeBias(a1, v5);
    }
    else
    {
      *(_QWORD *)PspFreezeTimeBiasAddress += v5;
      ProcessNtdllType = PsWow64GetProcessNtdllType(a1);
      if ( ProcessNtdllType )
      {
        SharedInformation = PspWow64GetSharedInformation(ProcessNtdllType);
        **(_QWORD **)(SharedInformation + 64) += v5;
      }
    }
  }
  result = KeThawProcess(a1, a2);
  v12 = result;
  if ( (_DWORD)result == 1 && (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    result = EtwTiLogSuspendResumeProcess(0LL, CurrentThread, a1, 3LL);
  if ( a2 )
  {
    PsSetProcessTelemetryAppState((signed __int64 *)a1, 2);
    result = *((_QWORD *)&PerfGlobalGroupMask + 1);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v12 )
        return EtwTraceFreezeThawProcess(a1, 0LL);
    }
  }
  return result;
}
