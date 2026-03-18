/*
 * XREFs of Device_QueryCapabilities @ 0x1C0015018
 * Callers:
 *     Controller_CreateWdfDevice @ 0x1C006C580 (Controller_CreateWdfDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0014644 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 */

__int64 __fastcall Device_QueryCapabilities(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  char v4; // bl
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  unsigned __int16 v8; // r9
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v10[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v11[9]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v12; // [rsp+B0h] [rbp-58h] BYREF
  _OWORD v13[4]; // [rsp+C8h] [rbp-40h] BYREF

  v12 = 0LL;
  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  memset(v13, 0, sizeof(v13));
  v9 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 88));
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01023 + 1976))(
             WdfDriverGlobals,
             0LL,
             v2,
             &v9);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v8 = 264;
    goto LABEL_12;
  }
  *(_QWORD *)((char *)&v10[1] + 4) = 0LL;
  HIDWORD(v10[2]) = 0;
  v10[0] = 24LL;
  LODWORD(v10[1]) = -1073741637;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 1992))(
    WdfDriverGlobals,
    v9,
    v10);
  *((_QWORD *)&v13[0] + 1) = -1LL;
  v11[1] = v13;
  LODWORD(v13[0]) = 65600;
  LOWORD(v11[0]) = 2331;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2016))(
    WdfDriverGlobals,
    v9,
    v11);
  v12 = 0x200000010uLL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01023 + 2024))(
         WdfDriverGlobals,
         v9,
         v2,
         &v12);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2032))(WdfDriverGlobals, v9);
  if ( v4 && (int)result >= 0 )
  {
    v5 = v13[1];
    *(_OWORD *)(a1 + 24) = v13[0];
    v6 = v13[2];
    *(_OWORD *)(a1 + 40) = v5;
    v7 = v13[3];
    *(_OWORD *)(a1 + 56) = v6;
    *(_OWORD *)(a1 + 72) = v7;
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 265;
LABEL_12:
    result = WPP_RECORDER_SF_qd(
               *(_QWORD *)(a1 + 16),
               2u,
               4u,
               v8,
               (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
               *(_QWORD *)(a1 + 88),
               result);
  }
LABEL_5:
  if ( v9 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
  return result;
}
