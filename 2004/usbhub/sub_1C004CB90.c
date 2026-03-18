/*
 * XREFs of sub_1C004CB90 @ 0x1C004CB90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00029EC @ 0x1C00029EC (sub_1C00029EC.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C004CB90(__int64 a1, __int64 a2)
{
  int v5; // [rsp+28h] [rbp-30h]

  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v5 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x17u, (__int64)&unk_1C0062100, v5);
  }
  sub_1C000FD80(a1, 1024, 1883852374, a2, 0LL);
  sub_1C00029EC(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  sub_1C004A608(a1, *(_WORD *)(a2 + 4), 0x3Eu, (char *)a2, 0xB70u, -1, -1, aBusfuncC, 1127, 0);
  return 3LL;
}
