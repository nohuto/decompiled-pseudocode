/*
 * XREFs of sub_1C0059A30 @ 0x1C0059A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011260 @ 0x1C0011260 (sub_1C0011260.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C00312A0 @ 0x1C00312A0 (sub_1C00312A0.c)
 *     sub_1C0031344 @ 0x1C0031344 (sub_1C0031344.c)
 *     sub_1C0059638 @ 0x1C0059638 (sub_1C0059638.c)
 */

LONG __fastcall sub_1C0059A30(__int64 a1, __int64 a2)
{
  __int16 v4; // r9
  _DWORD *v5; // rbx

  sub_1C000FD80(a1, 0x10000, 1936937840, 0LL, a2);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) != v4 )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x13u, (__int64)&unk_1C0062110);
  v5 = sub_1C000F050(*(_QWORD *)(a2 + 8));
  sub_1C00312A0(a1, a2);
  sub_1C0011260(a1, (__int64)(v5 + 800));
  sub_1C0031344(a1);
  return sub_1C0059638(a1);
}
