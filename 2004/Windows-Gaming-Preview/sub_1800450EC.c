/*
 * XREFs of sub_1800450EC @ 0x1800450EC
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x1800452B2 (_o___std_exception_copy.c)
 */

__int64 __fastcall sub_1800450EC(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy(a2 + 8);
  *(_QWORD *)a1 = &std::bad_alloc::`vftable';
  return a1;
}
