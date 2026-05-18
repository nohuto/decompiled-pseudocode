/*
 * XREFs of sub_1800D1B78 @ 0x1800D1B78
 * Callers:
 *     sub_1800D1F50 @ 0x1800D1F50 (sub_1800D1F50.c)
 *     sub_1800F711C @ 0x1800F711C (sub_1800F711C.c)
 * Callees:
 *     sub_1800B3B30 @ 0x1800B3B30 (sub_1800B3B30.c)
 *     sub_1800D1A8C @ 0x1800D1A8C (sub_1800D1A8C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D1B78(_QWORD *a1, __int64 *a2)
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
    v6 = sub_1800B3B30((__int64)a1, v5);
    *a1 = v6;
    a1[1] = v6;
    a1[2] = &v6[6 * v5];
    a1[1] = sub_1800D1A8C(*a2, a2[1], (__int64)v6);
  }
  return a1;
}
