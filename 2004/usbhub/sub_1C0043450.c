/*
 * XREFs of sub_1C0043450 @ 0x1C0043450
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011260 @ 0x1C0011260 (sub_1C0011260.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0043ED8 @ 0x1C0043ED8 (sub_1C0043ED8.c)
 */

__int64 __fastcall sub_1C0043450(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  _DWORD *v6; // rbp

  v4 = a2;
  v6 = sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xDu, (__int64)&unk_1C0062F40);
  sub_1C000FD80(a1, 2, 1766015607, a1, v4);
  sub_1C0011260(a1, *((_QWORD *)v6 + 346));
  return sub_1C0043ED8(a3, 8LL);
}
