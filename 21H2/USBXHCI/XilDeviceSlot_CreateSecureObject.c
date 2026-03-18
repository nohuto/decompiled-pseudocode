/*
 * XREFs of XilDeviceSlot_CreateSecureObject @ 0x1C003659C
 * Callers:
 *     XilDeviceSlot_Create @ 0x1C00173C8 (XilDeviceSlot_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilDeviceSlot_CreateSecureObject(_QWORD *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+28h] [rbp-19h]
  __int64 v12; // [rsp+48h] [rbp+7h] BYREF
  __int64 v13; // [rsp+50h] [rbp+Fh]
  __int64 v14; // [rsp+58h] [rbp+17h] BYREF
  __int128 v15; // [rsp+60h] [rbp+1Fh]
  __int64 v16; // [rsp+70h] [rbp+2Fh]
  int v17; // [rsp+78h] [rbp+37h]
  int v18; // [rsp+7Ch] [rbp+3Bh]
  __int64 v19; // [rsp+80h] [rbp+3Fh]

  v12 = 0LL;
  LODWORD(v13) = 0;
  v2 = *(_QWORD **)(a1[9] + 8LL);
  v3 = v2[14];
  v14 = 0LL;
  v18 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v17 = 21;
  v19 = v2[71];
  v4 = SecureChannel_SendRequestSynchronously(v3, &v14, 48LL, &v12, 16);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v6 = v12;
    if ( (int)v12 >= 0 )
    {
      *a1 = v13;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(v2[9], v5, 10, 11, (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids, v12);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v7,
            v8,
            v9,
            v11,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
            98,
            "IOCTL succeeded but DeviceSlotCreate failed in VTL-1 failed");
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(v2[9], v5, 10, 10, (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids, v4);
  }
  return v6;
}
