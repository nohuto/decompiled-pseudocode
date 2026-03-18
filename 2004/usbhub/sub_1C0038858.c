/*
 * XREFs of sub_1C0038858 @ 0x1C0038858
 * Callers:
 *     sub_1C0044590 @ 0x1C0044590 (sub_1C0044590.c)
 * Callees:
 *     sub_1C00038F0 @ 0x1C00038F0 (sub_1C00038F0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

void __fastcall sub_1C0038858(__int64 a1)
{
  _DWORD *v2; // rdi
  struct _DEVICE_OBJECT *v3; // rcx

  v2 = sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xBu, (__int64)"FKh&");
  sub_1C000FD80(a1, 16, 1852798022, a1, 0LL);
  sub_1C00038F0(a1, v2 + 650, 500, 1900233040, 0, 0LL);
  v3 = (struct _DEVICE_OBJECT *)*((_QWORD *)v2 + 149);
  v2[643] |= 4u;
  IoInvalidateDeviceState(v3);
}
