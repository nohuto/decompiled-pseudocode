/*
 * XREFs of UsbhGetDeviceInformationEx @ 0x1C003DAA8
 * Callers:
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C003DC2C (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C0048D4C (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C0048FE8 (UsbhGetHubNodeInfo.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     Usbh_HubQueryDeviceInformation @ 0x1C002DF88 (Usbh_HubQueryDeviceInformation.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 */

_DWORD *__fastcall UsbhGetDeviceInformationEx(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v6; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  int DeviceInformation; // eax
  __int64 v10; // rdi
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x28u,
      (__int64)&WPP_5e274af30a573d3e0e39e592c1d024f3_Traceguids);
  v6 = 64;
  do
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x42554855u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
      *a2 = -1073741670;
      return 0LL;
    }
    memset(PoolWithTag, 0, v6);
    *v8 = 0;
    DeviceInformation = Usbh_HubQueryDeviceInformation(a1, a3, (__int64)v8, v6, (__int64)&v12);
    v10 = DeviceInformation;
    if ( (DeviceInformation & 0xC0000000) == 0xC0000000 )
    {
      if ( DeviceInformation == -1073741789 )
        v6 = v8[1];
      ExFreePoolWithTag(v8, 0);
      v8 = 0LL;
    }
  }
  while ( (_DWORD)v10 == -1073741789 );
  Log(a1, 32, 1734633848, a3, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        2u,
        0x29u,
        (__int64)&WPP_5e274af30a573d3e0e39e592c1d024f3_Traceguids,
        v10);
  }
  *a2 = v10;
  return v8;
}
