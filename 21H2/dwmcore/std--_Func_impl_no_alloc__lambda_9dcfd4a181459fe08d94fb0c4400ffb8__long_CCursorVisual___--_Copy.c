/*
 * XREFs of std::_Func_impl_no_alloc__lambda_9dcfd4a181459fe08d94fb0c4400ffb8__long_CCursorVisual___::_Copy @ 0x1800FAB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_9dcfd4a181459fe08d94fb0c4400ffb8__long_CCursorVisual___::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1802C4B98;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
