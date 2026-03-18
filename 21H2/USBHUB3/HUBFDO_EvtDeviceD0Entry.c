/*
 * XREFs of HUBFDO_EvtDeviceD0Entry @ 0x1C000C530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000C094 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C000C10C (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     HUBMISC_WaitForSignal @ 0x1C0030194 (HUBMISC_WaitForSignal.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C004025C (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     SleepstudyHelper_ComponentActive @ 0x1C0042380 (SleepstudyHelper_ComponentActive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceD0Entry(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  PVOID *v4; // rbx
  struct _DEVICE_OBJECT *v5; // rax
  NTSTATUS v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *v9; // rax
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  char v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // rcx
  void *v17; // rbx
  int v18; // edx
  PVOID *Handle; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+28h] [rbp-30h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0067198);
  v3 = v2;
  *(_DWORD *)(v2 + 2600) = 1;
  _InterlockedOr((volatile signed __int32 *)(v2 + 40), 0x20000u);
  if ( (*(_DWORD *)(v2 + 44) & 0x10) != 0 && !*(_BYTE *)(v2 + 240) && (*(_DWORD *)(v2 + 40) & 0x4000000) != 0 )
  {
    v4 = (PVOID *)(v2 + 2640);
    if ( !*(_QWORD *)(v2 + 2640) )
    {
      v5 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                      WdfDriverGlobals,
                                      a1);
      v6 = PoRegisterPowerSettingCallback(
             v5,
             &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
             HUBFDO_IdleResiliencyCallback,
             (PVOID)v3,
             (PVOID *)(v3 + 2640));
      if ( v6 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, POWER_SETTING_CALLBACK *, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               a1,
               0LL,
               HUBFDO_IdleResiliencyCallback,
               1372,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
        if ( v7 < 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsMsgKM(v8, (unsigned int)v7, 0LL, "WdfDeviceStopIdle failed");
          PoUnregisterPowerSettingCallback(*v4);
          *v4 = 0LL;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3 + 2520),
          2u,
          3u,
          0x1Fu,
          (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids,
          v6);
      }
    }
  }
  if ( !*(_QWORD *)(v3 + 2560) )
  {
    if ( _bittest((const signed __int32 *)(v3 + 40), 0x1Au) )
    {
      v9 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                      WdfDriverGlobals,
                                      a1);
      v10 = PoRegisterPowerSettingCallback(
              v9,
              &GUID_USB_SETTING_SELECTIVE_SUSPEND,
              HUBFDO_PowerSettingCallback,
              (PVOID)v3,
              (PVOID *)(v3 + 2560));
      if ( v10 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v21) = v10;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v3 + 2520),
            2u,
            3u,
            0x20u,
            (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids,
            v21);
        }
        *(_QWORD *)(v3 + 2560) = 0LL;
      }
    }
  }
  v11 = 0;
  v12 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v11 = EtwActivityIdControl(3u, (LPGUID)(v3 + 2276));
    if ( v11 >= 0 )
    {
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(*(_QWORD *)(v3 + 816), v3 + 2276);
      v12 = 1;
    }
  }
  if ( (*(_DWORD *)(v3 + 40) & 0x80u) != 0 && *(_QWORD *)(v3 + 2616) )
    SleepstudyHelper_ComponentActive();
  if ( (*(_DWORD *)(v3 + 44) & 1) != 0 && *(_QWORD *)(v3 + 2624) )
    SleepstudyHelper_ComponentActive();
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v15 = v13;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v16 = *(_DWORD *)(v3 + 40) >> 10;
    LOWORD(v16) = (*(_DWORD *)(v3 + 40) & 0x400) != 0;
    LODWORD(v21) = v13;
    LODWORD(Handle) = 1;
    McTemplateK0pqqh_EtwWriteTransfer(
      v16,
      &USBHUB3_ETW_EVENT_HUB_D0_ENTRY_START,
      (const GUID *)(v3 + 2276),
      *(_QWORD *)(v3 + 248),
      Handle,
      v21,
      v16);
  }
  if ( v15 )
  {
    if ( (unsigned int)(v15 - 2) > 4 )
      goto LABEL_34;
    v17 = (void *)(v3 + 1152);
    KeResetEvent((PRKEVENT)(v3 + 1152));
    v18 = 2011;
  }
  else
  {
    v17 = (void *)(v3 + 1152);
    KeResetEvent((PRKEVENT)(v3 + 1152));
    v18 = 2007;
  }
  HUBSM_AddEvent(v3 + 1264, v18);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
  HUBMISC_WaitForSignal(v17);
  v11 = *(_DWORD *)(v3 + 1176);
LABEL_34:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v21) = v15;
    LODWORD(Handle) = v11;
    McTemplateK0pqq_EtwWriteTransfer(
      v14,
      &USBHUB3_ETW_EVENT_HUB_D0_ENTRY_COMPLETE,
      (const GUID *)(v3 + 2276),
      *(_QWORD *)(v3 + 248),
      Handle,
      v21);
  }
  if ( v12 == 1 )
    *(_OWORD *)(v3 + 2276) = 0LL;
  return (unsigned int)v11;
}
