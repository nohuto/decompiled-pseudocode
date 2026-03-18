/*
 * XREFs of UsbhBusSuspend_Action @ 0x1C00022A0
 * Callers:
 *     UsbhReleaseBusStateLock @ 0x1C0003300 (UsbhReleaseBusStateLock.c)
 * Callees:
 *     UsbhQueryPortState @ 0x1C000A080 (UsbhQueryPortState.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhPCE_Suspend @ 0x1C0016A98 (UsbhPCE_Suspend.c)
 *     UsbhLatchPdo @ 0x1C0016B5C (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C00171A0 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

__int64 __fastcall UsbhBusSuspend_Action(__int64 a1)
{
  __int64 v2; // rbp
  __int64 result; // rax
  int v4; // r9d
  unsigned __int16 i; // bx
  int PortState; // eax
  int v7; // ecx
  int v8; // [rsp+48h] [rbp-30h]

  v2 = FdoExt(a1);
  result = Log(a1, 2048, 1114862963, 0, 0LL);
  if ( *(_DWORD *)(v2 + 4216) != v4 )
  {
    for ( i = 1; ; ++i )
    {
      result = FdoExt(a1);
      if ( i > *(unsigned __int8 *)(result + 2938) )
        break;
      PortState = UsbhQueryPortState(a1);
      if ( PortState < 0 && !(unsigned __int8)Usb_Disconnected((unsigned int)PortState) )
      {
        LOBYTE(v8) = 0;
        UsbhException(a1, i, 78, 0, 0, v7, 0, usbfile_busm_c, 1198, v8);
        *(_DWORD *)(v2 + 4216) = 2;
      }
    }
  }
  return result;
}
