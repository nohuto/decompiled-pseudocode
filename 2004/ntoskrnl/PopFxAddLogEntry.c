/*
 * XREFs of PopFxAddLogEntry @ 0x1402C9A9C
 * Callers:
 *     PopFxProcessWork @ 0x1402C962C (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1402C99F8 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x1402C9B84 (PopFxIdleWorker.c)
 *     PopDiagTraceFxDevicePowered @ 0x1402CA1F0 (PopDiagTraceFxDevicePowered.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1402CA25C (PopFxCompleteDevicePowerRequired.c)
 *     PoFxCompleteIdleCondition @ 0x140352730 (PoFxCompleteIdleCondition.c)
 *     PopDiagTraceIrpStart @ 0x14036D1A4 (PopDiagTraceIrpStart.c)
 *     PopDiagTraceIrpFinish @ 0x140378C44 (PopDiagTraceIrpFinish.c)
 *     PopFxAllocatePowerIrp @ 0x140397120 (PopFxAllocatePowerIrp.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14039D05C (PopDiagTraceFxDevicePowerState.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x1403A3430 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403A34F4 (PopDiagTraceFxComponentIdleState.c)
 *     PoFxCompleteIdleState @ 0x1403A3A10 (PoFxCompleteIdleState.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1403A4A00 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1403C4F04 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxCompleteComponentPerfState @ 0x140564FA8 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1405650AC (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x14056585C (PopFxHandleDirectedPowerTransition.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140565F0C (PopFxIssueComponentPerfStateChanges.c)
 *     PopPluginNotifyIdleState @ 0x140568590 (PopPluginNotifyIdleState.c)
 *     PopDiagTraceFxComponentLatency @ 0x14056C7FC (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x14056C8EC (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x14056C9DC (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x14056CE20 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x14056CF24 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxTraceDeviceRegistration @ 0x14064F54C (PopFxTraceDeviceRegistration.c)
 *     PopFxUnregisterDevice @ 0x1407A01FC (PopFxUnregisterDevice.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x1407A0630 (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopFxTracePerfRegistration @ 0x1408E8C2C (PopFxTracePerfRegistration.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x1402C9B50 (KeGetCurrentProcessorNumberEx.c)
 */

void __fastcall PopFxAddLogEntry(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdi

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 )
    {
      v7 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 856), 1u) % *(_DWORD *)(v4 + 840);
      v8 = *(_QWORD *)(v4 + 848);
      v9 = 3 * v7;
      *(_QWORD *)(v8 + 8 * v9) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v8 + 8 * v9 + 8) = a3;
      *(_BYTE *)(v8 + 8 * v9 + 9) = a2;
      *(_WORD *)(v8 + 8 * v9 + 10) = KeGetCurrentProcessorNumberEx(0LL);
      *(_WORD *)(v8 + 8 * v9 + 12) = KeGetCurrentThread()[1].CycleTime;
      *(_WORD *)(v8 + 8 * v9 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
      *(_QWORD *)(v8 + 8 * v9 + 16) = a4;
    }
  }
}
