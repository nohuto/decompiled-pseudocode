/*
 * XREFs of sub_1C00436A0 @ 0x1C00436A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000BEB0 @ 0x1C000BEB0 (sub_1C000BEB0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

__int64 __fastcall sub_1C00436A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  sub_1C000F050(a2);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xAu, (__int64)&unk_1C0062F40);
  return sub_1C000BEB0(a2, 0LL, (int)sub_1C0043450, 1u, a4, 0, 1230468211);
}
