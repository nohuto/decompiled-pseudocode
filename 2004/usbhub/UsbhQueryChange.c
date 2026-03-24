/*
 * XREFs of UsbhQueryChange @ 0x1C00167EC
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C000F090 (UsbhHubProcessIsr.c)
 * Callees:
 *     UsbhQueryPortState @ 0x1C000A080 (UsbhQueryPortState.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryChange(__int64 a1, unsigned __int16 a2, unsigned __int16 *a3, int *a4)
{
  __int16 v8; // bx
  __int64 PortData; // rax
  __int64 v10; // rsi
  int v11; // ebp
  unsigned __int16 v12; // cx
  int v14; // [rsp+48h] [rbp-40h]
  int v15; // [rsp+A0h] [rbp+18h] BYREF
  int v16; // [rsp+A8h] [rbp+20h] BYREF

  v15 = 0;
  v8 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 19, (__int64)"FKh&", a2);
  v16 = 0;
  PortData = UsbhGetPortData(a1, a2);
  *a3 = 0;
  v10 = PortData;
  v11 = UsbhQueryPortState(a1, a2, (__int64)&v15, &v16);
  if ( v11 >= 0 )
  {
    if ( (v15 & 0x10000) == 0 )
    {
      while ( 1 )
      {
        v8 *= 2;
        if ( (v8 & 0xFFE0) != 0 )
          break;
        if ( ((unsigned __int16)v8 & HIWORD(v15)) != 0 )
          goto LABEL_8;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 20, (__int64)"FKh&");
      Log(a1, 4, 1666076515, 0LL, 0LL);
      if ( (FdoExt(a1)[640] & 1) == 0 || (++*(_DWORD *)(v10 + 408), *(int *)(v10 + 408) >= 3) )
      {
        LOBYTE(v14) = 0;
        v16 = -1073704960;
        UsbhException(a1, a2, 10, (int)&v15, 4, v11, -1073704960, usbfile_bus_c, 1463, v14);
        v8 = 0;
        v11 = -1073741823;
      }
    }
LABEL_8:
    if ( (v8 & 0x1F) != 0 )
      *a3 |= v8;
  }
  v12 = *a3;
  if ( *a3 )
  {
    *(_DWORD *)(v10 + 408) = 0;
    v12 = *a3;
  }
  Log(a1, 4, 1348692071, v12, v11);
  if ( a4 )
    *a4 = v16;
  return (unsigned int)v11;
}
