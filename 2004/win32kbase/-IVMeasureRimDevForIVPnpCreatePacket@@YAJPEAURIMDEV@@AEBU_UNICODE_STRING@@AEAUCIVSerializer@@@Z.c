/*
 * XREFs of ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B21C8
 * Callers:
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01B8E6C (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z @ 0x1C01B30EC (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C01B3CB0 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C01B42D4 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall IVMeasureRimDevForIVPnpCreatePacket(
        struct RIMDEV *a1,
        const struct _UNICODE_STRING *a2,
        struct CIVSerializer *a3)
{
  const struct _UNICODE_STRING *v4; // r14
  __int64 v6; // rbp
  int v7; // edx
  int v8; // ebx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      102,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  v6 = *((_QWORD *)a3 + 2);
  v8 = CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v6 + 8), (const struct _UNICODE_STRING *)a1 + 13, 1);
  if ( v8 >= 0 )
  {
    v8 = CIVSerializer::Serialize(a3, (void **)(v6 + 64), *((void **)a1 + 40), *((unsigned int *)a1 + 82), 1);
    if ( v8 >= 0 )
    {
      if ( *((_BYTE *)a1 + 48) == 2 )
        v8 = CIVSerializer::Serialize(
               a3,
               (struct _IV_HID_DEVICE_INFO *)(v6 + 80),
               (struct RIMDEV *)((char *)a1 + 464),
               1);
      if ( v8 >= 0 )
        v8 = CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v6 + 1296), v4, 1);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      12,
      103,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  return (unsigned int)v8;
}
