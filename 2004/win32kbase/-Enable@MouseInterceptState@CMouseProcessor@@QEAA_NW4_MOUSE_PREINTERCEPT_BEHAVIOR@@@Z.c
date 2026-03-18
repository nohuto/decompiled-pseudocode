/*
 * XREFs of ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C01BC240
 * Callers:
 *     NtMITEnableMouseIntercept @ 0x1C012EEE0 (NtMITEnableMouseIntercept.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ApiSetEdtionGetInputDesktopId @ 0x1C01CACF0 (ApiSetEdtionGetInputDesktopId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::MouseInterceptState::Enable(__int64 a1, int a2)
{
  CInputThread *v4; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // bl

  RIMLockExclusive(a1);
  v4 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = *((_DWORD *)v4 + 10);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 != v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    if ( *(_DWORD *)(a1 + 32) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
    *(_BYTE *)(a1 + 16) = 1;
    *(_DWORD *)(a1 + 20) = a2;
    *(_QWORD *)(a1 + 24) = ApiSetEdtionGetInputDesktopId();
    *(_DWORD *)(a1 + 32) = (unsigned int)PsGetCurrentThreadId();
  }
  v12 = *(_BYTE *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v12;
}
