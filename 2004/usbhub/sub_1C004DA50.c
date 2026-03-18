/*
 * XREFs of sub_1C004DA50 @ 0x1C004DA50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00361E8 @ 0x1C00361E8 (sub_1C00361E8.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C004DA50(__int64 a1, __int64 a2)
{
  int v5; // [rsp+28h] [rbp-30h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v5 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x11u, (__int64)&unk_1C0062100, v5);
  }
  sub_1C000FD80(a1, 1024, 1883393637, a2, 0LL);
  sub_1C00361E8(a1);
  sub_1C004A608(a1, *(_WORD *)(a2 + 4), 0x37u, 0LL, 0, -1, -1, aBusfuncC, 795, 0);
  return 1LL;
}
