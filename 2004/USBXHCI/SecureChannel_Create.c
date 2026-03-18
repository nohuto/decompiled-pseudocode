/*
 * XREFs of SecureChannel_Create @ 0x1C0077358
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006F7E0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C0014AE8 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SecureChannel_Create(union _LARGE_INTEGER a1, union _LARGE_INTEGER **a2)
{
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ebx
  int v7; // r9d
  int v8; // edx
  __int128 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+40h] [rbp-30h]
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int128 v13; // [rsp+50h] [rbp-20h]
  void *v14; // [rsp+60h] [rbp-10h]
  union _LARGE_INTEGER *v15; // [rsp+90h] [rbp+20h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+30h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01023 + 3584))(
         WdfDriverGlobals,
         *(_QWORD *)(a1.QuadPart + 88),
         &v16);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v11 = 0LL;
    v12 = 0x100000001LL;
    v14 = off_1C0060270;
    v10 = 0LL;
    LODWORD(v10) = 56;
    v13 = 0LL;
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, union _LARGE_INTEGER **))(WdfFunctions_01023 + 1624))(
           WdfDriverGlobals,
           v16,
           &v10,
           &v15);
    v6 = v4;
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v6;
      v7 = 11;
      goto LABEL_4;
    }
    v15->QuadPart = v16;
    v15[1] = a1;
    KeQueryPerformanceCounter(v15 + 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_i(
        *(_QWORD *)(a1.QuadPart + 16),
        v8,
        19,
        12,
        (__int64)&WPP_6c69e57299f2371bca16af19cce5473c_Traceguids,
        v16);
    }
    *a2 = v15;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 10;
LABEL_4:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1.QuadPart + 16),
      v5,
      19,
      v7,
      (__int64)&WPP_6c69e57299f2371bca16af19cce5473c_Traceguids,
      v4);
  }
  return v6;
}
