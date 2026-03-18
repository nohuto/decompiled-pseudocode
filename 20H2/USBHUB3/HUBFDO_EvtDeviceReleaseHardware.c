/*
 * XREFs of HUBFDO_EvtDeviceReleaseHardware @ 0x1C00746B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006A7C (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBSM_AddHsmEvent @ 0x1C0009F38 (HUBSM_AddHsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C002FAF4 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     HUBFDO_UnregisterSleepstudyBlockerReasons @ 0x1C0077BBC (HUBFDO_UnregisterSleepstudyBlockerReasons.c)
 *     HUBCONNECTOR_UnMapHubPorts @ 0x1C007C0FC (HUBCONNECTOR_UnMapHubPorts.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceReleaseHardware(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  const void *v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // rax
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h]
  char v15; // [rsp+50h] [rbp+18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0066170);
  v3 = v1;
  _InterlockedAnd((volatile signed __int32 *)(v1 + 40), 0xFFFDFFFF);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v2, &USBHUB3_ETW_EVENT_HUB_RELEASE_HARDWARE_START, 0LL, *(_QWORD *)(v1 + 248));
  HUBFDO_UnregisterSleepstudyBlockerReasons(v3);
  HUBCONNECTOR_UnMapHubPorts(v3);
  v15 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v4,
    "ControllerPowerReference Tag",
    93LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\ucx.h");
  (*(void (__fastcall **)(_QWORD, char *))(v3 + 560))(*(_QWORD *)(v3 + 248), &v15);
  KeResetEvent((PRKEVENT)(v3 + 1152));
  HUBSM_AddHsmEvent(v3, 2035LL);
  v5 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                       WdfDriverGlobals,
                       v3);
  HUBMISC_WaitForSignal((PVOID)(v3 + 1152), "Hub FDO PnpCallback", v5);
  v6 = *(_DWORD *)(v3 + 1176);
  (*(void (__fastcall **)(_QWORD, char *))(v3 + 568))(*(_QWORD *)(v3 + 248), &v15);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v7,
    "ControllerPowerReference Tag",
    129LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\ucx.h");
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00661C0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 32),
    0LL);
  v9 = *(_QWORD *)(v3 + 2432);
  if ( *(_QWORD *)(v9 + 8) != v3 + 2432 || (v10 = *(_QWORD **)(v3 + 2440), *v10 != v3 + 2432) )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 32));
  v11 = *(void **)(v3 + 2552);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x68334855u);
  RtlInitUnicodeString((PUNICODE_STRING)(v3 + 2544), 0LL);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v14) = v6;
    McTemplateK0pq_EtwWriteTransfer(
      v12,
      &USBHUB3_ETW_EVENT_HUB_RELEASE_HARDWARE_COMPLETE,
      0LL,
      *(_QWORD *)(v3 + 248),
      v14);
  }
  return v6;
}
