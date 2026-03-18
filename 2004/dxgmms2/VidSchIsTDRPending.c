/*
 * XREFs of VidSchIsTDRPending @ 0x1C000B6C0
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0014D00 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003C970 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchSubmitPagingCommand @ 0x1C00684BC (VidSchSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007E070 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C007EE70 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C007F210 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080C20 (VidSchWaitForCompletionEvent.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0084E80 (VidSchiSubmitPagingCommand.c)
 *     VidSchSwitchFromContext @ 0x1C008AAB0 (VidSchSwitchFromContext.c)
 *     VidSchiRun_PriorityTable @ 0x1C008D290 (VidSchiRun_PriorityTable.c)
 *     VidSchiDrainFlipQueue @ 0x1C00D11C0 (VidSchiDrainFlipQueue.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00D147C (VidSchiPreemptEngineNodes.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00D15CC (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00D1714 (VidSchiResetEngines.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00D1920 (VidSchiSubmitQueueCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00D1A5C (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushAdapter @ 0x1C00D2940 (VidSchFlushAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1C00D3E80 (VidSchSwitchFromDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 2916) != 0;
}
