/*
 * XREFs of std::_Func_impl_no_alloc__lambda_fa6b829d8739de4b5d4653aa8baa7884__void_::_Move @ 0x18001E290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_fa6b829d8739de4b5d4653aa8baa7884__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1801B6F50;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
