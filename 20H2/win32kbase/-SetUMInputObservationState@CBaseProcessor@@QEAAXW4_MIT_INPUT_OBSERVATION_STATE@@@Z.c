/*
 * XREFs of ?SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z @ 0x1C01B5860
 * Callers:
 *     SetUMInputObservationState @ 0x1C01A9C94 (SetUMInputObservationState.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseProcessor::SetUMInputObservationState(__int64 a1, __int32 a2)
{
  CInputThread *v2; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = *((_DWORD *)v2 + 10);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 != v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  _InterlockedExchange((volatile __int32 *)(a1 + 12), a2);
}
