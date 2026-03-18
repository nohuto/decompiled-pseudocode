/*
 * XREFs of HUBPDO_CompleteClientSerialRequestWithStatusFailed @ 0x1C00147A4
 * Callers:
 *     HUBDSM_CompletingClientRequestOnFailureInDisabled @ 0x1C001CDD0 (HUBDSM_CompletingClientRequestOnFailureInDisabled.c)
 *     HUBDSM_IssuingPortCycleAndCompletingClientRequestOnEnumFailue @ 0x1C001D3A0 (HUBDSM_IssuingPortCycleAndCompletingClientRequestOnEnumFailue.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000C094 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_CompleteClientSerialRequestWithStatusFailed(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int16 v5; // ax
  __int64 v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 456);
  *(_QWORD *)(a1 + 456) = 0LL;
  v9 = 0LL;
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  LOWORD(v9) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    &v9);
  if ( DWORD2(v10) == 2228227 )
  {
    v4 = *((_QWORD *)&v9 + 1);
    *(_DWORD *)(*((_QWORD *)&v9 + 1) + 4LL) = -2147482880;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        v3,
        &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24),
        *(unsigned __int16 *)(v4 + 2),
        -2147482880);
    v5 = *(_WORD *)(v4 + 2);
    if ( v5 == 1 || v5 == 59 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x10u);
      v5 = *(_WORD *)(v4 + 2);
    }
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        *(_QWORD *)(v4 + 40) = -1LL;
      }
      else if ( v5 == 59 )
      {
        *(_QWORD *)(v4 + 56) = -1LL;
      }
    }
    else
    {
      *(_QWORD *)(v4 + 32) = 0LL;
    }
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    LODWORD(v8) = -1073741823;
    LODWORD(v7) = DWORD2(v10);
    McTemplateK0pqq_EtwWriteTransfer(
      v3,
      &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24),
      v7,
      v8);
  }
  if ( (*(_DWORD *)(a1 + 1636) & 0x40) != 0 )
  {
    *(_OWORD *)(a1 + 1516) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFBF);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v1,
           3221225473LL);
}
