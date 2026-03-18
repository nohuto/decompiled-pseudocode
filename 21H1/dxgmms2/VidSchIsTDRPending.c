/*
 * XREFs of VidSchIsTDRPending @ 0x1C000B6C0
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0014D00 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003C9F0 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchSubmitPagingCommand @ 0x1C00684BC (VidSchSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007E090 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C007EE90 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C007F230 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080C40 (VidSchWaitForCompletionEvent.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0084EA0 (VidSchiSubmitPagingCommand.c)
 *     VidSchSwitchFromContext @ 0x1C008AAD0 (VidSchSwitchFromContext.c)
 *     VidSchiRun_PriorityTable @ 0x1C008D2B0 (VidSchiRun_PriorityTable.c)
 *     VidSchiDrainFlipQueue @ 0x1C00D11E0 (VidSchiDrainFlipQueue.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00D149C (VidSchiPreemptEngineNodes.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00D15EC (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00D1734 (VidSchiResetEngines.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00D1940 (VidSchiSubmitQueueCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00D1A7C (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushAdapter @ 0x1C00D2960 (VidSchFlushAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1C00D3EA0 (VidSchSwitchFromDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 2916) != 0;
}
