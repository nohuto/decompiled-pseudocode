/*
 * XREFs of sub_18011A5D0 @ 0x18011A5D0
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x180123893 (_o___std_exception_copy.c)
 */

__int64 __fastcall sub_18011A5D0(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy(a2 + 8);
  *(_QWORD *)a1 = &std::logic_error::`vftable';
  return a1;
}
