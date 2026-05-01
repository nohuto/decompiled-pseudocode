/*
 * XREFs of sub_1800659C8 @ 0x1800659C8
 * Callers:
 *     sub_180064374 @ 0x180064374 (sub_180064374.c)
 *     sub_180065C70 @ 0x180065C70 (sub_180065C70.c)
 * Callees:
 *     sub_180039C4C @ 0x180039C4C (sub_180039C4C.c)
 *     sub_180039CAC @ 0x180039CAC (sub_180039CAC.c)
 *     sub_180039D3C @ 0x180039D3C (sub_180039D3C.c)
 *     sub_180039D8C @ 0x180039D8C (sub_180039D8C.c)
 */

BOOL __fastcall sub_1800659C8(_BYTE *a1)
{
  _QWORD v3[25]; // [rsp+20h] [rbp-C8h] BYREF

  sub_180039D8C((int)v3);
  sub_180039D3C(a1, (__int64)v3);
  sub_180039CAC((__int64)v3);
  return sub_180039C4C(v3);
}
