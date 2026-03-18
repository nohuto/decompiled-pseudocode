/*
 * XREFs of HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C0029414
 * Callers:
 *     HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero @ 0x1C001E520 (HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006A7C (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x1C0039408 (HUBDESC_ValidateDeviceDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_ValidateFirstDeviceDescriptorFor20(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rdi
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  bool v8; // cf
  int v9; // edx
  bool v10; // zf
  _WORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+34h] [rbp-3Ch]
  __int64 v14; // [rsp+38h] [rbp-38h]
  int v15; // [rsp+40h] [rbp-30h]
  int v16; // [rsp+44h] [rbp-2Ch]
  __int64 (__fastcall *v17)(_QWORD, _QWORD); // [rsp+48h] [rbp-28h]
  void *v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+58h] [rbp-18h]
  _BOOL8 v20; // [rsp+60h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 256);
  v2 = a1 + 1732;
  v4 = 4077;
  if ( v1 < 8 )
  {
    *(_DWORD *)(a1 + 2432) = v1 != 0 ? 1073807365 : 1073807360;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x4Fu,
        (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
        *(_DWORD *)(a1 + 256));
    goto LABEL_6;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00661C0);
  v6 = *(_QWORD *)(a1 + 8);
  v19 = a1;
  v14 = 0LL;
  v7 = *(_DWORD *)(v5 + 4);
  v12[0] = *(_WORD *)(a1 + 1990);
  v13 = *(_DWORD *)(a1 + 172);
  v20 = 0LL;
  *(_WORD *)((char *)&v14 + 5) = (v7 & 0x20) != 0;
  v12[1] = 0;
  HIBYTE(v14) = (v7 & 0x2000) != 0;
  v8 = (v7 & 0x4000) != 0;
  v9 = *(_DWORD *)(a1 + 256);
  v10 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v14) = v8;
  v16 = 0;
  v20 = !v10;
  v15 = *(_DWORD *)(v6 + 220);
  v17 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v18 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateDeviceDescriptor(v2, v9, (unsigned int)v12, 0, *(_QWORD *)(v6 + 1432)) )
  {
    *(_DWORD *)(a1 + 2432) = 1073807365;
LABEL_6:
    v4 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        a1,
        &USBHUB3_ETW_EVENT_INVALID_DEVICE_DESCRIPTOR,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    return v4;
  }
  *(_DWORD *)(a1 + 160) = *(unsigned __int8 *)(v2 + 7);
  *(_QWORD *)(a1 + 1988) = *(_QWORD *)v2;
  if ( *(_WORD *)(v2 + 8) == 5118 && *(_WORD *)(v2 + 10) == 20992 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x400000u);
  return v4;
}
