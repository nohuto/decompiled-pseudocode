/*
 * XREFs of Controller_IsControllerAccessible @ 0x1C0007380
 * Callers:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005C8C (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Command_SendCommand @ 0x1C0006C80 (Command_SendCommand.c)
 *     Register_ControllerStop @ 0x1C000B014 (Register_ControllerStop.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000E990 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C000EB00 (UsbDevice_UcxEvtAddress.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C000F634 (XilDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0010610 (UsbDevice_UcxEvtReset.c)
 *     Register_ControllerReset @ 0x1C0010D88 (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x1C001102C (Register_WaitForControllerReady.c)
 *     Controller_Start @ 0x1C0011474 (Controller_Start.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0011710 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00120A0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00128A0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0013360 (RootHub_UcxEvtSetPortFeature.c)
 *     DeviceSlot_Initialize @ 0x1C00144D8 (DeviceSlot_Initialize.c)
 *     Command_Initialize @ 0x1C00145F0 (Command_Initialize.c)
 *     Interrupter_D0Entry @ 0x1C0014640 (Interrupter_D0Entry.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001766C (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0018940 (UsbDevice_UcxEvtUpdate.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002E790 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_UcxEvtReset @ 0x1C0033F60 (Controller_UcxEvtReset.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C003B850 (Interrupter_ControllerResetPostReset.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003DC60 (RootHub_UcxEvtGetPortErrorCount.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0047300 (UsbDevice_UcxEvtDisable.c)
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
      (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids,
      v2,
      *(_BYTE *)(a1 + 397));
  return 0;
}
