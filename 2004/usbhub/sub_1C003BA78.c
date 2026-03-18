/*
 * XREFs of sub_1C003BA78 @ 0x1C003BA78
 * Callers:
 *     sub_1C000F880 @ 0x1C000F880 (sub_1C000F880.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0010064 @ 0x1C0010064 (sub_1C0010064.c)
 *     sub_1C002D554 @ 0x1C002D554 (sub_1C002D554.c)
 */

__int64 __fastcall sub_1C003BA78(PDEVICE_OBJECT DeviceObject)
{
  __int64 result; // rax
  __int64 v3; // rbx

  result = (__int64)sub_1C000F050((__int64)DeviceObject);
  v3 = result;
  if ( (*(_DWORD *)(result + 2560) & 0x80000) == 0 )
  {
    sub_1C0010064(DeviceObject);
    result = sub_1C002D554((__int64)DeviceObject, 1);
    if ( (int)result >= 0 )
      *(_DWORD *)(v3 + 2560) |= 0x80000u;
  }
  return result;
}
