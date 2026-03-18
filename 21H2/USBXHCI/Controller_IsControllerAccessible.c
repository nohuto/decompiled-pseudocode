/*
 * XREFs of Controller_IsControllerAccessible @ 0x1C0004288
 * Callers:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C00029BC (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     Register_ControllerStop @ 0x1C000D898 (Register_ControllerStop.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000FC10 (UsbDevice_UcxEvtEnable.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C00105E0 (XilDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C0010AE0 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0010F60 (UsbDevice_UcxEvtReset.c)
 *     Controller_Start @ 0x1C0011B68 (Controller_Start.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0011FE0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00125C0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0012CD0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0013700 (RootHub_UcxEvtInterruptTransfer.c)
 *     Register_WaitForControllerReady @ 0x1C0013BAC (Register_WaitForControllerReady.c)
 *     Register_ControllerReset @ 0x1C0013D48 (Register_ControllerReset.c)
 *     DeviceSlot_Initialize @ 0x1C0014604 (DeviceSlot_Initialize.c)
 *     Command_Initialize @ 0x1C001471C (Command_Initialize.c)
 *     Interrupter_D0Entry @ 0x1C00147A8 (Interrupter_D0Entry.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C00185D0 (UsbDevice_UcxEvtUpdate.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002E930 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_UcxEvtReset @ 0x1C0034070 (Controller_UcxEvtReset.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C003BD84 (Interrupter_ControllerResetPostReset.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003E1D0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C003E828 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00476E0 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 */

char __fastcall Controller_IsControllerAccessible(__int64 a1)
{
  char v2; // cl

  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL);
  if ( v2 && !*(_BYTE *)(a1 + 397) )
    return 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(a1 + 72),
      2,
      4,
      230,
      (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
      v2,
      *(_BYTE *)(a1 + 397));
  return 0;
}
