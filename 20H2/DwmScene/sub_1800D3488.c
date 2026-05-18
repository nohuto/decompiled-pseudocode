/*
 * XREFs of sub_1800D3488 @ 0x1800D3488
 * Callers:
 *     sub_1800D40E0 @ 0x1800D40E0 (sub_1800D40E0.c)
 * Callees:
 *     sub_1800AE260 @ 0x1800AE260 (sub_1800AE260.c)
 *     sub_1800D3164 @ 0x1800D3164 (sub_1800D3164.c)
 */

_QWORD *__fastcall sub_1800D3488(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = a2[1];
  if ( *a2 != v4 )
  {
    v5 = (v4 - *a2) / 48;
    v6 = sub_1800AE260((__int64)a1, v5);
    *a1 = v6;
    a1[1] = v6;
    a1[2] = &v6[6 * v5];
    a1[1] = sub_1800D3164(*a2, a2[1], v6);
  }
  return a1;
}
