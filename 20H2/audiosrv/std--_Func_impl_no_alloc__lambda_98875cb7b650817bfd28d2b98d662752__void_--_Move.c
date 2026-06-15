/*
 * XREFs of std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Move @ 0x1800D8D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  *a2 = off_18014A1C8;
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[1] = *(_QWORD *)(a1 + 8);
  a2[2] = *(_QWORD *)(a1 + 16);
  result = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
