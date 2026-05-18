/*
 * XREFs of sub_1800DD3F0 @ 0x1800DD3F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DD43C @ 0x1800DD43C (sub_1800DD43C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DD3F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  sub_1800DD43C(a1, a3, a4, a2, 1);
  return a2;
}
