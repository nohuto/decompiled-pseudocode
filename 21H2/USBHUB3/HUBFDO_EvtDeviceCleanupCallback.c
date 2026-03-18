/*
 * XREFs of HUBFDO_EvtDeviceCleanupCallback @ 0x1C000CCA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006D20 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C0030194 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     TUNNEL_CloseAllUsb4RemoteTargets @ 0x1C0088B88 (TUNNEL_CloseAllUsb4RemoteTargets.c)
 */

NTSTATUS __fastcall HUBFDO_EvtDeviceCleanupCallback(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx
  NTSTATUS v5; // eax
  void *v6; // rcx
  NTSTATUS v7; // eax
  void *v8; // rcx
  NTSTATUS v9; // eax
  void *v10; // rcx
  NTSTATUS result; // eax
  __int64 v12; // rcx
  __int64 v13; // [rsp+28h] [rbp-10h]
  NTSTATUS v14; // [rsp+28h] [rbp-10h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0067198);
  v3 = v1;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v2, (const EVENT_DESCRIPTOR *)"'", 0LL, *(_QWORD *)(v1 + 248));
  TUNNEL_CloseAllUsb4RemoteTargets(v3);
  v4 = *(void **)(v3 + 2640);
  if ( v4 )
  {
    v5 = PoUnregisterPowerSettingCallback(v4);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2520),
        2u,
        3u,
        0x22u,
        (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids,
        v14);
    }
    *(_QWORD *)(v3 + 2640) = 0LL;
  }
  v6 = *(void **)(v3 + 2568);
  if ( v6 )
  {
    v7 = PoUnregisterPowerSettingCallback(v6);
    if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v7;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2520),
        2u,
        3u,
        0x23u,
        (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids,
        v13);
    }
    *(_QWORD *)(v3 + 2568) = 0LL;
  }
  v8 = *(void **)(v3 + 2560);
  if ( v8 )
  {
    v9 = PoUnregisterPowerSettingCallback(v8);
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2520),
        2u,
        3u,
        0x24u,
        (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids,
        v13);
    }
    *(_QWORD *)(v3 + 2560) = 0LL;
  }
  if ( (*(_DWORD *)(v3 + 40) & 0x20) != 0 )
  {
    KeResetEvent((PRKEVENT)(v3 + 1152));
    HUBSM_AddEvent(v3 + 1264, 2027);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
    HUBMISC_WaitForSignal((PVOID)(v3 + 1152));
  }
  if ( *(_QWORD *)(v3 + 2256) )
  {
    (*(void (**)(void))(v3 + 520))();
    (*(void (__fastcall **)(_QWORD))(v3 + 504))(*(_QWORD *)(v3 + 2256));
    *(_QWORD *)(v3 + 2256) = 0LL;
  }
  v10 = *(void **)(v3 + 1256);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x68334855u);
  result = imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(v3 + 2520));
  v12 = *(unsigned int *)(v3 + 96);
  if ( (_DWORD)v12 )
  {
    result = USBD_ReleaseHubNumber();
    *(_DWORD *)(v3 + 96) = 0;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    return McTemplateK0p_EtwWriteTransfer(v12, &USBHUB3_ETW_EVENT_HUB_CLEANUP_COMPLETE, 0LL, *(_QWORD *)(v3 + 248));
  return result;
}
