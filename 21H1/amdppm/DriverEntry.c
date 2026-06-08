/*
 * XREFs of DriverEntry @ 0x1C003635C
 * Callers:
 *     FxDriverEntryWorker @ 0x1C00027D4 (FxDriverEntryWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     EvtDriverUnload @ 0x1C001FE40 (EvtDriverUnload.c)
 *     WppCleanupKm @ 0x1C001FE98 (WppCleanupKm.c)
 *     WppInitKm @ 0x1C001FF4C (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C0020028 (WppLoadTracingSupport.c)
 *     ProcLibGlobalInit @ 0x1C0036650 (ProcLibGlobalInit.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS v4; // ebx
  unsigned __int16 v5; // r9
  unsigned int v6; // r8d
  __int64 v8; // [rsp+28h] [rbp-40h]
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_ProcessorDriverTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  v9[0] = 32LL;
  v9[1] = EvtDriverDeviceAdd;
  v9[3] = 0LL;
  v9[2] = EvtDriverUnload;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD, _QWORD *, _QWORD))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         0LL,
         v9,
         0LL);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v5 = 10;
    v6 = 4;
    goto LABEL_4;
  }
  dword_1C00133F4 = KeQueryActiveProcessorAffinity(&unk_1C0013460);
  KeInitializeAffinityEx(&unk_1C0013710);
  v4 = ProcLibGlobalInit((PDEVICE_OBJECT)DriverObject);
  if ( v4 >= 0 )
  {
    v4 = 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 11;
    v6 = 3;
LABEL_4:
    LODWORD(v8) = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v6,
      v5,
      (__int64)&WPP_ea6247e0c89d3525a20904d64520788c_Traceguids,
      v8);
  }
LABEL_9:
  if ( v4 < 0 )
  {
    EvtDriverUnload();
    WppCleanupKm((__int64)DriverObject);
  }
  return v4;
}
