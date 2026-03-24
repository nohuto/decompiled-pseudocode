/*
 * XREFs of UsbhSetPortPower @ 0x1C002D7DC
 * Callers:
 *     UsbhOvercurrentResetWorker @ 0x1C002F8C0 (UsbhOvercurrentResetWorker.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C000A740 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

__int64 __fastcall UsbhSetPortPower(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  int v5; // r10d
  int v7; // [rsp+20h] [rbp-60h]
  int v8; // [rsp+48h] [rbp-38h]
  int v9; // [rsp+50h] [rbp-30h] BYREF
  int v10; // [rsp+58h] [rbp-28h] BYREF
  __int16 v11; // [rsp+5Ch] [rbp-24h]
  __int16 v12; // [rsp+5Eh] [rbp-22h]
  _WORD v13[4]; // [rsp+60h] [rbp-20h] BYREF
  char v14; // [rsp+68h] [rbp-18h]
  char v15; // [rsp+69h] [rbp-17h]

  v2 = a2;
  v15 = 0;
  v9 = 0;
  FdoExt(a1);
  *(_DWORD *)&v13[1] = 0;
  v13[3] = v2;
  v13[0] = 0;
  Log(a1, 8, 1886416944, (unsigned int)v2, 0LL);
  v12 = 0;
  v10 = 525091;
  v14 = 3;
  v11 = v2;
  v4 = (int)UsbhSyncSendCommand(a1, (__int64)&v10, 0LL, &v13[2], v7, &v9);
  Log(a1, 8, 1886416945, v4, v9);
  if ( (v4 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v4) )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, (unsigned __int16)v2, 12, (int)v13, 10, v4, v5, usbfile_hub_c, 3524, v8);
  }
  Log(a1, 8, 1886549072, v4, v2);
  return (unsigned int)v4;
}
