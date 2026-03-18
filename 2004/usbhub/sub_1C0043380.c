/*
 * XREFs of sub_1C0043380 @ 0x1C0043380
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000BEB0 @ 0x1C000BEB0 (sub_1C000BEB0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

__int64 __fastcall sub_1C0043380(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v3; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  v3 = sub_1C000F050(v1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xCu, (__int64)&unk_1C0062F40);
  sub_1C000FD80(v1, 2, 1766015537, v1, 0LL);
  return sub_1C000BEB0(v1, *((_QWORD *)v3 + 347), (int)sub_1C0043450, 1u, a1, 0, 1230468211);
}
