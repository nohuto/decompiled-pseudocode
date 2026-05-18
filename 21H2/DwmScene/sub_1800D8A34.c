/*
 * XREFs of sub_1800D8A34 @ 0x1800D8A34
 * Callers:
 *     sub_1800D8D58 @ 0x1800D8D58 (sub_1800D8D58.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D8A34(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 48LL )
  {
    a3[2] = 0LL;
    a3[3] = 0LL;
    sub_180020B7C(a3, i);
    a3[4] = *(_QWORD *)(i + 32);
    a3[5] = *(_QWORD *)(i + 40);
    a3 += 6;
  }
  return a3;
}
