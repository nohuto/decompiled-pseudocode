/*
 * XREFs of sub_1C00183BC @ 0x1C00183BC
 * Callers:
 *     sub_1C0018460 @ 0x1C0018460 (sub_1C0018460.c)
 *     sub_1C004D5F0 @ 0x1C004D5F0 (sub_1C004D5F0.c)
 * Callees:
 *     sub_1C000BEB0 @ 0x1C000BEB0 (sub_1C000BEB0.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 */

__int64 __fastcall sub_1C00183BC(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx

  v4 = sub_1C0011220(a2);
  sub_1C0016B5C(a1, *((_WORD *)v4 + 714), 0LL, 0x73737057u);
  sub_1C000FD80(a1, 0x10000, 1935098187, a2, 0LL);
  return sub_1C000BEB0(a1, (__int64)(v4 + 406), (int)sub_1C0016F40, 0, a2, 0, 2001752915);
}
