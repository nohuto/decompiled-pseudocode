/*
 * XREFs of sub_1C003B8F0 @ 0x1C003B8F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001B88C @ 0x1C001B88C (sub_1C001B88C.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C003B508 @ 0x1C003B508 (sub_1C003B508.c)
 */

void __fastcall sub_1C003B8F0(__int64 a1)
{
  _DWORD *v2; // rdi

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xBu, (__int64)&unk_1C0062DD8);
  v2 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 0x2000, 1684886352, a1, 0LL);
  if ( (v2[640] & 0x2000000) != 0 )
  {
    sub_1C003B508(a1);
    v2[640] &= ~0x2000000u;
    sub_1C000FD80(a1, 0x2000, 1684886321, a1, 0LL);
    sub_1C001B88C(a1, (__int64)(v2 + 936));
  }
}
