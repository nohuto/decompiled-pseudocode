/*
 * XREFs of XilDeviceSlot_AllocateSecureResources @ 0x1C0036424
 * Callers:
 *     XilDeviceSlot_PrepareHardware @ 0x1C0016478 (XilDeviceSlot_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilDeviceSlot_AllocateSecureResources(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+20h] [rbp-68h]
  __int64 v13; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+48h] [rbp-40h] BYREF
  __int128 v15; // [rsp+50h] [rbp-38h]
  __int64 v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+68h] [rbp-20h]
  int v18; // [rsp+6Ch] [rbp-1Ch]

  v2 = *(_QWORD *)(a1[9] + 8);
  v3 = *a1;
  v4 = *(_QWORD *)(v2 + 112);
  v14 = 0LL;
  v18 = 0;
  v13 = 0LL;
  v15 = 0LL;
  v16 = v3;
  v17 = 22;
  v5 = SecureChannel_SendRequestSynchronously(v4, &v14, 40LL, &v13, 8);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v7 = v13;
    if ( (int)v13 >= 0 )
    {
      *((_DWORD *)a1 + 20) = HIDWORD(v13);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          v6,
          10,
          14,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v13);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v8,
            v9,
            v10,
            v12,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
            222,
            "IOCTL succeeded but DeviceSlotAllocateResources failed in VTL-1 failed");
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), v6, 10, 13, (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids, v5);
  }
  return v7;
}
