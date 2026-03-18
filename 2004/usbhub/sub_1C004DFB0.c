/*
 * XREFs of sub_1C004DFB0 @ 0x1C004DFB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00361E8 @ 0x1C00361E8 (sub_1C00361E8.c)
 *     sub_1C0037200 @ 0x1C0037200 (sub_1C0037200.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C004DDA0 @ 0x1C004DDA0 (sub_1C004DDA0.c)
 */

__int64 __fastcall sub_1C004DFB0(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+28h] [rbp-30h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x18u, (__int64)&unk_1C0062100, v7);
  }
  sub_1C000FD80(a1, 1024, 1884447333, a2, 0LL);
  sub_1C00361E8(a1);
  sub_1C004A608(a1, *(_WORD *)(a2 + 4), 0x3Du, 0LL, 0, -1, -1, aBusfuncC, 1182, 0);
  sub_1C0037200(a1, a2);
  return sub_1C004DDA0(a1, a2, a3);
}
