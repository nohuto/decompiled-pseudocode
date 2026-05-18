/*
 * XREFs of sub_18000FFC4 @ 0x18000FFC4
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x180123893 (_o___std_exception_copy.c)
 */

__int64 __fastcall sub_18000FFC4(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy(a2 + 8);
  *(_QWORD *)a1 = &std::bad_weak_ptr::`vftable';
  return a1;
}
