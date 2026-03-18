/*
 * XREFs of SetUMInputObservationState @ 0x1C01A9C94
 * Callers:
 *     NtMITSetInputObservationState @ 0x1C012E020 (NtMITSetInputObservationState.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z @ 0x1C01B5860 (-SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetUMInputObservationState(int a1, int a2, unsigned int a3)
{
  CInputThread *v3; // rsi
  unsigned int CurrentThreadId; // eax
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
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
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  if ( a1 != 1 || a2 != 4 )
    return 3221225506LL;
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  CBaseProcessor::SetUMInputObservationState(MouseProcessor, a3);
  return 0LL;
}
