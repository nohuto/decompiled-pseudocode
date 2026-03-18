/*
 * XREFs of HUBMISC_CreateWerReport @ 0x1C0030D40
 * Callers:
 *     HUBPDO_ReportDeviceFailure @ 0x1C0019800 (HUBPDO_ReportDeviceFailure.c)
 *     HUBMISC_WerReportWorkItem @ 0x1C007CB50 (HUBMISC_WerReportWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WER_CreateReport @ 0x1C003CA80 (WER_CreateReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_CreateWerReport(__int64 a1, int a2, int a3)
{
  int v3; // edi
  int v7; // esi
  __int64 v8; // rax
  _QWORD v10[3]; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+48h] [rbp-38h] BYREF
  __int128 v12; // [rsp+4Ch] [rbp-34h]
  int v13; // [rsp+5Ch] [rbp-24h]
  int v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+64h] [rbp-1Ch]
  __int64 v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp-10h]
  void *v18; // [rsp+78h] [rbp-8h]
  __int64 v19; // [rsp+B8h] [rbp+38h] BYREF

  v3 = 0;
  v19 = 0LL;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v3 = 12289;
      }
      else if ( a2 == 2 )
      {
        v3 = 12291;
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
    v18 = off_1C00661E8;
    v16 = *(_QWORD *)(a1 + 16);
    v14 = 1;
    v15 = 1;
    v10[1] = HUBMISC_WerReportWorkItem;
    v10[2] = 1LL;
    v12 = 0LL;
    v13 = 0;
    v17 = 0LL;
    v11 = 56;
    v10[0] = 24LL;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, int *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           v10,
           &v11,
           &v19);
    if ( v7 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             v19,
             off_1C00661E8);
      *(_QWORD *)v8 = a1;
      *(_DWORD *)(v8 + 8) = a2;
      *(_DWORD *)(v8 + 12) = a3;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v19);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x77u,
        (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids,
        v7);
    }
  }
  return (unsigned int)v7;
}
