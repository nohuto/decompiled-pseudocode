/*
 * XREFs of PopFxAddLogEntry @ 0x140246704
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x140246034 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowered @ 0x1402460C4 (PopDiagTraceFxDevicePowered.c)
 *     PopFxProcessWork @ 0x140246294 (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140246660 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x1402467F4 (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x140323130 (PoFxCompleteIdleCondition.c)
 *     PopDiagTraceIrpStart @ 0x14036FDA4 (PopDiagTraceIrpStart.c)
 *     PopDiagTraceIrpFinish @ 0x14037A974 (PopDiagTraceIrpFinish.c)
 *     PopFxAllocatePowerIrp @ 0x1403995A0 (PopFxAllocatePowerIrp.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14039C44C (PopDiagTraceFxDevicePowerState.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x1403A5800 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403A58C4 (PopDiagTraceFxComponentIdleState.c)
 *     PoFxCompleteIdleState @ 0x1403A5DE0 (PoFxCompleteIdleState.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1403A6E20 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1403C78F4 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxCompleteComponentPerfState @ 0x140568988 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x140568A8C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x140569290 (PopFxHandleDirectedPowerTransition.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140569940 (PopFxIssueComponentPerfStateChanges.c)
 *     PopPluginNotifyIdleState @ 0x14056BFC0 (PopPluginNotifyIdleState.c)
 *     PopDiagTraceFxComponentLatency @ 0x14057022C (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x14057031C (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x14057040C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x140570850 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x140570954 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxTraceDeviceRegistration @ 0x1406DA040 (PopFxTraceDeviceRegistration.c)
 *     PopFxUnregisterDevice @ 0x1407AF52C (PopFxUnregisterDevice.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x1407AF960 (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopFxTracePerfRegistration @ 0x1408EE83C (PopFxTracePerfRegistration.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x1402467C0 (KeGetCurrentProcessorNumberEx.c)
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
