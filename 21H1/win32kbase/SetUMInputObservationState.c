/*
 * XREFs of SetUMInputObservationState @ 0x1C01B1D74
 * Callers:
 *     NtMITSetInputObservationState @ 0x1C0136360 (NtMITSetInputObservationState.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z @ 0x1C01BD930 (-SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetUMInputObservationState(int a1, int a2, unsigned int a3)
{
  CInputThread *v3; // rsi
  unsigned int CurrentThreadId; // eax
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 MouseProcessor; // rax

  v3 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v8 = *((_DWORD *)v3 + 10);
  v9 = CurrentThreadId;
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 != v8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  if ( a1 != 1 || a2 != 4 )
    return 3221225506LL;
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  CBaseProcessor::SetUMInputObservationState(MouseProcessor, a3);
  return 0LL;
}
