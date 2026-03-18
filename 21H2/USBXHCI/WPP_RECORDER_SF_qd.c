/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C0014644
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0002BB0 (Interrupter_DeferredWorkProcessor.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C000C9B4 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000D1B0 (UsbDevice_SetDeviceDisabled.c)
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x1C000D31C (XilCoreDeviceSlot_ClearDeviceContext.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000DCAC (DeviceSlot_D0EntryCleanupState.c)
 *     Controller_EvtDeviceFileClose @ 0x1C00101E0 (Controller_EvtDeviceFileClose.c)
 *     Command_D0Entry @ 0x1C0010860 (Command_D0Entry.c)
 *     DeviceSlot_D0Entry @ 0x1C00148BC (DeviceSlot_D0Entry.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00149A0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Device_QueryCapabilities @ 0x1C0015018 (Device_QueryCapabilities.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002E930 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C0030B80 (Controller_AcquireWdfPowerReferenceForDebugger.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0034840 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Interrupter_CreateInterrupter @ 0x1C006CEC0 (Interrupter_CreateInterrupter.c)
 *     Register_PrepareHardware @ 0x1C0071244 (Register_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qd(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+50h] [rbp-18h]
  __int64 v14; // [rsp+58h] [rbp-10h]
  __int64 v15; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, (__int64 *)va, 8LL, va1, 4LL, 0LL, v13, v14);
}
