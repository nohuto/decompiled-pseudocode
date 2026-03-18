/*
 * XREFs of sub_1C0037328 @ 0x1C0037328
 * Callers:
 *     sub_1C0041F88 @ 0x1C0041F88 (sub_1C0041F88.c)
 *     sub_1C00430F0 @ 0x1C00430F0 (sub_1C00430F0.c)
 * Callees:
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000BBF0 @ 0x1C000BBF0 (sub_1C000BBF0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002D07C @ 0x1C002D07C (sub_1C002D07C.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002ED68 @ 0x1C002ED68 (sub_1C002ED68.c)
 *     sub_1C0034AF8 @ 0x1C0034AF8 (sub_1C0034AF8.c)
 *     sub_1C0037200 @ 0x1C0037200 (sub_1C0037200.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C0037328(__int64 a1, __int64 a2)
{
  __int32 v4; // edi
  unsigned __int16 i; // si
  __int32 v6; // eax
  __int64 v7; // rax
  __int64 v9; // [rsp+28h] [rbp-60h]
  int v10; // [rsp+A0h] [rbp+18h] BYREF
  int v11; // [rsp+A8h] [rbp+20h] BYREF

  sub_1C000FD80(a1, 16, 1715622740, a1, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xCu, (__int64)"FKh&");
  v4 = sub_1C000BBF0(a1);
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    sub_1C002D07C(a1, v4, 3, 482LL, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\bus.c", "PowerOnPorts");
  }
  else
  {
    sub_1C002ED68(a1);
    for ( i = 1; i <= *((unsigned __int8 *)sub_1C000F050(a1) + 2938); ++i )
    {
      v10 = 0;
      v11 = 0;
      v6 = sub_1C000A080(a1, i, (__int64)&v10, &v11);
      v4 = v6;
      if ( (v6 & 0xC0000000) == 0xC0000000 )
      {
        sub_1C000FD80(a1, 16, 1768843569, i + 1LL, v6);
        if ( !sub_1C001CEB4(v4) )
          sub_1C004A608(a1, i, 23, 0, 0, v4, v11, (__int64)aBusC, 511, 0);
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        {
          LODWORD(v9) = v4;
          sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xDu, (__int64)"FKh&", v9);
        }
        break;
      }
      if ( (v10 & 1) != 0 && (v10 & 0x10000) == 0 )
      {
        sub_1C000FD80(a1, 16, 1768843570, i, v6);
        if ( (v10 & 2) != 0 )
        {
          v7 = sub_1C0016CA0(a1, i);
          if ( v7 )
            sub_1C0037200(a1, v7);
        }
        sub_1C0034AF8(a1, i, a2, 0);
      }
    }
  }
  if ( v4 >= 0 )
  {
    sub_1C000FD80(a1, 8, 1381192747, 0LL, 0LL);
    sub_1C001A550(a1, a2, 1);
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v9) = v4;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xEu, (__int64)"FKh&", v9);
  }
  sub_1C000FD80(a1, 16, 1718514515, a1, v4);
  return (unsigned int)v4;
}
