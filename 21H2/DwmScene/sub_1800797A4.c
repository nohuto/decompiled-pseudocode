/*
 * XREFs of sub_1800797A4 @ 0x1800797A4
 * Callers:
 *     sub_180079834 @ 0x180079834 (sub_180079834.c)
 * Callees:
 *     sub_18001101C @ 0x18001101C (sub_18001101C.c)
 *     sub_180071BE8 @ 0x180071BE8 (sub_180071BE8.c)
 *     sub_18008BEE0 @ 0x18008BEE0 (sub_18008BEE0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800797A4(_QWORD *a1, __int64 *a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rax

  *(_OWORD *)a2 = 0LL;
  sub_18008BEE0(a2, a1);
  sub_180071BE8(*a2);
  v4 = (__int64 *)a1[89];
  if ( (__int64 *)a1[90] == v4 )
  {
    sub_18001101C(a1 + 88, v4, a2);
  }
  else
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v5 = a2[1];
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *v4 = *a2;
    v4[1] = a2[1];
    a1[89] += 16LL;
  }
  return a2;
}
