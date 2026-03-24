/*
 * XREFs of UsbhUpdateUxdSettings @ 0x1C005B7C4
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039198 (UsbhSetupDevice.c)
 *     UsbhIoctlCyclePort @ 0x1C003DF14 (UsbhIoctlCyclePort.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004815C (WPP_RECORDER_SF_DDD.c)
 *     UsbhBuildDeviceID @ 0x1C004FEB8 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C0050274 (UsbhBuildHardwareID.c)
 *     UsbhFreeID @ 0x1C0050D40 (UsbhFreeID.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C0051C60 (WPP_RECORDER_SF_Sqd.c)
 *     UsbhAcquirePdoUxdLock @ 0x1C005A314 (UsbhAcquirePdoUxdLock.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C005A9D0 (UsbhGetGlobalUxdSettings.c)
 *     UsbhGetUxdDeviceKey @ 0x1C005ADEC (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C005B07C (UsbhGetUxdPortKey.c)
 *     UsbhReleasePdoUxdLock @ 0x1C005B78C (UsbhReleasePdoUxdLock.c)
 *     UsbhUpdateSqmFlags @ 0x1C0073540 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhUpdateUxdSettings(__int64 a1, struct _DEVICE_OBJECT *a2, char a3, _BYTE *a4)
{
  _DWORD *v8; // rdi
  _DWORD *v9; // rbx
  int v10; // esi
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // rcx
  PDEVICE_OBJECT v14; // rcx
  struct _DEVICE_OBJECT *v15; // rcx
  PDEVICE_OBJECT v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r8d
  __int64 v23; // [rsp+38h] [rbp-A1h]
  __int128 v24; // [rsp+40h] [rbp-99h] BYREF
  _OWORD Source1[5]; // [rsp+50h] [rbp-89h] BYREF
  _OWORD Source2[4]; // [rsp+A0h] [rbp-39h] BYREF
  int v27; // [rsp+E0h] [rbp+7h]

  v8 = PdoExt((__int64)a2);
  v9 = FdoExt(a1);
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x14u,
      (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
  memset(Source1, 0, 0x44uLL);
  UsbhAcquirePdoUxdLock(v11, (__int64)a2);
  *a4 = 0;
  v12 = *(_OWORD *)(v8 + 650);
  v8[355] &= ~0x10000u;
  Source2[0] = v12;
  Source2[1] = *(_OWORD *)(v8 + 654);
  Source2[2] = *(_OWORD *)(v8 + 658);
  Source2[3] = *(_OWORD *)(v8 + 662);
  v27 = v8[666];
  UsbhGetGlobalUxdSettings(v13, v9 + 1294);
  if ( v9[1297] && !dword_1C006B62C )
  {
    if ( (int)UsbhGetUxdPortKey(a1, *((unsigned __int16 *)v8 + 714), Source1) < 0 )
    {
      if ( (int)UsbhGetUxdDeviceKey(v15, (__int64)a2, (__int64)Source1) < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            0,
            1u,
            0x18u,
            (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
            *((unsigned __int16 *)v8 + 714));
        goto LABEL_18;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *((unsigned __int16 *)v8 + 704),
          (__int64)WPP_GLOBAL_Control,
          0x17u,
          (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
          *((unsigned __int16 *)v8 + 704),
          *((unsigned __int16 *)v8 + 705),
          *((unsigned __int16 *)v8 + 706));
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
           && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x16u,
        (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
        *((unsigned __int16 *)v8 + 714));
    }
    v8[355] |= 0x10000u;
LABEL_18:
    *(_OWORD *)(v8 + 650) = Source1[0];
    *(_OWORD *)(v8 + 654) = Source1[1];
    *(_OWORD *)(v8 + 658) = Source1[2];
    *(_OWORD *)(v8 + 662) = Source1[3];
    v8[666] = Source1[4];
    if ( RtlCompareMemory(Source1, Source2, 0x44uLL) != 68 && (v8[355] & 4) == 0 )
      *a4 = 1;
    if ( *a4 && a3 )
    {
      v24 = 0LL;
      v10 = UsbhBuildHardwareID(a1, (__int64)a2, (__int64)&v24);
      if ( v10 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              0,
              1u,
              0x1Au,
              (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
        }
      }
      else
      {
        UsbhFreeID((__int64)(v8 + 524));
        *((_OWORD *)v8 + 131) = v24;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v23) = DWORD1(v24);
          WPP_RECORDER_SF_Sqd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v17,
            v18,
            0x19u,
            (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
            *((const wchar_t **)&v24 + 1),
            *((_QWORD *)&v24 + 1),
            v23);
        }
        v10 = UsbhBuildDeviceID(a1, (__int64)a2, (__int64)&v24);
        if ( v10 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v16 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                0,
                1u,
                0x1Cu,
                (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
          }
        }
        else
        {
          UsbhFreeID((__int64)(v8 + 520));
          *((_OWORD *)v8 + 130) = v24;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v16 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v23) = DWORD1(v24);
              WPP_RECORDER_SF_Sqd(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v19,
                v20,
                0x1Bu,
                (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
                *((const wchar_t **)&v24 + 1),
                *((_QWORD *)&v24 + 1),
                v23);
            }
          }
        }
      }
    }
    UsbhReleasePdoUxdLock((__int64)v16, (__int64)a2);
    v21 = v8[701];
    if ( (v21 & 4) == 0 && (v8[355] & 0x10000) != 0 )
    {
      v8[701] = v21 | 4;
      UsbhUpdateSqmFlags(a2);
    }
    return (unsigned int)v10;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x15u,
        (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
  }
  UsbhReleasePdoUxdLock((__int64)v14, (__int64)a2);
  return 0LL;
}
