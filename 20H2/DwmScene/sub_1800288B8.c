/*
 * XREFs of sub_1800288B8 @ 0x1800288B8
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x18011DFC3 (_o___std_exception_copy.c)
 */

__int64 __fastcall sub_1800288B8(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  __int64 result; // rax

  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy(a2 + 8);
  *(_QWORD *)a1 = &std::_System_error::`vftable';
  v4 = *(_OWORD *)(a2 + 24);
  *(_QWORD *)a1 = &std::system_error::`vftable';
  result = a1;
  *(_OWORD *)(a1 + 24) = v4;
  return result;
}
