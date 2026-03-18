/*
 * XREFs of HUBREG_QueryDeviceWerThrottleMask @ 0x1C0083280
 * Callers:
 *     WER_UpdateThrottlePolicy @ 0x1C003CD8C (WER_UpdateThrottlePolicy.c)
 *     WER_CreateReport @ 0x1C003D104 (WER_CreateReport.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_QueryDeviceWerThrottleMask(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned __int16 v4; // r9
  int v5; // ebx
  __int64 v6; // rax
  __int64 v8; // [rsp+28h] [rbp-40h]
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  v9[0] = 0LL;
  v11 = 0LL;
  v10 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, _QWORD *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         a1,
         1LL,
         131103LL,
         0LL,
         v9);
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v4 = 131;
    goto LABEL_4;
  }
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, int, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
         WdfDriverGlobals,
         v9[0],
         &g_DeviceWerKey,
         131103LL,
         1,
         0LL,
         0LL,
         &v11);
  if ( v3 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, unsigned int *))(WdfFunctions_01015 + 1920))(
           WdfDriverGlobals,
           v11,
           &g_ThrottleMask,
           &v10);
    if ( (int)(v5 + 0x80000000) >= 0
      && v5 != -1073741772
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             WdfDriverGlobals->Driver,
             off_1C00671E8);
      LODWORD(v8) = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 64),
        2u,
        2u,
        0x85u,
        (__int64)&WPP_ec435a79b99d323019775391632c21d3_Traceguids,
        v8);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 132;
LABEL_4:
    LODWORD(v8) = v3;
    WPP_RECORDER_SF_d(a2, 2u, 5u, v4, (__int64)&WPP_ec435a79b99d323019775391632c21d3_Traceguids, v8);
  }
LABEL_12:
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v9[0] )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v10;
}
