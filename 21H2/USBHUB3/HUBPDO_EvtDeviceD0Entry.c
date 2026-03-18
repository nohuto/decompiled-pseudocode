/*
 * XREFs of HUBPDO_EvtDeviceD0Entry @ 0x1C00186C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000C094 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C000C10C (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     HUBMISC_WaitForSignal @ 0x1C0030194 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C003C168 (HUBIDLE_AddEvent.c)
 *     SleepstudyHelper_ComponentActive @ 0x1C0042380 (SleepstudyHelper_ComponentActive.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceD0Entry(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  int v4; // eax
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+28h] [rbp-50h]
  GUID v12; // [rsp+40h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00670F8);
  v3 = *(_QWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 384) = 1;
  v12 = 0LL;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C00671E8)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v3 + 2176)) >= 0 )
  {
    v12 = *(GUID *)(v3 + 2176);
    _InterlockedOr((volatile signed __int32 *)(v3 + 1636), 0x80u);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v5 = v4;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v6 = *(_DWORD *)(v2 + 32) >> 3;
    LOWORD(v6) = (*(_DWORD *)(v2 + 32) & 8) != 0;
    McTemplateK0pqqh_EtwWriteTransfer(
      v6,
      &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_START,
      &v12,
      *(_QWORD *)(v3 + 24),
      1,
      v4,
      v6);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 8) + 204LL) & 0x800) != 0 )
    PoFxActivateComponent(*(_QWORD *)(*(_QWORD *)v3 + 2608LL), 0LL, 1LL);
  HUBIDLE_AddEvent(v2 + 72, 6007LL, 0LL);
  KeClearEvent((PRKEVENT)(v3 + 1584));
  HUBSM_AddEvent(v3 + 504, 4067);
  HUBMISC_WaitForSignal((PVOID)(v3 + 1584));
  v7 = *(_QWORD *)(v2 + 392);
  v8 = *(_DWORD *)(v3 + 1576);
  if ( v7 )
    SleepstudyHelper_ComponentActive();
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v11) = v5;
    LODWORD(v10) = v8;
    McTemplateK0pqq_EtwWriteTransfer(
      v7,
      &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_COMPLETE,
      &v12,
      *(_QWORD *)(v3 + 24),
      v10,
      v11);
  }
  _InterlockedAnd((volatile signed __int32 *)(v3 + 1636), 0xFFFFFF7F);
  return v8;
}
