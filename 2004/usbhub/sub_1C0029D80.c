/*
 * XREFs of sub_1C0029D80 @ 0x1C0029D80
 * Callers:
 *     sub_1C0053F94 @ 0x1C0053F94 (sub_1C0053F94.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

__int64 __fastcall sub_1C0029D80(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax

  *((_QWORD *)sub_1C0011220(a1) + 148) = 0LL;
  sub_1C000FD80(a2, 8, 1346653995, a1, 0LL);
  v4 = sub_1C0011220(a1);
  v4[356] |= 2u;
  *((_QWORD *)sub_1C0011220(a1) + 148) = a2;
  return 0LL;
}
