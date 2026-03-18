/*
 * XREFs of XilEndpoint_CreateSecureObject @ 0x1C00374A0
 * Callers:
 *     XilEndpoint_Create @ 0x1C0001DEC (XilEndpoint_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_CreateSecureObject(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // [rsp+20h] [rbp-29h]
  __int64 v18; // [rsp+20h] [rbp-29h]
  __int64 v19; // [rsp+40h] [rbp-9h] BYREF
  __int64 v20; // [rsp+48h] [rbp-1h]
  _OWORD v21[2]; // [rsp+50h] [rbp+7h] BYREF
  __int128 v22; // [rsp+70h] [rbp+27h]
  __int64 v23; // [rsp+80h] [rbp+37h]

  v19 = 0LL;
  LODWORD(v20) = 0;
  v5 = (_QWORD *)a1[4];
  v6 = *v5;
  v7 = *(_QWORD *)(*v5 + 112LL);
  v22 = 0LL;
  LODWORD(v22) = 33;
  memset(v21, 0, sizeof(v21));
  v23 = 0LL;
  v8 = v5[2];
  if ( *(_BYTE *)(v8 + 657) )
  {
    v9 = *(_QWORD *)(v8 + 608);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a2,
        a3,
        a4,
        v17,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
        120,
        "Unexpected code path hit");
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    v9 = 0LL;
  }
  *((_QWORD *)&v22 + 1) = v9;
  LODWORD(v23) = *(_DWORD *)(a1[4] + 144LL);
  v10 = SecureChannel_SendRequestSynchronously(v7, v21, 56LL, &v19, 16);
  v12 = v10;
  if ( v10 >= 0 )
  {
    v12 = v19;
    if ( (int)v19 >= 0 )
    {
      *a1 = v20;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v11,
          13,
          11,
          (__int64)&WPP_c9b84b1160863fb1dfbb88ae491c1c73_Traceguids,
          v19);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v13,
            v14,
            v15,
            v18,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
            255,
            "IOCTL succeeded but EndpointCreate failed in VTL-1 failed");
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), v11, 13, 10, (__int64)&WPP_c9b84b1160863fb1dfbb88ae491c1c73_Traceguids, v10);
  }
  return v12;
}
