/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7a85a72c47ab746898416b0dbf3b0d24__void_IInputTarget___::_Move @ 0x18001C230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_7a85a72c47ab746898416b0dbf3b0d24__void_IInputTarget___::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1801B0588;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
