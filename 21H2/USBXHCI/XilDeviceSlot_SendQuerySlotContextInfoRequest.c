/*
 * XREFs of XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0036EB4
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00020D0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0010C30 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0010F60 (UsbDevice_UcxEvtReset.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall XilDeviceSlot_SendQuerySlotContextInfoRequest(__int64 *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v6; // rsi
  __int64 v7; // r10
  int v8; // eax
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+20h] [rbp-39h]
  __int64 v15; // [rsp+40h] [rbp-19h] BYREF
  __int128 v16; // [rsp+48h] [rbp-11h]
  __int64 v17; // [rsp+58h] [rbp-1h]
  int v18; // [rsp+60h] [rbp+7h]
  int v19; // [rsp+64h] [rbp+Bh]
  __int64 v20; // [rsp+68h] [rbp+Fh]
  __int64 v21; // [rsp+70h] [rbp+17h] BYREF
  int v22; // [rsp+78h] [rbp+1Fh]

  v6 = *(_QWORD *)(a1[9] + 8);
  v7 = *(_QWORD *)(v6 + 112);
  v15 = 0LL;
  v19 = 0;
  v21 = 0LL;
  v22 = 0;
  v17 = *a1;
  v20 = *(_QWORD *)(a2 + 608);
  v16 = 0LL;
  v18 = 28;
  v8 = SecureChannel_SendRequestSynchronously(v7, &v15, 48LL, &v21, 12);
  if ( v8 >= 0 )
  {
    LOBYTE(v8) = v21;
    if ( (int)v21 >= 0 )
    {
      if ( a3 )
      {
        LOBYTE(v8) = BYTE4(v21);
        *a3 = HIDWORD(v21);
      }
      if ( a4 )
      {
        LOBYTE(v8) = v22;
        *a4 = v22;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v9,
          10,
          29,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v21);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v10,
            v11,
            v12,
            v14,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
            133,
            "IOCTL succeeded but DeviceSlotQueryInfoFromSlotContext failed in VTL-1 failed");
      }
      LOBYTE(v8) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v8 )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    LOBYTE(v8) = WPP_RECORDER_SF_d(
                   *(_QWORD *)(v6 + 72),
                   v9,
                   10,
                   28,
                   (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
                   v8);
  }
  return v8;
}
