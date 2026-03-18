/*
 * XREFs of sub_1C0016910 @ 0x1C0016910
 * Callers:
 *     sub_1C000F090 @ 0x1C000F090 (sub_1C000F090.c)
 * Callees:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C0016910(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  __int64 result; // rax

  v3 = a3;
  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 62, (__int64)&unk_1C0062098, v3);
  sub_1C000FD80(a1, 512, 1346711858, 0LL, v3);
  result = sub_1C0016CA0(a1, (unsigned __int16)v3);
  if ( result )
    return sub_1C0007840(a1, result, 12, a2, 0LL, 0, 0LL, 0LL);
  return result;
}
