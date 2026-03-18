/*
 * XREFs of UsbhSuspendPort @ 0x1C00138BC
 * Callers:
 *     UsbhRequestPortSuspend @ 0x1C0016130 (UsbhRequestPortSuspend.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0033A0C (UsbhHubSyncSuspendPortEvent.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C000A740 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     UsbhGetPortStatus @ 0x1C002C774 (UsbhGetPortStatus.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

__int64 __fastcall UsbhSuspendPort(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rsi
  _DWORD *v4; // r13
  __int64 v5; // rdi
  int v7; // r10d
  int PortStatus; // eax
  int v9; // [rsp+20h] [rbp-40h]
  int v10; // [rsp+48h] [rbp-18h]
  int v11; // [rsp+50h] [rbp-10h] BYREF
  __int16 v12; // [rsp+54h] [rbp-Ch]
  __int16 v13; // [rsp+56h] [rbp-Ah]
  __int16 v14; // [rsp+A8h] [rbp+48h] BYREF
  int v15; // [rsp+B0h] [rbp+50h] BYREF
  int v16; // [rsp+B8h] [rbp+58h] BYREF

  v2 = a2;
  v15 = 0;
  v14 = 0;
  v16 = 0;
  v4 = FdoExt(a1);
  Log(a1, 8, 1937076272, (unsigned int)v2, 0LL);
  v11 = 131875;
  v12 = v2;
  v13 = 0;
  v5 = (int)UsbhSyncSendCommand(a1, (__int64)&v11, 0LL, &v14, v9, &v15);
  Log(a1, 8, 1937076273, v5, v15);
  if ( (v5 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v5) )
  {
    LOBYTE(v10) = 0;
    UsbhException(a1, (unsigned __int16)v2, 51, 0, 0, v5, v7, usbfile_hub_c, 3663, v10);
  }
  Log(a1, 8, 1937077072, v5, v2);
  if ( (v4[641] & 2) != 0 )
  {
    PortStatus = UsbhGetPortStatus(a1, (unsigned __int16)v2, &v16, &v15);
    Log(a1, 8, 1937076307, PortStatus, v15);
  }
  return (unsigned int)v5;
}
