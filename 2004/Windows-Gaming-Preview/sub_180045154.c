/*
 * XREFs of sub_180045154 @ 0x180045154
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x1800452B2 (_o___std_exception_copy.c)
 */

__int64 __fastcall sub_180045154(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy(a2 + 8);
  *(_QWORD *)a1 = &std::bad_array_new_length::`vftable';
  return a1;
}
