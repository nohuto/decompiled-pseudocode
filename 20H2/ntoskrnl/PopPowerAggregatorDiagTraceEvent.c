/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x140772384
 * Callers:
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x1403826C0 (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140771D78 (PopPowerAggregatorNotifySuspendResume.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140772098 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorWorker @ 0x140772170 (PopPowerAggregatorWorker.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x1407721F8 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopNotifyCsStateExited @ 0x1408F2590 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1408FCCC8 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 */

void __fastcall PopPowerAggregatorDiagTraceEvent(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  REGHANDLE v6; // rdi

  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWrite(v6, EventDescriptor, 0LL, UserDataCount, UserData);
  }
}
