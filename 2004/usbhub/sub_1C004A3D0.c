/*
 * XREFs of sub_1C004A3D0 @ 0x1C004A3D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002F764 @ 0x1C002F764 (sub_1C002F764.c)
 */

NTSTATUS __fastcall sub_1C004A3D0(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  sub_1C000F050((__int64)DeviceObject);
  return sub_1C002F764(DeviceObject, *(_WORD *)(a2 + 20));
}
