/*
 * XREFs of sub_1C0041890 @ 0x1C0041890
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000BEB0 @ 0x1C000BEB0 (sub_1C000BEB0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002FED0 @ 0x1C002FED0 (sub_1C002FED0.c)
 *     sub_1C003C45C @ 0x1C003C45C (sub_1C003C45C.c)
 */

__int64 __fastcall sub_1C0041890(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbp
  _DWORD *v7; // rsi

  v4 = a3;
  v7 = sub_1C000F050(a2);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xBu, (__int64)&unk_1C0062F40);
  sub_1C000FD80(a2, 2, 1667388495, a4, v4);
  sub_1C002FED0(a2, 9u, 0, v4);
  if ( (unsigned int)sub_1C003C45C(a2, 0LL, 0LL) == -1073741536 )
    sub_1C000BEB0(a2, *((_QWORD *)v7 + 347), (int)sub_1C0043450, 1u, a4, 0, 1230468211);
  return 0LL;
}
