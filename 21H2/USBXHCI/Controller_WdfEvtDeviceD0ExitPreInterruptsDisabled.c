/*
 * XREFs of Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C000C790
 * Callers:
 *     <none>
 * Callees:
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C000C884 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C000C9B4 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0016390 (WPP_RECORDER_SF_qDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C0035568 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00355FC (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled(__int64 a1, char a2)
{
  __int64 v4; // rbx
  char v5; // al
  int v6; // edx
  int v7; // r8d
  char v8; // bp
  int v9; // ecx
  int v10; // r8d

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00613D8)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3104))(WdfDriverGlobals, a1);
  v8 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh_EtwWriteTransfer(
      *(unsigned __int8 *)(v4 + 468),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_PRE_INTERRUPTS_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 468));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qDD(
      *(_QWORD *)(v4 + 72),
      v6,
      4,
      83,
      (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
      a1,
      a2,
      *(_DWORD *)(v4 + 420));
  }
  ControllerPreInterruptsDisableAcpiCallout(a1);
  Interrupter_D0ExitPreInterruptsDisabled(*(_QWORD *)(v4 + 128));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      v9,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_PRE_INTERRUPTS_COMPLETE,
      v10,
      *(_QWORD *)(v4 + 8),
      a2,
      v8,
      0);
  return 0LL;
}
