/*
 * XREFs of UsbhGetHubClassDescriptor @ 0x1C002BCB8
 * Callers:
 *     UsbhCheckHubPowerStatus @ 0x1C00139C0 (UsbhCheckHubPowerStatus.c)
 *     UsbhInitialize @ 0x1C002CA30 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     UsbhGetDescriptor @ 0x1C002B590 (UsbhGetDescriptor.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubClassDescriptor(__int64 a1, void *a2)
{
  _DWORD *v4; // rsi
  int Descriptor; // ebx
  int v6; // r10d
  int v7; // r11d
  int v8; // r10d
  int v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+48h] [rbp-20h]
  unsigned __int16 v12; // [rsp+80h] [rbp+18h] BYREF
  _DWORD *v13; // [rsp+88h] [rbp+20h] BYREF

  v4 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      23,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  v13 = v4 + 734;
  memset(a2, 0, 0x47uLL);
  v12 = 71;
  Descriptor = UsbhGetDescriptor(a1, &v12, (__int64)a2, 41, v10, 1);
  Log(a1, 8, 1214475379, Descriptor, v12);
  if ( (Descriptor & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(Descriptor) )
    {
      LOBYTE(v11) = 0;
      UsbhException(a1, 0, 14, (int)&v13, v8, Descriptor, -1, usbfile_hub_c, 4089, v11);
    }
  }
  else if ( *((_BYTE *)v13 + 2) )
  {
    v4[640] |= 0x400000u;
    Log(a1, v7, 1214475364, (__int64)v13, *((unsigned __int8 *)v13 + 2));
  }
  else
  {
    LOBYTE(v11) = 0;
    Descriptor = -1073741811;
    UsbhException(a1, 0, 15, (int)&v13, v6, -1073741811, -1, usbfile_hub_c, 4098, v11);
  }
  return (unsigned int)Descriptor;
}
