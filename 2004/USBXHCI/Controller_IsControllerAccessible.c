/*
 * XREFs of Controller_IsControllerAccessible @ 0x1C0006E10
 * Callers:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005BA4 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Command_SendCommand @ 0x1C00068E0 (Command_SendCommand.c)
 *     Register_ControllerStop @ 0x1C000A738 (Register_ControllerStop.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000DF00 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C000E070 (UsbDevice_UcxEvtAddress.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C000EB74 (XilDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_UcxEvtReset @ 0x1C000F9F0 (UsbDevice_UcxEvtReset.c)
 *     Register_ControllerReset @ 0x1C00102FC (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x1C00105A0 (Register_WaitForControllerReady.c)
 *     Controller_Start @ 0x1C00109E8 (Controller_Start.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0010C80 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00113F0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0011BF0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00122E0 (RootHub_UcxEvtGetPortStatus.c)
 *     DeviceSlot_Initialize @ 0x1C00135B0 (DeviceSlot_Initialize.c)
 *     Command_Initialize @ 0x1C00136C8 (Command_Initialize.c)
 *     Interrupter_D0Entry @ 0x1C0013718 (Interrupter_D0Entry.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C00160C4 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0017640 (UsbDevice_UcxEvtUpdate.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002DFB0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_UcxEvtReset @ 0x1C0033780 (Controller_UcxEvtReset.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C003AFE0 (Interrupter_ControllerResetPostReset.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003D3E0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0046A60 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 */

char __fastcall Controller_IsControllerAccessible(__int64 a1)
{
  char v2; // cl

  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL);
  if ( v2 && !*(_BYTE *)(a1 + 397) )
    return 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1 + 72),
      2,
      4,
      229,
      (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
      v2,
      *(_BYTE *)(a1 + 397));
  return 0;
}
