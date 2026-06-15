/*
 * XREFs of sub_180110E94 @ 0x180110E94
 * Callers:
 *     sub_1801112AC @ 0x1801112AC (sub_1801112AC.c)
 *     sub_180111F34 @ 0x180111F34 (sub_180111F34.c)
 *     sub_180112F8C @ 0x180112F8C (sub_180112F8C.c)
 *     sub_1801133F8 @ 0x1801133F8 (sub_1801133F8.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_180110B28 @ 0x180110B28 (sub_180110B28.c)
 */

__int64 *__fastcall sub_180110E94(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4, _QWORD **a5)
{
  __int64 v5; // rdi
  _QWORD *v9; // rax

  v5 = *a1;
  v9 = sub_180008EAC(0x30uLL);
  v9[4] = **a5;
  v9[5] = 0LL;
  *v9 = v5;
  v9[1] = v5;
  v9[2] = v5;
  *((_WORD *)v9 + 12) = 0;
  sub_180110B28(a1, a2, a3, v9 + 4, (__int64)v9);
  return a2;
}
