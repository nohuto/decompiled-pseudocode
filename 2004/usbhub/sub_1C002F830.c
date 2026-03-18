/*
 * XREFs of sub_1C002F830 @ 0x1C002F830
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0001AE8 @ 0x1C0001AE8 (sub_1C0001AE8.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C001B88C @ 0x1C001B88C (sub_1C001B88C.c)
 *     sub_1C002F764 @ 0x1C002F764 (sub_1C002F764.c)
 *     sub_1C002FE20 @ 0x1C002FE20 (sub_1C002FE20.c)
 *     sub_1C002FED0 @ 0x1C002FED0 (sub_1C002FED0.c)
 */

void __fastcall sub_1C002F830(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax

  sub_1C000F050((__int64)DeviceObject);
  if ( (int)sub_1C002FED0(DeviceObject, 8LL, 0LL, a2) < 0
    || (int)sub_1C0001AE8((__int64)DeviceObject, a3, 1466196847) < 0 )
  {
    v6 = sub_1C0016CA0((__int64)DeviceObject, a2);
    sub_1C002FE20(DeviceObject, v6, 0LL);
  }
  else
  {
    sub_1C002F764(DeviceObject, a2);
    sub_1C001B88C((__int64)DeviceObject, a3);
  }
}
