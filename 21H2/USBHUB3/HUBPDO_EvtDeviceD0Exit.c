/*
 * XREFs of HUBPDO_EvtDeviceD0Exit @ 0x1C00188D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000C094 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C000C10C (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     HUBMISC_WaitForSignal @ 0x1C0030194 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C003C168 (HUBIDLE_AddEvent.c)
 *     SleepstudyHelper_ComponentInactive @ 0x1C00423B8 (SleepstudyHelper_ComponentInactive.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     WMI_FireNotification @ 0x1C0086B48 (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceD0Exit(unsigned __int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r8
  int v8; // r14d
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-59h]
  __int64 v16; // [rsp+30h] [rbp-51h]
  __int64 v17; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v18[3]; // [rsp+50h] [rbp-31h] BYREF
  __int128 v19; // [rsp+68h] [rbp-19h] BYREF
  __int64 v20; // [rsp+78h] [rbp-9h]
  __int64 v21; // [rsp+80h] [rbp-1h]
  __int128 v22; // [rsp+88h] [rbp+7h]
  __int64 v23; // [rsp+98h] [rbp+17h]
  GUID v24; // [rsp+A0h] [rbp+1Fh] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00670F8);
  v5 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 384) = a2;
  v24 = 0LL;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C00671E8)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v5 + 2176)) >= 0 )
  {
    v24 = *(GUID *)(v5 + 2176);
    _InterlockedOr((volatile signed __int32 *)(v5 + 1636), 0x80u);
  }
  KeClearEvent((PRKEVENT)(v5 + 1584));
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 3104))(
         WdfDriverGlobals,
         a1);
  v8 = v6;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v9 = *(_DWORD *)(v4 + 32) >> 3;
    LOWORD(v9) = (*(_DWORD *)(v4 + 32) & 8) != 0;
    McTemplateK0pqqh_EtwWriteTransfer(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_D0_EXIT_START,
      &v24,
      *(_QWORD *)(v5 + 24),
      a2,
      v6,
      v9);
  }
  if ( a2 == 5 )
  {
    if ( !v8 )
      goto LABEL_26;
  }
  else if ( !v8 && (*(_DWORD *)(v5 + 1632) & 0x400) == 0 )
  {
    v17 = 0LL;
    DWORD1(v19) = 0;
    HIDWORD(v18[0]) = 0;
    _InterlockedOr((volatile signed __int32 *)(v5 + 1632), 0x400u);
    v23 = 0LL;
    v18[0] = 24LL;
    v20 = 0LL;
    v18[1] = HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended;
    v19 = 0LL;
    LODWORD(v19) = 56;
    v21 = 0x100000001LL;
    v22 = a1;
    v18[2] = 1LL;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64 *))(WdfFunctions_01015 + 3032))(
            WdfDriverGlobals,
            v18,
            &v19,
            &v17);
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v17);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
        2u,
        2u,
        0x48u,
        (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
        v16);
    }
  }
  if ( a2 == 6 )
  {
    HUBSM_AddEvent(v5 + 504, 4079);
  }
  else
  {
    if ( a2 == 4 )
    {
      if ( (*(_DWORD *)(v4 + 32) & 4) != 0 )
      {
        v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64))(WdfFunctions_01015 + 688))(
                WdfDriverGlobals,
                a1,
                3221226195LL);
        if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v16) = v11;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            3u,
            5u,
            0x49u,
            (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
            v16);
        }
        _InterlockedAnd((volatile signed __int32 *)(v4 + 32), 0xFFFFFFFB);
      }
      if ( (*(_DWORD *)(v5 + 1632) & 0x4000) == 0 )
        HUBIDLE_AddEvent(v4 + 72, 6008LL, 0LL);
    }
    HUBSM_AddEvent(v5 + 504, 4071);
  }
  HUBMISC_WaitForSignal((PVOID)(v5 + 1584));
LABEL_26:
  LOBYTE(v7) = 1;
  v12 = *(_DWORD *)(v5 + 1576);
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
         WdfDriverGlobals,
         *(_QWORD *)(v5 + 2416),
         v7) == 1 )
    WMI_FireNotification(*(_QWORD *)v5, *(unsigned __int16 *)(*(_QWORD *)(v5 + 8) + 200LL), 1LL);
  v13 = *(_QWORD *)(v4 + 392);
  if ( v13 )
    SleepstudyHelper_ComponentInactive();
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 204LL) & 0x800) != 0 )
    PoFxIdleComponent(*(_QWORD *)(*(_QWORD *)v5 + 2608LL), 0LL, 2LL);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v16) = v8;
    LODWORD(v15) = v12;
    McTemplateK0pqq_EtwWriteTransfer(
      v13,
      &USBHUB3_ETW_EVENT_DEVICE_D0_EXIT_COMPLETE,
      &v24,
      *(_QWORD *)(v5 + 24),
      v15,
      v16);
  }
  _InterlockedAnd((volatile signed __int32 *)(v5 + 1636), 0xFFFFFF7F);
  return v12;
}
