/*
 * XREFs of sub_1C002D328 @ 0x1C002D328
 * Callers:
 *     sub_1C00430F0 @ 0x1C00430F0 (sub_1C00430F0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C00298F8 @ 0x1C00298F8 (sub_1C00298F8.c)
 *     sub_1C002CE78 @ 0x1C002CE78 (sub_1C002CE78.c)
 *     sub_1C002D07C @ 0x1C002D07C (sub_1C002D07C.c)
 */

__int64 __fastcall sub_1C002D328(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbp
  unsigned __int32 v5; // ebx
  char *v6; // rax
  __int64 v7; // r9

  sub_1C000FD80(a1, 8, 1750224457, a2, 0LL);
  v4 = sub_1C000F050(a1);
  v5 = sub_1C00298F8(a1);
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    v6 = "ConfigureUsbHub";
    v7 = 5767LL;
LABEL_6:
    sub_1C002D07C(a1, v5, 3, v7, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c", v6);
    return v5;
  }
  if ( (v4[640] & 0x40) != 0 )
  {
    v5 = sub_1C002CE78(a1, a2);
    if ( (v5 & 0xC0000000) == 0xC0000000 )
    {
      v6 = "InitializeTtHub";
      v7 = 5777LL;
      goto LABEL_6;
    }
  }
  return v5;
}
