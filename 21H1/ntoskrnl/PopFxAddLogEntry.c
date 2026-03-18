/*
 * XREFs of PopFxAddLogEntry @ 0x140236C6C
 * Callers:
 *     PopFxProcessWork @ 0x1402367FC (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140236BC8 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x140236D54 (PopFxIdleWorker.c)
 *     PopDiagTraceFxDevicePowered @ 0x1402373C0 (PopDiagTraceFxDevicePowered.c)
 *     PopFxCompleteDevicePowerRequired @ 0x14023742C (PopFxCompleteDevicePowerRequired.c)
 *     PoFxCompleteIdleCondition @ 0x1403149E0 (PoFxCompleteIdleCondition.c)
 *     PopDiagTraceIrpStart @ 0x14036D504 (PopDiagTraceIrpStart.c)
 *     PopDiagTraceIrpFinish @ 0x140377E34 (PopDiagTraceIrpFinish.c)
 *     PopFxAllocatePowerIrp @ 0x140396510 (PopFxAllocatePowerIrp.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14039C8CC (PopDiagTraceFxDevicePowerState.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x1403A2CA0 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403A2D64 (PopDiagTraceFxComponentIdleState.c)
 *     PoFxCompleteIdleState @ 0x1403A32B0 (PoFxCompleteIdleState.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1403A42A0 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1403C3F94 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxCompleteComponentPerfState @ 0x140564958 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x140564A5C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x14056520C (PopFxHandleDirectedPowerTransition.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1405658BC (PopFxIssueComponentPerfStateChanges.c)
 *     PopPluginNotifyIdleState @ 0x140567F40 (PopPluginNotifyIdleState.c)
 *     PopDiagTraceFxComponentLatency @ 0x14056C1AC (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x14056C29C (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x14056C38C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x14056C7D0 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x14056C8D4 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxTraceDeviceRegistration @ 0x1406FE27C (PopFxTraceDeviceRegistration.c)
 *     PopFxUnregisterDevice @ 0x14079C1FC (PopFxUnregisterDevice.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x14079C64C (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopFxTracePerfRegistration @ 0x1408E79AC (PopFxTracePerfRegistration.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140236D20 (KeGetCurrentProcessorNumberEx.c)
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
