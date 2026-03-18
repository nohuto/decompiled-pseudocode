/*
 * XREFs of DynamicLock_Release @ 0x1C0006D40
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0006928 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x1C0006C80 (Command_SendCommand.c)
 *     Controller_Start @ 0x1C0011474 (Controller_Start.c)
 *     Command_ControllerResetPostReset @ 0x1C002EAEC (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C002ECB4 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x1C002ED80 (Command_FailAllCommands.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002EFA4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002F490 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_AudioOffloadWnfStateUpdateWorker @ 0x1C00316F0 (Controller_AudioOffloadWnfStateUpdateWorker.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0031E64 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C0031F7C (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C0032B60 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     Controller_InternalReset @ 0x1C0032FD8 (Controller_InternalReset.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0033BA0 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C00344C0 (Controller_TimeSyncStartTrackingWorker.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034D50 (Controller_UcxEvtStartTrackingForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall DynamicLock_Release(__int64 a1, int a2, int a3, int a4)
{
  if ( *(_DWORD *)a1 != 1 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2536))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 8));
  if ( KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 8));
}
