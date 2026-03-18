/*
 * XREFs of sub_1C0018840 @ 0x1C0018840
 * Callers:
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 * Callees:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C0018840(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 result; // rax

  v6 = a2;
  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 81, (__int64)&unk_1C0062098, v6);
  sub_1C000FD80(a1, 512, 1953452114, 0LL, v6);
  result = sub_1C0016CA0(a1, v6);
  if ( result )
    return sub_1C0007840(a1, result, 15, a4, a3, 1, a5, 0LL);
  return result;
}
