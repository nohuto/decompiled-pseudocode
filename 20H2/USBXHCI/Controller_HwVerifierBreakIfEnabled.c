/*
 * XREFs of Controller_HwVerifierBreakIfEnabled @ 0x1C00329C4
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0004BB0 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_TransferEventHandler @ 0x1C0006860 (Endpoint_TransferEventHandler.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0006928 (Command_HandleCommandCompletionEvent.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00074B0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009E10 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000B4D0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BEB4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000DBF8 (Bulk_ProcessTransferEventWithED0.c)
 *     UsbDevice_EnableCompletion @ 0x1C000E630 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C000F9A0 (UsbDevice_SetAddressCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C000FBA0 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C0010300 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00170F0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0019120 (Control_ProcessTransferEventWithED0.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C00195F0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C00199C0 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002EFA4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002F490 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_InternalReset @ 0x1C0032FD8 (Controller_InternalReset.c)
 *     Controller_SetControllerGone @ 0x1C0033A48 (Controller_SetControllerGone.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C003A060 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C003A3A0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C003A66C (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0042BE8 (Isoch_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C00450BC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0046810 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0046A44 (UsbDevice_DisableCompletion.c)
 * Callees:
 *     McTemplateK0pppxsb16b16_EtwWriteTransfer @ 0x1C0035DAC (McTemplateK0pppxsb16b16_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_s @ 0x1C0036A40 (WPP_RECORDER_SF_s.c)
 */

char __fastcall Controller_HwVerifierBreakIfEnabled(
        _QWORD *a1,
        char a2,
        char a3,
        __int64 a4,
        const char *a5,
        __int128 *a6,
        __int128 *a7)
{
  _UNKNOWN **v11; // rax
  __int128 *v12; // rdx
  __int128 *v13; // rcx
  __int128 v15; // [rsp+50h] [rbp-18h] BYREF

  v11 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LOBYTE(v11) = WPP_RECORDER_SF_s(a1[9], a2, a3, a4);
  if ( (a4 & a1[56]) != 0 )
  {
    DbgPrint("xHCI Hardware Verifier Break: %s\n", a5);
    LOBYTE(v11) = KdRefreshDebuggerNotPresent();
    if ( !(_BYTE)v11 )
      __debugbreak();
  }
  v15 = 0LL;
  if ( (WPP_MAIN_CB.AlignmentRequirement & 0x10) != 0 )
  {
    v12 = &v15;
    v13 = &v15;
    if ( a7 )
      v12 = a7;
    if ( a6 )
      v13 = a6;
    LOBYTE(v11) = McTemplateK0pppxsb16b16_EtwWriteTransfer(
                    (_DWORD)v13,
                    (_DWORD)v12,
                    a3,
                    a1[1],
                    a2,
                    a3,
                    a4,
                    (__int64)a5,
                    (__int64)v13,
                    (__int64)v12);
  }
  return (char)v11;
}
