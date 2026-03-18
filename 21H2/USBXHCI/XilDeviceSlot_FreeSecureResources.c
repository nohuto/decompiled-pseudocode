/*
 * XREFs of XilDeviceSlot_FreeSecureResources @ 0x1C0036724
 * Callers:
 *     XilDeviceSlot_ReleaseHardware @ 0x1C0036B74 (XilDeviceSlot_ReleaseHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall XilDeviceSlot_FreeSecureResources(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // r10
  int v4; // eax
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+40h] [rbp-48h] BYREF
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
  v11 = 0LL;
  v13 = 0LL;
  v14 = v2;
  v15 = 23;
  v4 = SecureChannel_SendRequestSynchronously(v3, &v12, 40LL, &v11, 8);
  if ( v4 >= 0 )
  {
    LOBYTE(v4) = v11;
    if ( (int)v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v1 + 72),
          v5,
          10,
          18,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v11);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v6,
            v7,
            v8,
            v10,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
            94,
            "IOCTL succeeded but DeviceSlotFreeResources failed in VTL-1 failed");
      }
      LOBYTE(v4) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v4 )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    LOBYTE(v4) = WPP_RECORDER_SF_d(
                   *(_QWORD *)(v1 + 72),
                   v5,
                   10,
                   17,
                   (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
                   v4);
  }
  return v4;
}
