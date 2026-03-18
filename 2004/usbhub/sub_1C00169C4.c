/*
 * XREFs of sub_1C00169C4 @ 0x1C00169C4
 * Callers:
 *     sub_1C000F090 @ 0x1C000F090 (sub_1C000F090.c)
 *     sub_1C004D8C0 @ 0x1C004D8C0 (sub_1C004D8C0.c)
 * Callees:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C00169C4(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 75, (__int64)&unk_1C0062098, a2);
  result = sub_1C0016CA0(a1, a2);
  if ( result )
    result = sub_1C0007840(a1, result, 4, a4, a3, 0, 0LL, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      return sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 76, (__int64)&unk_1C0062098, a2);
  }
  return result;
}
