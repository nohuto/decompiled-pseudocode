/*
 * XREFs of PsThawProcess @ 0x14071C6B0
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14062E290 (PspChangeProcessExecutionState.c)
 *     DbgkpSendApiMessage @ 0x140889BB4 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140889CA0 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140889DD0 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x14088A5D8 (DbgkpResumeProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     KeThawProcess @ 0x1403612D0 (KeThawProcess.c)
 *     PsGetProcessSessionIdEx @ 0x1403614B0 (PsGetProcessSessionIdEx.c)
 *     PsInvokeWin32Callout @ 0x140628330 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x14064EA70 (PsSetProcessTelemetryAppState.c)
 *     PspWow64GetSharedInformation @ 0x1406AD2D4 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x1406AD2EC (PsWow64GetProcessNtdllType.c)
 *     VslUpdateFreezeTimeBias @ 0x140892FC0 (VslUpdateFreezeTimeBias.c)
 *     EtwTraceFreezeThawProcess @ 0x14093849C (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093E2DC (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsThawProcess(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // r15
  int ProcessNtdllType; // eax
  _QWORD **SharedInformation; // rax
  __int64 result; // rax
  int v9; // ebx
  int ProcessSessionId; // [rsp+70h] [rbp+18h] BYREF
  struct _KTHREAD *v11; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v11 = CurrentThread;
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
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1080));
    KeAbPostRelease(a1 + 1080);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
        SharedInformation = (_QWORD **)PspWow64GetSharedInformation(ProcessNtdllType);
        *SharedInformation[8] += v5;
      }
    }
  }
  result = KeThawProcess(a1, a2);
  v9 = result;
  if ( (_DWORD)result == 1 && (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    result = EtwTiLogSuspendResumeProcess(0LL, CurrentThread, a1, 3LL);
  if ( a2 )
  {
    PsSetProcessTelemetryAppState((_QWORD *)a1, 2);
    result = *((_QWORD *)&PerfGlobalGroupMask + 1);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v9 )
        return EtwTraceFreezeThawProcess(a1, 0LL);
    }
  }
  return result;
}
