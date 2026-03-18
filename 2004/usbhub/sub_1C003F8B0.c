/*
 * XREFs of sub_1C003F8B0 @ 0x1C003F8B0
 * Callers:
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C003F948 @ 0x1C003F948 (sub_1C003F948.c)
 */

__int64 __fastcall sub_1C003F8B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  int v7; // r10d

  sub_1C000FD80(a1, 32, 1768898104, a2, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) != (_WORD)v7 )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, v7 + 2, v7 + 47, (__int64)&unk_1C0062E18);
  LOBYTE(v6) = 1;
  return sub_1C003F948(a1, a2, a3, v6);
}
