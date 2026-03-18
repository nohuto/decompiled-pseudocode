/*
 * XREFs of sub_1C00341E8 @ 0x1C00341E8
 * Callers:
 *     sub_1C002F8C0 @ 0x1C002F8C0 (sub_1C002F8C0.c)
 *     sub_1C0039F00 @ 0x1C0039F00 (sub_1C0039F00.c)
 * Callees:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C00341E8(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  int v7; // [rsp+28h] [rbp-20h]

  v3 = a3;
  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v7 = v3;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x38u, (__int64)&unk_1C0062098, v7);
  }
  sub_1C000FD80(a1, 512, 1346711601, 0LL, v3);
  result = sub_1C0016CA0(a1, v3);
  if ( result )
    return sub_1C0007840(a1, result, 1, a2, 0LL, 0, 0LL, 0LL);
  return result;
}
