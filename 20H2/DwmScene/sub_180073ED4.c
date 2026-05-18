/*
 * XREFs of sub_180073ED4 @ 0x180073ED4
 * Callers:
 *     sub_180073F64 @ 0x180073F64 (sub_180073F64.c)
 * Callees:
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     sub_18006C318 @ 0x18006C318 (sub_18006C318.c)
 *     sub_180086610 @ 0x180086610 (sub_180086610.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180073ED4(_QWORD *a1, __int64 *a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rax

  *(_OWORD *)a2 = 0LL;
  sub_180086610(a2, a1);
  sub_18006C318(*a2);
  v4 = (__int64 *)a1[89];
  if ( (__int64 *)a1[90] == v4 )
  {
    sub_180010F3C(a1 + 88, v4, a2);
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
