/*
 * XREFs of UsbhGetHubDeviceInformation @ 0x1C002C0A0
 * Callers:
 *     UsbhInitialize @ 0x1C002CA30 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     Usbh_HubDerefDeviceHandle @ 0x1C002DE04 (Usbh_HubDerefDeviceHandle.c)
 *     Usbh_HubQueryDeviceInformation @ 0x1C002DF88 (Usbh_HubQueryDeviceInformation.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     UsbhGetDeviceHandle @ 0x1C0037BB4 (UsbhGetDeviceHandle.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C00530C8 (UsbhValidateDeviceDescriptor.c)
 */

__int64 __fastcall UsbhGetHubDeviceInformation(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r13
  __int64 DeviceHandle; // rbp
  unsigned int v7; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rdi
  int DeviceInformation; // esi
  __int128 v11; // xmm0
  int v12; // r8d
  int v13; // [rsp+48h] [rbp-40h]
  int v14; // [rsp+A0h] [rbp+18h] BYREF
  int v15; // [rsp+A8h] [rbp+20h] BYREF

  v15 = 0;
  v4 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      24,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  DeviceHandle = UsbhGetDeviceHandle(a1, a2);
  if ( !DeviceHandle )
    return 3221225473LL;
  v7 = 64;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x42554855u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
    {
      Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a2, 1212445810LL);
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, v7);
    *v9 = 0;
    DeviceInformation = Usbh_HubQueryDeviceInformation(a1, DeviceHandle, (_DWORD)v9, v7, (__int64)&v15);
    if ( DeviceInformation != -1073741789 )
      break;
    v7 = v9[1];
    ExFreePoolWithTag(v9, 0);
  }
  Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a2, 1212445810LL);
  if ( DeviceInformation >= 0 )
  {
    v4[633] = v9[11];
    v4[634] = v9[10];
    v11 = *(_OWORD *)(v9 + 3);
    v14 = 0;
    *(_OWORD *)(v4 + 635) = v11;
    *((_WORD *)v4 + 1278) = *((_WORD *)v9 + 14);
    Log(a1, 8, 1768842800, (__int64)v9, (__int64)v4);
    Log(a1, 8, 1768842872, (int)v4[634], (int)v4[633]);
    if ( !(unsigned __int8)UsbhValidateDeviceDescriptor(a1, (int)v4 + 2540, v12, (unsigned int)&v14, 0LL) )
    {
      LOBYTE(v13) = 0;
      DeviceInformation = -1073741811;
      UsbhException(a1, 0, 64, (_DWORD)v4 + 2540, 18, -1073741811, v14, usbfile_hub_c, 4205, v13);
    }
  }
  ExFreePoolWithTag(v9, 0);
  Log(a1, 8, 1768842814, DeviceInformation, 0LL);
  return (unsigned int)DeviceInformation;
}
