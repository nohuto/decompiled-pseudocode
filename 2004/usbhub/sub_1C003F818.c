/*
 * XREFs of sub_1C003F818 @ 0x1C003F818
 * Callers:
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C003F948 @ 0x1C003F948 (sub_1C003F948.c)
 */

__int64 __fastcall sub_1C003F818(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // r10d

  sub_1C000FD80(a1, 32, 1768898103, a2, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) != (_WORD)v6 )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, v6 + 2, v6 + 46, (__int64)&unk_1C0062E18);
  return sub_1C003F948(a1, a2, a3, 0LL);
}
