/*
 * XREFs of XilDeviceSlot_InitializeSecureResources @ 0x1C0035E88
 * Callers:
 *     DeviceSlot_Initialize @ 0x1C00135B0 (DeviceSlot_Initialize.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F778 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilDeviceSlot_InitializeSecureResources(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // r10
  int v4; // eax
  int v5; // edx
  unsigned int v6; // edi
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v11; // [rsp+40h] [rbp-48h] BYREF
  __int64 v12; // [rsp+48h] [rbp-40h] BYREF
  __int128 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]

  v1 = *(_QWORD *)(a1[9] + 8);
  v2 = *a1;
  v3 = *(_QWORD *)(v1 + 112);
  v12 = 0LL;
  v16 = 0;
  v11 = 0;
  v13 = 0LL;
  v14 = v2;
  v15 = 24;
  v4 = SecureChannel_SendRequestSynchronously(v3, &v12, 40LL, &v11, 4);
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v1 + 72),
          v5,
          10,
          20,
          (__int64)&WPP_0ef60bba37223f5f44eaee70871e7dcd_Traceguids,
          v11);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v7, v8, v9);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v1 + 72), v5, 10, 19, (__int64)&WPP_0ef60bba37223f5f44eaee70871e7dcd_Traceguids, v4);
  }
  return v6;
}
