/*
 * XREFs of VidSchIsTDRPending @ 0x1C000C0E0
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0016910 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003C910 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchSubmitPagingCommand @ 0x1C006DEEC (VidSchSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007F970 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0080820 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C0080BC0 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0082620 (VidSchWaitForCompletionEvent.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0086C40 (VidSchiSubmitPagingCommand.c)
 *     VidSchSwitchFromContext @ 0x1C008DC20 (VidSchSwitchFromContext.c)
 *     VidSchiRun_PriorityTable @ 0x1C0090830 (VidSchiRun_PriorityTable.c)
 *     VidSchiDrainFlipQueue @ 0x1C00CFD90 (VidSchiDrainFlipQueue.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00D004C (VidSchiPreemptEngineNodes.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00D019C (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00D02E4 (VidSchiResetEngines.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00D04F0 (VidSchiSubmitQueueCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00D062C (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushAdapter @ 0x1C00D1510 (VidSchFlushAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1C00D2B30 (VidSchSwitchFromDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 2916) != 0;
}
