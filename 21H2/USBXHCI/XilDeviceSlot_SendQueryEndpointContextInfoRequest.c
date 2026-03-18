/*
 * XREFs of XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0036D28
 * Callers:
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C000BFCC (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     UsbDevice_GetEndpointState @ 0x1C000C034 (UsbDevice_GetEndpointState.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall XilDeviceSlot_SendQueryEndpointContextInfoRequest(
        __int64 *a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-41h]
  __int128 v17; // [rsp+40h] [rbp-21h] BYREF
  __int64 v18; // [rsp+50h] [rbp-11h]
  __int64 v19; // [rsp+58h] [rbp-9h]
  __int128 v20; // [rsp+60h] [rbp-1h]
  __int64 v21; // [rsp+70h] [rbp+Fh]
  __int128 v22; // [rsp+78h] [rbp+17h] BYREF

  v7 = *(_QWORD *)(a1[9] + 8);
  v8 = *(_QWORD *)(v7 + 112);
  v21 = 0LL;
  v9 = *a1;
  v20 = 0LL;
  LODWORD(v21) = a3;
  v18 = 0LL;
  v19 = v9;
  *((_QWORD *)&v20 + 1) = *(_QWORD *)(a2 + 608);
  v17 = 0LL;
  LODWORD(v20) = 29;
  v22 = 0LL;
  v10 = SecureChannel_SendRequestSynchronously(v8, &v17, 56LL, &v22, 16);
  if ( v10 >= 0 )
  {
    LOBYTE(v10) = v22;
    if ( (int)v22 >= 0 )
    {
      if ( a4 )
      {
        LOBYTE(v10) = BYTE4(v22);
        *a4 = DWORD1(v22);
      }
      if ( a5 )
      {
        LOBYTE(v10) = BYTE8(v22);
        *a5 = *((_QWORD *)&v22 + 1);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v7 + 72),
          v11,
          10,
          31,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v22);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v12,
            v13,
            v14,
            v16,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
            11,
            "IOCTL succeeded but DeviceSlotQueryInfoFromEndpointContext failed in VTL-1 failed");
      }
      LOBYTE(v10) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v10 )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    LOBYTE(v10) = WPP_RECORDER_SF_d(
                    *(_QWORD *)(v7 + 72),
                    v11,
                    10,
                    30,
                    (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
                    v10);
  }
  return v10;
}
