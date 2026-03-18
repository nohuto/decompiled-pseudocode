/*
 * XREFs of sub_1C0016A98 @ 0x1C0016A98
 * Callers:
 *     sub_1C00022A0 @ 0x1C00022A0 (sub_1C00022A0.c)
 *     sub_1C000F4B0 @ 0x1C000F4B0 (sub_1C000F4B0.c)
 *     sub_1C0014C0C @ 0x1C0014C0C (sub_1C0014C0C.c)
 *     sub_1C003571C @ 0x1C003571C (sub_1C003571C.c)
 * Callees:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C0016A98(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF

  v3 = a3;
  v8 = -1073741667;
  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 64, (__int64)&unk_1C0062098, v3);
  sub_1C000FD80(a1, 512, 1346711856, 0LL, v3);
  v6 = sub_1C0016CA0(a1, (unsigned __int16)v3);
  if ( v6 )
    sub_1C0007840(a1, v6, 10, a2, 0LL, 0, 0LL, (__int64)&v8);
  return v8;
}
