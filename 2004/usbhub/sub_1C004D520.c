/*
 * XREFs of sub_1C004D520 @ 0x1C004D520
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00015A0 @ 0x1C00015A0 (sub_1C00015A0.c)
 *     sub_1C00029EC @ 0x1C00029EC (sub_1C00029EC.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0034AF8 @ 0x1C0034AF8 (sub_1C0034AF8.c)
 */

__int64 __fastcall sub_1C004D520(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+28h] [rbp-10h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x24u, (__int64)&unk_1C0062100, v7);
  }
  sub_1C000FD80(a1, 1024, 1884444995, a2, a3);
  sub_1C00015A0(a1, a2);
  sub_1C0034AF8(a1, *(_WORD *)(a2 + 4), *(_QWORD *)(a2 + 376), 1);
  sub_1C00029EC(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  return 0LL;
}
