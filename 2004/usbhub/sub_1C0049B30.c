/*
 * XREFs of sub_1C0049B30 @ 0x1C0049B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

__int64 __fastcall sub_1C0049B30(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4, int a5, _QWORD *a6)
{
  _DWORD *v9; // rax

  v9 = sub_1C000F050(a1);
  *a2 = 32;
  *a4 = &word_1C006B420;
  *a6 = *((_QWORD *)v9 + 149);
  sub_1C000FD80(a1, 64, 2003659090, 0LL, 0LL);
  return 0LL;
}
