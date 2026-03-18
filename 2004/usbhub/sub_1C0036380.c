/*
 * XREFs of sub_1C0036380 @ 0x1C0036380
 * Callers:
 *     sub_1C0017E8C @ 0x1C0017E8C (sub_1C0017E8C.c)
 *     sub_1C0036FAC @ 0x1C0036FAC (sub_1C0036FAC.c)
 *     sub_1C003BC30 @ 0x1C003BC30 (sub_1C003BC30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

void __fastcall sub_1C0036380(__int64 a1, __int64 a2)
{
  PDEVICE_OBJECT *v4; // rsi

  v4 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  sub_1C000FD80(a1, 16, 4812662, a1, a2);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xAu, (__int64)"FKh&");
  IoInvalidateDeviceRelations(v4[149], BusRelations);
}
