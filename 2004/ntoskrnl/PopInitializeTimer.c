/*
 * XREFs of PopInitializeTimer @ 0x1407B5C1C
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1403C6740 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopThermalInit @ 0x140A694B0 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140A6954C (PpmPerfInitialize.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140A90974 (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A909FC (PopDripsWatchdogInitializeDiagnosticTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x1402676A0 (KeInitializeTimer2.c)
 */

__int64 __fastcall PopInitializeTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  KeInitializeTimer2(a1);
  _InterlockedExchange((volatile __int32 *)(a1 + 168), 0);
  result = a5;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = a4;
  *(_QWORD *)(a1 + 160) = a5;
  return result;
}
