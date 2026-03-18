/*
 * XREFs of HUBMISC_CreateWerReport @ 0x1C0031414
 * Callers:
 *     HUBPDO_ReportDeviceFailure @ 0x1C0019D50 (HUBPDO_ReportDeviceFailure.c)
 *     HUBMISC_WerReportWorkItem @ 0x1C007E130 (HUBMISC_WerReportWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WER_CreateReport @ 0x1C003D104 (WER_CreateReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_CreateWerReport(__int64 a1, int a2, int a3)
{
  int v3; // edi
  int v7; // esi
  __int64 v8; // rax
  int v9; // ebx
  _QWORD v11[3]; // [rsp+30h] [rbp-50h] BYREF
  int v12; // [rsp+48h] [rbp-38h] BYREF
  __int128 v13; // [rsp+4Ch] [rbp-34h]
  int v14; // [rsp+5Ch] [rbp-24h]
  int v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+64h] [rbp-1Ch]
  __int64 v17; // [rsp+68h] [rbp-18h]
  __int64 v18; // [rsp+70h] [rbp-10h]
  void *v19; // [rsp+78h] [rbp-8h]
  __int64 v20; // [rsp+B8h] [rbp+38h] BYREF

  v3 = 0;
  HIDWORD(v11[0]) = 0;
  LODWORD(v13) = 0;
  v20 = 0LL;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( a2 )
    {
      v9 = a2 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          v3 = 12291;
      }
      else
      {
        v3 = 12289;
      }
    }
    else
    {
      v3 = 12288;
    }
    return (unsigned int)WER_CreateReport(a1, 0, 0, v3, a3);
  }
  else
  {
    v19 = off_1C0067210;
    v17 = *(_QWORD *)(a1 + 16);
    v15 = 1;
    v16 = 1;
    v11[1] = HUBMISC_WerReportWorkItem;
    v11[2] = 1LL;
    v13 = 0LL;
    v14 = 0;
    v18 = 0LL;
    v12 = 56;
    v11[0] = 24LL;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, int *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           v11,
           &v12,
           &v20);
    if ( v7 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             v20,
             off_1C0067210);
      *(_QWORD *)v8 = a1;
      *(_DWORD *)(v8 + 8) = a2;
      *(_DWORD *)(v8 + 12) = a3;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v20);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x78u,
        (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids,
        v7);
    }
  }
  return (unsigned int)v7;
}
