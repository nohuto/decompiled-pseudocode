/*
 * XREFs of sub_180071F30 @ 0x180071F30
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x18011DFC3 (_o___std_exception_copy.c)
 */

__int64 __fastcall sub_180071F30(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy(a2 + 8);
  *(_QWORD *)a1 = &std::bad_cast::`vftable';
  return a1;
}
