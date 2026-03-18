/*
 * XREFs of sub_1C0029E1C @ 0x1C0029E1C
 * Callers:
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

_DWORD *__fastcall sub_1C0029E1C(__int64 a1)
{
  __int64 v2; // rbx
  _DWORD *result; // rax

  v2 = *((_QWORD *)sub_1C0011220(a1) + 148);
  sub_1C000F050(v2);
  sub_1C000FD80(v2, 8, 1346653997, a1, v2);
  result = sub_1C0011220(a1);
  *((_QWORD *)result + 148) = 0LL;
  return result;
}
