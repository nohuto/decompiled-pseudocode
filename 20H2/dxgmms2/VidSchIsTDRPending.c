/*
 * XREFs of VidSchIsTDRPending @ 0x1C000AEF0
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0016830 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003C6B0 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0066F20 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0067DD0 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C0068170 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0069B80 (VidSchWaitForCompletionEvent.c)
 *     VidSchSubmitPagingCommand @ 0x1C007780C (VidSchSubmitPagingCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C00848E0 (VidSchiSubmitPagingCommand.c)
 *     VidSchSwitchFromContext @ 0x1C008AB40 (VidSchSwitchFromContext.c)
 *     VidSchiRun_PriorityTable @ 0x1C008D3D0 (VidSchiRun_PriorityTable.c)
 *     VidSchiDrainFlipQueue @ 0x1C00D0BC0 (VidSchiDrainFlipQueue.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00D0E7C (VidSchiPreemptEngineNodes.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00D0FCC (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00D1114 (VidSchiResetEngines.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00D1320 (VidSchiSubmitQueueCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00D145C (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushAdapter @ 0x1C00D2340 (VidSchFlushAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1C00D3880 (VidSchSwitchFromDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 2916) != 0;
}
