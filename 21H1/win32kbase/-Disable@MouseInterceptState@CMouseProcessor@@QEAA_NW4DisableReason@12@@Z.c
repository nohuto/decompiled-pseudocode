/*
 * XREFs of ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C004F460
 * Callers:
 *     ?HandleMITTermination@CMouseProcessor@@AEAAXXZ @ 0x1C004F390 (-HandleMITTermination@CMouseProcessor@@AEAAXXZ.c)
 *     NtMITDisableMouseIntercept @ 0x1C01349B0 (NtMITDisableMouseIntercept.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CMouseProcessor::MouseInterceptState::Disable(__int64 a1)
{
  CInputThread *v2; // rsi
  unsigned int CurrentThreadId; // eax
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rcx
  char v7; // al
  bool v8; // zf
  bool v9; // bl

  RIMLockExclusive(a1);
  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v4 = *((_DWORD *)v2 + 10);
  v5 = CurrentThreadId;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  v7 = *(_BYTE *)(a1 + 16);
  v8 = v7 == 0;
  if ( v7 )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v8 = 1;
    *(_DWORD *)(a1 + 20) = 0;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v9 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v9;
}
