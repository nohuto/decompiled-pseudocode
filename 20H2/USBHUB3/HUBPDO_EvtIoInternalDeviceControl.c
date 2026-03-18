/*
 * XREFs of HUBPDO_EvtIoInternalDeviceControl @ 0x1C0014760
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C001A758 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002FCD4 (HUBMISC_VerifierDbgBreak.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtIoInternalDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned __int16 v17; // ax
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v23; // [rsp+20h] [rbp-50h]
  _OWORD v24[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+50h] [rbp-20h]
  GUID ActivityId; // [rsp+58h] [rbp-18h] BYREF

  v25 = 0LL;
  memset(v24, 0, sizeof(v24));
  ActivityId = 0LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v6,
         off_1C00660D0);
  *(_QWORD *)(*(_QWORD *)(v7 + 24) + 456LL) = a2;
  v8 = *(_QWORD *)(v7 + 24);
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C00661C0)
                  + 4) & 0x1000) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    if ( (!*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
       || (*(int (__fastcall **)(__int64, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v10, &ActivityId) < 0)
      && EtwActivityIdControl(3u, &ActivityId) >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(v9, &ActivityId);
    }
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    McTemplateK0pq_EtwWriteTransfer(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START,
      &ActivityId,
      *(_QWORD *)(v8 + 24),
      a5);
  if ( a5 != 2228227 )
  {
    if ( a5 == 2228231 || a5 == 2232243 )
    {
      v11 = *(_QWORD *)(v7 + 24);
      if ( (*(_DWORD *)(v11 + 2436) & 0x200) != 0 )
      {
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPort", v11 + 504);
        v11 = *(_QWORD *)(v7 + 24);
      }
      v12 = 4023;
      v13 = 0LL;
      v14 = 2232243LL;
      *(_DWORD *)(*(_QWORD *)(v11 + 8) + 1424LL) = 10;
      goto LABEL_37;
    }
LABEL_25:
    v12 = 1000;
    return HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 504LL, v12);
  }
  LOWORD(v24[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v24);
  v16 = *((_QWORD *)&v24[0] + 1);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    LODWORD(v23) = *(unsigned __int16 *)(*((_QWORD *)&v24[0] + 1) + 2LL);
    McTemplateK0pq_EtwWriteTransfer(v15, &USBHUB3_ETW_EVENT_DEVICE_URB_START, &ActivityId, *(_QWORD *)(v8 + 24), v23);
  }
  v17 = *(_WORD *)(v16 + 2);
  if ( v17 )
  {
    if ( v17 == 1 )
      goto LABEL_38;
    v18 = 30;
    if ( v17 == 30 )
    {
      v21 = *(_QWORD *)(v7 + 24);
      if ( (*(_DWORD *)(v21 + 2436) & 0x100) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v21 + 504);
      v12 = 4027;
    }
    else
    {
      v18 = 48;
      if ( v17 == 48 )
      {
        v20 = *(_QWORD *)(v7 + 24);
        if ( (*(_DWORD *)(v20 + 2436) & 0x100) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v20 + 504);
        v12 = 4047;
      }
      else
      {
        v18 = 49;
        if ( v17 != 49 )
        {
          if ( v17 <= 0x34u )
            goto LABEL_25;
          if ( v17 <= 0x36u )
          {
            v12 = 4019;
            return HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 504LL, v12);
          }
          if ( v17 != 59 )
            goto LABEL_25;
LABEL_38:
          v12 = 4039;
          return HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 504LL, v12);
        }
        v19 = *(_QWORD *)(v7 + 24);
        if ( (*(_DWORD *)(v19 + 2436) & 0x100) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v19 + 504);
        v12 = 4043;
      }
    }
    v13 = v18;
    v14 = 2228227LL;
LABEL_37:
    EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(v8, v14, v13);
    return HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 504LL, v12);
  }
  *(_QWORD *)(v16 + 8) = *(_QWORD *)(v8 + 24);
  if ( *(_QWORD *)(v16 + 24) )
  {
    v12 = 4031;
  }
  else
  {
    v12 = 4035;
    *(_QWORD *)(v16 + 32) = 0LL;
  }
  return HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 504LL, v12);
}
