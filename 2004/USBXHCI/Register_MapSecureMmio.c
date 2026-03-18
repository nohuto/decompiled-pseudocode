/*
 * XREFs of Register_MapSecureMmio @ 0x1C003C164
 * Callers:
 *     Register_PrepareHardware @ 0x1C006EC08 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F778 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Register_MapSecureMmio(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edx
  int v7; // ebx
  int v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]
  __int64 v15; // [rsp+60h] [rbp-18h]

  v1 = a1[1];
  v9 = 0;
  v3 = *(_QWORD *)(v1 + 112);
  v10 = 0LL;
  v4 = a1[15];
  v14 = 0;
  v11 = 0LL;
  v12 = v4;
  v5 = a1[3];
  v13 = 8;
  v15 = v5;
  v7 = SecureChannel_SendRequestSynchronously(v3, &v10, 48LL, &v9, 4);
  if ( v7 >= 0 )
  {
    v7 = v9;
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v6,
        6,
        73,
        (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
        v9);
    }
  }
  return (unsigned int)v7;
}
