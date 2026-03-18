/*
 * XREFs of sub_1C005A12C @ 0x1C005A12C
 * Callers:
 *     sub_1C00099C0 @ 0x1C00099C0 (sub_1C00099C0.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C001CC84 @ 0x1C001CC84 (sub_1C001CC84.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

__int64 __fastcall sub_1C005A12C(__int64 a1, __int64 a2, __int64 a3)
{
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x10u, (__int64)&unk_1C0062110);
  sub_1C000F050(a1);
  sub_1C001CC84(a3, 6);
  return 3221225473LL;
}
