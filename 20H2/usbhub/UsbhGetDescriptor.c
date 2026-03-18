/*
 * XREFs of UsbhGetDescriptor @ 0x1C002B590
 * Callers:
 *     UsbhGetHubClassDescriptor @ 0x1C002BCB8 (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C002BE50 (UsbhGetHubConfigurationDescriptor.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C000A740 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

__int64 __fastcall UsbhGetDescriptor(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4, int a5, char a6)
{
  bool v10; // cf
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+48h] [rbp-20h]
  char v15; // [rsp+78h] [rbp+10h] BYREF
  __int16 v16; // [rsp+79h] [rbp+11h]
  char v17; // [rsp+7Bh] [rbp+13h]
  __int16 v18; // [rsp+7Ch] [rbp+14h]
  __int16 v19; // [rsp+7Eh] [rbp+16h]
  int v20; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0;
  FdoExt(a1);
  v10 = a6 != 0;
  a6 = -a6;
  v16 = 6;
  v17 = a4;
  v18 = 0;
  v15 = v10 ? -96 : 0x80;
  v19 = *a2;
  v11 = UsbhSyncSendCommand(a1, (__int64)&v15, a3, a2, v13, &v20);
  if ( (v11 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v11) )
  {
    LOBYTE(v14) = 0;
    UsbhException(a1, 0, 16, a3, *a2, v11, v20, usbfile_hub_c, 3814, v14);
  }
  return v11;
}
