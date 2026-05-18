/*
 * XREFs of sub_1800DA6C4 @ 0x1800DA6C4
 * Callers:
 *     sub_1800D99B0 @ 0x1800D99B0 (sub_1800D99B0.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800DA55C @ 0x1800DA55C (sub_1800DA55C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800DA6C4(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 result; // rax

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    sub_1800DA55C(a1, 1uLL);
    v4 = a1[2];
  }
  a1[3] &= v4 - 1;
  v5 = (a1[2] - 1LL) & (a1[4] + a1[3]);
  v6 = a1[1];
  if ( !*(_QWORD *)(v6 + 8 * v5) )
  {
    *(_QWORD *)(a1[1] + 8 * v5) = operator new(0x30uLL);
    v6 = a1[1];
  }
  v7 = *(_QWORD **)(v6 + 8 * v5);
  v7[2] = 0LL;
  v7[3] = 0LL;
  sub_180020B7C(v7, a2);
  v7[4] = *(_QWORD *)(a2 + 32);
  result = *(_QWORD *)(a2 + 40);
  v7[5] = result;
  ++a1[4];
  return result;
}
