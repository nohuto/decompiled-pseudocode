/*
 * XREFs of HUBPDO_PoFxDripsWatchdogCallback @ 0x1C001A970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqhhh_EtwWriteTransfer @ 0x1C0012DBC (McTemplateK0pqhhh_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBPDO_PoFxDripsWatchdogCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  NTSTATUS v4; // eax
  _UNKNOWN **v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // eax
  _UNKNOWN **v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 RemlockSize; // [rsp+28h] [rbp-19h]
  __int64 RemlockSizea; // [rsp+28h] [rbp-19h]
  __int64 v14; // [rsp+30h] [rbp-11h]
  __int128 v15; // [rsp+48h] [rbp+7h] BYREF
  __int64 v16; // [rsp+58h] [rbp+17h]
  _OWORD v17[2]; // [rsp+60h] [rbp+1Fh] BYREF
  __int128 v18; // [rsp+80h] [rbp+3Fh]
  void *v19; // [rsp+90h] [rbp+4Fh]
  __int64 v20; // [rsp+B0h] [rbp+6Fh] BYREF

  v2 = *(_QWORD *)(a2 + 64);
  v20 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  v15 = 0LL;
  v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", File, 1u, 0x20u);
  if ( v4 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v7,
      "DRIPS SR Tag",
      10897LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    *(_QWORD *)((char *)&v17[1] + 4) = 0x100000000LL;
    *((_QWORD *)&v18 + 1) = 0LL;
    v19 = off_1C0066198;
    *(_OWORD *)((char *)v17 + 4) = 0LL;
    LODWORD(v17[0]) = 56;
    HIDWORD(v17[1]) = 1;
    *(_QWORD *)&v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        v2);
    LODWORD(v15) = 24;
    *((_QWORD *)&v15 + 1) = HUBPDO_EvtWorkItemDripsWatchDogCallback;
    LOBYTE(v16) = 1;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _OWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           &v15,
           v17,
           &v20);
    if ( v8 >= 0 )
    {
      *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v20,
                   off_1C0066198) = a2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v20);
    }
    else
    {
      v9 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 1432LL),
          2u,
          2u,
          0x91u,
          (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
          v8);
      if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      {
        v10 = *(_QWORD *)(v2 + 24);
        LOWORD(v14) = *(_WORD *)(v10 + 1996);
        LODWORD(RemlockSizea) = 10;
        McTemplateK0pqhhh_EtwWriteTransfer(
          (__int64)v9,
          &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
          (const GUID *)(v10 + 1516),
          *(_QWORD *)(v10 + 24),
          RemlockSizea,
          v14,
          *(_WORD *)(v10 + 1998),
          *(_WORD *)(v10 + 2000));
      }
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v11,
        "DRIPS SR Tag",
        10925LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", 0x20u);
    }
  }
  else
  {
    v5 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 1432LL),
        2u,
        2u,
        0x90u,
        (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
        v4);
    if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    {
      v6 = *(_QWORD *)(v2 + 24);
      LOWORD(v14) = *(_WORD *)(v6 + 1996);
      LODWORD(RemlockSize) = 9;
      McTemplateK0pqhhh_EtwWriteTransfer(
        (__int64)v5,
        &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
        (const GUID *)(v6 + 1516),
        *(_QWORD *)(v6 + 24),
        RemlockSize,
        v14,
        *(_WORD *)(v6 + 1998),
        *(_WORD *)(v6 + 2000));
    }
  }
}
