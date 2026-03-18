/*
 * XREFs of sub_1C004D5F0 @ 0x1C004D5F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00015A0 @ 0x1C00015A0 (sub_1C00015A0.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C00183BC @ 0x1C00183BC (sub_1C00183BC.c)
 *     sub_1C001853C @ 0x1C001853C (sub_1C001853C.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C004D5F0(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+28h] [rbp-30h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x26u, (__int64)&unk_1C0062100, v7);
  }
  sub_1C000FD80(a1, 1024, 1884443425, a2, 0LL);
  sub_1C004A608(a1, *(_WORD *)(a2 + 4), 0x81u, 0LL, 0, 0, 0, aBusfuncC, 2448, 0);
  sub_1C001853C(a1, 0xAu);
  sub_1C00015A0(a1, a2);
  sub_1C00183BC(a1, a3);
  return 0LL;
}
