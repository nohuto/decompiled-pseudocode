/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0fae2a381de83fbae39279513878d32b__void_::_Move @ 0x18001E210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_0fae2a381de83fbae39279513878d32b__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1801B6D70;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  return result;
}
